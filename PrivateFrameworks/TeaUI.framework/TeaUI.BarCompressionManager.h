/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TeaUI/TeaUI-Structs.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/TUDynamicBarAnimatorDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>

@interface TeaUI.BarCompressionManager : NSObject <UIScrollViewDelegate, TUDynamicBarAnimatorDelegate, UITableViewDelegate, UICollectionViewDelegate> {

	 delegate;
	 isEnabled;
	 scrollView;
	 proxyMultiDelegate;
	 barAnimator;
	 navigationBarAnimation;
	 toolbarAnimation;
	 barState;
	 sceneStateManager;
	 observingToken;
	 lastContentOffset;
	 initialContentOffset;
	 scrollDebounce;

}
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint*)arg3 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)dynamicBarAnimatorWillLeaveSteadyState:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(void)dynamicBarAnimatorOutputsDidChange:(id)arg1 ;
-(void)dynamicBarAnimatorWillEnterSteadyState:(id)arg1 ;
-(BOOL)dynamicBarAnimator:(id)arg1 canHideBarsByDraggingWithOffset:(double)arg2 ;
-(id)init;
-(void)voiceOverStatusDidChange;
@end
