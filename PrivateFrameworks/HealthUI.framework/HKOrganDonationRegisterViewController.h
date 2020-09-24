/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/HKOrganDonationRegistrantDelegate.h>
#import <libobjc.A.dylib/HKOrganDonationConnectionManagerDelegate.h>
#import <libobjc.A.dylib/HKSimpleDataEntryItemToolbarDelegate.h>

@class HKOrganDonationConnectionManager, HKHealthStore, UIButton, UIActivityIndicatorView, UIBarButtonItem, UIView, UIFont, _HKMedicalIDData, HKOrganDonationRegistrant, NSString, NSArray;

@interface HKOrganDonationRegisterViewController : UITableViewController <HKOrganDonationRegistrantDelegate, HKOrganDonationConnectionManagerDelegate, HKSimpleDataEntryItemToolbarDelegate> {

	HKOrganDonationConnectionManager* _connectionManager;
	HKHealthStore* _healthStore;
	UIButton* _continueButton;
	UIActivityIndicatorView* _loadingIndicator;
	UIBarButtonItem* _loadingIndicatorBarButtonItem;
	UIBarButtonItem* _updateBarButtonItem;
	UIView* _headerView;
	UIView* _footerView;
	BOOL _isLoading;
	BOOL _isUpdate;
	UIFont* _bodyFont;
	_HKMedicalIDData* _medicalIDData;
	HKOrganDonationRegistrant* _registrant;
	NSString* _completionButtonTitle;
	/*^block*/id _registrationCompletionHandler;
	NSArray* _dataEntryItems;
	UIBarButtonItem* _nextButton;

}

@property (nonatomic,retain) NSArray * dataEntryItems;                            //@synthesize dataEntryItems=_dataEntryItems - In the implementation block
@property (nonatomic,retain) HKOrganDonationRegistrant * registrant;              //@synthesize registrant=_registrant - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * nextButton;                        //@synthesize nextButton=_nextButton - In the implementation block
@property (nonatomic,retain) _HKMedicalIDData * medicalIDData;                    //@synthesize medicalIDData=_medicalIDData - In the implementation block
@property (nonatomic,retain) NSString * completionButtonTitle;                    //@synthesize completionButtonTitle=_completionButtonTitle - In the implementation block
@property (nonatomic,copy) id registrationCompletionHandler;                      //@synthesize registrationCompletionHandler=_registrationCompletionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setNextButton:(UIBarButtonItem *)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setMedicalIDData:(_HKMedicalIDData *)arg1 ;
-(void)dealloc;
-(void)viewDidLoad;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)nextButtonTapped:(id)arg1 ;
-(id)init;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)updateButtonTapped:(id)arg1 ;
-(_HKMedicalIDData *)medicalIDData;
-(id)registrationCompletionHandler;
-(NSArray *)dataEntryItems;
-(id)_createTableHeaderView;
-(id)_createTableFooterView;
-(void)focusItemAtIndex:(long long)arg1 ;
-(void)dataEntryItemDonePressed:(id)arg1 ;
-(void)setRegistrationCompletionHandler:(id)arg1 ;
-(UIBarButtonItem *)nextButton;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)dataEntryItemPrevPressed:(id)arg1 ;
-(void)dataEntryItemNextPressed:(id)arg1 ;
-(void)setDataEntryItems:(NSArray *)arg1 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)organDonationConnectionManagerDidStoreCredential:(id)arg1 ;
-(void)organDonationConnectionManagerDidRemoveCredential:(id)arg1 ;
-(NSString *)completionButtonTitle;
-(void)setCompletionButtonTitle:(NSString *)arg1 ;
-(void)_loadRegistrantInformationIfAvailableAndSetupRegisterView;
-(void)_handleAppWillEnterForegroundNotification:(id)arg1 ;
-(void)_setupRegisterViewWithRegistrant:(id)arg1 demographicsInformation:(id)arg2 ;
-(void)_toggleLoadingStatusIsLoading:(BOOL)arg1 ;
-(void)_toggleNextButtonEnabledState;
-(void)_reloadRegistrantInformationFromServer;
-(void)_setupRegisterViewWithDefaultDemographicsInformation;
-(void)_setupRegisterViewWithRegistrant:(id)arg1 ;
-(BOOL)_registrantIsUnderAge;
-(void)_handleResponse:(id)arg1 status:(long long)arg2 ;
-(void)organDonationRegistrantDidUpdateValue:(id)arg1 ;
-(void)_headerTapped:(id)arg1 ;
-(HKOrganDonationRegistrant *)registrant;
-(void)setRegistrant:(HKOrganDonationRegistrant *)arg1 ;
@end
