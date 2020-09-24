/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBViewControllerInteractiveTransitioning.h>

@protocol SBViewControllerContextTransitioning, UIViewControllerAnimatedTransitioning;
@class NSString;

@interface SBSpotlightTransitionInteractor : NSObject <SBViewControllerInteractiveTransitioning> {

	id<SBViewControllerContextTransitioning> _transitionContext;
	id<UIViewControllerAnimatedTransitioning> _animator;
	double _completionSpeed;
	long long _completionCurve;

}

@property (assign,nonatomic) double completionSpeed;                    //@synthesize completionSpeed=_completionSpeed - In the implementation block
@property (assign,nonatomic) long long completionCurve;                 //@synthesize completionCurve=_completionCurve - In the implementation block
@property (nonatomic,readonly) BOOL wantsInteractiveStart; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancelTransition;
-(long long)completionCurve;
-(void)updateTransition:(double)arg1 ;
-(void)setCompletionSpeed:(double)arg1 ;
-(id)initWithAnimator:(id)arg1 ;
-(void)startInteractiveTransition:(id)arg1 ;
-(void)finishInteractiveTransition;
-(double)completionSpeed;
-(id)init;
-(void)setCompletionCurve:(long long)arg1 ;
@end
