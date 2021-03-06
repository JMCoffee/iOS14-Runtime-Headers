/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AVTTransitionScheduler.h>

@interface AVTSynchronousTransitionScheduler : NSObject <AVTTransitionScheduler> {

	BOOL _isRunningEvent;
	/*^block*/id _eventHandler;

}

@property (assign,nonatomic) BOOL isRunningEvent;                 //@synthesize isRunningEvent=_isRunningEvent - In the implementation block
@property (nonatomic,copy,readonly) id eventHandler;              //@synthesize eventHandler=_eventHandler - In the implementation block
-(id)eventHandler;
-(id)initWithEventHandler:(/*^block*/id)arg1 ;
-(void)stop;
-(BOOL)isRunningEvent;
-(void)setIsRunningEvent:(BOOL)arg1 ;
-(void)scheduleEvent;
-(void)didCompleteEvent;
@end

