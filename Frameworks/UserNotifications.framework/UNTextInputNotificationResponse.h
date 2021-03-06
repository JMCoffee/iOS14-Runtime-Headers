/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotifications/UNNotificationResponse.h>
#import <libobjc.A.dylib/BSXPCCoding.h>

@class NSString;

@interface UNTextInputNotificationResponse : UNNotificationResponse <BSXPCCoding> {

	NSString* _userText;

}

@property (nonatomic,copy,readonly) NSString * userText;              //@synthesize userText=_userText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2 originIdentifier:(id)arg3 targetConnectionEndpoint:(id)arg4 targetSceneIdentifier:(id)arg5 userText:(id)arg6 ;
+(BOOL)supportsSecureCoding;
+(id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2 originIdentifier:(id)arg3 targetConnectionEndpoint:(id)arg4 userText:(id)arg5 ;
+(id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2 userText:(id)arg3 ;
-(NSString *)userText;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithNotification:(id)arg1 actionIdentifier:(id)arg2 originIdentifier:(id)arg3 targetConnectionEndpoint:(id)arg4 targetSceneIdentifier:(id)arg5 ;
-(id)initWithNotification:(id)arg1 actionIdentifier:(id)arg2 userText:(id)arg3 ;
-(id)_initWithNotification:(id)arg1 actionIdentifier:(id)arg2 originIdentifier:(id)arg3 targetConnectionEndpoint:(id)arg4 targetSceneIdentifier:(id)arg5 userText:(id)arg6 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
@end

