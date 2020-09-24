/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/GKContentRefresh.h>
#import <libobjc.A.dylib/GKURLHandling.h>

@protocol UISplitViewControllerImpl;
@class NSString, UISlidingBarConfiguration, UISlidingBarState, NSArray, UISlidingBarStateRequest, UIScreenEdgePanGestureRecognizer, UIBarButtonItem;

@interface UISplitViewController : UIViewController <GKContentRefresh, GKURLHandling> {

	id<UISplitViewControllerImpl> _impl;
	BOOL __lockedForDelegateCallback;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) UISlidingBarConfiguration * configuration; 
@property (nonatomic,readonly) UISlidingBarState * currentState; 
@property (nonatomic,readonly) NSArray * possibleStates; 
@property (nonatomic,copy) UISlidingBarStateRequest * stateRequest; 
@property (assign,setter=_setLockedForDelegateCallback:,getter=_isLockedForDelegateCallback,nonatomic) BOOL _lockedForDelegateCallback;                                                                                       //@synthesize _lockedForDelegateCallback=__lockedForDelegateCallback - In the implementation block
@property (nonatomic,readonly) UIScreenEdgePanGestureRecognizer * _fluidOpenSidebarPresentationGestureRecognizer; 
@property (nonatomic,readonly) long long composition; 
@property (assign,nonatomic) BOOL prefersSecondaryOnlyShortcutButtonVisible; 
@property (assign,nonatomic) BOOL showsFullScreenShortcutButtonIfApplicable; 
@property (assign,setter=_setPreferredSplitBehavior:,nonatomic) long long _preferredSplitBehavior; 
@property (nonatomic,readonly) long long _splitBehavior; 
@property (assign,nonatomic) double preferredSupplementalColumnWidthFraction; 
@property (assign,nonatomic) double minimumSupplementalColumnWidth; 
@property (assign,nonatomic) double maximumSupplementalColumnWidth; 
@property (nonatomic,readonly) double supplementalColumnWidth; 
@property (assign,nonatomic) float gutterWidth; 
@property (assign,nonatomic) BOOL hidesMasterViewInPortrait; 
@property (setter=_setDisplayModeButtonItemTitle:,nonatomic,copy) NSString * _displayModeButtonItemTitle; 
@property (assign,setter=_setPrefersOverlayInRegularWidthPhone:,getter=_prefersOverlayInRegularWidthPhone,nonatomic) BOOL prefersOverlayInRegularWidthPhone; 
@property (assign,setter=_setUsesDeviceOverlayPreferences:,getter=_usesDeviceOverlayPreferences,nonatomic) BOOL usesDeviceOverlayPreferences; 
@property (assign,setter=_setUsesExtraWidePrimaryColumn:,getter=_usesExtraWidePrimaryColumn,nonatomic) BOOL usesExtraWidePrimaryColumn; 
@property (assign,setter=_setVisibleToggleButtonRequiresPresentsWithGesture:,nonatomic) BOOL _visibleToggleButtonRequiresPresentsWithGesture; 
@property (assign,setter=_setForceDisplayModeBarButtonHidden:,nonatomic) BOOL _forceDisplayModeBarButtonHidden; 
@property (assign,setter=_setAllowsDimmedSecondaryAsDeepestUnambiguousResponder:,getter=_allowsDimmedSecondaryAsDeepestUnambiguousResponder,nonatomic) BOOL _allowsDimmedSecondaryAsDeepestUnambiguousResponder; 
@property (assign,setter=_setPreferredPrimaryColumnWidth:,getter=_preferredPrimaryColumnWidth,nonatomic) double _preferredPrimaryColumnWidth; 
@property (assign,setter=_setPreferredSupplementaryColumnWidth:,getter=_preferredSupplementaryColumnWidth,nonatomic) double _preferredSupplementaryColumnWidth; 
@property (nonatomic,readonly) long long style; 
@property (assign,nonatomic,__weak) id<UISplitViewControllerDelegate> delegate; 
@property (assign,nonatomic) BOOL showsSecondaryOnlyButton; 
@property (assign,nonatomic) long long preferredSplitBehavior; 
@property (nonatomic,readonly) long long splitBehavior; 
@property (nonatomic,copy) NSArray * viewControllers; 
@property (assign,nonatomic) BOOL presentsWithGesture; 
@property (getter=isCollapsed,nonatomic,readonly) BOOL collapsed; 
@property (assign,nonatomic) long long preferredDisplayMode; 
@property (nonatomic,readonly) long long displayMode; 
@property (nonatomic,readonly) UIBarButtonItem * displayModeButtonItem; 
@property (assign,nonatomic) double preferredPrimaryColumnWidthFraction; 
@property (assign,nonatomic) double preferredPrimaryColumnWidth; 
@property (assign,nonatomic) double minimumPrimaryColumnWidth; 
@property (assign,nonatomic) double maximumPrimaryColumnWidth; 
@property (nonatomic,readonly) double primaryColumnWidth; 
@property (assign,nonatomic) double preferredSupplementaryColumnWidthFraction; 
@property (assign,nonatomic) double preferredSupplementaryColumnWidth; 
@property (assign,nonatomic) double minimumSupplementaryColumnWidth; 
@property (assign,nonatomic) double maximumSupplementaryColumnWidth; 
@property (nonatomic,readonly) double supplementaryColumnWidth; 
@property (assign,nonatomic) long long primaryEdge; 
@property (assign,nonatomic) long long primaryBackgroundStyle; 
+(BOOL)_automaticDisplayModeOnPhoneUsesOverlayInLandscapeDefaultValue;
+(BOOL)_devicePrefersOverlayInRegularWidth;
+(long long)_forcedImpl;
+(void)_setForcedImpl:(long long)arg1 ;
+(BOOL)doesOverridePreferredInterfaceOrientationForPresentation;
-(void)_gkSetContentsNeedUpdateWithHandler:(/*^block*/id)arg1 ;
-(void)_gkForceNextContentUpdate;
-(void)_gkResetContents;
-(void)_gkUpdateContentsWithCompletionHandlerAndError:(/*^block*/id)arg1 ;
-(void)_gkHandleURLPathComponents:(id)arg1 query:(id)arg2 ;
-(void)ts_setGutterWidth:(double)arg1 ;
-(void)ts_setPrefersOverlayInRegularWidthPhone:(BOOL)arg1 ;
-(BOOL)ts_isCollapsedOrCollapsing;
-(BOOL)ts_isCollapsing;
-(void)ts_setPrimaryBackgroundStyle:(long long)arg1 ;
-(void)ts_columnSeparatorsExtendToTitlebar:(BOOL)arg1 ;
-(void)togglePrimaryViewVisibilityAnimated:(BOOL)arg1 ;
-(id)makeDetailNavigationControllerWithRoot:(id)arg1 ;
-(BOOL)_disableAutomaticKeyboardBehavior;
-(id)_primaryDimmingView;
-(BOOL)hidesMasterViewInPortrait;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(id)preferredFocusEnvironments;
-(void)setPrimaryBackgroundStyle:(long long)arg1 ;
-(void)setPreferredDisplayMode:(long long)arg1 ;
-(void)_setUsesExtraWidePrimaryColumn:(BOOL)arg1 ;
-(void)_getRotationContentSettings:(SCD_Struct_UI53*)arg1 ;
-(void)_didChangeToFirstResponder:(id)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(long long)preferredLeadingStatusBarStyle;
-(void)_willShowCollapsedDetailViewController:(id)arg1 inTargetController:(id)arg2 ;
-(long long)primaryBackgroundStyle;
-(CGRect)_frameForChildContentContainer:(id)arg1 ;
-(BOOL)_optsOutOfPopoverControllerHierarchyCheck;
-(id)_allContainedViewControllers;
-(double)_primaryDividerPosition;
-(id)_traitCollectionForChildEnvironment:(id)arg1 ;
-(void)setPresentsWithGesture:(BOOL)arg1 ;
-(void)setMaximumPrimaryColumnWidth:(double)arg1 ;
-(void)_updateLayoutForStatusBarAndInterfaceOrientation;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(UISlidingBarState *)currentState;
-(BOOL)_isRotating;
-(UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL*)arg2 ;
-(BOOL)isCollapsed;
-(id)masterViewController;
-(void)_popoverController:(id)arg1 willChangeToVisible:(BOOL)arg2 ;
-(double)minimumPrimaryColumnWidth;
-(void)setViewControllers:(NSArray *)arg1 ;
-(void)_marginInfoForChild:(id)arg1 leftMargin:(double*)arg2 rightMargin:(double*)arg3 ;
-(double)_supplementaryDividerPosition;
-(long long)primaryEdge;
-(CGSize)_contentSizeForChildViewController:(id)arg1 inPopoverController:(id)arg2 ;
-(void)toggleMasterVisible:(id)arg1 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(double)primaryColumnWidth;
-(void)setGutterWidth:(float)arg1 ;
-(void)showDetailViewController:(id)arg1 sender:(id)arg2 ;
-(id)_additionalViewControllersToCheckForUserActivity;
-(BOOL)_handlesCounterRotationForPresentation;
-(NSString *)_displayModeButtonItemTitle;
-(void)showViewController:(id)arg1 sender:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(UIBarButtonItem *)displayModeButtonItem;
-(BOOL)_layoutPrimaryOnRight;
-(void)unloadViewForced:(BOOL)arg1 ;
-(id)detailViewController;
-(id)_childViewControllersToSendViewWillTransitionToSize;
-(double)preferredPrimaryColumnWidthFraction;
-(BOOL)_shouldPersistViewWhenCoding;
-(BOOL)presentsWithGesture;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)_descendantWillPresentViewController:(id)arg1 modalSourceViewController:(id)arg2 presentationController:(id)arg3 animated:(BOOL)arg4 ;
-(double)maximumPrimaryColumnWidth;
-(void)setMinimumPrimaryColumnWidth:(double)arg1 ;
-(long long)preferredTrailingStatusBarStyle;
-(long long)preferredDisplayMode;
-(void)_setDisplayModeButtonItemTitle:(id)arg1 ;
-(float)gutterWidth;
-(id)_primaryContentResponder;
-(id)childViewControllerForStatusBarStyle;
-(BOOL)_iPhoneShouldUseOverlayInCurrentEnvironment;
-(void)setPreferredPrimaryColumnWidthFraction:(double)arg1 ;
-(BOOL)_usesExtraWidePrimaryColumn;
-(double)_contentMarginForChildViewController:(id)arg1 ;
-(void)setPrimaryEdge:(long long)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)_updateChildContentMargins;
-(BOOL)_isCollapsed;
-(void)_popoverController:(id)arg1 didChangeFromVisible:(BOOL)arg2 ;
-(BOOL)_hasPreferredInterfaceOrientationForPresentation;
-(id)_multitaskingDragExclusionRects;
-(void)_updateDisplayModeButtonItem;
-(NSArray *)viewControllers;
-(void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setHidesMasterViewInPortrait:(BOOL)arg1 ;
-(id)_deepestUnambiguousResponder;
-(id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)transitionCoordinator;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(long long)displayMode;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)showColumn:(long long)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)removeChildViewController:(id)arg1 ;
-(void)_super_willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)_isAnimating;
-(void)_navigationController:(id)arg1 navigationBar:(id)arg2 topItemUpdatedContentLayout:(id)arg3 ;
-(double)preferredPrimaryColumnWidth;
-(CGSize)_super_sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)_enumerateAncestorViewControllersUntilStop:(BOOL*)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)setPreferredSupplementaryColumnWidth:(double)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)_shouldUseFluidSidebarGestures;
-(void)setPreferredSplitBehavior:(long long)arg1 ;
-(void)_setForceDisplayModeBarButtonHidden:(BOOL)arg1 ;
-(void)_super_viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)showsSecondaryOnlyButton;
-(id)initWithStyle:(long long)arg1 ;
-(void)_super_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(double)preferredSupplementaryColumnWidthFraction;
-(id)_super_childViewControllersToSendViewWillTransitionToSize;
-(BOOL)_visibleToggleButtonRequiresPresentsWithGesture;
-(void)setPreferredPrimaryColumnWidth:(double)arg1 ;
-(UISlidingBarStateRequest *)stateRequest;
-(id)viewControllerForColumn:(long long)arg1 ;
-(void)_updateScrollEdgeBehaviorForDetailNavigationContoller;
-(BOOL)_allowsDimmedSecondaryAsDeepestUnambiguousResponder;
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)_subclassPreferredFocusedViewPrioritizationType;
-(long long)style;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)preferredFocusedView;
-(void)_willBeginSnapshotSession:(id)arg1 ;
-(void)_didEndSnapshotSession:(id)arg1 ;
-(void)setEdgesForExtendedLayout:(unsigned long long)arg1 ;
-(void)setProvidesPresentationContextTransitionStyle:(BOOL)arg1 ;
-(void)setRestoresFocusAfterTransition:(BOOL)arg1 ;
-(void)setModalPresentationCapturesStatusBarAppearance:(BOOL)arg1 ;
-(long long)_super_preferredInterfaceOrientationForPresentation;
-(void)setExtendedLayoutIncludesOpaqueBars:(BOOL)arg1 ;
-(long long)_columnForViewController:(id)arg1 ;
-(void)setAutomaticallyAdjustsScrollViewInsets:(BOOL)arg1 ;
-(void)setViewRespectsSystemMinimumLayoutMargins:(BOOL)arg1 ;
-(BOOL)_shouldUseNewStatusBarBehavior;
-(long long)_splitBehavior;
-(void)setShowsFullScreenShortcutButtonIfApplicable:(BOOL)arg1 ;
-(BOOL)showsFullScreenShortcutButtonIfApplicable;
-(void)setPrefersSecondaryOnlyShortcutButtonVisible:(BOOL)arg1 ;
-(BOOL)prefersSecondaryOnlyShortcutButtonVisible;
-(void)setStateRequest:(UISlidingBarStateRequest *)arg1 ;
-(void)_setPreferredSplitBehavior:(long long)arg1 ;
-(long long)_preferredSplitBehavior;
-(id)_viewControllerForColumn:(long long)arg1 ;
-(void)_setViewController:(id)arg1 forColumn:(long long)arg2 ;
-(void)setPreferredSupplementalColumnWidthFraction:(double)arg1 ;
-(double)preferredSupplementalColumnWidthFraction;
-(void)setMinimumSupplementalColumnWidth:(double)arg1 ;
-(double)minimumSupplementalColumnWidth;
-(void)_setAllowsDimmedSecondaryAsDeepestUnambiguousResponder:(BOOL)arg1 ;
-(void)setMaximumSupplementalColumnWidth:(double)arg1 ;
-(double)maximumSupplementalColumnWidth;
-(double)supplementalColumnWidth;
-(void)_setPrefersOverlayInRegularWidthPhone:(BOOL)arg1 ;
-(BOOL)_prefersOverlayInRegularWidthPhone;
-(void)_setUsesDeviceOverlayPreferences:(BOOL)arg1 ;
-(void)loadView;
-(void)_allowingMutationsInDelegateCallback:(/*^block*/id)arg1 ;
-(long long)composition;
-(void)setView:(id)arg1 ;
-(BOOL)_usesDeviceOverlayPreferences;
-(void)_setPreferredPrimaryColumnWidth:(double)arg1 ;
-(double)_preferredPrimaryColumnWidth;
-(void)_setPreferredSupplementaryColumnWidth:(double)arg1 ;
-(double)_preferredSupplementaryColumnWidth;
-(id)_super_preferredFocusedView;
-(void)addChildViewController:(id)arg1 ;
-(id)_super_preferredFocusEnvironments;
-(BOOL)_super_shouldUpdateFocusInContext:(id)arg1 ;
-(BOOL)_shouldUseSeparateStatusBarStyles;
-(id)_super_childViewControllerForStatusBarStyle;
-(unsigned long long)_super_supportedInterfaceOrientations;
-(void)_super_removeChildViewController:(id)arg1 ;
-(id)_super_multitaskingDragExclusionRects;
-(id)_super_traitCollectionForChildEnvironment:(id)arg1 ;
-(BOOL)_super_disableAutomaticKeyboardBehavior;
-(id)_super_deepestUnambiguousResponder;
-(void)setModalTransitionStyle:(long long)arg1 ;
-(BOOL)_isLockedForDelegateCallback;
-(void)_setLockedForDelegateCallback:(BOOL)arg1 ;
-(void)setModalPresentationStyle:(long long)arg1 ;
-(id)_panelImpl;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)setDelegate:(id<UISplitViewControllerDelegate>)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(long long)_preferredModalPresentationStyle;
-(void)setPreferredSupplementaryColumnWidthFraction:(double)arg1 ;
-(void)setMaximumSupplementaryColumnWidth:(double)arg1 ;
-(BOOL)_forceDisplayModeBarButtonHidden;
-(void)removeFromParentViewController;
-(id)initWithCoder:(id)arg1 ;
-(double)preferredSupplementaryColumnWidth;
-(void)_commonInit;
-(void)_viewControllerChildViewControllersDidChange:(id)arg1 ;
-(double)minimumSupplementaryColumnWidth;
-(double)supplementaryColumnWidth;
-(void)_navigationControllerDidChangeNavigationBarHidden:(id)arg1 ;
-(NSArray *)possibleStates;
-(long long)preferredSplitBehavior;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_hideColumn:(long long)arg1 ;
-(void)_showColumn:(long long)arg1 ;
-(long long)splitBehavior;
-(BOOL)_navigationControllerShouldNotAdjustTransitioningSizeForChildContainer:(id)arg1 ;
-(id<UISplitViewControllerDelegate>)delegate;
-(BOOL)_usesPanelImpl;
-(void)_tabBarControllerDidChangeSelection:(id)arg1 ;
-(void)setViewController:(id)arg1 forColumn:(long long)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithComposition:(long long)arg1 ;
-(void)_animateToRequest:(id)arg1 ;
-(void)setDefinesPresentationContext:(BOOL)arg1 ;
-(void)setShowsSecondaryOnlyButton:(BOOL)arg1 ;
-(UISlidingBarConfiguration *)configuration;
-(void)setOverrideTraitCollection:(id)arg1 ;
-(void)_setVisibleToggleButtonRequiresPresentsWithGesture:(BOOL)arg1 ;
-(void)setComposition:(long long)arg1 ;
-(void)hideColumn:(long long)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(NSString *)description;
-(UIScreenEdgePanGestureRecognizer *)_fluidOpenSidebarPresentationGestureRecognizer;
-(void)_navigationControllerDidUpdateStack:(id)arg1 ;
-(void)_triggerSidebarKeyCommandAction:(id)arg1 ;
-(double)maximumSupplementaryColumnWidth;
-(void)setConfiguration:(UISlidingBarConfiguration *)arg1 ;
-(void)setMinimumSupplementaryColumnWidth:(double)arg1 ;
@end
