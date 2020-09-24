/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOAttribute : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	int _key;
	unsigned _value;
	struct {
		unsigned has_key : 1;
		unsigned has_value : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasKey; 
@property (assign,nonatomic) int key; 
@property (assign,nonatomic) BOOL hasValue; 
@property (assign,nonatomic) unsigned value; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)key;
-(void)setKey:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)keyAsString:(int)arg1 ;
-(int)StringAsKey:(id)arg1 ;
-(BOOL)hasValue;
-(void)setValue:(unsigned)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)value;
-(BOOL)hasKey;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)setHasValue:(BOOL)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)description;
-(void)setHasKey:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
@end
