/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, NSData;

@interface GEOLogMsgEventLogDiscard : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _certificates;
	NSData* _signature;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,retain) NSMutableArray * certificates; 
@property (nonatomic,readonly) BOOL hasSignature; 
@property (nonatomic,retain) NSData * signature; 
+(Class)certificatesType;
+(BOOL)isValid:(id)arg1 ;
-(void)addCertificates:(id)arg1 ;
-(unsigned long long)certificatesCount;
-(BOOL)hasSignature;
-(void)clearCertificates;
-(id)certificatesAtIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)jsonRepresentation;
-(void)setCertificates:(NSMutableArray *)arg1 ;
-(NSData *)signature;
-(id)init;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)setSignature:(NSData *)arg1 ;
-(NSMutableArray *)certificates;
-(id)description;
-(id)dictionaryRepresentation;
@end
