/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class MPStoreModelPlaybackPositionBuilder, MPPropertySet, MPStoreModelStoreAssetBuilder;

@interface MPModelStorePlatformMetadataGenericObjectBuilder : NSObject {

	MPStoreModelPlaybackPositionBuilder* _playbackPositionBuilder;
	MPPropertySet* _storeAssetProperties;
	MPStoreModelStoreAssetBuilder* _storeAssetBuilder;
	SCD_Struct_MP74 _requestedSongProperties;
	MPPropertySet* _requestedProperties;

}

@property (nonatomic,copy,readonly) MPPropertySet * requestedProperties;              //@synthesize requestedProperties=_requestedProperties - In the implementation block
-(id)initWithRequestedProperties:(id)arg1 ;
-(id)genericObjectForStorePlatformMetadata:(id)arg1 userIdentity:(id)arg2 ;
-(MPPropertySet *)requestedProperties;
@end
