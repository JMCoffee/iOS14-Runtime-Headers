/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentRequestUpdate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, PKPeerPaymentQuote, NSString;

@interface PKPaymentRequestPaymentMethodUpdate : PKPaymentRequestUpdate <NSSecureCoding> {

	NSArray* _errors;
	PKPeerPaymentQuote* _peerPaymentQuote;
	NSString* _installmentGroupIdentifier;

}

@property (nonatomic,retain) PKPeerPaymentQuote * peerPaymentQuote;              //@synthesize peerPaymentQuote=_peerPaymentQuote - In the implementation block
@property (nonatomic,copy) NSString * installmentGroupIdentifier;                //@synthesize installmentGroupIdentifier=_installmentGroupIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * errors;                                     //@synthesize errors=_errors - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithPaymentSummaryItems:(id)arg1 ;
-(NSString *)installmentGroupIdentifier;
-(void)setInstallmentGroupIdentifier:(NSString *)arg1 ;
-(NSArray *)errors;
-(PKPeerPaymentQuote *)peerPaymentQuote;
-(id)initWithErrors:(id)arg1 paymentSummaryItems:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPeerPaymentQuote:(PKPeerPaymentQuote *)arg1 ;
-(void)setErrors:(NSArray *)arg1 ;
@end
