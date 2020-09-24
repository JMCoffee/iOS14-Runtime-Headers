/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricMeasurement/MetricMeasurement-Structs.h>
#import <MetricMeasurement/MXMSampleData.h>

@interface MXMMutableSampleData : MXMSampleData
-(void)appendAttributes:(id)arg1 ;
-(void)appendAttribute:(id)arg1 ;
-(void)appendData:(id)arg1 ;
-(void)appendSet:(id)arg1 ;
-(id)appendSample:(id)arg1 ;
-(id)appendFloatValue:(float)arg1 tag:(id)arg2 timestamp:(unsigned long long)arg3 ;
-(id)appendDoubleValue:(double)arg1 tag:(id)arg2 timestamp:(unsigned long long)arg3 ;
-(id)appendUnsignedIntValue:(unsigned)arg1 tag:(id)arg2 timestamp:(unsigned long long)arg3 ;
-(id)appendIntValue:(int)arg1 tag:(id)arg2 timestamp:(unsigned long long)arg3 ;
-(id)appendIntegerValue:(long long)arg1 tag:(id)arg2 timestamp:(unsigned long long)arg3 ;
-(id)appendUnsignedIntegerValue:(unsigned long long)arg1 tag:(id)arg2 timestamp:(unsigned long long)arg3 ;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dataMatchingFilter:(id)arg1 ;
@end
