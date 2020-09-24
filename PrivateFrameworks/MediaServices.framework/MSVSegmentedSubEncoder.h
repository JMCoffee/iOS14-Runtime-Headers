/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSData;


@protocol MSVSegmentedSubEncoder <NSObject>
@property (nonatomic,readonly) BOOL hasTopLevelData; 
@property (readonly) NSData * encodedData; 
@required
-(void)finishEncodingPartialTopLevelObject;
-(void)beginEncodingPartialTopLevelObject:(id)arg1;
-(BOOL)hasTopLevelData;
-(NSData *)encodedData;

@end
