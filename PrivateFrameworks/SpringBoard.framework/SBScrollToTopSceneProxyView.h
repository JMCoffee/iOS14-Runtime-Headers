/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/_UIScrollToTopView.h>

@protocol SBScrollToTopSceneProxyViewDelegate;
@class SBSceneHandle;

@interface SBScrollToTopSceneProxyView : UIView <_UIScrollToTopView> {

	SBSceneHandle* _sceneHandle;
	id<SBScrollToTopSceneProxyViewDelegate> _delegate;

}

@property (nonatomic,retain) SBSceneHandle * sceneHandle;                                          //@synthesize sceneHandle=_sceneHandle - In the implementation block
@property (assign,nonatomic,__weak) id<SBScrollToTopSceneProxyViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(SBSceneHandle *)sceneHandle;
-(BOOL)isScrollEnabled;
-(void)_scrollToTopFromTouchAtScreenLocation:(CGPoint)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)setSceneHandle:(SBSceneHandle *)arg1 ;
-(void)setDelegate:(id<SBScrollToTopSceneProxyViewDelegate>)arg1 ;
-(id<SBScrollToTopSceneProxyViewDelegate>)delegate;
-(void)didMoveToWindow;
-(void)willMoveToWindow:(id)arg1 ;
@end
