/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKAxisLabelDimension.h>

@protocol HKHistogramAxisDimensionDataSource;
@interface HKHistogramAxisDimension : NSObject <HKAxisLabelDimension> {

	id<HKHistogramAxisDimensionDataSource> _dataSource;

}

@property (assign,nonatomic,__weak) id<HKHistogramAxisDimensionDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(void)setDataSource:(id<HKHistogramAxisDimensionDataSource>)arg1 ;
-(id<HKHistogramAxisDimensionDataSource>)dataSource;
-(id)stringForLocation:(id)arg1 ;
-(double)niceStepSizeLargerThan:(double)arg1 ;
-(double)ticksPerStepSize:(double)arg1 ;
-(void)setStepSizeForLabels:(double)arg1 ;
@end
