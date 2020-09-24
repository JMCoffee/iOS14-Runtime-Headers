/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEORPAddress;

@interface GEORPPersonalizedMaps : PBCodable <NSCopying> {

	GEORPAddress* _address;
	int _addressType;
	int _placeType;
	SCD_Struct_GE123 _flags;

}

@property (assign,nonatomic) BOOL hasAddressType; 
@property (assign,nonatomic) int addressType; 
@property (assign,nonatomic) BOOL hasPlaceType; 
@property (assign,nonatomic) int placeType; 
@property (nonatomic,readonly) BOOL hasAddress; 
@property (nonatomic,retain) GEORPAddress * address; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)hasAddress;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)jsonRepresentation;
-(GEORPAddress *)address;
-(void)setAddressType:(int)arg1 ;
-(void)setPlaceType:(int)arg1 ;
-(int)addressType;
-(void)setHasAddressType:(BOOL)arg1 ;
-(BOOL)hasAddressType;
-(id)addressTypeAsString:(int)arg1 ;
-(int)StringAsAddressType:(id)arg1 ;
-(BOOL)hasPlaceType;
-(void)setHasPlaceType:(BOOL)arg1 ;
-(id)placeTypeAsString:(int)arg1 ;
-(int)StringAsPlaceType:(id)arg1 ;
-(void)setAddress:(GEORPAddress *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(int)placeType;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
@end
