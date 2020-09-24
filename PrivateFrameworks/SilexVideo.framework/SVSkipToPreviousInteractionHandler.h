/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVInteractionHandling.h>

@protocol SVVideoPlaybackSkipping;
@class NSString;

@interface SVSkipToPreviousInteractionHandler : NSObject <SVInteractionHandling> {

	id<SVVideoPlaybackSkipping> _playbackSkipper;

}

@property (nonatomic,readonly) id<SVVideoPlaybackSkipping> playbackSkipper;              //@synthesize playbackSkipper=_playbackSkipper - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleInteractionWithContext:(id)arg1 ;
-(id<SVVideoPlaybackSkipping>)playbackSkipper;
-(id)initWithPlaybackSkipper:(id)arg1 ;
@end
