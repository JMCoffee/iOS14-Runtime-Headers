/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClipUIServices.framework/ClipUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClipUIServices/ClipUIServices-Structs.h>
#import <UIKitCore/UIView.h>

@class CPSVibrantLabel, NSString;

@interface CPSAppClipUnavailableView : UIView {

	CPSVibrantLabel* _reasonLabel;

}

@property (assign,nonatomic) NSString * reasonString; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_setUpViews;
-(NSString *)reasonString;
-(void)setReasonString:(NSString *)arg1 ;
@end

