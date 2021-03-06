/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKSample.h>

@class NSMutableDictionary, NSUUID, HKCorrelationType, NSSet;

@interface HKCorrelation : HKSample {

	NSMutableDictionary* _objects;

}

@property (getter=_UUID,readonly) NSUUID * UUID; 
@property (readonly) HKCorrelationType * correlationType; 
@property (copy,readonly) NSSet * objects; 
+(BOOL)supportsSecureCoding;
+(id)correlationWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 objects:(id)arg4 device:(id)arg5 metadata:(id)arg6 ;
+(BOOL)_allowEmptyCorrelations;
+(id)correlationWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 objects:(id)arg4 ;
+(id)correlationWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 objects:(id)arg4 metadata:(id)arg5 ;
+(BOOL)_isConcreteObjectClass;
-(NSSet *)objects;
-(HKCorrelationType *)correlationType;
-(void)_addCorrelatedObjects:(id)arg1 ;
-(void)_addCorrelatedObject:(id)arg1 ;
-(BOOL)_containsObjects;
-(id)objectsForType:(id)arg1 ;
-(void)_removeAllCorrelatedObjects;
-(void)_filterCorrelatedObjectsWithFilterDictionary:(id)arg1 ;
-(BOOL)_correlatedObjectsMatchFilterDictionary:(id)arg1 ;
-(id)_init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_validateWithConfiguration:(HKObjectValidationConfiguration)arg1 ;
-(id)_allTypes;
-(id)description;
-(id)_UUID;
@end

