/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>

@protocol CalDAVCalendar, CalDAVPrincipal;
@class CalDAVBulkUploadTaskGroup;

@interface CalDAVMergeUploadTaskGroup : CoreDAVTaskGroup {

	BOOL _shouldTrySyncTokenForBulkUpload;
	CalDAVBulkUploadTaskGroup* _uploadTaskGroup;
	id<CalDAVCalendar> _calendar;
	id<CalDAVPrincipal> _principal;

}

@property (nonatomic,retain) CalDAVBulkUploadTaskGroup * uploadTaskGroup;              //@synthesize uploadTaskGroup=_uploadTaskGroup - In the implementation block
@property (nonatomic,retain) id<CalDAVCalendar> calendar;                              //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,retain) id<CalDAVPrincipal> principal;                            //@synthesize principal=_principal - In the implementation block
@property (assign,nonatomic) BOOL shouldTrySyncTokenForBulkUpload;                     //@synthesize shouldTrySyncTokenForBulkUpload=_shouldTrySyncTokenForBulkUpload - In the implementation block
-(id<CalDAVCalendar>)calendar;
-(void)dealloc;
-(void)setCalendar:(id<CalDAVCalendar>)arg1 ;
-(void)setPrincipal:(id<CalDAVPrincipal>)arg1 ;
-(id<CalDAVPrincipal>)principal;
-(void)startTaskGroup;
-(void)cancelTaskGroup;
-(id)dataContentType;
-(id)initWithCalendar:(id)arg1 principal:(id)arg2 accountInfoProvider:(id)arg3 taskManager:(id)arg4 ;
-(BOOL)shouldTrySyncTokenForBulkUpload;
-(void)setShouldTrySyncTokenForBulkUpload:(BOOL)arg1 ;
-(void)_performBulkUpload;
-(CalDAVBulkUploadTaskGroup *)uploadTaskGroup;
-(void)_performRegularUpload;
-(void)setUploadTaskGroup:(CalDAVBulkUploadTaskGroup *)arg1 ;
@end

