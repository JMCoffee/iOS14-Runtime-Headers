/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface PSNavBarSpinnerManager : NSObject {

	NSMutableDictionary* _savedRecords;

}
+(id)sharedSpinnerManager;
-(id)init;
-(void)startAnimatingInNavItem:(id)arg1 forIdentifier:(id)arg2 hideBackButton:(BOOL)arg3 ;
-(void)startAnimatingInNavItem:(id)arg1 forIdentifier:(id)arg2 ;
-(void)stopAnimatingForIdentifier:(id)arg1 ;
@end
