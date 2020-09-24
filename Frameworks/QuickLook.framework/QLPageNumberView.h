/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NSNumberFormatter;

@interface QLPageNumberView : UIView {

	long long _pageNumber;
	long long _pageCount;
	UILabel* _backgroundLabel;
	UILabel* _label;
	NSNumberFormatter* _indexFormatter;

}

@property (assign) long long pageNumber; 
@property (assign) long long pageCount; 
-(void)sizeToFit;
-(void)setPageNumber:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)_indexFormatter;
-(void)_updateString;
-(CGPathRef)_copyMutablePathForRoundedRect:(CGRect)arg1 radius:(double)arg2 inverted:(BOOL)arg3 ;
-(void)setPageCount:(long long)arg1 ;
-(long long)pageCount;
-(void)drawRect:(CGRect)arg1 ;
-(long long)pageNumber;
@end
