/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:24 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, _CDUserContext, VCDatabaseProvider;
@class WFWorkflowRunCoordinator, NSObject, VCDaemonXPCEventHandler, VCTriggerEventQueue, NSMutableDictionary;

@interface VCCoreDuetListener : NSObject {

	WFWorkflowRunCoordinator* _runCoordinator;
	NSObject*<OS_dispatch_queue> _queue;
	id<_CDUserContext> _userContext;
	id<VCDatabaseProvider> _databaseProvider;
	VCDaemonXPCEventHandler* _eventHandler;
	VCTriggerEventQueue* _eventQueue;
	NSMutableDictionary* _registrations;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id<_CDUserContext> userContext;                         //@synthesize userContext=_userContext - In the implementation block
@property (nonatomic,readonly) id<VCDatabaseProvider> databaseProvider;                //@synthesize databaseProvider=_databaseProvider - In the implementation block
@property (nonatomic,readonly) VCDaemonXPCEventHandler * eventHandler;                 //@synthesize eventHandler=_eventHandler - In the implementation block
@property (nonatomic,retain) VCTriggerEventQueue * eventQueue;                         //@synthesize eventQueue=_eventQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * registrations;                    //@synthesize registrations=_registrations - In the implementation block
@property (nonatomic,readonly) WFWorkflowRunCoordinator * runCoordinator;              //@synthesize runCoordinator=_runCoordinator - In the implementation block
-(VCDaemonXPCEventHandler *)eventHandler;
-(id<_CDUserContext>)userContext;
-(void)getConfiguredTriggerDescriptionsWithCompletion:(/*^block*/id)arg1 ;
-(id)databaseWithError:(id*)arg1 ;
-(VCTriggerEventQueue *)eventQueue;
-(void)setEventQueue:(VCTriggerEventQueue *)arg1 ;
-(void)unregisterAllTriggers;
-(void)handleSunriseSunsetChanged;
-(void)deleteTriggerWithIdentifier:(id)arg1 allowedDeletionClasses:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)removeStalePendingNotifications;
-(void)checkTriggerStateWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithDatabaseProvider:(id)arg1 eventHandler:(id)arg2 runCoordinator:(id)arg3 ;
-(BOOL)isCallbackRegisteredWithIdentifier:(id)arg1 ;
-(void)handleCallbackForTriggerWithIdentifier:(id)arg1 info:(id)arg2 ;
-(BOOL)queue_registerAllTriggers:(id*)arg1 ;
-(void)fireTriggerWithIdentifier:(id)arg1 force:(BOOL)arg2 eventInfo:(id)arg3 completion:(/*^block*/id)arg4 ;
-(WFWorkflowRunCoordinator *)runCoordinator;
-(void)registerAllTriggersWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchCurrentSunriseSunsetTimes;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSMutableDictionary *)registrations;
-(void)unregisterTriggerWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)registerTrigger:(id)arg1 error:(id*)arg2 ;
-(void)unregisterCallbackForIdentifier:(id)arg1 ;
-(void)registerCallback:(id)arg1 withIdentifier:(id)arg2 ;
-(void)deviceDidUnlockForFirstTime;
-(void)significantTimeChangeDidOccur;
-(void)checkTriggerStateWithKeyPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)queue_fireTriggerWithIdentifier:(id)arg1 force:(BOOL)arg2 eventInfo:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)deleteTriggerWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)registerTriggerWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)registerSunriseSunsetCallbackIfNeeded;
-(id<VCDatabaseProvider>)databaseProvider;
@end

