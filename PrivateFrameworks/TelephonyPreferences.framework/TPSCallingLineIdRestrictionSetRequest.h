/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyPreferences/TelephonyPreferences-Structs.h>
#import <TelephonyPreferences/TPSCallingLineIdRestrictionRequest.h>

@interface TPSCallingLineIdRestrictionSetRequest : TPSCallingLineIdRestrictionRequest {

	long long _state;

}

@property (nonatomic,readonly) long long state;              //@synthesize state=_state - In the implementation block
+(id)unarchivedObjectClasses;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(long long)state;
-(BOOL)isEqualToRequest:(id)arg1 ;
-(id)initWithSubscriptionContext:(id)arg1 ;
-(id)initWithSubscriptionContext:(id)arg1 state:(long long)arg2 ;
@end

