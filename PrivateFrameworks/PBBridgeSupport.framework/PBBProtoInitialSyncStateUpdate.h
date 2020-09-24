/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PBBProtoInitialSyncStateUpdate : PBCodable <NSCopying> {

	double _progress;
	unsigned _state;
	SCD_Struct_PB1 _has;

}

@property (assign,nonatomic) BOOL hasProgress; 
@property (assign,nonatomic) double progress;               //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL hasState; 
@property (assign,nonatomic) unsigned state;                //@synthesize state=_state - In the implementation block
-(void)setHasState:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setState:(unsigned)arg1 ;
-(void)setProgress:(double)arg1 ;
-(BOOL)hasState;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(double)progress;
-(unsigned long long)hash;
-(unsigned)state;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)hasProgress;
-(void)setHasProgress:(BOOL)arg1 ;
@end
