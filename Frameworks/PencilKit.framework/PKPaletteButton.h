/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:49:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/PKPaletteViewSizeScaling.h>

@class UIButton, NSHashTable, NSString;

@interface PKPaletteButton : UIControl <PKPaletteViewSizeScaling> {

	BOOL _useCompactLayout;
	double _scalingFactor;
	UIButton* _button;
	NSHashTable* _observers;

}

@property (nonatomic,retain) UIButton * button;                     //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;               //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) BOOL useCompactLayout;                 //@synthesize useCompactLayout=_useCompactLayout - In the implementation block
@property (assign,nonatomic) double scalingFactor;                  //@synthesize scalingFactor=_scalingFactor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)plusButton;
+(BOOL)_preventsAppearanceProxyCustomization;
+(id)undoButton;
+(id)keyboardButton;
+(id)returnKeyButton;
+(id)redoButton;
+(id)ellipsisButton;
+(id)UCBButton;
+(id)emojiKeyboardButton;
-(id)_backgroundColor;
-(double)scalingFactor;
-(id)initWithImage:(id)arg1 ;
-(NSHashTable *)observers;
-(void)setUseCompactLayout:(BOOL)arg1 ;
-(BOOL)useCompactLayout;
-(CGSize)intrinsicContentSize;
-(void)setButton:(UIButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(UIButton *)button;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)_updateUI;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)setScalingFactor:(double)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)removeIntrinsicContentSizeObserver:(id)arg1 ;
-(void)addIntrinsicContentSizeObserver:(id)arg1 ;
-(id)_tintColorForCurrentState;
-(void)_notifyIntrinsicContentSizeDidChange;
-(CGAffineTransform)_buttonTransform;
@end
