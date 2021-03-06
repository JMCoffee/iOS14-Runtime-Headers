/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsSettings.framework/UserNotificationsSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsSettings/UserNotificationsSettings-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UNNotificationSettings, NSArray;

@interface UNNotificationSourceSettings : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isRestricted;
	UNNotificationSettings* _notificationSettings;
	NSArray* _topicSettings;

}

@property (nonatomic,copy,readonly) UNNotificationSettings * notificationSettings;              //@synthesize notificationSettings=_notificationSettings - In the implementation block
@property (nonatomic,copy,readonly) NSArray * topicSettings;                                    //@synthesize topicSettings=_topicSettings - In the implementation block
@property (nonatomic,readonly) BOOL isRestricted;                                               //@synthesize isRestricted=_isRestricted - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UNNotificationSettings *)notificationSettings;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isRestricted;
-(id)description;
-(NSArray *)topicSettings;
-(id)initWithNotificationSettings:(id)arg1 topicSettings:(id)arg2 isRestricted:(BOOL)arg3 ;
@end

