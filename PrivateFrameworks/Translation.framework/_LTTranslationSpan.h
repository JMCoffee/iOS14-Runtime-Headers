/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface _LTTranslationSpan : NSObject <NSSecureCoding> {

	BOOL _shouldTranslate;
	NSString* _identifier;
	NSData* _metaInfoData;
	NSRange _range;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSRange range;                      //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) BOOL shouldTranslate;                 //@synthesize shouldTranslate=_shouldTranslate - In the implementation block
@property (nonatomic,copy) NSData * metaInfoData;                  //@synthesize metaInfoData=_metaInfoData - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSRange)range;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 range:(NSRange)arg2 ;
-(BOOL)shouldTranslate;
-(NSData *)metaInfoData;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setShouldTranslate:(BOOL)arg1 ;
-(void)setMetaInfoData:(NSData *)arg1 ;
@end

