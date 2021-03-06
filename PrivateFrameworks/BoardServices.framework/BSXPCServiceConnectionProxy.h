/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue, BSServiceDispatchingQueue;
@class BSObjCProtocol, BSXPCServiceConnection, NSObject;

@interface BSXPCServiceConnectionProxy : NSObject {

	BSObjCProtocol* _remoteProtocol;
	BSObjCProtocol* _localProtocol;
	BSXPCServiceConnection* _connection;
	NSObject*<OS_xpc_object> _XPCConnection;
	NSObject*<OS_dispatch_queue> _XPCConnectionTargetQueue;
	id<BSServiceDispatchingQueue> _replyQueue;

}
-(void)dealloc;
@end

