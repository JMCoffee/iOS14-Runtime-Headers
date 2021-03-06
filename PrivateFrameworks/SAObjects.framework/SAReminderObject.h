/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSDate, NSArray, SAReminderRecurrence, SAReminderListObject, SAReminderTrigger;

@interface SAReminderObject : SADomainObject

@property (nonatomic,copy) NSString * alternateSubject; 
@property (assign,nonatomic) BOOL completed; 
@property (nonatomic,copy) NSDate * dueDate; 
@property (nonatomic,copy) NSString * dueDateTimeZoneId; 
@property (assign,nonatomic) BOOL important; 
@property (nonatomic,copy) NSArray * lists; 
@property (nonatomic,retain) id<SAReminderPayload> payload; 
@property (nonatomic,retain) SAReminderRecurrence * recurrence; 
@property (nonatomic,copy) NSString * subject; 
@property (nonatomic,retain) SAReminderListObject * toList; 
@property (nonatomic,retain) SAReminderTrigger * trigger; 
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)object;
-(id)encodedClassName;
-(SAReminderListObject *)toList;
-(id)groupIdentifier;
-(SAReminderTrigger *)trigger;
-(BOOL)completed;
-(SAReminderRecurrence *)recurrence;
-(void)setRecurrence:(SAReminderRecurrence *)arg1 ;
-(void)setSubject:(NSString *)arg1 ;
-(NSString *)subject;
-(void)setCompleted:(BOOL)arg1 ;
-(id<SAReminderPayload>)payload;
-(NSDate *)dueDate;
-(void)setDueDate:(NSDate *)arg1 ;
-(void)setToList:(SAReminderListObject *)arg1 ;
-(BOOL)important;
-(NSString *)alternateSubject;
-(void)setAlternateSubject:(NSString *)arg1 ;
-(NSString *)dueDateTimeZoneId;
-(void)setDueDateTimeZoneId:(NSString *)arg1 ;
-(void)setLists:(NSArray *)arg1 ;
-(NSArray *)lists;
-(void)setTrigger:(SAReminderTrigger *)arg1 ;
-(void)setPayload:(id<SAReminderPayload>)arg1 ;
-(void)setImportant:(BOOL)arg1 ;
@end

