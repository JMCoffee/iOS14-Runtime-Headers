/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CXCallObserverDelegate.h>

@class CXCallObserver, NSString;

@interface _ASIncomingCallObserver : NSObject <CXCallObserverDelegate> {

	CXCallObserver* _callObserver;
	/*^block*/id _incomingCallHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)callObserverWithBlock:(/*^block*/id)arg1 ;
-(void)callObserver:(id)arg1 callChanged:(id)arg2 ;
-(id)_initWithBlock:(/*^block*/id)arg1 ;
@end

