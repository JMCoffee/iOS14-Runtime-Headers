/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRKIPAddressProviding.h>

@class NSString, NSSet;

@interface CRKSCBackedIPAddressProvider : NSObject <CRKIPAddressProviding> {

	NSSet* mInterfaceTypes;

}

@property (nonatomic,copy,readonly) NSString * IPAddress; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)ethernetIPAddressProvider;
+(id)WiFiIPAddressProvider;
-(id)init;
-(id)initWithInterfaceType:(id)arg1 ;
-(id)initWithInterfaceTypes:(id)arg1 ;
-(NSString *)IPAddress;
-(BOOL)isAllowedInterfaceType:(id)arg1 ;
@end
