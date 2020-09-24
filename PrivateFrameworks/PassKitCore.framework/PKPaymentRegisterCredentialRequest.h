/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString, NSDictionary, PKAppletSubcredential;

@interface PKPaymentRegisterCredentialRequest : PKPaymentWebServiceRequest {

	NSString* _credentialIdentifier;
	NSDictionary* _metadata;
	NSDictionary* _registrationData;
	PKAppletSubcredential* _credential;

}

@property (nonatomic,retain) PKAppletSubcredential * credential;              //@synthesize credential=_credential - In the implementation block
+(id)requestMetadataFromCarKeyRegistrationMetadata:(id)arg1 withPartnerIdentifier:(id)arg2 ;
+(id)requestMetadataFromRegistrationMetadata:(id)arg1 withPartnerIdentifier:(id)arg2 ;
+(id)requestRegistrationDataFromRegistrationData:(id)arg1 ;
-(PKAppletSubcredential *)credential;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(id)requestBody;
-(void)setCredential:(PKAppletSubcredential *)arg1 ;
-(id)initWithCredential:(id)arg1 registrationData:(id)arg2 metadata:(id)arg3 ;
@end
