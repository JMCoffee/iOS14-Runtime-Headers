/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <HomeKit/HMTimeEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSDateComponents;

@interface HMCalendarEvent : HMTimeEvent <NSSecureCoding, NSCopying, NSMutableCopying> {

	NSDateComponents* _fireDateComponents;

}

@property (nonatomic,retain) NSDateComponents * fireDateComponents;              //@synthesize fireDateComponents=_fireDateComponents - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)createWithDictionary:(id)arg1 home:(id)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDict:(id)arg1 fireDateComponents:(id)arg2 ;
-(void)setFireDateComponents:(NSDateComponents *)arg1 ;
-(NSDateComponents *)fireDateComponents;
-(void)_updateFireDateComponents:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithFireDateComponents:(id)arg1 ;
-(void)updateFireDateComponents:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_serializeForAdd;
-(void)_handleEventUpdatedNotification:(id)arg1 ;
@end

