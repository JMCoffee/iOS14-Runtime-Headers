/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, FCDateRange;

@interface FCFeedEdition : NSObject <NSCopying> {

	NSDate* _keyDate;
	FCDateRange* _feedDateRange;

}

@property (nonatomic,copy) NSDate * keyDate;                         //@synthesize keyDate=_keyDate - In the implementation block
@property (nonatomic,copy) FCDateRange * feedDateRange;              //@synthesize feedDateRange=_feedDateRange - In the implementation block
+(id)editionWithKeyDate:(id)arg1 feedDateRange:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FCDateRange *)feedDateRange;
-(NSDate *)keyDate;
-(id)initWithKeyDate:(id)arg1 feedDateRange:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setFeedDateRange:(FCDateRange *)arg1 ;
-(void)setKeyDate:(NSDate *)arg1 ;
@end
