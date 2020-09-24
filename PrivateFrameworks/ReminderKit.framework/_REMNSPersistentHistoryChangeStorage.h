/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class REMObjectID, REMNSPersistentHistoryChangeTombstone, NSSet;

@interface _REMNSPersistentHistoryChangeStorage : NSObject <NSSecureCoding> {

	long long _changeID;
	REMObjectID* _changedObjectID;
	long long _changeType;
	REMNSPersistentHistoryChangeTombstone* _tombstone;
	NSSet* _updatedProperties;

}

@property (assign,nonatomic) long long changeID;                                           //@synthesize changeID=_changeID - In the implementation block
@property (nonatomic,copy) REMObjectID * changedObjectID;                                  //@synthesize changedObjectID=_changedObjectID - In the implementation block
@property (assign,nonatomic) long long changeType;                                         //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,copy) REMNSPersistentHistoryChangeTombstone * tombstone;              //@synthesize tombstone=_tombstone - In the implementation block
@property (nonatomic,copy) NSSet * updatedProperties;                                      //@synthesize updatedProperties=_updatedProperties - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setChangeType:(long long)arg1 ;
-(long long)changeType;
-(NSSet *)updatedProperties;
-(long long)changeID;
-(void)setChangeID:(long long)arg1 ;
-(void)setChangedObjectID:(REMObjectID *)arg1 ;
-(void)setTombstone:(REMNSPersistentHistoryChangeTombstone *)arg1 ;
-(void)setUpdatedProperties:(NSSet *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(REMObjectID *)changedObjectID;
-(void)encodeWithCoder:(id)arg1 ;
-(REMNSPersistentHistoryChangeTombstone *)tombstone;
@end
