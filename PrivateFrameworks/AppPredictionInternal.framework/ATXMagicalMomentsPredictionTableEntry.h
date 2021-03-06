/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class ATXMagicalMomentsPrediction, NSCompoundPredicate;

@interface ATXMagicalMomentsPredictionTableEntry : NSObject <NSSecureCoding> {

	ATXMagicalMomentsPrediction* _prediction;
	NSCompoundPredicate* _compoundPredicate;

}

@property (nonatomic,readonly) ATXMagicalMomentsPrediction * prediction;              //@synthesize prediction=_prediction - In the implementation block
@property (nonatomic,readonly) NSCompoundPredicate * compoundPredicate;               //@synthesize compoundPredicate=_compoundPredicate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)compoundPredicateFromPredicateArray:(id)arg1 ;
-(id)init;
-(NSCompoundPredicate *)compoundPredicate;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(ATXMagicalMomentsPrediction *)prediction;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithPrediction:(id)arg1 applicableCompoundPredicate:(id)arg2 ;
-(id)initWithPrediction:(id)arg1 applicablePredicates:(id)arg2 ;
@end

