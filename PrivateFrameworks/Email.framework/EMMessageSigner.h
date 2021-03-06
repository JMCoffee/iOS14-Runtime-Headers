/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class EMCertificateTrustInformation, NSError;

@interface EMMessageSigner : NSObject <NSSecureCoding> {

	EMCertificateTrustInformation* _signingCertificateTrustInfo;
	EMCertificateTrustInformation* _encryptionCertificateTrustInfo;
	NSError* _error;

}

@property (nonatomic,retain) EMCertificateTrustInformation * signingCertificateTrustInfo;                 //@synthesize signingCertificateTrustInfo=_signingCertificateTrustInfo - In the implementation block
@property (nonatomic,retain) EMCertificateTrustInformation * encryptionCertificateTrustInfo;              //@synthesize encryptionCertificateTrustInfo=_encryptionCertificateTrustInfo - In the implementation block
@property (nonatomic,retain) NSError * error;                                                             //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) BOOL hasSeparateSigningAndEncryptionCertificates; 
+(BOOL)supportsSecureCoding;
-(void)reevaluateTrustWithNetworkAccessAllowed;
-(id)initWithSigningTrust:(id)arg1 encryptionTrust:(id)arg2 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(EMCertificateTrustInformation *)signingCertificateTrustInfo;
-(EMCertificateTrustInformation *)encryptionCertificateTrustInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)hasSeparateSigningAndEncryptionCertificates;
-(void)evaluateTrustsWithOptions:(unsigned long long)arg1 ;
-(void)setSigningCertificateTrustInfo:(EMCertificateTrustInformation *)arg1 ;
-(void)setEncryptionCertificateTrustInfo:(EMCertificateTrustInformation *)arg1 ;
@end

