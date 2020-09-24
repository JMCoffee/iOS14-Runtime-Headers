/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, NSString;

@interface GEOPDAssociatedApp : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _alternateAppAdamIds;
	NSString* _preferredAppAdamId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_alternateAppAdamIds : 1;
		unsigned read_preferredAppAdamId : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasPreferredAppAdamId; 
@property (nonatomic,retain) NSString * preferredAppAdamId; 
@property (nonatomic,retain) NSMutableArray * alternateAppAdamIds; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)alternateAppAdamIdType;
+(BOOL)isValid:(id)arg1 ;
+(id)associatedAppForPlaceData:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)preferredAppAdamId;
-(NSMutableArray *)alternateAppAdamIds;
-(void)setPreferredAppAdamId:(NSString *)arg1 ;
-(void)addAlternateAppAdamId:(id)arg1 ;
-(unsigned long long)alternateAppAdamIdsCount;
-(void)clearAlternateAppAdamIds;
-(id)alternateAppAdamIdAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasPreferredAppAdamId;
-(void)setAlternateAppAdamIds:(NSMutableArray *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)jsonRepresentation;
-(id)init;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
@end
