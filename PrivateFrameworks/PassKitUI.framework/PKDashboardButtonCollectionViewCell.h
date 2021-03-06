/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class UIActivityIndicatorView, UILabel, NSString;

@interface PKDashboardButtonCollectionViewCell : PKDashboardCollectionViewCell {

	UIActivityIndicatorView* _activityIndicator;
	UILabel* _titleLabel;
	BOOL _showActivity;
	BOOL _enabled;

}

@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) BOOL showActivity;              //@synthesize showActivity=_showActivity - In the implementation block
@property (assign,nonatomic) BOOL enabled;                   //@synthesize enabled=_enabled - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateTextColor;
-(NSString *)title;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(BOOL)enabled;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setShowActivity:(BOOL)arg1 ;
-(CGSize)_layoutWithBounds:(CGRect)arg1 ;
-(void)_resetFonts;
-(BOOL)showActivity;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)createSubviews;
@end

