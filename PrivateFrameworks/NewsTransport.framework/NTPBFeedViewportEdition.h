/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBDate;

@interface NTPBFeedViewportEdition : PBCodable <NSCopying> {

	NTPBDate* _feedDateRangeEnd;
	NTPBDate* _feedDateRangeStart;
	NTPBDate* _keyDate;

}

@property (nonatomic,readonly) BOOL hasKeyDate; 
@property (nonatomic,retain) NTPBDate * keyDate;                         //@synthesize keyDate=_keyDate - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedDateRangeStart; 
@property (nonatomic,retain) NTPBDate * feedDateRangeStart;              //@synthesize feedDateRangeStart=_feedDateRangeStart - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedDateRangeEnd; 
@property (nonatomic,retain) NTPBDate * feedDateRangeEnd;                //@synthesize feedDateRangeEnd=_feedDateRangeEnd - In the implementation block
-(void)setFeedDateRangeStart:(NTPBDate *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setFeedDateRangeEnd:(NTPBDate *)arg1 ;
-(BOOL)hasFeedDateRangeEnd;
-(BOOL)hasKeyDate;
-(BOOL)readFrom:(id)arg1 ;
-(void)dealloc;
-(NTPBDate *)keyDate;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasFeedDateRangeStart;
-(unsigned long long)hash;
-(NTPBDate *)feedDateRangeEnd;
-(id)description;
-(NTPBDate *)feedDateRangeStart;
-(id)dictionaryRepresentation;
-(void)setKeyDate:(NTPBDate *)arg1 ;
@end

