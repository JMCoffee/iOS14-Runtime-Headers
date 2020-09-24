/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBUILegibility.h>

@class UILabel, _UILegibilityView, NSString, UIFont, NSAttributedString, UIColor, _UILegibilitySettings;

@interface SBUILegibilityLabel : UIView <SBUILegibility> {

	UILabel* _lookasideLabel;
	_UILegibilityView* _legibilityView;
	BOOL _isDirty;
	double _strength;
	long long _options;
	double _scale;
	NSString* _string;
	UIFont* _font;
	NSAttributedString* _attributedText;
	UIColor* _textColorOverride;
	_UILegibilitySettings* _legibilitySettings;
	BOOL _isWaitingToMoveToWindow;

}

@property (nonatomic,copy) NSAttributedString * attributedText;                       //@synthesize attributedText=_attributedText - In the implementation block
@property (nonatomic,copy) NSString * string;                                         //@synthesize string=_string - In the implementation block
@property (nonatomic,copy) UIColor * textColor; 
@property (nonatomic,retain) UIFont * font;                                           //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) long long numberOfLines; 
@property (assign,nonatomic) BOOL adjustsFontSizeToFitWidth; 
@property (assign,nonatomic) double minimumScaleFactor; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) long long lineBreakMode; 
@property (assign,nonatomic) float hyphenationFactor; 
@property (nonatomic,readonly) UIEdgeInsets characterOverflowInsets; 
@property (nonatomic,readonly) double firstBaselineOffsetFromBottom; 
@property (nonatomic,readonly) double lastBaselineOffsetFromBottom; 
@property (nonatomic,readonly) double baselineOffset; 
@property (assign,nonatomic) double strength;                                         //@synthesize strength=_strength - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)hyphenationFactor;
-(long long)lineBreakMode;
-(NSString *)string;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(NSAttributedString *)attributedText;
-(id)viewForFirstBaselineLayout;
-(long long)numberOfLines;
-(void)setHyphenationFactor:(float)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(id)viewForLastBaselineLayout;
-(void)setLineBreakMode:(long long)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(long long)textAlignment;
-(void)setString:(NSString *)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setOptions:(long long)arg1 ;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)_needsColorImage;
-(void)setFrame:(CGRect)arg1 ;
-(void)_updateLegibilityView;
-(void)layoutSubviews;
-(UIFont *)font;
-(double)minimumScaleFactor;
-(BOOL)adjustsFontSizeToFitWidth;
-(double)lastBaselineOffsetFromBottom;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 string:(id)arg3 font:(id)arg4 options:(long long)arg5 ;
-(void)setMinimumScaleFactor:(double)arg1 ;
-(UIColor *)textColor;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)_markOurselfDirty;
-(id)initWithCoder:(id)arg1 ;
-(double)baselineOffset;
-(UIEdgeInsets)characterOverflowInsets;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 ;
-(double)firstBaselineOffsetFromBottom;
-(void)didMoveToWindow;
-(double)strength;
-(void)setStrength:(double)arg1 ;
-(void)_updateLabelForLegibilitySettings;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 string:(id)arg3 font:(id)arg4 ;
-(void)setFont:(UIFont *)arg1 ;
@end
