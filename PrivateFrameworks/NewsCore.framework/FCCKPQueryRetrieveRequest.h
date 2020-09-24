/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:13 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, FCCKPQuery, FCCKPRequestedFields, FCCKPRecordZoneIdentifier;

@interface FCCKPQueryRetrieveRequest : PBRequest <NSCopying> {

	NSData* _continuationMarker;
	unsigned _limit;
	FCCKPQuery* _query;
	FCCKPRequestedFields* _requestedFields;
	FCCKPRecordZoneIdentifier* _zoneIdentifier;
	SCD_Struct_FC4 _has;

}

@property (nonatomic,readonly) BOOL hasQuery; 
@property (nonatomic,retain) FCCKPQuery * query;                                      //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) BOOL hasContinuationMarker; 
@property (nonatomic,retain) NSData * continuationMarker;                             //@synthesize continuationMarker=_continuationMarker - In the implementation block
@property (assign,nonatomic) BOOL hasLimit; 
@property (assign,nonatomic) unsigned limit;                                          //@synthesize limit=_limit - In the implementation block
@property (nonatomic,readonly) BOOL hasZoneIdentifier; 
@property (nonatomic,retain) FCCKPRecordZoneIdentifier * zoneIdentifier;              //@synthesize zoneIdentifier=_zoneIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestedFields; 
@property (nonatomic,retain) FCCKPRequestedFields * requestedFields;                  //@synthesize requestedFields=_requestedFields - In the implementation block
+(id)options;
-(Class)responseClass;
-(void)setQuery:(FCCKPQuery *)arg1 ;
-(FCCKPQuery *)query;
-(BOOL)hasRequestedFields;
-(unsigned)requestTypeCode;
-(void)setRequestedFields:(FCCKPRequestedFields *)arg1 ;
-(FCCKPRecordZoneIdentifier *)zoneIdentifier;
-(void)setZoneIdentifier:(FCCKPRecordZoneIdentifier *)arg1 ;
-(BOOL)hasZoneIdentifier;
-(unsigned)limit;
-(NSData *)continuationMarker;
-(void)setLimit:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasContinuationMarker;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasQuery;
-(void)dealloc;
-(BOOL)hasLimit;
-(void)setHasLimit:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(FCCKPRequestedFields *)requestedFields;
-(unsigned long long)hash;
-(void)setContinuationMarker:(NSData *)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
@end
