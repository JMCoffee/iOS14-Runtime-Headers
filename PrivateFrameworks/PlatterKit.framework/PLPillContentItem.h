/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLPillContentWrapperView, NSString, UIView;

@interface PLPillContentItem : NSObject {

	BOOL _solo;
	PLPillContentWrapperView* _wrapperView;
	NSString* _text;
	unsigned long long _style;
	UIView* _accessoryView;
	NSString* _identifier;

}

@property (assign,nonatomic,__weak) PLPillContentWrapperView * wrapperView; 
@property (getter=isSolo,nonatomic,readonly) BOOL solo; 
@property (getter=_identifier,nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * text;                                            //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) unsigned long long style;                                   //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) UIView * accessoryView;                                     //@synthesize accessoryView=_accessoryView - In the implementation block
-(UIView *)accessoryView;
-(PLPillContentWrapperView *)wrapperView;
-(NSString *)text;
-(id)debugDescription;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(unsigned long long)style;
-(id)_identifier;
-(id)initWithText:(id)arg1 style:(unsigned long long)arg2 ;
-(BOOL)isSolo;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)initWithText:(id)arg1 ;
-(id)soloItem;
-(BOOL)isLikePillContentItem:(id)arg1 ;
-(void)setWrapperView:(PLPillContentWrapperView *)arg1 ;
-(id)initWithIdentifier:(id)arg1 text:(id)arg2 style:(unsigned long long)arg3 accessoryView:(id)arg4 ;
-(id)_initWithIdentifier:(id)arg1 text:(id)arg2 style:(unsigned long long)arg3 accessoryView:(id)arg4 solo:(BOOL)arg5 ;
-(id)initWithAccessoryView:(id)arg1 ;
-(id)initWithText:(id)arg1 style:(unsigned long long)arg2 accessoryView:(id)arg3 ;
-(id)itemWithText:(id)arg1 ;
-(id)itemWithStyle:(unsigned long long)arg1 ;
-(id)itemWithText:(id)arg1 style:(unsigned long long)arg2 ;
-(id)itemWithText:(id)arg1 style:(unsigned long long)arg2 accessoryView:(id)arg3 ;
@end
