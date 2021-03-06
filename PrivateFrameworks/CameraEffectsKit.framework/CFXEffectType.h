/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSOrderedSet;

@interface CFXEffectType : NSObject {

	int _jtEffectType;
	NSString* _identifier;
	NSString* _localizedTitle;
	NSOrderedSet* _effects;

}

@property (nonatomic,retain) NSOrderedSet * effects;               //@synthesize effects=_effects - In the implementation block
@property (assign,nonatomic) int jtEffectType;                     //@synthesize jtEffectType=_jtEffectType - In the implementation block
@property (nonatomic,copy) NSString * localizedTitle;              //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(void)initialize;
+(id)effectTypeWithIdentifier:(id)arg1 ;
+(id)effectTypeIdentifiers;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)localizedTitle;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSOrderedSet *)effects;
-(int)jtEffectType;
-(void)setEffects:(NSOrderedSet *)arg1 ;
-(void)setJtEffectType:(int)arg1 ;
@end

