/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:26 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedDataReset.framework/EmbeddedDataReset
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DDRClientObserverProtocol <NSObject>
@required
-(void)didCompleteDataResetMode:(long long)arg1 withError:(id)arg2 completion:(/*^block*/id)arg3;
-(void)willBeginDataResetWithMode:(long long)arg1;
-(void)didBeginDataResetWithMode:(long long)arg1;

@end
