/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CTPlanTransferAttributes : NSObject <NSSecureCoding> {

	unsigned long long _transferCapability;
	unsigned long long _transferStatus;

}

@property (assign,nonatomic) unsigned long long transferCapability;              //@synthesize transferCapability=_transferCapability - In the implementation block
@property (assign,nonatomic) unsigned long long transferStatus;                  //@synthesize transferStatus=_transferStatus - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithTransferCapability:(unsigned long long)arg1 transferStatus:(unsigned long long)arg2 ;
-(unsigned long long)transferStatus;
-(void)setTransferCapability:(unsigned long long)arg1 ;
-(unsigned long long)transferCapability;
-(void)setTransferStatus:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
@end

