/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFLogging.h>
#import <HMFoundation/HMFObject.h>

@class HMFMessage, NSString, NSArray;

@interface HMFMessageFilter : HMFObject <HMFLogging, HMFObject> {

	HMFMessage* _message;

}

@property (copy,readonly) HMFMessage * message;                                   //@synthesize message=_message - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
+(id)logCategory;
+(id)policyClasses;
+(BOOL)canInitWithMessage:(id)arg1 ;
-(id)initWithMessage:(id)arg1 ;
-(NSArray *)attributeDescriptions;
-(id)init;
-(BOOL)acceptWithPolicies:(id)arg1 error:(id*)arg2 ;
-(id)logIdentifier;
-(HMFMessage *)message;
@end

