/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:47 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsFeed.framework/NewsFeed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsFeed/NewsFeed-Structs.h>
#import <libobjc.A.dylib/TSProcessedImageRequestType.h>

@class NSDictionary, NSString;

@interface NEPublisherLogoProcessorRequest : NSObject <TSProcessedImageRequestType> {

	 assetHandles;
	 publisherLogoImageSize;
	 scale;
	 theme;

}

@property (copy,nonatomic) NSDictionary * assetHandles; 
@property (readonly,nonatomic) NSString * cacheIdentifier; 
-(NSString *)cacheIdentifier;
-(id)initWithPublisherLogoAssetHandle:(id)arg1 publisherLogoImageSize:(CGSize)arg2 scale:(double)arg3 theme:(long long)arg4 ;
-(id)init;
-(void)setAssetHandles:(NSDictionary *)arg1 ;
-(NSDictionary *)assetHandles;
@end

