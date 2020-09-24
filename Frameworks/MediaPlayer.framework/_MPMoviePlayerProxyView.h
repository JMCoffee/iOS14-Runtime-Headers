/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/UIView.h>

@class MPMoviePlayerController;

@interface _MPMoviePlayerProxyView : UIView {

	MPMoviePlayerController* _controller;

}

@property (nonatomic,__weak,readonly) MPMoviePlayerController * controller;              //@synthesize controller=_controller - In the implementation block
-(void)willMoveToSuperview:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithMoviePlayerController:(id)arg1 ;
-(void)_updateContainmentInWindow:(id)arg1 superview:(id)arg2 ;
-(void)willMoveToWindow:(id)arg1 ;
-(MPMoviePlayerController *)controller;
@end
