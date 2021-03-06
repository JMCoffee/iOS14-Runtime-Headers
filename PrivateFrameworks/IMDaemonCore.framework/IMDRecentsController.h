/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, IMTimer;

@interface IMDRecentsController : NSObject {

	NSMutableDictionary* _typingContext;
	IMTimer* _typingContextTimer;
	NSMutableDictionary* _activeDeviceForHandle;

}
+(id)sharedInstance;
-(void)_setTimerForPruningTypingContext;
-(BOOL)hasRecentlyMessaged:(id)arg1 ;
-(id)activeDeviceForHandle:(id)arg1 ;
-(void)noteRecentMessageForPeople:(id)arg1 ;
-(void)__pruneTypingContexts;
-(void)updateLatestActiveDestination:(id)arg1 ForHandle:(id)arg2 incomingType:(unsigned char)arg3 ;
@end

