/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:49:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/IOSurface.framework/IOSurface
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
#import <IOSurface/IOSurface-Structs.h>
@class NSMutableDictionary, NSObject;

@interface IOSurfaceRemoteRemoteClient : NSObject {

	int _pid;
	NSMutableDictionary* _surfaceStates;
	NSObject*<OS_xpc_object> _remoteConnection;
	NSObject*<OS_dispatch_queue> _disconnectedQueue;
	/*^block*/id _disconnectedHandler;

}

@property (assign,nonatomic) int pid;                                                     //@synthesize pid=_pid - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * surfaceStates;                         //@synthesize surfaceStates=_surfaceStates - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> remoteConnection;                   //@synthesize remoteConnection=_remoteConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> disconnectedQueue;              //@synthesize disconnectedQueue=_disconnectedQueue - In the implementation block
@property (nonatomic,copy) id disconnectedHandler;                                        //@synthesize disconnectedHandler=_disconnectedHandler - In the implementation block
-(void)dealloc;
-(void)_handleMessage:(id)arg1 ;
-(void)setPid:(int)arg1 ;
-(void)_handleError:(id)arg1 ;
-(int)pid;
-(id)description;
-(id)initWithRemoteConnection:(id)arg1 disconnectedQueue:(id)arg2 disconnectedHandler:(/*^block*/id)arg3 ;
-(void)setSurfaceStates:(NSMutableDictionary *)arg1 ;
-(void)setDisconnectedQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDisconnectedHandler:(id)arg1 ;
-(void)setRemoteConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_xpc_object>)remoteConnection;
-(NSObject*<OS_dispatch_queue>)disconnectedQueue;
-(id)disconnectedHandler;
-(NSMutableDictionary *)surfaceStates;
-(BOOL)_removeSurface:(unsigned)arg1 ;
-(IOSurfaceClientRef)_getClient:(unsigned)arg1 inboundExtradata:(id)arg2 outboundExtraData:(id*)arg3 ;
-(void)_addSurface:(IOSurfaceClientRef)arg1 mappedAddress:(void*)arg2 mappedSize:(unsigned long long)arg3 extraData:(id)arg4 ;
@end
