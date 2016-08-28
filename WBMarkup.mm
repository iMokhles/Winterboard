#include "WBMarkup.h"

#include <substrate.h>

MSClassHook(UIWebDocumentView)

@class WKView;

extern "C" void WebThreadLock();
extern "C" CGContextRef WKGetCurrentGraphicsContext();

static void (*WKViewLockFocus$)(WKView *);
static void (*WKViewUnlockFocus$)(WKView *);
static void (*WKViewDisplayRect$)(WKView *, CGRect);

@interface DOMElement : NSObject
- (void) setInnerHTML:(NSString *)value;
- (void) setInnerText:(NSString *)value;
- (void) setAttribute:(NSString *)name value:(NSString *)value;
- (void) removeAttribute:(NSString *)name;
- (DOMElement *) firstChild;
- (void) appendChild:(DOMElement *)child;
- (void) removeChild:(DOMElement *)child;
- (void) setScrollXOffset:(float)x scrollYOffset:(float)y;
@end

@interface DOMDocument : NSObject
- (DOMElement *) getElementById:(NSString *)id;
@end

@interface WebPreferences : NSObject
- (id) initWithIdentifier:(NSString *)identifier;
- (void) setPlugInsEnabled:(BOOL)value;
@end

@interface WebFrameView : NSObject
- (void) setAllowsScrolling:(BOOL)value;
@end

@interface WebFrame : NSObject
- (WebFrameView *) frameView;
- (void) _setLoadsSynchronously:(BOOL)value;
- (void) loadHTMLString:(NSString *)string baseURL:(id)url;
- (void) forceLayoutAdjustingViewSize:(BOOL)adjust;
- (CGSize) renderedSizeOfNode:(DOMElement *)node constrainedToWidth:(float)width;
- (DOMDocument *) DOMDocument;
@end

@interface WAKView : NSObject
- (void) _drawRect:(CGRect)rect context:(CGContext *)context lockFocus:(bool)focus;
@end

@interface WebView : WAKView
- (id) initWithFrame:(CGRect)frame;
- (WebFrame *) mainFrame;
- (void) setDrawsBackground:(BOOL)value;
- (void) setPreferences:(WebPreferences *)preferences;
- (WKView *) _viewRef;
@end

@interface WAKWindow : NSObject
- (id) initWithFrame:(CGRect)frame;
- (void) setContentView:(WebView *)view;
@end

@interface UIWebDocumentView : NSObject
- (WebView *) webView;
@end

static WBMarkup *SharedMarkup_;

@implementation WBMarkup

+ (void) initialize {
    MSImageRef WebCore(MSGetImageByName("/System/Library/PrivateFrameworks/WebCore.framework/WebCore"));
    MSHookSymbol(WKViewLockFocus$, "_WKViewLockFocus", WebCore);
    MSHookSymbol(WKViewUnlockFocus$, "_WKViewUnlockFocus", WebCore);
    MSHookSymbol(WKViewDisplayRect$, "_WKViewDisplayRect", WebCore);

    MSImageRef JavaScriptCore(MSGetImageByName("/System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore"));

    void (*_ZN3JSC19initializeThreadingEv)();
    MSHookSymbol(_ZN3JSC19initializeThreadingEv, "__ZN3JSC19initializeThreadingEv", JavaScriptCore);
    if (_ZN3JSC19initializeThreadingEv != NULL)
        (*_ZN3JSC19initializeThreadingEv)();
}

+ (BOOL) isSharedMarkupCreated {
    return SharedMarkup_ != nil;
}

+ (WBMarkup *) sharedMarkup {
    if (SharedMarkup_ == nil)
        SharedMarkup_ = [[WBMarkup alloc] init];
    return SharedMarkup_;
}

- (id) init {
    if ((self = [super init]) != nil) {
        WebThreadLock();

        if ($UIWebDocumentView == Nil)
            view_ = [[WebView alloc] initWithFrame:CGRectMake(0, 0, 640, 5000)];
        else
            view_ = [[[$UIWebDocumentView alloc] initWithFrame:CGRectMake(0, 0, 640, 5000)] webView];

        [view_ setDrawsBackground:NO];

        WebPreferences *preferences([[WebPreferences alloc] initWithIdentifier:@"com.apple.webkit.webmarkup"]);
        [preferences setPlugInsEnabled:NO];
        [view_ setPreferences:preferences];
        [preferences release];

        window_ = [[WAKWindow alloc] initWithFrame:CGRectMake(0, 0, 640, 5000)];
        [window_ setContentView:view_];

        WebFrame *frame([view_ mainFrame]);
        [[frame frameView] setAllowsScrolling:NO];
        [frame _setLoadsSynchronously:YES];

        [frame loadHTMLString:@"<html><body style='margin: 0px; word-wrap: break-word; -khtml-nbsp-mode: space; -khtml-line-break: after-white-space'><div id='size'><div id='text'></div></div></body></html>" baseURL:nil];
    } return self;
}

- (void) dealloc {
    [window_ release];
    [view_ release];
    [super dealloc];
}

- (void) drawRect:(CGRect)rect {
    [text_ setScrollXOffset:origin_.x scrollYOffset:origin_.y];

    CGRect draw(CGRectMake(0, 0, rect.size.width - rect.origin.x, rect.size.height - rect.origin.y));

    CGContextSaveGState(context_); {
        CGContextTranslateCTM(context_, rect.origin.x, rect.origin.y);

        if (kCFCoreFoundationVersionNumber > 700)
            [view_ _drawRect:draw context:context_ lockFocus:YES];
        else {
            WKView *view([view_ _viewRef]);
            WKViewLockFocus$(view); {
                WKViewDisplayRect$(view, draw);
            } WKViewUnlockFocus$(view);
        }
    } CGContextRestoreGState(context_);
}

- (WebView *) _webView {
    return view_;
}

- (void) setStringDrawingOrigin:(CGPoint)origin {
    origin_ = origin;
}

- (void) clearStringDrawingOrigin {
    origin_ = CGPointZero;
}

- (CGSize) sizeOfMarkup:(NSString *)markup forWidth:(CGFloat)width {
    WebThreadLock();

    if (![self _webPrepareContextForTextDrawing:NO])
        return CGSizeZero;

    [text_ setInnerHTML:markup];
    [text_ removeAttribute:@"style"];

    NSString *value([[NSString alloc] initWithFormat:[self _styleFormatString:@"width: %.0fpx; height: 5000px"], width]);
    [size_ setAttribute:@"style" value:value];
    [value release];

    [[view_ mainFrame] forceLayoutAdjustingViewSize:YES];
    return [[view_ mainFrame] renderedSizeOfNode:text_ constrainedToWidth:width];
}

- (CGSize) sizeOfString:(NSString *)string withStyle:(NSString *)style forWidth:(CGFloat)width {
    WebThreadLock();

    if (![self _webPrepareContextForTextDrawing:NO])
        return CGSizeZero;

    [size_ removeChild:[size_ firstChild]];

    WebFrame *frame([view_ mainFrame]);

    [frame forceLayoutAdjustingViewSize:YES];
    [text_ setInnerText:string];
    [self _setupWithStyle:style width:width height:5000];
    [frame forceLayoutAdjustingViewSize:YES];

    return [[view_ mainFrame] renderedSizeOfNode:text_ constrainedToWidth:width];
}

- (NSString *) _styleFormatString:(NSString *)style {
    return style;
}

- (void) _setupWithStyle:(NSString *)style width:(CGFloat)width height:(CGFloat)height {
    WebThreadLock();

    if (style != nil && [style length] != 0)
        [text_ setAttribute:@"style" value:style];
    else
        [text_ removeAttribute:@"style"];

    NSString *value([[NSString alloc] initWithFormat:[self _styleFormatString:@"width: %.0fpx; height: %.0fpx"], width, height]);
    [size_ setAttribute:@"style" value:value];
    [value release];

    [size_ appendChild:text_];
}

- (BOOL) _webPrepareContextForTextDrawing:(BOOL)drawing {
    WebThreadLock();

    if (document_ == nil) {
        WebFrame *frame([view_ mainFrame]);

        document_ = [[frame DOMDocument] retain];
        if (document_ == nil) {
            NSLog(@"*** ERROR: no DOM document in text-drawing webview");
            return NO;
        }

        text_ = [[document_ getElementById:@"text"] retain];
        size_ = [[document_ getElementById:@"size"] retain];

        if (text_ == nil || size_ == nil) {
            NSLog(@"*** ERROR: cannot find DOM element required for text drawing");
            return NO;
        }
    }

    context_ = NULL;

    if (!drawing)
        context_ = NULL;
    else {
        context_ = WKGetCurrentGraphicsContext();
        if (context_ == NULL) {
            NSLog(@"*** ERROR: no CGContext set for drawing");
            return NO;
        }
    }

    return YES;
}

- (void) drawMarkup:(NSString *)markup atPoint:(CGPoint)point {
    [self drawMarkup:markup inRect:CGRectMake(point.x, point.y, 65535, 65535)];
}

- (void) drawMarkup:(NSString *)markup inRect:(CGRect)rect {
    WebThreadLock();

    if (![self _webPrepareContextForTextDrawing:YES])
        return;

    [text_ setInnerHTML:markup];
    [text_ removeAttribute:@"style"];

    NSString *value([[NSString alloc] initWithFormat:[self _styleFormatString:@"width: %.0fpx; height: %.0fpx"], CGRectGetWidth(rect), CGRectGetHeight(rect)]);
    [size_ setAttribute:@"style" value:value];
    [value release];

    [[view_ mainFrame] forceLayoutAdjustingViewSize:YES];

    [self drawRect:rect];
}

- (void) drawString:(NSString *)string atPoint:(CGPoint)point withStyle:(NSString *)style {
    [self drawString:string inRect:CGRectMake(point.x, point.y, 65535, 65535) withStyle:style];
}

- (void) drawString:(NSString *)string inRect:(CGRect)rect withStyle:(NSString *)style {
    WebThreadLock();

    if (![self _webPrepareContextForTextDrawing:YES])
        return;

    [size_ removeChild:[size_ firstChild]];

    WebFrame *frame([view_ mainFrame]);

    [frame forceLayoutAdjustingViewSize:YES];
    [text_ setInnerText:string];
    [self _setupWithStyle:style width:CGRectGetWidth(rect) height:CGRectGetHeight(rect)];
    [frame forceLayoutAdjustingViewSize:YES];

    [self drawRect:rect];
}

@end
