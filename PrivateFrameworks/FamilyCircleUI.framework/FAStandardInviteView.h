/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/FAInviteViewProtocol.h>

@class UILabel, UIImageView, FAFamilySharingFeaturesView, NSString;

@interface FAStandardInviteView : UIView <FAInviteViewProtocol> {

	UILabel* _titleLabel;
	UIImageView* _familySharingLogo;
	UILabel* _inviteHeaderLabel;
	FAFamilySharingFeaturesView* _featuresView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(double)desiredHeightForWidth:(double)arg1 ;
-(double)_heightForText:(id)arg1 width:(double)arg2 ;
-(id)_labelWithCenteredText:(id)arg1 ;
-(double)_heightForTitle:(id)arg1 width:(double)arg2 ;
-(id)initWithInvite:(id)arg1 hideLocationSharing:(BOOL)arg2 ;
@end
