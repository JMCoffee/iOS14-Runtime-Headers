/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSInvocation, NSError;

@interface _EMRemoteInterfaceDistantObjectReattempt : NSObject {

	NSInvocation* _invocation;
	NSError* _error;

}

@property (readonly) NSInvocation * invocation;              //@synthesize invocation=_invocation - In the implementation block
@property (readonly) NSError * error;                        //@synthesize error=_error - In the implementation block
+(id)recordedAttemptWithOriginalInvocation:(id)arg1 target:(id)arg2 error:(id)arg3 ;
-(NSInvocation *)invocation;
-(void)perform;
-(id)debugDescription;
-(NSError *)error;
-(id)initWithOriginalInvocation:(id)arg1 target:(id)arg2 error:(id)arg3 ;
@end

