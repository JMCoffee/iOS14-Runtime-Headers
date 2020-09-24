/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class UILabel, UIImageView, NSString, UIImage;

@interface PKSearchSuggestionCollectionViewCell : PKDashboardCollectionViewCell {

	UILabel* _labelSuggestion;
	UIImageView* _imageViewIcon;
	BOOL _isTemplateLayout;
	NSString* _suggestion;
	UIImage* _icon;

}

@property (nonatomic,retain) NSString * suggestion;              //@synthesize suggestion=_suggestion - In the implementation block
@property (nonatomic,retain) UIImage * icon;                     //@synthesize icon=_icon - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImage *)icon;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)setSuggestion:(NSString *)arg1 ;
-(NSString *)suggestion;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)resetFonts;
-(CGSize)_layoutWithBounds:(CGRect)arg1 ;
-(void)setIcon:(UIImage *)arg1 ;
@end
