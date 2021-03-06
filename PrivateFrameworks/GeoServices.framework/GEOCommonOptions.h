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

@interface GEOCommonOptions : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	BOOL _excludeGuidance;
	BOOL _includeSnapScoreMetadataDebug;
	BOOL _includeSummaryForPredictedDestination;
	BOOL _includeTravelTimeAggressive;
	BOOL _includeTravelTimeConservative;
	BOOL _includeTravelTimeEstimate;
	struct {
		unsigned has_excludeGuidance : 1;
		unsigned has_includeSnapScoreMetadataDebug : 1;
		unsigned has_includeSummaryForPredictedDestination : 1;
		unsigned has_includeTravelTimeAggressive : 1;
		unsigned has_includeTravelTimeConservative : 1;
		unsigned has_includeTravelTimeEstimate : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasIncludeTravelTimeAggressive; 
@property (assign,nonatomic) BOOL includeTravelTimeAggressive; 
@property (assign,nonatomic) BOOL hasIncludeTravelTimeEstimate; 
@property (assign,nonatomic) BOOL includeTravelTimeEstimate; 
@property (assign,nonatomic) BOOL hasIncludeTravelTimeConservative; 
@property (assign,nonatomic) BOOL includeTravelTimeConservative; 
@property (assign,nonatomic) BOOL hasExcludeGuidance; 
@property (assign,nonatomic) BOOL excludeGuidance; 
@property (assign,nonatomic) BOOL hasIncludeSummaryForPredictedDestination; 
@property (assign,nonatomic) BOOL includeSummaryForPredictedDestination; 
@property (assign,nonatomic) BOOL hasIncludeSnapScoreMetadataDebug; 
@property (assign,nonatomic) BOOL includeSnapScoreMetadataDebug; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)includeTravelTimeConservative;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasIncludeTravelTimeConservative:(BOOL)arg1 ;
-(BOOL)hasIncludeTravelTimeAggressive;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasExcludeGuidance;
-(BOOL)includeTravelTimeAggressive;
-(BOOL)hasIncludeSummaryForPredictedDestination;
-(void)setHasExcludeGuidance:(BOOL)arg1 ;
-(BOOL)includeTravelTimeEstimate;
-(id)jsonRepresentation;
-(void)setIncludeTravelTimeAggressive:(BOOL)arg1 ;
-(void)setHasIncludeTravelTimeAggressive:(BOOL)arg1 ;
-(void)setIncludeSnapScoreMetadataDebug:(BOOL)arg1 ;
-(void)setHasIncludeTravelTimeEstimate:(BOOL)arg1 ;
-(void)setExcludeGuidance:(BOOL)arg1 ;
-(BOOL)includeSummaryForPredictedDestination;
-(BOOL)excludeGuidance;
-(void)setIncludeSummaryForPredictedDestination:(BOOL)arg1 ;
-(void)setIncludeTravelTimeEstimate:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasIncludeTravelTimeEstimate;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasIncludeSnapScoreMetadataDebug;
-(BOOL)includeSnapScoreMetadataDebug;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasIncludeTravelTimeConservative;
-(void)setHasIncludeSnapScoreMetadataDebug:(BOOL)arg1 ;
-(void)setHasIncludeSummaryForPredictedDestination:(BOOL)arg1 ;
-(void)setIncludeTravelTimeConservative:(BOOL)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
@end

