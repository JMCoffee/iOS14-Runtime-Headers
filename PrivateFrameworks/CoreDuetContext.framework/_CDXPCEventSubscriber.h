/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject, NSString;

@interface _CDXPCEventSubscriber : NSObject {

	unsigned _uid;
	unsigned long long _token;
	NSObject*<OS_xpc_object> _descriptor;
	NSString* _streamName;

}

@property (nonatomic,readonly) unsigned long long token;                         //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) unsigned uid;                                     //@synthesize uid=_uid - In the implementation block
@property (nonatomic,readonly) NSString * streamName;                            //@synthesize streamName=_streamName - In the implementation block
@property (nonatomic,readonly) NSString * clientIdentifier; 
-(id)initWithToken:(unsigned long long)arg1 descriptor:(id)arg2 userID:(unsigned)arg3 streamName:(id)arg4 ;
-(NSObject*<OS_xpc_object>)descriptor;
-(NSString *)clientIdentifier;
-(unsigned long long)token;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)streamName;
-(unsigned long long)hash;
-(id)description;
-(unsigned)uid;
@end

