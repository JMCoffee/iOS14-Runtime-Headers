/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface TADisplayOnCalculator : NSObject <NSSecureCoding> {

	BOOL _useBudget;
	NSDate* _evaluatedUntil;
	double _budgetRemaining;
	NSDate* _startTime;

}

@property (assign,nonatomic) BOOL useBudget;                         //@synthesize useBudget=_useBudget - In the implementation block
@property (assign,nonatomic) double budgetRemaining;                 //@synthesize budgetRemaining=_budgetRemaining - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                     //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) NSDate * evaluatedUntil;              //@synthesize evaluatedUntil=_evaluatedUntil - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)startTime;
-(void)setStartTime:(NSDate *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithStartTime:(id)arg1 ;
-(BOOL)useBudget;
-(double)budgetRemaining;
-(NSDate *)evaluatedUntil;
-(id)initWithStartTime:(id)arg1 budget:(double)arg2 ;
-(void)completeDisplayOnWithEndDate:(id)arg1 ;
-(double)calculateDisplayOnWithEvents:(id)arg1 advertisements:(id)arg2 endDate:(id)arg3 ;
-(void)setUseBudget:(BOOL)arg1 ;
-(void)setBudgetRemaining:(double)arg1 ;
@end

