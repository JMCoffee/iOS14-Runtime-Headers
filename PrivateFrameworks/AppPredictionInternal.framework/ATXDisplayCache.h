/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATXActionProducerDelegate.h>

@class NSArray, NSString, ATXActionCriteriaWorldState;

@interface ATXDisplayCache : NSObject <ATXActionProducerDelegate> {

	NSArray* _producers;
	NSString* _cacheBasePath;
	ATXActionCriteriaWorldState* _worldState;

}

@property (nonatomic,retain) ATXActionCriteriaWorldState * worldState;              //@synthesize worldState=_worldState - In the implementation block
@property (nonatomic,readonly) NSString * cacheBasePath;                            //@synthesize cacheBasePath=_cacheBasePath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)firstUpdateDateForActions:(id)arg1 ;
+(id)sharedDisplayCache;
-(void)writeToDisk;
-(void)updateLockscreenIfNeededOldAction:(id)arg1 newAction:(id)arg2 actionResponse:(id)arg3 ;
-(id)_criteriaForJobOnDate:(id)arg1 ;
-(void)writeToDiskActions:(id)arg1 ;
-(void)_logCacheUpdateWithSpotlightDiff:(double)arg1 spotlightSetDiff:(double)arg2 lockscreenDiff:(double)arg3 lockscreenSetDiff:(double)arg4 ;
-(id)actions;
-(NSString *)cacheBasePath;
-(void)setWorldState:(ATXActionCriteriaWorldState *)arg1 ;
-(void)actionProducerProducedNewActions:(id)arg1 ;
-(void)logDisplayCacheActionResults:(id)arg1 lockscreenPredictionIndices:(id)arg2 ;
-(void)setUpdateJobForCriteria:(id)arg1 ;
-(ATXActionCriteriaWorldState *)worldState;
-(id)unFilteredActions;
-(void)updateOnDiskCache;
-(id)initWithProducers:(id)arg1 cacheBasePath:(id)arg2 ;
-(id)filteredActionsFromActions:(id)arg1 ;
-(id)atxMLActionProducer;
-(void)setUpdateJobForDate:(id)arg1 ;
@end
