/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLProtectionSpace, NSDictionary, NSURLCredential;

@interface WBSProtectionSpaceMatch : NSObject {

	NSURLProtectionSpace* _protectionSpace;
	NSDictionary* _credentials;
	NSURLCredential* _defaultCredential;
	long long _matchLevel;

}

@property (nonatomic,readonly) NSURLProtectionSpace * protectionSpace;              //@synthesize protectionSpace=_protectionSpace - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * credentials;                     //@synthesize credentials=_credentials - In the implementation block
@property (nonatomic,readonly) NSURLCredential * defaultCredential;                 //@synthesize defaultCredential=_defaultCredential - In the implementation block
@property (nonatomic,readonly) long long matchLevel;                                //@synthesize matchLevel=_matchLevel - In the implementation block
-(NSURLCredential *)defaultCredential;
-(NSURLProtectionSpace *)protectionSpace;
-(long long)matchLevel;
-(id)initWithProtectionSpace:(id)arg1 credentials:(id)arg2 defaultCredential:(id)arg3 matchLevel:(long long)arg4 ;
-(NSDictionary *)credentials;
@end

