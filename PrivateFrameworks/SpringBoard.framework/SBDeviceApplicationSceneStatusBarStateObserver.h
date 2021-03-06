/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBDeviceApplicationSceneStatusBarStateObserver <NSObject>
@optional
-(void)didInvalidateStatusBarDescriptionForSceneWithIdentifier:(id)arg1;
-(void)sceneWithIdentifier:(id)arg1 didChangeStatusBarOrientationTo:(long long)arg2;
-(void)sceneWithIdentifier:(id)arg1 didChangeStatusBarAlphaTo:(double)arg2;
-(void)sceneWithIdentifier:(id)arg1 didChangeSceneInterfaceOrientationTo:(long long)arg2;
-(void)sceneWithIdentifier:(id)arg1 didChangeStatusBarStyleTo:(long long)arg2;
-(void)sceneWithIdentifier:(id)arg1 didChangeStatusBarAvoidanceFrameTo:(CGRect)arg2;
-(void)sceneWithIdentifier:(id)arg1 didChangeStatusBarHiddenTo:(BOOL)arg2 withAnimation:(long long)arg3;
-(void)sceneWithIdentifier:(id)arg1 didChangeStatusBarStyleTo:(long long)arg2 forPartWithIdentifier:(id)arg3;
-(void)sceneWithIdentifier:(id)arg1 didChangeStatusBarStyleOverridesToSuppressTo:(int)arg2;

@end

