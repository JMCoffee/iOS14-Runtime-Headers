/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray, NFLHeadlineTileInfo;


@protocol NFLFeedTileInfo <NSObject,NFCopying>
@property (nonatomic,readonly) unsigned long long tileInfoType; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,readonly) BOOL pageable; 
@property (getter=isSelectable,nonatomic,readonly) BOOL selectable; 
@property (nonatomic,readonly) unsigned long long bookmarkOffsetType; 
@property (nonatomic,readonly) NSArray * underlyingFeedElements; 
@property (nonatomic,readonly) NFLHeadlineTileInfo * feedTileInfoForBookmarking; 
@property (nonatomic,copy,readonly) NSString * groupIdentifier; 
@required
-(NSString *)identifier;
-(NSString *)groupIdentifier;
-(id)updatedTileInfoWithNewHeadline:(id)arg1;
-(unsigned long long)tileInfoType;
-(BOOL)isSelectable;
-(BOOL)pageable;
-(NFLHeadlineTileInfo *)feedTileInfoForBookmarking;
-(unsigned long long)bookmarkOffsetType;
-(NSArray *)underlyingFeedElements;

@end

