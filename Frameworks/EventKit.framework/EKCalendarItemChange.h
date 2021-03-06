/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKObjectChange.h>

@class EKObjectID, NSString;

@interface EKCalendarItemChange : EKObjectChange {

	BOOL _titleChanged;
	BOOL _locationChanged;
	BOOL _startDateChanged;
	BOOL _startTimezoneChanged;
	BOOL _endDateChanged;
	BOOL _endTimezoneChanged;
	BOOL _notesChanged;
	BOOL _allDayChanged;
	EKObjectID* _calendarID;
	EKObjectID* _oldCalendarID;
	NSString* _externalID;
	NSString* _oldExternalID;

}

@property (nonatomic,readonly) EKObjectID * calendarID;                 //@synthesize calendarID=_calendarID - In the implementation block
@property (nonatomic,readonly) EKObjectID * oldCalendarID;              //@synthesize oldCalendarID=_oldCalendarID - In the implementation block
@property (nonatomic,readonly) NSString * externalID;                   //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,readonly) NSString * oldExternalID;                //@synthesize oldExternalID=_oldExternalID - In the implementation block
@property (nonatomic,readonly) BOOL titleChanged;                       //@synthesize titleChanged=_titleChanged - In the implementation block
@property (nonatomic,readonly) BOOL locationChanged;                    //@synthesize locationChanged=_locationChanged - In the implementation block
@property (nonatomic,readonly) BOOL startDateChanged;                   //@synthesize startDateChanged=_startDateChanged - In the implementation block
@property (nonatomic,readonly) BOOL startTimezoneChanged;               //@synthesize startTimezoneChanged=_startTimezoneChanged - In the implementation block
@property (nonatomic,readonly) BOOL endDateChanged;                     //@synthesize endDateChanged=_endDateChanged - In the implementation block
@property (nonatomic,readonly) BOOL endTimezoneChanged;                 //@synthesize endTimezoneChanged=_endTimezoneChanged - In the implementation block
@property (nonatomic,readonly) BOOL notesChanged;                       //@synthesize notesChanged=_notesChanged - In the implementation block
@property (nonatomic,readonly) BOOL allDayChanged;                      //@synthesize allDayChanged=_allDayChanged - In the implementation block
+(int)entityType;
+(void)fetchCalendarItemChangesInStore:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(void)fetchCalendarItemChangesInSource:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(void)fetchCalendarItemChangesInCalendar:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(NSString *)externalID;
-(BOOL)locationChanged;
-(BOOL)titleChanged;
-(EKObjectID *)calendarID;
-(id)initWithChangeProperties:(id)arg1 ;
-(BOOL)notesChanged;
-(BOOL)endDateChanged;
-(BOOL)endTimezoneChanged;
-(BOOL)startDateChanged;
-(BOOL)startTimezoneChanged;
-(NSString *)oldExternalID;
-(EKObjectID *)oldCalendarID;
-(BOOL)allDayChanged;
@end

