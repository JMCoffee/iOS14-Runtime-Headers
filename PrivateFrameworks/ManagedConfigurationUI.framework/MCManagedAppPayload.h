/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSString;

@interface MCManagedAppPayload : MCPayload {

	NSString* _managedAppID;

}

@property (nonatomic,retain) NSString * managedAppID;              //@synthesize managedAppID=_managedAppID - In the implementation block
+(id)typeStrings;
+(id)localizedPluralForm;
+(id)localizedSingularForm;
-(id)title;
-(NSString *)managedAppID;
-(id)initWithManagedAppID:(id)arg1 profile:(id)arg2 ;
-(void)setManagedAppID:(NSString *)arg1 ;
@end
