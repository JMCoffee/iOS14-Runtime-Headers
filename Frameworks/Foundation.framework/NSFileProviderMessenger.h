/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection, Protocol, NSFileProviderMessageInterface, NSLock;

@interface NSFileProviderMessenger : NSObject {

	NSXPCConnection* _conn;
	Protocol* _protocol;
	NSFileProviderMessageInterface* _interface;
	NSLock* _lock;
	BOOL _triedConnection;

}
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)invalidate;
-(void)dealloc;
-(id)initWithInterface:(id)arg1 protocol:(id)arg2 ;
@end
