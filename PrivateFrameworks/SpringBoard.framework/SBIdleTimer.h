/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBIdleTimer <NSObject,NSCopying,BSDescriptionProviding>
@property (getter=isDisabled,nonatomic,readonly) BOOL disabled; 
@required
-(BOOL)isDisabled;
-(void)reset;
-(void)removeIdleTimerObserver:(id)arg1;
-(void)removeAllIdleTimerObservers;
-(void)addIdleTimerObserver:(id)arg1;

@end
