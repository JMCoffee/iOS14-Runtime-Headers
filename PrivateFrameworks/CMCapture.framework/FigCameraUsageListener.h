/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class NSString;

@interface FigCameraUsageListener : NSObject <MCProfileConnectionObserver> {

	BOOL _isProhibited;
	OpaqueFigSimpleMutexRef _isProhibitedLock;
	/*^block*/id _changeHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)dealloc;
-(id)initWithChangeHandler:(/*^block*/id)arg1 ;
@end

