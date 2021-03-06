/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiomeStreams/BiomeStreams-Structs.h>
#import <BiomePubSub/BPSSubscription.h>

@protocol BPSSubscriber;
@class BMStoreEnumerator, NSString;

@interface _BPSInnerBiomeSubscription : BPSSubscription {

	BMStoreEnumerator* _enumerator;
	os_unfair_lock_s _lock;
	id<BPSSubscriber> _downstream;
	long long _pendingDemand;
	BOOL _recursion;
	NSString* _streamId;

}
-(void)cancel;
-(id)upstreamSubscriptions;
-(id)initWithStreamEnumerator:(id)arg1 downstream:(id)arg2 streamId:(id)arg3 ;
-(void)requestDemand:(long long)arg1 ;
-(id)newBookmark;
-(id)initWithStreamDatastoreReader:(id)arg1 startTime:(double)arg2 downstream:(id)arg3 streamId:(id)arg4 ;
-(id)initWithStreamDatastoreReader:(id)arg1 bookmark:(id)arg2 downstream:(id)arg3 streamId:(id)arg4 ;
@end

