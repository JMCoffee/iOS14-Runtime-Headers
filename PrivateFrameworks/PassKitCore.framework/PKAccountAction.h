/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDecimalNumber;

@interface PKAccountAction : NSObject <NSSecureCoding> {

	unsigned long long _actionType;
	NSString* _identifier;
	NSDecimalNumber* _amount;
	NSString* _currencyCode;
	unsigned long long _redemptionType;

}

@property (assign,nonatomic) unsigned long long actionType;                  //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,retain) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * amount;                       //@synthesize amount=_amount - In the implementation block
@property (nonatomic,retain) NSString * currencyCode;                        //@synthesize currencyCode=_currencyCode - In the implementation block
@property (assign,nonatomic) unsigned long long redemptionType;              //@synthesize redemptionType=_redemptionType - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)currencyCode;
-(unsigned long long)actionType;
-(NSString *)identifier;
-(unsigned long long)redemptionType;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setAmount:(NSDecimalNumber *)arg1 ;
-(void)setActionType:(unsigned long long)arg1 ;
-(void)setRedemptionType:(unsigned long long)arg1 ;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDecimalNumber *)amount;
@end
