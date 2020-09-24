/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/RPAuthenticatable.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSXPCConnection, NSString, NSObject;

@interface RPRemoteDisplayServer : NSObject <NSSecureCoding, RPAuthenticatable> {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSMutableDictionary* _sessions;
	NSXPCConnection* _xpcCnx;
	unsigned _pairSetupFlags;
	unsigned _pairVerifyFlags;
	int _passwordType;
	int _passwordTypeActual;
	unsigned _internalAuthFlags;
	NSString* _password;
	/*^block*/id _authCompletionHandler;
	/*^block*/id _showPasswordHandler;
	/*^block*/id _hidePasswordHandler;
	/*^block*/id _promptForPasswordHandler;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	/*^block*/id _sessionStartHandler;
	/*^block*/id _sessionEndedHandler;

}

@property (nonatomic,readonly) unsigned internalAuthFlags;                            //@synthesize internalAuthFlags=_internalAuthFlags - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) id sessionStartHandler;                                    //@synthesize sessionStartHandler=_sessionStartHandler - In the implementation block
@property (nonatomic,copy) id sessionEndedHandler;                                    //@synthesize sessionEndedHandler=_sessionEndedHandler - In the implementation block
@property (assign,nonatomic) unsigned pairSetupFlags;                                 //@synthesize pairSetupFlags=_pairSetupFlags - In the implementation block
@property (assign,nonatomic) unsigned pairVerifyFlags;                                //@synthesize pairVerifyFlags=_pairVerifyFlags - In the implementation block
@property (nonatomic,copy) NSString * password;                                       //@synthesize password=_password - In the implementation block
@property (assign,nonatomic) int passwordType;                                        //@synthesize passwordType=_passwordType - In the implementation block
@property (nonatomic,readonly) int passwordTypeActual;                                //@synthesize passwordTypeActual=_passwordTypeActual - In the implementation block
@property (nonatomic,copy) id authCompletionHandler;                                  //@synthesize authCompletionHandler=_authCompletionHandler - In the implementation block
@property (nonatomic,copy) id showPasswordHandler;                                    //@synthesize showPasswordHandler=_showPasswordHandler - In the implementation block
@property (nonatomic,copy) id hidePasswordHandler;                                    //@synthesize hidePasswordHandler=_hidePasswordHandler - In the implementation block
@property (nonatomic,copy) id promptForPasswordHandler;                               //@synthesize promptForPasswordHandler=_promptForPasswordHandler - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)tryPassword:(id)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 reactivate:(BOOL)arg2 ;
-(unsigned)pairSetupFlags;
-(void)setShowPasswordHandler:(id)arg1 ;
-(id)authCompletionHandler;
-(unsigned)pairVerifyFlags;
-(id)showPasswordHandler;
-(id)invalidationHandler;
-(int)passwordType;
-(void)setPairVerifyFlags:(unsigned)arg1 ;
-(void)setHidePasswordHandler:(id)arg1 ;
-(void)setPromptForPasswordHandler:(id)arg1 ;
-(void)setPasswordType:(int)arg1 ;
-(id)hidePasswordHandler;
-(void)setPairSetupFlags:(unsigned)arg1 ;
-(void)invalidate;
-(id)promptForPasswordHandler;
-(int)passwordTypeActual;
-(void)_ensureXPCStarted;
-(void)setAuthCompletionHandler:(id)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_invalidated;
-(id)sessionEndedHandler;
-(id)interruptionHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)init;
-(void)_interrupted;
-(unsigned)internalAuthFlags;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setSessionEndedHandler:(id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(id)description;
-(id)sessionStartHandler;
-(void)setSessionStartHandler:(id)arg1 ;
-(void)remoteDisplayShowPassword:(id)arg1 flags:(unsigned)arg2 ;
-(void)remoteDisplayHidePasswordWithFlags:(unsigned)arg1 ;
-(void)remoteDisplayStartServerSessionID:(id)arg1 device:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remoteDisplaySessionEndedWithID:(id)arg1 ;
-(void)remoteDisplayReceivedEventID:(id)arg1 event:(id)arg2 options:(id)arg3 sessionID:(id)arg4 ;
-(void)remoteDisplayReceivedRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(/*^block*/id)arg4 sessionID:(id)arg5 ;
@end
