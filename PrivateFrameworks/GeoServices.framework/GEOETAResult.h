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

@class PBDataReader, PBUnknownFields, GEOPlaceSearchResponse, NSMutableArray;

@interface GEOETAResult : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPlaceSearchResponse* _placeSearchResponse;
	NSMutableArray* _sortedETAs;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _distance;
	unsigned _historicTravelTime;
	unsigned _liveTravelTime;
	int _status;
	struct {
		unsigned has_distance : 1;
		unsigned has_historicTravelTime : 1;
		unsigned has_liveTravelTime : 1;
		unsigned has_status : 1;
		unsigned read_unknownFields : 1;
		unsigned read_placeSearchResponse : 1;
		unsigned read_sortedETAs : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status; 
@property (assign,nonatomic) BOOL hasLiveTravelTime; 
@property (assign,nonatomic) unsigned liveTravelTime; 
@property (assign,nonatomic) BOOL hasHistoricTravelTime; 
@property (assign,nonatomic) unsigned historicTravelTime; 
@property (nonatomic,readonly) BOOL hasPlaceSearchResponse; 
@property (nonatomic,retain) GEOPlaceSearchResponse * placeSearchResponse; 
@property (assign,nonatomic) BOOL hasDistance; 
@property (assign,nonatomic) unsigned distance; 
@property (nonatomic,retain) NSMutableArray * sortedETAs; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)sortedETAType;
-(void)setDistance:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasLiveTravelTime:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasPlaceSearchResponse;
-(void)setSortedETAs:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)sortedETAAtIndex:(unsigned long long)arg1 ;
-(void)setStatus:(int)arg1 ;
-(void)clearSortedETAs;
-(id)statusAsString:(int)arg1 ;
-(id)jsonRepresentation;
-(void)setHistoricTravelTime:(unsigned)arg1 ;
-(void)clearSensitiveFields;
-(int)status;
-(int)StringAsStatus:(id)arg1 ;
-(GEOPlaceSearchResponse *)placeSearchResponse;
-(BOOL)hasStatus;
-(id)init;
-(unsigned long long)sortedETAsCount;
-(BOOL)hasDistance;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasDistance:(BOOL)arg1 ;
-(void)setLiveTravelTime:(unsigned)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)liveTravelTime;
-(id)initWithJSON:(id)arg1 ;
-(NSMutableArray *)sortedETAs;
-(PBUnknownFields *)unknownFields;
-(unsigned)distance;
-(void)readAll:(BOOL)arg1 ;
-(void)setPlaceSearchResponse:(GEOPlaceSearchResponse *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasLiveTravelTime;
-(void)addSortedETA:(id)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasHistoricTravelTime;
-(void)setHasHistoricTravelTime:(BOOL)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)description;
-(unsigned)historicTravelTime;
-(id)dictionaryRepresentation;
@end

