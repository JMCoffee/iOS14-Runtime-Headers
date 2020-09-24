/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:17 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GKContentRefresh <NSObject>
@optional
-(void)_gkSetContentsNeedUpdateWithHandler:(/*^block*/id)arg1;
-(void)_gkForceNextContentUpdate;

@required
-(void)_gkRefreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2;
-(BOOL)_gkShouldRefreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2;
-(void)_gkResetContents;
-(void)_gkUpdateContentsWithCompletionHandlerAndError:(/*^block*/id)arg1;

@end
