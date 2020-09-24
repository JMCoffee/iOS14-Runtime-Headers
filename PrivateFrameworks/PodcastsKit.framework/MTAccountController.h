/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PodcastsKit/MTSingleton.h>

@class ACAccount;

@interface MTAccountController : MTSingleton {

	BOOL _hasFetchedInitialAccount;
	ACAccount* _accountOverride;
	ACAccount* __activeAccount;

}

@property (retain) ACAccount * _activeAccount;                         //@synthesize _activeAccount=__activeAccount - In the implementation block
@property (assign) BOOL hasFetchedInitialAccount;                      //@synthesize hasFetchedInitialAccount=_hasFetchedInitialAccount - In the implementation block
@property (nonatomic,retain) ACAccount * accountOverride;              //@synthesize accountOverride=_accountOverride - In the implementation block
+(BOOL)iTunesAccountDidChangeForACAccountNotification:(id)arg1 ;
-(void)setActiveAccount:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)activeAccount;
-(ACAccount *)_activeAccount;
-(void)_updateActiveAccount;
-(id)activeDsid;
-(void)didChangeStoreAccount:(id)arg1 ;
-(id)_activeAccountBlocking;
-(void)setHasFetchedInitialAccount:(BOOL)arg1 ;
-(id)activeStorefront;
-(id)activeEmail;
-(id)activeFullName;
-(BOOL)isUserLoggedIn;
-(BOOL)activeAccountIsManagedAppleID;
-(BOOL)hasFetchedInitialAccount;
-(ACAccount *)accountOverride;
-(void)setAccountOverride:(ACAccount *)arg1 ;
-(void)set_activeAccount:(ACAccount *)arg1 ;
@end
