/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ASDTestFlightServiceExtensionRemoteXPCInterface <ASDTestFlightServiceExtensionXPCInterface>
@required
-(void)serviceExtensionTimeWillExpire;
-(void)serviceExtensionPerformCleanup;
-(void)didReceivePushToken:(id)arg1 reply:(/*^block*/id)arg2;
-(void)didReceivePushMessages:(id)arg1 reply:(/*^block*/id)arg2;
-(void)didReachTerminalPhaseWithBetaBundleID:(id)arg1 terminalPhase:(long long)arg2 error:(id)arg3 reply:(/*^block*/id)arg4;
-(void)reloadAppsFromServerWithReply:(/*^block*/id)arg1;

@end
