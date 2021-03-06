/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEditItemViewController.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/EKUILocationSearchModelDelegate.h>
#import <libobjc.A.dylib/EKUIManagedViewController.h>

@class UITableView, EKUILocationSearchModel, EKCalendarItem, NSMutableDictionary, EKStructuredLocation, EKUIConferenceRoom, UISearchBar, NSString;

@interface EKLocationEditItemViewController : EKEditItemViewController <UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate, EKUILocationSearchModelDelegate, EKUIManagedViewController> {

	UITableView* _tableView;
	EKUILocationSearchModel* _searchModel;
	EKCalendarItem* _calendarItem;
	NSMutableDictionary* _cachedConferenceRooms;
	CGSize _preferredContentSize;
	BOOL _supportsStructuredLocations;
	BOOL _tableConstraintsInstalled;
	BOOL _onlyAllowConferenceRooms;
	BOOL _rotating;
	BOOL _wasFirstResponder;
	BOOL _needsSave;
	BOOL _onlyDisplayMapLocations;
	BOOL _fillSearchbarWithStructuredLocation;
	EKStructuredLocation* _structuredLocation;
	EKStructuredLocation* _selectedLocation;
	EKUIConferenceRoom* _selectedConferenceRoom;
	UISearchBar* _searchBar;
	/*^block*/id _viewDidAppearBlock;

}

@property (nonatomic,retain) EKStructuredLocation * selectedLocation;                  //@synthesize selectedLocation=_selectedLocation - In the implementation block
@property (nonatomic,retain) EKUIConferenceRoom * selectedConferenceRoom;              //@synthesize selectedConferenceRoom=_selectedConferenceRoom - In the implementation block
@property (nonatomic,copy) id viewDidAppearBlock;                                      //@synthesize viewDidAppearBlock=_viewDidAppearBlock - In the implementation block
@property (assign,nonatomic) BOOL needsSave;                                           //@synthesize needsSave=_needsSave - In the implementation block
@property (assign,nonatomic) BOOL onlyDisplayMapLocations;                             //@synthesize onlyDisplayMapLocations=_onlyDisplayMapLocations - In the implementation block
@property (assign,nonatomic) BOOL onlyAllowConferenceRooms; 
@property (assign,nonatomic) BOOL fillSearchbarWithStructuredLocation;                 //@synthesize fillSearchbarWithStructuredLocation=_fillSearchbarWithStructuredLocation - In the implementation block
@property (nonatomic,retain) EKStructuredLocation * structuredLocation;                //@synthesize structuredLocation=_structuredLocation - In the implementation block
@property (nonatomic,readonly) UISearchBar * searchBar;                                //@synthesize searchBar=_searchBar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_sectionNameForSection:(unsigned long long)arg1 ;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(BOOL)canManagePresentationStyle;
-(BOOL)wantsManagement;
-(BOOL)needsSave;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)_setupConstraints;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)pinImage;
-(UISearchBar *)searchBar;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 styleProvider:(id)arg2 calendarItem:(id)arg3 eventStore:(id)arg4 ;
-(CGSize)preferredContentSize;
-(void)dealloc;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)title;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)currentLocationUpdated:(id)arg1 ;
-(void)viewDidLoad;
-(id)initWithFrame:(CGRect)arg1 styleProvider:(id)arg2 ;
-(void)contactsSearchUpdated:(id)arg1 ;
-(id)calendarItemForSearchModel:(id)arg1 ;
-(BOOL)shouldIncludeConferenceRoom:(id)arg1 ;
-(void)recentsSearchUpdated:(id)arg1 ;
-(void)frequentsSearchUpdated:(id)arg1 ;
-(void)eventsSearchUpdated:(id)arg1 ;
-(void)conferenceRoomSearchUpdated:(id)arg1 ;
-(void)mapSearchUpdated:(id)arg1 ;
-(void)locationSearchModel:(id)arg1 selectedLocation:(id)arg2 withError:(id)arg3 ;
-(void)setViewDidAppearBlock:(id)arg1 ;
-(id)viewDidAppearBlock;
-(BOOL)presentModally;
-(void)setSelectedLocation:(EKStructuredLocation *)arg1 ;
-(BOOL)showingTextRow;
-(BOOL)showingCurrentLocationRow;
-(void)useAsString:(id)arg1 ;
-(void)setSelectedConferenceRoom:(EKUIConferenceRoom *)arg1 ;
-(id)conferenceRoomForRecent:(id)arg1 ;
-(id)locationArrowImage;
-(id)contactsImage;
-(id)_cellForConferenceRoom:(id)arg1 atIndexPath:(id)arg2 ;
-(void)setViewAppearedBlock:(/*^block*/id)arg1 ;
-(void)setOnlyAllowConferenceRooms:(BOOL)arg1 ;
-(BOOL)onlyAllowConferenceRooms;
-(BOOL)onlyDisplayMapLocations;
-(void)loadView;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(void)setOnlyDisplayMapLocations:(BOOL)arg1 ;
-(BOOL)fillSearchbarWithStructuredLocation;
-(void)setFillSearchbarWithStructuredLocation:(BOOL)arg1 ;
-(EKStructuredLocation *)selectedLocation;
-(EKUIConferenceRoom *)selectedConferenceRoom;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(EKStructuredLocation *)structuredLocation;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)setNeedsSave:(BOOL)arg1 ;
-(void)setStructuredLocation:(EKStructuredLocation *)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(BOOL)tableView:(id)arg1 wantsHeaderForSection:(long long)arg2 ;
-(id)itemAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end

