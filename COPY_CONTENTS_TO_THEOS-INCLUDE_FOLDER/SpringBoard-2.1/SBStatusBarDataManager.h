/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSDateFormatter, NSString, NSTimer;

@interface SBStatusBarDataManager : NSObject {
	struct {
		BOOL itemIsEnabled[20];
		BOOL timeString[64];
		int gsmSignalStrengthRaw;
		int gsmSignalStrengthBars;
		BOOL serviceString[100];
		BOOL serviceImageBlack[100];
		BOOL serviceImageSilver[100];
		BOOL operatorDirectory[1024];
		unsigned serviceContentType;
		int wifiSignalStrengthRaw;
		int wifiSignalStrengthBars;
		unsigned dataNetworkType;
		int batteryCapacity;
		unsigned batteryState;
		int bluetoothBatteryCapacity;
		int thermalColor;
		unsigned slowActivity : 1;
		BOOL activityDisplayId[256];
		unsigned bluetoothConnected : 1;
		unsigned displayRawGSMSignal : 1;
		unsigned displayRawWifiSignal : 1;
	} _data;
	int _actions;
	BOOL _itemIsEnabled[20];
	BOOL _itemIsCloaked[20];
	int _updateBlockDepth;
	BOOL _dataChangedSinceLastPost;
	NSDateFormatter* _timeItemDateFormatter;
	NSTimer* _timeItemTimer;
	NSString* _timeItemTimeString;
	BOOL _cellRadio;
	BOOL _registered;
	BOOL _simError;
	BOOL _simulateInCallStatusBar;
	NSString* _serviceString;
	NSString* _serviceImageBlack;
	NSString* _serviceImageSilver;
	NSString* _operatorDirectory;
	BOOL _showsActivityIndicatorOnHomeScreen;
	int _thermalColor;
}
+(id)sharedDataManager;	// 0xc5cc9
-(id)init;	// 0xc5c75
-(void)dealloc;	// 0xc5bcd
-(void)beginUpdateBlock;	// 0xc4481
-(void)endUpdateBlock;	// 0xc5b25
-(void)setStatusBarItem:(int)item enabled:(BOOL)enabled;	// 0xc5af5
-(void)setStatusBarItem:(int)item cloaked:(BOOL)cloaked;	// 0xc5ac5
-(void)updateStatusBarItem:(int)item;	// 0xc5d81
-(void)sendStatusBarActions:(int)actions;	// 0xc5aa5
-(void)enableLock:(BOOL)lock time:(BOOL)time;	// 0xc5a55
-(void)setShowsActivityIndicatorOnHomeScreen:(BOOL)screen;	// 0xc5a35
-(void)setTelephonyAndBluetoothItemsCloaked:(BOOL)cloaked;	// 0xc59b5
-(void)setAllItemsExceptBatteryCloaked:(BOOL)cloaked;	// 0xc5955
-(void)setThermalColor:(int)color;	// 0xc5935
-(void)_initializeData;	// 0xc58cd
-(void)_dataChanged;	// 0xc589d
-(void)_postData;	// 0xc5815
-(void)_updateTimeString;	// 0xc5dcd
-(void)_updateTimeItem;	// 0xc57f1
-(void)_updateAirplaneMode;	// 0xc57b5
-(void)_updateSignalStrengthItem;	// 0xc5f05
-(void)_updateServiceItem;	// 0xc5439
-(void)_updateDataNetworkItem;	// 0xc5285
-(void)_updateBatteryItem;	// 0xc51d5
-(void)_updateBatteryPercentItem;	// 0xc6055
-(void)_updateBluetoothItem;	// 0xc50e5
-(void)_updateBluetoothBatteryItem;	// 0xc5031
-(void)_updateTTYItem;	// 0xc6025
-(void)_updateVPNItem;	// 0xc4fd1
-(void)_updateCallForwardingItem;	// 0xc4f85
-(void)_updateActivityItem;	// 0xc618d
-(void)_updatePlayItem;	// 0xc4ebd
-(void)_updateLocationItem;	// 0xc4e81
-(void)_updateRotationLockItem;	// 0xc4e45
-(void)_updateThermalColorItem;	// 0xc4df5
-(void)_registerForNotifications;	// 0xc4a8d
-(void)_unregisterForNotifications;	// 0xc4a41
-(void)_significantTimeOrLocaleChange;	// 0xc4a2d
-(void)_didWakeFromSleep;	// 0xc49fd
-(void)_batteryStatusChange;	// 0xc49bd
-(void)_operatorChange;	// 0xc49a9
-(void)_signalStrengthChange;	// 0xc4995
-(void)_ttyChange;	// 0xc4981
-(void)_callForwardingChange;	// 0xc496d
-(void)_vpnChange;	// 0xc4959
-(void)_dataNetworkChange;	// 0xc4919
-(void)_airplaneModeChange;	// 0xc4849
-(void)_bluetoothChange;	// 0xc4835
-(void)_bluetoothBatteryChange;	// 0xc4821
-(void)_locationStatusChange;	// 0xc480d
-(void)_rotationLockChange;	// 0xc47f9
-(void)_configureTimeItemDateFormatter;	// 0xc475d
-(void)_stopTimeItemTimer;	// 0xc4729
-(void)_restartTimeItemTimer;	// 0xc6331
-(void)_updateTelephonyState;	// 0xc4601
-(void)toggleSimulatesInCallStatusBar;	// 0xc45c1
-(id)_displayStringForSIMStatus:(id)simstatus;	// 0xc44f1
-(id)_displayStringForRegistrationStatus:(int)registrationStatus;	// 0xc4491
-(void)_getBlackImageName:(id*)name silverImageName:(id*)name2 directory:(id*)directory forFakeCarrier:(id)fakeCarrier;	// 0xc6489
-(BOOL)_getBlackImageName:(id*)name silverImageName:(id*)name2 directory:(id*)directory forOperator:(id)anOperator statusBarCarrierName:(id*)name5;	// 0xc6511
@end
