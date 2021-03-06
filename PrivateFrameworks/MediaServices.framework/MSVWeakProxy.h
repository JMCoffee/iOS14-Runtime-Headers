/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@class Protocol;

@interface MSVWeakProxy : NSProxy {

	id _object;
	Protocol* _protocol;

}

@property (nonatomic,__weak,readonly) id object;                 //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) Protocol * protocol;              //@synthesize protocol=_protocol - In the implementation block
+(id)proxyWithObject:(id)arg1 protocol:(id)arg2 ;
-(Protocol *)protocol;
-(void)forwardInvocation:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)object;
@end

