/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKUIArtworkProviding;
@class NSURL;

@interface SKUIVideo : NSObject {

	id<SKUIArtworkProviding> _artworks;
	NSURL* _url;

}

@property (nonatomic,readonly) id<SKUIArtworkProviding> artworks;              //@synthesize artworks=_artworks - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                    //@synthesize url=_url - In the implementation block
-(NSURL *)URL;
-(id<SKUIArtworkProviding>)artworks;
-(id)initWithVideoDictionary:(id)arg1 ;
@end

