/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTSleepModeStateMachineEventHandler <MTStateMachineEventHandler>
@required
-(void)updateState:(BOOL)arg1;
-(void)userWokeUp;
-(void)sleepModeEnabled:(BOOL)arg1 userRequested:(BOOL)arg2 date:(id)arg3;

@end
