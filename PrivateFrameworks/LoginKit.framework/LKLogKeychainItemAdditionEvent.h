/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LoginKit/LKLogEvent.h>

@class NSString;

@interface LKLogKeychainItemAdditionEvent : LKLogEvent {

	NSString* _keychainItemAdded;

}

@property (nonatomic,readonly) NSString * keychainItemAdded;              //@synthesize keychainItemAdded=_keychainItemAdded - In the implementation block
+(id)eventFromLKLogEvent:(id)arg1 ;
-(id)dictionary;
-(void)setKeychainItemAdded:(NSString *)arg1 ;
-(NSString *)keychainItemAdded;
@end

