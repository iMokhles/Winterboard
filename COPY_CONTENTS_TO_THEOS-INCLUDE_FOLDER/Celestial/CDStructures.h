/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

@class AVByteStream, AVExternalAudioDelegate, AVRefMovieParser, NSDictionary, NSMutableDictionary, NSString, NSURL;

struct AVByteStreamPrivate {
    NSURL *_field1;
    struct OpaqueFigCachedByteStream *_field2;
    struct OpaqueFigByteStream *_field3;
};

struct AVControllerPrivate {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
    Class _field5;
    id _field6;
    int _field7;
    id _field8;
    float _field9;
    float _field10;
    float _field11;
    int _field12;
    id _field13;
    id _field14;
    char _field15;
    char _field16;
    id _field17;
    struct OpaqueFigVisualContext *_field18;
    id _field19;
    struct __CFRunLoop *_field20;
    unsigned int _field21;
    int _field22;
    int _field23;
    int _field24;
    char _field25;
    char _field26;
    char _field27;
    char _field28;
    char _field29;
    id _field30;
    id _field31;
    struct OpaqueFigPlayer *_field32;
    id _field33;
    id _field34;
    id _field35;
    char _field36;
    char _field37;
    id _field38;
    id _field39;
};

struct AVExternalAudioPrivate {
    char _field1;
    struct OpaqueFigPlayer *_field2;
    AVExternalAudioDelegate *_field3;
    char _field4;
};

struct AVFileValidatorPrivate {
    NSURL *_field1;
    AVByteStream *_field2;
    AVRefMovieParser *_field3;
    struct FigOpaqueFileCheck *_field4;
    struct FigFileCheckDataLocation _field5;
    char _field6;
};

struct AVItemPrivate {
    id _field1;
    NSString *_field2;
    double _field3;
    float _field4;
    float _field5;
    float _field6;
    unsigned int _field7;
    char _field8;
    char _field9;
    NSDictionary *_field10;
    int _field11;
    long long _field12;
    long long _field13;
    NSDictionary *_field14;
    NSDictionary *_field15;
};

struct AVRecorderPrivate {
    NSURL *_field1;
    unsigned int _field2;
    unsigned int _field3;
    NSMutableDictionary *_field4;
    long long _field5;
    char _field6;
    struct AudioStreamBasicDescription _field7;
    struct OpaqueAudioFileID *_field8;
    struct OpaqueAudioQueue *_field9;
    unsigned int _field10;
    struct AudioQueueLevelMeterState *_field11;
    struct AudioQueueLevelMeterState *_field12;
    unsigned int _field13;
    unsigned int _field14;
    unsigned int _field15;
    struct AudioQueueBuffer *_field16[3];
    char _field17[3];
    char _field18;
    char _field19;
    char _field20;
};

struct AVSubtitleLayerUsingWebKitPrivate {
    struct __GSFont *_field1;
    struct __CFAttributedString *_field2;
};

struct AVSystemControllerPrivate {
    char _field1;
    struct OpaqueFigPlayer *_field2;
};

struct AudioQueueBuffer {
    unsigned int _field1;
    void *_field2;
    unsigned int _field3;
    void *_field4;
    unsigned int _field5;
    struct AudioStreamPacketDescription *_field6;
    unsigned int _field7;
};

struct AudioQueueLevelMeterState;

struct AudioStreamBasicDescription {
    double mSampleRate;
    unsigned int mFormatID;
    unsigned int mFormatFlags;
    unsigned int mBytesPerPacket;
    unsigned int mFramesPerPacket;
    unsigned int mBytesPerFrame;
    unsigned int mChannelsPerFrame;
    unsigned int mBitsPerChannel;
    unsigned int mReserved;
};

struct AudioStreamPacketDescription {
    long long _field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct AudioTimeStamp {
    double _field1;
    unsigned long long _field2;
    double _field3;
    unsigned long long _field4;
    struct SMPTETime _field5;
    unsigned int _field6;
    unsigned int _field7;
};

struct CGContext;

struct CGSize {
    float width;
    float height;
};

struct FigFileCheckDataLocation {
    unsigned long long offset;
    unsigned long long size;
};

struct FigOpaqueFileCheck;

struct OpaqueAudioFileID;

struct OpaqueAudioQueue;

struct OpaqueFigByteStream;

struct OpaqueFigCachedByteStream;

struct OpaqueFigPlaybackItem;

struct OpaqueFigPlayer;

struct OpaqueFigVisualContext;

struct SMPTETime {
    short _field1;
    short _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    short _field6;
    short _field7;
    short _field8;
    short _field9;
};

struct _NSRange {
    unsigned int _field1;
    unsigned int _field2;
};

struct __CFAttributedString;

struct __CFRunLoop;

struct __CVBuffer;

struct __GSFont;

typedef struct {
    long long value;
    int timescale;
    long long epoch;
    unsigned int flags;
} CDAnonymousStruct1;

