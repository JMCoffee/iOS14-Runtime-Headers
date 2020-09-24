/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDCategoryInformation, GEOPDCategoryLookupParameters;

@interface GEOPDCategoryLookupResult : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDCategoryInformation* _categoryInfo;
	GEOPDCategoryLookupParameters* _categoryLookupParam;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_categoryInfo : 1;
		unsigned read_categoryLookupParam : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasCategoryLookupParam; 
@property (nonatomic,retain) GEOPDCategoryLookupParameters * categoryLookupParam; 
@property (nonatomic,readonly) BOOL hasCategoryInfo; 
@property (nonatomic,retain) GEOPDCategoryInformation * categoryInfo; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)jsonRepresentation;
-(id)init;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(GEOPDCategoryInformation *)categoryInfo;
-(GEOPDCategoryLookupParameters *)categoryLookupParam;
-(void)readAll:(BOOL)arg1 ;
-(void)setCategoryLookupParam:(GEOPDCategoryLookupParameters *)arg1 ;
-(void)setCategoryInfo:(GEOPDCategoryInformation *)arg1 ;
-(BOOL)hasCategoryLookupParam;
-(BOOL)hasCategoryInfo;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
@end
