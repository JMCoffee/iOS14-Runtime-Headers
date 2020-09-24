/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBStatusBarStateAggregatorPosting <NSObject>
@optional
-(void)statusBarStateAggregatorDidStopRequestingImmediateUpdates:(id)arg1;
-(void)statusBarStateAggregatorDidRequestImmediateUpdates:(id)arg1;

@required
-(void)statusBarStateAggregatorDidStartPost:(id)arg1;
-(void)statusBarStateAggregator:(id)arg1 didVisitItem:(int)arg2 withUpdates:(BOOL)arg3 toData:(const /*function pointer*/void**)arg4;
-(void)statusBarStateAggregatorDidFinishPost:(id)arg1 withData:(const /*function pointer*/void**)arg2 actions:(int)arg3;
-(void)statusBarStateAggregator:(id)arg1 didUpdateNonItemData:(const /*function pointer*/void**)arg2;

@end
