/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UIView, UIActivityIndicatorView, UILabel, NSString;

@interface HRWDSpinnerTableViewCell : UITableViewCell {

	UIView* _contentContainerView;
	UIActivityIndicatorView* _spinner;
	UILabel* _waitingReasonLabel;

}

@property (retain) UIView * contentContainerView;                   //@synthesize contentContainerView=_contentContainerView - In the implementation block
@property (retain) UIActivityIndicatorView * spinner;               //@synthesize spinner=_spinner - In the implementation block
@property (retain) UILabel * waitingReasonLabel;                    //@synthesize waitingReasonLabel=_waitingReasonLabel - In the implementation block
@property (nonatomic,retain) NSString * waitingReason; 
+(id)defaultReuseIdentifier;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIActivityIndicatorView *)spinner;
-(UIView *)contentContainerView;
-(void)prepareForReuse;
-(void)setupConstraints;
-(void)setContentContainerView:(UIView *)arg1 ;
-(void)setupSubviews;
-(NSString *)waitingReason;
-(UILabel *)waitingReasonLabel;
-(void)setWaitingReasonLabel:(UILabel *)arg1 ;
-(void)setWaitingReason:(NSString *)arg1 ;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
@end
