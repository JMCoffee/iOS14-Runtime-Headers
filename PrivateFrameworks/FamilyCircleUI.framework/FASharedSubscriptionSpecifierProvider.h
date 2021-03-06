/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FASharedSubscriptionSpecifierProviderDelegeate;
@class PSListController, PSSpecifier, ACAccount, FASharedServicesResponse, NSOperationQueue, NSDictionary, NSArray;

@interface FASharedSubscriptionSpecifierProvider : NSObject {

	PSListController* _presenter;
	PSSpecifier* _spinnerCell;
	ACAccount* _appleAccount;
	FASharedServicesResponse* _sharedSubscriptionResponse;
	BOOL _updateSubsriptionSpecifiers;
	BOOL _isLoadingSpecifiers;
	NSOperationQueue* _networkActivityQueue;
	NSDictionary* _cachedResourceDictionary;
	unsigned long long _specifierState;
	NSArray* _specifiers;
	id<FASharedSubscriptionSpecifierProviderDelegeate> _delegate;

}

@property (assign,nonatomic,__weak) id<FASharedSubscriptionSpecifierProviderDelegeate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * specifiers;                                                              //@synthesize specifiers=_specifiers - In the implementation block
-(void)reloadSpecifiers;
-(void)setDelegate:(id<FASharedSubscriptionSpecifierProviderDelegeate>)arg1 ;
-(void)handleURL:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id<FASharedSubscriptionSpecifierProviderDelegeate>)delegate;
-(void)setSpecifiers:(NSArray *)arg1 ;
-(NSArray *)specifiers;
-(id)initWithAppleAccount:(id)arg1 presenter:(id)arg2 ;
-(id)_sharedSubscriptionGroupSpecifier;
-(void)_loadSubscriptionServices;
-(id)_serviceSpecifiersFromArray:(id)arg1 ;
-(id)_valueForServiceSpecifier:(id)arg1 ;
-(id)_iconURLStringForService:(id)arg1 ;
-(void)_serviceSpecifierWasTapped:(id)arg1 ;
-(void)_handleSubscriptionListResponse:(id)arg1 ;
-(void)_delayedLoadIfNeeded;
-(BOOL)_launchWithResourceDictionary:(id)arg1 ;
-(id)_specifierNamed:(id)arg1 ;
@end

