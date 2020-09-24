/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PubSub.framework/PubSub
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSSet, PSTopic;

@interface PSSubscription : HMFObject {

	NSSet* _filters;
	NSSet* _conditionals;
	PSTopic* _topic;

}

@property (__weak,readonly) PSTopic * topic;                 //@synthesize topic=_topic - In the implementation block
@property (copy,readonly) NSSet * filters;                   //@synthesize filters=_filters - In the implementation block
@property (copy,readonly) NSSet * conditionals;              //@synthesize conditionals=_conditionals - In the implementation block
-(PSTopic *)topic;
-(NSSet *)filters;
-(id)attributeDescriptions;
-(void)unsubscribe;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSSet *)conditionals;
-(id)initWithTopic:(id)arg1 filters:(id)arg2 conditionals:(id)arg3 ;
@end
