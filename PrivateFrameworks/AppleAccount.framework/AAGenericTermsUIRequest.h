/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:13 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class NSDictionary, ACAccount;

@interface AAGenericTermsUIRequest : AARequest {

	BOOL _preferPassword;
	NSDictionary* _requestDictionary;
	ACAccount* _account;

}

@property (nonatomic,readonly) NSDictionary * requestDictionary;              //@synthesize requestDictionary=_requestDictionary - In the implementation block
@property (nonatomic,readonly) ACAccount * account;                           //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) BOOL preferPassword;                             //@synthesize preferPassword=_preferPassword - In the implementation block
+(Class)responseClass;
-(id)urlString;
-(id)urlRequest;
-(id)initWithAccount:(id)arg1 parameters:(id)arg2 ;
-(NSDictionary *)requestDictionary;
-(ACAccount *)account;
-(id)initWithParameters:(id)arg1 ;
-(id)initWithAccount:(id)arg1 parameters:(id)arg2 preferPassword:(BOOL)arg3 ;
-(id)_requestParamsForTermsEntries:(id)arg1 ;
-(id)initWithAccount:(id)arg1 termsEntries:(id)arg2 ;
-(BOOL)preferPassword;
-(void)setPreferPassword:(BOOL)arg1 ;
@end

