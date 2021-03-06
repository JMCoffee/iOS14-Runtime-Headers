/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SPAssetCacheAssets, NSString;

@interface SPAssetCacheSyncData : NSObject {

	SPAssetCacheAssets* _permanentCache;
	SPAssetCacheAssets* _transientCache;
	NSString* _cacheIdentifier;

}

@property (nonatomic,retain) SPAssetCacheAssets * permanentCache;              //@synthesize permanentCache=_permanentCache - In the implementation block
@property (nonatomic,retain) SPAssetCacheAssets * transientCache;              //@synthesize transientCache=_transientCache - In the implementation block
@property (nonatomic,retain) NSString * cacheIdentifier;                       //@synthesize cacheIdentifier=_cacheIdentifier - In the implementation block
+(id)toProto:(id)arg1 ;
+(id)fromProto:(id)arg1 ;
-(NSString *)cacheIdentifier;
-(id)init;
-(void)setCacheIdentifier:(NSString *)arg1 ;
-(SPAssetCacheAssets *)permanentCache;
-(void)setPermanentCache:(SPAssetCacheAssets *)arg1 ;
-(SPAssetCacheAssets *)transientCache;
-(void)setTransientCache:(SPAssetCacheAssets *)arg1 ;
@end

