/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:49:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIStackView, TUICandidateLabel, NSLayoutConstraint, NSString, UIImageView, UIColor;

@interface PKPaletteReturnKeyButtonContentView : UIView {

	UIStackView* _stackView;
	TUICandidateLabel* _label;
	NSLayoutConstraint* _labelHeightConstraint;
	NSLayoutConstraint* _labelWidthConstraint;
	BOOL _useCompactLayout;
	NSString* _text;
	long long _layoutOrientation;
	UIImageView* _imageView;

}

@property (nonatomic,copy) NSString * text;                            //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) long long layoutOrientation;              //@synthesize layoutOrientation=_layoutOrientation - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                  //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) BOOL useCompactLayout;                    //@synthesize useCompactLayout=_useCompactLayout - In the implementation block
-(void)setLayoutOrientation:(long long)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setUseCompactLayout:(BOOL)arg1 ;
-(BOOL)useCompactLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)layoutOrientation;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)_updateUI;
-(UIColor *)textColor;
-(UIImageView *)imageView;
@end
