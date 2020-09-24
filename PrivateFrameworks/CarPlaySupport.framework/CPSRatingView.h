/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <UIKitCore/UIView.h>

@class UIStackView;

@interface CPSRatingView : UIView {

	UIStackView* _stackView;

}

@property (nonatomic,retain) UIStackView * stackView;              //@synthesize stackView=_stackView - In the implementation block
-(UIStackView *)stackView;
-(CGSize)intrinsicContentSize;
-(void)setStackView:(UIStackView *)arg1 ;
-(id)initWithInformationItem:(id)arg1 layout:(long long)arg2 ;
@end
