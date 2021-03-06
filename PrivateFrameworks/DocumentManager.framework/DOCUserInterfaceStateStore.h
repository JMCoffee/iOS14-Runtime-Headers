/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface DOCUserInterfaceStateStore : NSObject {

	NSMutableDictionary* _uiStateMap;

}

@property (retain) NSMutableDictionary * uiStateMap;              //@synthesize uiStateMap=_uiStateMap - In the implementation block
+(id)sharedStore;
-(id)init;
-(id)_loadUserInterfaceStateFromDefaultsForConfiguration:(id)arg1 ;
-(id)_mostRecentInterfaceStateForConfiguration:(id)arg1 ;
-(id)docUserDefaults;
-(void)_writeUserInterfaceStateToDefaultsForConfiguration:(id)arg1 ;
-(void)_writeMostRecentUserInterfaceStateToDefaultsForConfiguration:(id)arg1 ;
-(void)_pruneOldState;
-(id)_sortedInterfaceStateKeys;
-(id)interfaceStateForConfiguration:(id)arg1 ;
-(void)updateInterfaceState:(id)arg1 forConfiguration:(id)arg2 ;
-(void)purgeStateForConfiguration:(id)arg1 ;
-(void)purgeApplicationStateForIdentifiers:(id)arg1 configuration:(id)arg2 ;
-(NSMutableDictionary *)uiStateMap;
-(void)setUiStateMap:(NSMutableDictionary *)arg1 ;
@end

