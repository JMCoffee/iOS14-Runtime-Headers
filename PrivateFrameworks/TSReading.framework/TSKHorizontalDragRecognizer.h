/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class UIScrollView;

@interface TSKHorizontalDragRecognizer : UIGestureRecognizer {

	CGPoint mStartPoint;
	UIScrollView* mContainingScrollView;

}

@property (assign,nonatomic) UIScrollView * containingScrollView; 
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setContainingScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)containingScrollView;
@end
