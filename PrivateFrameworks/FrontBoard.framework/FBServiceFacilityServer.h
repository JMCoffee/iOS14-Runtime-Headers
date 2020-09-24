/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/BSServiceConnectionListenerDelegate.h>
#import <libobjc.A.dylib/FBSServiceFacilityManaging.h>

@class BSServiceDomainSpecification, BSServiceConnectionListener, NSMutableDictionary, NSMutableSet, NSString;

@interface FBServiceFacilityServer : NSObject <BSServiceConnectionListenerDelegate, FBSServiceFacilityManaging> {

	os_unfair_lock_s _lock;
	BSServiceDomainSpecification* _domain;
	BSServiceConnectionListener* _serviceListener;
	NSMutableDictionary* _lock_facilitiesByIdentifier;
	NSMutableSet* _lock_completedMilestones;
	NSMutableDictionary* _lock_suspendedFacilitiesByIdentifier;
	NSMutableSet* _lock_pendingConnects;

}

@property (nonatomic,readonly) BSServiceDomainSpecification * domain;              //@synthesize domain=_domain - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3 ;
-(void)run;
-(void)removeFacility:(id)arg1 ;
-(void)dealloc;
-(void)noteMilestoneReached:(id)arg1 ;
-(BOOL)_lock_areFacilityPrerequisitesSatisfied:(id)arg1 ;
-(void)_lock_evaluateSuspendedFacility:(id)arg1 ;
-(id)init;
-(BSServiceDomainSpecification *)domain;
-(void)_facilityQueue_facility:(id)arg1 handleMessage:(id)arg2 client:(id)arg3 ;
-(id)_initWithDomain:(id)arg1 ;
-(void)addFacility:(id)arg1 ;
@end
