/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSData;

@interface PETSchemaPET1Key : PBCodable {

	NSString* _key;
	BOOL _hasKey;

}

@property (nonatomic,copy) NSString * key;                     //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasKey;                      //@synthesize hasKey=_hasKey - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(void)writeTo:(id)arg1 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasKey;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(NSData *)jsonData;
-(void)setHasKey:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
@end

