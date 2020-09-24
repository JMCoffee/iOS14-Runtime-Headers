/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFAnalyticsEvent.h>

@class NSNumber, NSString;

@interface HFAnalyticsAppForegroundDurationEvent : HFAnalyticsEvent {

	BOOL _userHasAccessories;
	NSNumber* _foregroundDuration;
	NSString* _processName;

}

@property (assign,nonatomic) NSNumber * foregroundDuration;              //@synthesize foregroundDuration=_foregroundDuration - In the implementation block
@property (assign,nonatomic) BOOL userHasAccessories;                    //@synthesize userHasAccessories=_userHasAccessories - In the implementation block
@property (nonatomic,retain) NSString * processName;                     //@synthesize processName=_processName - In the implementation block
-(void)setProcessName:(NSString *)arg1 ;
-(id)payload;
-(NSString *)processName;
-(id)initWithData:(id)arg1 ;
-(NSNumber *)foregroundDuration;
-(BOOL)userHasAccessories;
-(void)setForegroundDuration:(NSNumber *)arg1 ;
-(void)setUserHasAccessories:(BOOL)arg1 ;
@end
