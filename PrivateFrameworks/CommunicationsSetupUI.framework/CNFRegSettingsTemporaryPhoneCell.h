/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class UILabel;

@interface CNFRegSettingsTemporaryPhoneCell : PSTableCell {

	UILabel* _phoneNumberLabel;
	UILabel* _expirationLabel;
	UILabel* _descriptionLabel;

}

@property (nonatomic,retain) UILabel * phoneNumberLabel;              //@synthesize phoneNumberLabel=_phoneNumberLabel - In the implementation block
@property (nonatomic,retain) UILabel * expirationLabel;               //@synthesize expirationLabel=_expirationLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;              //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UILabel *)descriptionLabel;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(void)setPhoneNumberLabel:(UILabel *)arg1 ;
-(UILabel *)phoneNumberLabel;
-(void)setExpirationLabel:(UILabel *)arg1 ;
-(UILabel *)expirationLabel;
-(unsigned long long)daysUntilExpiration:(id)arg1 ;
@end

