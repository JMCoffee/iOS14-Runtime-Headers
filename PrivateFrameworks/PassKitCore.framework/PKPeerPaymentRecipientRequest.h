/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSString;

@interface PKPeerPaymentRecipientRequest : PKPeerPaymentWebServiceRequest {

	NSString* _recipientAddress;
	NSString* _senderAddress;
	unsigned long long _recipientAddressSource;

}

@property (nonatomic,copy) NSString * recipientAddress;                              //@synthesize recipientAddress=_recipientAddress - In the implementation block
@property (nonatomic,copy) NSString * senderAddress;                                 //@synthesize senderAddress=_senderAddress - In the implementation block
@property (assign,nonatomic) unsigned long long recipientAddressSource;              //@synthesize recipientAddressSource=_recipientAddressSource - In the implementation block
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 deviceIdentifier:(id)arg3 ;
-(void)setRecipientAddressSource:(unsigned long long)arg1 ;
-(unsigned long long)recipientAddressSource;
-(void)setSenderAddress:(NSString *)arg1 ;
-(void)setRecipientAddress:(NSString *)arg1 ;
-(NSString *)senderAddress;
-(NSString *)recipientAddress;
@end

