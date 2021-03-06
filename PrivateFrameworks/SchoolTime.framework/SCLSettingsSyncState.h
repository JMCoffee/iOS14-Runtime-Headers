/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCLSettingsSyncStateMachine;

@interface SCLSettingsSyncState : NSObject {

	unsigned long long _status;
	SCLSettingsSyncStateMachine* _stateMachine;

}

@property (nonatomic,readonly) unsigned long long status;                                    //@synthesize status=_status - In the implementation block
@property (assign,nonatomic,__weak) SCLSettingsSyncStateMachine * stateMachine;              //@synthesize stateMachine=_stateMachine - In the implementation block
-(void)setStateMachine:(SCLSettingsSyncStateMachine *)arg1 ;
-(SCLSettingsSyncStateMachine *)stateMachine;
-(void)willExitWithNextState:(id)arg1 ;
-(unsigned long long)status;
-(void)significantUserInteractionOccurred;
-(void)xpcActivityStarted;
-(void)didEnterWithPreviousState:(id)arg1 ;
-(id)initWithStateMachine:(id)arg1 ;
-(void)settingsDidChange;
-(void)commitSettings;
-(void)enqueueFailedWithError:(id)arg1 ;
-(void)didEnqueueMessage:(id)arg1 ;
-(void)message:(id)arg1 failedWithError:(id)arg2 ;
-(void)messageDidSend:(id)arg1 ;
-(void)messageWasDelivered:(id)arg1 ;
-(void)message:(id)arg1 didFailToAcknowledgeWithError:(id)arg2 ;
@end

