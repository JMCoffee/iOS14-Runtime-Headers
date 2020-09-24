/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ICDocCamImageCache, NSArray;

@interface ICDocCamScanCacheItem : NSObject {

	ICDocCamImageCache* _imageCache;
	NSArray* _docInfos;

}

@property (nonatomic,retain) ICDocCamImageCache * imageCache;              //@synthesize imageCache=_imageCache - In the implementation block
@property (nonatomic,retain) NSArray * docInfos;                           //@synthesize docInfos=_docInfos - In the implementation block
-(id)init;
-(ICDocCamImageCache *)imageCache;
-(void)setImageCache:(ICDocCamImageCache *)arg1 ;
-(NSArray *)docInfos;
-(void)setDocInfos:(NSArray *)arg1 ;
-(id)docInfoForScanDataDelegate:(id)arg1 ;
-(id)initWithImageCache:(id)arg1 docInfos:(id)arg2 ;
-(id)imageForScanDataDelegateIdentifier:(id)arg1 ;
-(void)deleteCacheImages;
-(void)doneBuildingCache;
@end
