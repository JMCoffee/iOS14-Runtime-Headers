/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TelephonyUI/TelephonyUI-Structs.h>
@interface TPAlert : NSObject {

	/*^block*/id _completion;
	CFUserNotificationRef _userNotification;

}

@property (assign,nonatomic) CFUserNotificationRef userNotification;              //@synthesize userNotification=_userNotification - In the implementation block
@property (nonatomic,copy) id completion;                                         //@synthesize completion=_completion - In the implementation block
-(id)defaultButtonTitle;
-(CFUserNotificationRef)userNotification;
-(void)dealloc;
-(id)title;
-(void)setCompletion:(id)arg1 ;
-(void)setUserNotification:(CFUserNotificationRef)arg1 ;
-(id)otherButtonTitle;
-(id)completion;
-(id)alternateButtonTitle;
-(id)message;
-(void)show;
-(void)defaultResponse;
-(void)otherResponse;
-(void)alternateResponse;
-(void)showOnViewController:(id)arg1 ;
@end
