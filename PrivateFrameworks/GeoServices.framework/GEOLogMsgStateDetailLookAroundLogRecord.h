/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLogMsgStateDetailLookAroundLogRecord : PBCodable <NSCopying> {

	double _relativeTimestamp;
	int _action;
	int _target;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasAction; 
@property (assign,nonatomic) int action; 
@property (assign,nonatomic) BOOL hasTarget; 
@property (assign,nonatomic) int target; 
@property (assign,nonatomic) BOOL hasRelativeTimestamp; 
@property (assign,nonatomic) double relativeTimestamp; 
+(BOOL)isValid:(id)arg1 ;
-(void)setHasRelativeTimestamp:(BOOL)arg1 ;
-(void)setRelativeTimestamp:(double)arg1 ;
-(double)relativeTimestamp;
-(BOOL)hasRelativeTimestamp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasAction:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasTarget:(BOOL)arg1 ;
-(id)targetAsString:(int)arg1 ;
-(int)StringAsTarget:(id)arg1 ;
-(int)action;
-(id)jsonRepresentation;
-(BOOL)hasAction;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setAction:(int)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)hasTarget;
-(void)readAll:(BOOL)arg1 ;
-(int)target;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)setTarget:(int)arg1 ;
-(id)description;
-(id)actionAsString:(int)arg1 ;
-(int)StringAsAction:(id)arg1 ;
-(id)dictionaryRepresentation;
@end
