/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
@class NSObject;

@interface MPCAssistantPause : NSObject {

	NSObject*<OS_dispatch_queue> deviceUIDsQueue;

}
-(void)pauseDevicesByUID:(id)arg1 withRefId:(id)arg2 audioRoutingInfo:(SCD_Struct_MP7)arg3 source:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)pauseDevicesByUID:(id)arg1 withRefId:(id)arg2 audioRoutingInfo:(SCD_Struct_MP7)arg3 completion:(/*^block*/id)arg4 ;
@end

