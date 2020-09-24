/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSDecimalNumber, NSString, NSDictionary;

@interface PKPaymentPrepareTransactionDetailsResponse : PKPaymentWebServiceResponse {

	NSDecimalNumber* _amount;
	NSString* _secureElementIdentifier;
	NSDictionary* _instructionsDictionary;

}

@property (nonatomic,readonly) NSDecimalNumber * amount;                           //@synthesize amount=_amount - In the implementation block
@property (nonatomic,readonly) NSString * secureElementIdentifier;                 //@synthesize secureElementIdentifier=_secureElementIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * instructionsDictionary;              //@synthesize instructionsDictionary=_instructionsDictionary - In the implementation block
-(NSString *)secureElementIdentifier;
-(NSDictionary *)instructionsDictionary;
-(id)initWithData:(id)arg1 ;
-(NSDecimalNumber *)amount;
@end
