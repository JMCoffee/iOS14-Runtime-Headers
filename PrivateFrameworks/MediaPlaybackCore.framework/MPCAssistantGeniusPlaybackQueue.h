/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlaybackCore/MPCAssistantPlaybackQueue.h>

@class NSURL;

@interface MPCAssistantGeniusPlaybackQueue : MPCAssistantPlaybackQueue {

	NSURL* _seedTrack;

}

@property (nonatomic,readonly) NSURL * seedTrack;              //@synthesize seedTrack=_seedTrack - In the implementation block
+(id)geniusQueueWithContextID:(id)arg1 seedTrack:(id)arg2 ;
-(NSURL *)seedTrack;
-(id)description;
-(MRSystemAppPlaybackQueueRef)createRemotePlaybackQueue;
-(id)initWithContextID:(id)arg1 seedTrack:(id)arg2 ;
@end

