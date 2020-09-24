/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HFMediaValueSource <NSObject>
@required
-(BOOL)hasPendingWritesForRouteID:(id)arg1;
-(long long)lastPlaybackStateForProfileForRouteID:(id)arg1;
-(void)clearCachedPlaybackStateWriteErrorWithReason:(id)arg1 notifyDelegates:(BOOL)arg2;
-(id)mediaProfileContainerForRouteID:(id)arg1;
-(id)writePlaybackState:(long long)arg1 playbackArchive:(id)arg2 forRouteID:(id)arg3;
-(id)cachedPlaybackStateWriteErrorForRouteID:(id)arg1;

@end
