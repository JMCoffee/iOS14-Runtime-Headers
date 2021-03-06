/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface CSActivationXPCClient : NSObject {

	NSObject*<OS_xpc_object> _xpcConnection;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
-(void)setXpcConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(void)connect;
-(void)notifyActivationEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSObject*<OS_xpc_object>)xpcConnection;
-(void)dealloc;
-(id)init;
-(void)_handleListenerEvent:(id)arg1 ;
-(id)_decodeError:(id)arg1 ;
-(void)_sendMessage:(id)arg1 connection:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleListenerError:(id)arg1 ;
@end

