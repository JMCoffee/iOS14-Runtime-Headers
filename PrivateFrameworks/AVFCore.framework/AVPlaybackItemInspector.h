/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetInspector.h>

@class NSArray;

@interface AVPlaybackItemInspector : AVAssetInspector {

	OpaqueFigPlaybackItemRef _playbackItem;
	NSArray* _trackIDs;

}

@property (setter=_setPlaybackItem:,getter=_playbackItem,nonatomic,retain) OpaqueFigPlaybackItemRef playbackItem; 
-(id)lyrics;
-(CGSize)naturalSize;
-(long long)trackCount;
-(SCD_Struct_AV6)duration;
-(void)dealloc;
-(void)_setPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 ;
-(id)initWithPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 trackIDs:(id)arg2 ;
-(id)trackIDs;
-(BOOL)isEqual:(id)arg1 ;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(id)commonMetadata;
-(id)compatibleTrackForCompositionTrack:(id)arg1 ;
-(BOOL)providesPreciseDurationAndTiming;
-(unsigned long long)hash;
-(void*)_valueAsCFTypeForProperty:(CFStringRef)arg1 ;
-(id)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
@end

