/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIScrollView.h>

@class UIPageController;

@interface UIPageControllerScrollView : UIScrollView {

	UIPageController* _pageController;

}

@property (assign,nonatomic) UIPageController * pageController;              //@synthesize pageController=_pageController - In the implementation block
-(void)_scrollViewAnimationEnded:(id)arg1 finished:(BOOL)arg2 ;
-(UIPageController *)pageController;
-(void)setPageController:(UIPageController *)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)arg1 ;
-(unsigned long long)_abuttedPagingEdges;
-(void)_scrollViewWillBeginDragging;
-(void)_scrollViewDidEndDecelerating;
@end
