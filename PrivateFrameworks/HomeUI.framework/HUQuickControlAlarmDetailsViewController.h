/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUQuickControlViewController.h>
#import <libobjc.A.dylib/HUQuickControlDetailsViewControllerVendor.h>
#import <libobjc.A.dylib/HFItemSectionAccessoryButtonHeaderDelegate.h>

@class HUAlarmTableViewController, NSArray, NSLayoutConstraint, NSString;

@interface HUQuickControlAlarmDetailsViewController : HUQuickControlViewController <HUQuickControlDetailsViewControllerVendor, HFItemSectionAccessoryButtonHeaderDelegate> {

	HUAlarmTableViewController* _alarmTableViewController;
	NSArray* _alarmTableViewConstraints;
	NSLayoutConstraint* _heightConstraint;

}

@property (nonatomic,retain) HUAlarmTableViewController * alarmTableViewController;              //@synthesize alarmTableViewController=_alarmTableViewController - In the implementation block
@property (nonatomic,retain) NSArray * alarmTableViewConstraints;                                //@synthesize alarmTableViewConstraints=_alarmTableViewConstraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heightConstraint;                              //@synthesize heightConstraint=_heightConstraint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)controlItemPredicate;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_updateConstraints;
-(id)mediaProfileContainer;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)viewDidLoad;
-(id)controlItem;
-(id)initWithControlItems:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3 ;
-(NSLayoutConstraint *)heightConstraint;
-(BOOL)shouldShowContentForReachabilityState:(BOOL)arg1 ;
-(id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1 ;
-(HUAlarmTableViewController *)alarmTableViewController;
-(void)_addAlarmControlView;
-(id)createDetailsViewController;
-(void)setAlarmTableViewController:(HUAlarmTableViewController *)arg1 ;
-(NSArray *)alarmTableViewConstraints;
-(void)setAlarmTableViewConstraints:(NSArray *)arg1 ;
-(BOOL)isAccessoryControllable;
-(id)secondaryQuickControlPresentationStyle;
-(void)itemSection:(id)arg1 accessoryButtonPressedInHeader:(id)arg2 ;
@end

