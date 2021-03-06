/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <TVMLKit/TVViewLayout.h>

@class VUITextLayout, VUIButtonLayout;

@interface VUIUpsellOfferTransactionViewLayout : TVViewLayout {

	VUITextLayout* _disclaimerTextLayout;
	VUIButtonLayout* _buttonLayout;

}

@property (nonatomic,readonly) VUITextLayout * disclaimerTextLayout;              //@synthesize disclaimerTextLayout=_disclaimerTextLayout - In the implementation block
@property (nonatomic,readonly) VUIButtonLayout * buttonLayout;                    //@synthesize buttonLayout=_buttonLayout - In the implementation block
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
-(double)buttonHeight;
-(double)buttonSpacing;
-(id)init;
-(void)_configureLayout;
-(VUITextLayout *)disclaimerTextLayout;
-(VUIButtonLayout *)buttonLayout;
-(UIEdgeInsets)safeAreaInsetsPhone;
-(UIEdgeInsets)safeAreaInsetsPad;
-(double)disclaimerBottomMargin;
@end

