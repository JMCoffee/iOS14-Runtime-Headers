/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class ACAccount, NSString, AMSAuthenticateOptions, NSDictionary;

@interface AMSAuthenticateRequest : NSObject <NSSecureCoding> {

	ACAccount* _account;
	NSString* _logKey;
	AMSAuthenticateOptions* _options;
	NSDictionary* _userInfo;

}

@property (nonatomic,retain) ACAccount * account;                           //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSString * logKey;                             //@synthesize logKey=_logKey - In the implementation block
@property (nonatomic,retain) AMSAuthenticateOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                       //@synthesize userInfo=_userInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)logKey;
-(void)setLogKey:(NSString *)arg1 ;
-(void)setOptions:(AMSAuthenticateOptions *)arg1 ;
-(AMSAuthenticateOptions *)options;
-(void)setAccount:(ACAccount *)arg1 ;
-(ACAccount *)account;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)userInfo;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithAccount:(id)arg1 options:(id)arg2 ;
-(id)initWithDSID:(id)arg1 altDSID:(id)arg2 username:(id)arg3 options:(id)arg4 ;
-(id)description;
@end
