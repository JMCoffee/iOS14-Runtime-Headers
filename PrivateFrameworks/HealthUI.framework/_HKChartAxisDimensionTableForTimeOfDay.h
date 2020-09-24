/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKChartAxisDimensionUsingTable.h>

@class HKTimeSinceStartOfDayNumberFormatter;

@interface _HKChartAxisDimensionTableForTimeOfDay : HKChartAxisDimensionUsingTable {

	HKTimeSinceStartOfDayNumberFormatter* _numberFormatter;

}

@property (nonatomic,readonly) HKTimeSinceStartOfDayNumberFormatter * numberFormatter;              //@synthesize numberFormatter=_numberFormatter - In the implementation block
-(HKTimeSinceStartOfDayNumberFormatter *)numberFormatter;
-(id)stringForLocation:(id)arg1 ;
-(id)initWithStepSizeTable:(HKStepSizeTableEntryDefn*)arg1 stepSizeTableSize:(long long)arg2 displayType:(id)arg3 unitController:(id)arg4 ;
@end
