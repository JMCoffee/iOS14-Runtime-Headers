/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:29 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DuetRecommendation.framework/DuetRecommendation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DRTopicInterestModeling.h>

@protocol OS_dispatch_queue;
@class NSObject, _DKKnowledgeStorage;

@interface _DRTopicInterestModel : NSObject <_DRTopicInterestModeling> {

	NSObject*<OS_dispatch_queue> _syncQueue;
	_DKKnowledgeStorage* _storage;

}

@property (retain) NSObject*<OS_dispatch_queue> syncQueue;              //@synthesize syncQueue=_syncQueue - In the implementation block
@property (retain) _DKKnowledgeStorage * storage;                       //@synthesize storage=_storage - In the implementation block
+(id)topicActionCategoryType;
+(id)predicateForTopicsWithPrefix:(id)arg1 ;
+(id)predicateForTopicInteractionsBefore:(id)arg1 ;
+(id)topicSelectedCategory;
+(id)predicateForTopicInteractionsAfter:(id)arg1 ;
+(id)topicPresentedCategory;
+(id)newsStorageDirectory;
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(_DKKnowledgeStorage *)storage;
-(void)setStorage:(_DKKnowledgeStorage *)arg1 ;
-(void)enumerateTopicCountsWithFilter:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)init;
-(void)recordSelectionOfTopics:(id)arg1 onDate:(id)arg2 ;
-(void)purgeEntriesEarlierThanDate:(id)arg1 ;
-(id)initWithStorageDirectory:(id)arg1 localOnly:(BOOL)arg2 ;
-(id)computeSummaryWithFilter:(id)arg1 ;
-(void)recordPresentationOfTopics:(id)arg1 onDate:(id)arg2 ;
-(void)purgeEntriesWithPrefix:(id)arg1 earlierThanDate:(id)arg2 ;
-(id)initWithStorageDirectory:(id)arg1 ;
@end
