/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohort : PBCodable <NSCopying> {

	double _clicks;
	double _impressions;
	long long _timestamp;
	int _type;
	SCD_Struct_NT2 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                         //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasClicks; 
@property (assign,nonatomic) double clicks;                    //@synthesize clicks=_clicks - In the implementation block
@property (assign,nonatomic) BOOL hasImpressions; 
@property (assign,nonatomic) double impressions;               //@synthesize impressions=_impressions - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
-(void)setHasTimestamp:(BOOL)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setClicks:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(long long)timestamp;
-(void)setTimestamp:(long long)arg1 ;
-(double)impressions;
-(void)setHasClicks:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)setHasImpressions:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)type;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasImpressions;
-(void)setType:(int)arg1 ;
-(double)clicks;
-(BOOL)hasTimestamp;
-(BOOL)hasClicks;
-(unsigned long long)hash;
-(void)setImpressions:(double)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
@end
