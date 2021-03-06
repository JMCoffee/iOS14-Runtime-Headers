/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricKit/MXDiagnostic.h>

@class MXCallStackTree, NSMeasurement;

@interface MXCPUExceptionDiagnostic : MXDiagnostic {

	MXCallStackTree* _callStackTree;
	NSMeasurement* _totalCPUTime;
	NSMeasurement* _totalSampledTime;

}

@property (readonly) MXCallStackTree * callStackTree;               //@synthesize callStackTree=_callStackTree - In the implementation block
@property (readonly) NSMeasurement * totalCPUTime;                  //@synthesize totalCPUTime=_totalCPUTime - In the implementation block
@property (readonly) NSMeasurement * totalSampledTime;              //@synthesize totalSampledTime=_totalSampledTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)toDictionary;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(MXCallStackTree *)callStackTree;
-(id)initWithMetaData:(id)arg1 applicationVersion:(id)arg2 callStack:(id)arg3 totalCpuTime:(id)arg4 totalSampledTime:(id)arg5 ;
-(NSMeasurement *)totalCPUTime;
-(NSMeasurement *)totalSampledTime;
@end

