/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class PKReaderModeAnimationView, PKReaderModeHeaderView, UIProgressView, NSString, UIImage;

@interface PKReaderModeProvisioningView : UIView {

	PKReaderModeAnimationView* _animationView;
	PKReaderModeHeaderView* _headerView;
	UIProgressView* _progressView;
	BOOL _isProvisioningToWatch;
	NSString* _cardPlacement;
	UIImage* _plasticCardImage;
	UIImage* _digitalCardImage;

}
-(void)setState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_loadAnimation;
-(void)setDigitalCardImage:(id)arg1 ;
-(void)setPlasticCardImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 context:(long long)arg2 product:(id)arg3 ;
-(id)initWithContext:(long long)arg1 product:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 product:(id)arg2 ;
-(void)setTransferringProgress:(double)arg1 duration:(double)arg2 ;
@end
