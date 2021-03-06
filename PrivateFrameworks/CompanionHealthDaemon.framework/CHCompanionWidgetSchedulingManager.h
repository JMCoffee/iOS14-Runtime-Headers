/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CompanionHealthDaemon.framework/CompanionHealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDDataObserver.h>
#import <libobjc.A.dylib/HDUserCharacteristicsProfileObserver.h>

@class HDProfile, NSString;

@interface CHCompanionWidgetSchedulingManager : NSObject <HDHealthDaemonReadyObserver, HDDataObserver, HDUserCharacteristicsProfileObserver> {

	HDProfile* _profile;
	long long _wheelchairUse;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)samplesAdded:(id)arg1 anchor:(id)arg2 ;
-(void)daemonReady:(id)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(void)dealloc;
-(void)userCharacteristicsManager:(id)arg1 didUpdateUserProfile:(id)arg2 ;
-(void)_stopObservingWorkouts;
-(void)_stopObservingUserCharacteristics;
-(void)_startObservingWorkouts;
-(long long)_currentWheelchairUse;
-(void)_startObservingUserCharacteristics;
-(void)_reloadWidgetTimelines;
@end

