/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIDatePickerCalendarDateComponent.h>

@class _UIDatePickerCalendarMonth;

@interface _UIDatePickerCalendarDay : _UIDatePickerCalendarDateComponent {

	_UIDatePickerCalendarMonth* _month;
	_UIDatePickerCalendarMonth* _assignedMonth;

}

@property (nonatomic,readonly) _UIDatePickerCalendarMonth * month;                      //@synthesize month=_month - In the implementation block
@property (nonatomic,readonly) _UIDatePickerCalendarMonth * assignedMonth;              //@synthesize assignedMonth=_assignedMonth - In the implementation block
@property (nonatomic,readonly) BOOL isToday; 
+(unsigned long long)representedCalendarUnits;
-(id)initWithDate:(id)arg1 calendar:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isToday;
-(_UIDatePickerCalendarMonth *)month;
-(id)initWithDate:(id)arg1 calendar:(id)arg2 month:(id)arg3 assignedMonth:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(_UIDatePickerCalendarMonth *)assignedMonth;
-(id)copyWithAssignedMonth:(id)arg1 ;
-(id)description;
@end

