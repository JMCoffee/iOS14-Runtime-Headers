/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface INHomeAttributeRange : NSObject <NSCopying, NSSecureCoding> {

	double _lowerValue;
	double _upperValue;

}

@property (nonatomic,readonly) double lowerValue;              //@synthesize lowerValue=_lowerValue - In the implementation block
@property (nonatomic,readonly) double upperValue;              //@synthesize upperValue=_upperValue - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(double)lowerValue;
-(double)upperValue;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithRange:(double)arg1 upperValue:(double)arg2 ;
-(unsigned long long)hash;
@end
