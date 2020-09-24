/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoftwareUpdateServices/SUInstallationConstraintMonitorBase.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface SUInstallationConstraintMonitorMediaPlaying : SUInstallationConstraintMonitorBase {

	BOOL _queue_mediaPlaying;
	NSObject*<OS_dispatch_queue> _mediaRemoteQueue;

}
-(void)dealloc;
-(unsigned long long)unsatisfiedConstraints;
-(id)initOnQueue:(id)arg1 withDownload:(id)arg2 ;
-(void)_handlePlaybackChangeNotification:(id)arg1 ;
-(void)_queue_pollSatisfied;
@end
