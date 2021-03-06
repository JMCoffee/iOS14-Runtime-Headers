/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNReaderWriterScheduler.h>

@class CNSuspendableSchedulerDecorator, NSString;

@interface CNVirtualReaderWriterScheduler : NSObject <CNReaderWriterScheduler> {

	CNSuspendableSchedulerDecorator* _scheduler;

}

@property (nonatomic,readonly) CNSuspendableSchedulerDecorator * scheduler;              //@synthesize scheduler=_scheduler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CNSuspendableSchedulerDecorator *)scheduler;
-(void)suspend;
-(id)initWithScheduler:(id)arg1 ;
-(id)init;
-(id)performReaderBlock:(/*^block*/id)arg1 ;
-(id)performWriterBlock:(/*^block*/id)arg1 ;
-(void)performSynchronousReaderBlock:(/*^block*/id)arg1 ;
-(void)performSynchronousWriterBlock:(/*^block*/id)arg1 ;
-(void)resume;
@end

