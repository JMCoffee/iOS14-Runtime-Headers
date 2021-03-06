/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ATXMPBBlendingClientModelEngagementTracker : PBCodable <NSCopying> {

	NSString* _abGroup;
	NSString* _clientModelABGroup;
	unsigned _clientModelCacheAge;
	NSString* _clientModelId;
	NSString* _consumerSubType;
	unsigned _consumerSubTypeCacheAge;
	int _engagementType;
	NSString* _layoutType;
	unsigned _numSuggestionsForClientModelInLayout;
	unsigned _positionInClientModelCacheOfEngagedSuggestion;
	SCD_Struct_AT8 _has;

}

@property (nonatomic,readonly) BOOL hasLayoutType; 
@property (nonatomic,retain) NSString * layoutType;                                               //@synthesize layoutType=_layoutType - In the implementation block
@property (nonatomic,readonly) BOOL hasClientModelId; 
@property (nonatomic,retain) NSString * clientModelId;                                            //@synthesize clientModelId=_clientModelId - In the implementation block
@property (assign,nonatomic) BOOL hasNumSuggestionsForClientModelInLayout; 
@property (assign,nonatomic) unsigned numSuggestionsForClientModelInLayout;                       //@synthesize numSuggestionsForClientModelInLayout=_numSuggestionsForClientModelInLayout - In the implementation block
@property (assign,nonatomic) BOOL hasPositionInClientModelCacheOfEngagedSuggestion; 
@property (assign,nonatomic) unsigned positionInClientModelCacheOfEngagedSuggestion;              //@synthesize positionInClientModelCacheOfEngagedSuggestion=_positionInClientModelCacheOfEngagedSuggestion - In the implementation block
@property (nonatomic,readonly) BOOL hasConsumerSubType; 
@property (nonatomic,retain) NSString * consumerSubType;                                          //@synthesize consumerSubType=_consumerSubType - In the implementation block
@property (assign,nonatomic) BOOL hasEngagementType; 
@property (assign,nonatomic) int engagementType;                                                  //@synthesize engagementType=_engagementType - In the implementation block
@property (assign,nonatomic) BOOL hasConsumerSubTypeCacheAge; 
@property (assign,nonatomic) unsigned consumerSubTypeCacheAge;                                    //@synthesize consumerSubTypeCacheAge=_consumerSubTypeCacheAge - In the implementation block
@property (assign,nonatomic) BOOL hasClientModelCacheAge; 
@property (assign,nonatomic) unsigned clientModelCacheAge;                                        //@synthesize clientModelCacheAge=_clientModelCacheAge - In the implementation block
@property (nonatomic,readonly) BOOL hasAbGroup; 
@property (nonatomic,retain) NSString * abGroup;                                                  //@synthesize abGroup=_abGroup - In the implementation block
@property (nonatomic,readonly) BOOL hasClientModelABGroup; 
@property (nonatomic,retain) NSString * clientModelABGroup;                                       //@synthesize clientModelABGroup=_clientModelABGroup - In the implementation block
-(NSString *)consumerSubType;
-(NSString *)clientModelId;
-(BOOL)hasConsumerSubType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)StringAsEngagementType:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasClientModelId;
-(BOOL)readFrom:(id)arg1 ;
-(void)setConsumerSubType:(NSString *)arg1 ;
-(NSString *)abGroup;
-(void)setHasEngagementType:(BOOL)arg1 ;
-(void)setClientModelId:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasAbGroup;
-(void)copyTo:(id)arg1 ;
-(NSString *)layoutType;
-(id)engagementTypeAsString:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setAbGroup:(NSString *)arg1 ;
-(void)setEngagementType:(int)arg1 ;
-(void)setLayoutType:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasEngagementType;
-(id)description;
-(id)dictionaryRepresentation;
-(int)engagementType;
-(BOOL)hasLayoutType;
-(void)setClientModelABGroup:(NSString *)arg1 ;
-(void)setNumSuggestionsForClientModelInLayout:(unsigned)arg1 ;
-(void)setHasNumSuggestionsForClientModelInLayout:(BOOL)arg1 ;
-(BOOL)hasNumSuggestionsForClientModelInLayout;
-(BOOL)hasClientModelABGroup;
-(unsigned)numSuggestionsForClientModelInLayout;
-(NSString *)clientModelABGroup;
-(void)setPositionInClientModelCacheOfEngagedSuggestion:(unsigned)arg1 ;
-(void)setHasPositionInClientModelCacheOfEngagedSuggestion:(BOOL)arg1 ;
-(BOOL)hasPositionInClientModelCacheOfEngagedSuggestion;
-(void)setConsumerSubTypeCacheAge:(unsigned)arg1 ;
-(void)setHasConsumerSubTypeCacheAge:(BOOL)arg1 ;
-(BOOL)hasConsumerSubTypeCacheAge;
-(void)setClientModelCacheAge:(unsigned)arg1 ;
-(void)setHasClientModelCacheAge:(BOOL)arg1 ;
-(BOOL)hasClientModelCacheAge;
-(unsigned)positionInClientModelCacheOfEngagedSuggestion;
-(unsigned)consumerSubTypeCacheAge;
-(unsigned)clientModelCacheAge;
@end

