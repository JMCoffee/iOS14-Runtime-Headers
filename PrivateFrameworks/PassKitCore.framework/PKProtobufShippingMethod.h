/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PKProtobufShippingMethod : PBCodable <NSCopying> {

	long long _amount;
	NSString* _detail;
	NSString* _identifier;
	NSString* _label;
	unsigned _type;
	SCD_Struct_PK7 _has;

}

@property (assign,nonatomic) BOOL hasAmount; 
@property (assign,nonatomic) long long amount;                   //@synthesize amount=_amount - In the implementation block
@property (nonatomic,readonly) BOOL hasLabel; 
@property (nonatomic,retain) NSString * label;                   //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) unsigned type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasDetail; 
@property (nonatomic,retain) NSString * detail;                  //@synthesize detail=_detail - In the implementation block
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasIdentifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)hasLabel;
-(NSString *)detail;
-(BOOL)hasAmount;
-(void)setHasAmount:(BOOL)arg1 ;
-(void)setAmount:(long long)arg1 ;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)type;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setType:(unsigned)arg1 ;
-(BOOL)hasDetail;
-(long long)amount;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(unsigned long long)hash;
-(void)setDetail:(NSString *)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
@end

