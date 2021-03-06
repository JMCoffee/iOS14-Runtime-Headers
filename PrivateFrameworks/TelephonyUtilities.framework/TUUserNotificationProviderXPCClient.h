/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TUUserNotificationsProviderXPCServer.h>
#import <libobjc.A.dylib/TUUserNotificationProviderDataSource.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, NSString;

@interface TUUserNotificationProviderXPCClient : NSObject <TUUserNotificationsProviderXPCServer, TUUserNotificationProviderDataSource> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                   //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)asynchronousServer;
+(id)userNotificationProviderServerXPCInterface;
+(void)setSynchronousServer:(id)arg1 ;
+(id)synchronousServer;
+(void)setAsynchronousServer:(id)arg1 ;
-(id)synchronousServerWithErrorHandler:(/*^block*/id)arg1 ;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(oneway void)momentCapturedForStreamToken:(long long)arg1 requesterID:(id)arg2 reply:(/*^block*/id)arg3 ;
-(NSXPCConnection *)xpcConnection;
-(void)dealloc;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)serverWithErrorHandler:(/*^block*/id)arg1 ;
@end

