/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LocationSupport/LocationSupport-Structs.h>
#import <LocationSupport/CLSilo.h>

@class CLRunLoopSiloThread;

@interface CLRunLoopSilo : CLSilo {

	double _currentLatchedAbsoluteTimestamp;
	CLRunLoopSiloThread* _siloThread;
	BOOL _useCLPermissiveTimer;

}
-(id)runloop;
-(id)initWithIdentifier:(id)arg1 ;
-(void)updateLatchedAbsoluteTimestamp;
-(double)currentLatchedAbsoluteTimestamp;
-(void)afterInterval:(double)arg1 async:(/*^block*/id)arg2 ;
-(void)assertInside;
-(id)newTimer;
-(void)assertOutside;
-(void)async:(/*^block*/id)arg1 ;
-(void)sync:(/*^block*/id)arg1 ;
-(id)debugDescription;
-(id)getTimeCoercibleVariantInstance;
-(BOOL)isSuspended;
-(id)initWithUnderlyingRunLoop:(CFRunLoopRef)arg1 ;
-(void)suspend;
-(BOOL)inPermissiveMode;
-(id)initWithCurrentRunLoopAndIdentifier:(id)arg1 bePermissive:(BOOL)arg2 ;
-(void)resume;
-(id)initWithCurrentRunLoopAndIdentifier:(id)arg1 ;
@end
