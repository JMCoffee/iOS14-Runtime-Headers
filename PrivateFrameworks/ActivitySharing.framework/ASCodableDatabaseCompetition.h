/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActivitySharing/ActivitySharing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ASCodableCloudKitCompetition, NSData;

@interface ASCodableDatabaseCompetition : PBCodable <NSCopying> {

	long long _type;
	ASCodableCloudKitCompetition* _competition;
	NSData* _friendUUID;
	SCD_Struct_AS1 _has;

}

@property (nonatomic,readonly) BOOL hasFriendUUID; 
@property (nonatomic,retain) NSData * friendUUID;                                     //@synthesize friendUUID=_friendUUID - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) long long type;                                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasCompetition; 
@property (nonatomic,retain) ASCodableCloudKitCompetition * competition;              //@synthesize competition=_competition - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSData *)friendUUID;
-(void)setFriendUUID:(NSData *)arg1 ;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(long long)type;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)hasFriendUUID;
-(void)setCompetition:(ASCodableCloudKitCompetition *)arg1 ;
-(BOOL)hasCompetition;
-(ASCodableCloudKitCompetition *)competition;
@end

