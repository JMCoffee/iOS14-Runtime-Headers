/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFLogging.h>

@protocol HMFNetMonitorDelegate;
@class HMFNetAddress, NSString;

@interface HMFNetMonitor : HMFObject <HMFLogging> {

	os_unfair_lock_s _lock;
	BOOL _reachable;
	id<HMFNetMonitorDelegate> _delegate;
	HMFNetAddress* _netAddress;

}

@property (getter=isReachable) BOOL reachable; 
@property (__weak) id<HMFNetMonitorDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) HMFNetAddress * netAddress;              //@synthesize netAddress=_netAddress - In the implementation block
@property (readonly) unsigned long long reachabilityPath; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(HMFNetAddress *)netAddress;
-(void)setReachable:(BOOL)arg1 ;
-(id)initWithNetAddress:(id)arg1 ;
-(id)initWithNetService:(id)arg1 ;
-(unsigned long long)reachabilityPath;
-(BOOL)isReachable;
-(id)init;
-(void)setDelegate:(id<HMFNetMonitorDelegate>)arg1 ;
-(id<HMFNetMonitorDelegate>)delegate;
@end

