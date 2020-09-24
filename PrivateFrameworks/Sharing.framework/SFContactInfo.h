/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:20 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SFContactInfo : NSObject <NSSecureCoding> {

	NSString* _contactIdentifier;
	NSString* _emailAddress;
	NSString* _phoneNumber;

}

@property (nonatomic,copy) NSString * contactIdentifier;              //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (nonatomic,copy) NSString * emailAddress;                   //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,copy) NSString * phoneNumber;                    //@synthesize phoneNumber=_phoneNumber - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(NSString *)phoneNumber;
-(NSString *)emailAddress;
-(void)setEmailAddress:(NSString *)arg1 ;
-(NSString *)contactIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setContactIdentifier:(NSString *)arg1 ;
@end
