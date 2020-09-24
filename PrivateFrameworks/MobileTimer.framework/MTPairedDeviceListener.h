/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, NAScheduler;
@class NSObject, MTObserverStore, NRDevice, NSString;

@interface MTPairedDeviceListener : NSObject {

	BOOL _sleepEnabled;
	NSObject*<OS_dispatch_queue> _serializerQueue;
	id<NAScheduler> _serializer;
	MTObserverStore* _observers;
	NRDevice* _pairedDevice;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serializerQueue;              //@synthesize serializerQueue=_serializerQueue - In the implementation block
@property (nonatomic,retain) id<NAScheduler> serializer;                                //@synthesize serializer=_serializer - In the implementation block
@property (nonatomic,retain) MTObserverStore * observers;                               //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) BOOL sleepEnabled;                                         //@synthesize sleepEnabled=_sleepEnabled - In the implementation block
@property (nonatomic,retain) NRDevice * pairedDevice;                                   //@synthesize pairedDevice=_pairedDevice - In the implementation block
@property (readonly) NSString * pairedDeviceVersion; 
@property (readonly) BOOL hasActivePairedDevice; 
@property (readonly) BOOL hasActivePairedDeviceSupportingSyncing; 
+(id)_handledNotifications;
+(id)sharedListener;
-(void)printDiagnostics;
-(void)registerObserver:(id)arg1 ;
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(void)notifyObserversWithBlock:(/*^block*/id)arg1 ;
-(BOOL)sleepEnabled;
-(void)_registerForLocalNotifications;
-(MTObserverStore *)observers;
-(id<NAScheduler>)serializer;
-(void)setObservers:(MTObserverStore *)arg1 ;
-(BOOL)hasActivePairedDeviceCheckSyncing:(BOOL)arg1 ;
-(void)handleNotification:(id)arg1 ofType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)didReceiveNotificationNamed:(id)arg1 ;
-(void)setSerializerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)handlesNotification:(id)arg1 ofType:(long long)arg2 ;
-(id)init;
-(void)updateActiveDeviceInfo;
-(NRDevice *)pairedDevice;
-(NSObject*<OS_dispatch_queue>)serializerQueue;
-(void)didReceiveNotification:(id)arg1 ;
-(void)setSleepEnabled:(BOOL)arg1 ;
-(void)setPairedDevice:(NRDevice *)arg1 ;
-(BOOL)hasActivePairedDeviceSupportingSyncing;
-(BOOL)hasActivePairedDevice;
-(NSString *)pairedDeviceVersion;
@end
