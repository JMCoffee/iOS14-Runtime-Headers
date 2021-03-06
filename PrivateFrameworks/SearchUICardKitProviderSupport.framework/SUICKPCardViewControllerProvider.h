/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SearchUICardKitProviderSupport.framework/SearchUICardKitProviderSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUICardKitProviderSupport/SearchUICardKitProviderSupport-Structs.h>
#import <libobjc.A.dylib/CRKCardSectionViewControllerDelegate.h>
#import <SearchUICardKitProviderSupport/SearchUIFeedbackDelegate.h>
#import <libobjc.A.dylib/CRKCardViewControllerProviding.h>
#import <SearchUICardKitProviderSupport/SearchUICardViewDelegate.h>

@class NSMutableDictionary, NSMutableArray, NSString;

@interface SUICKPCardViewControllerProvider : NSObject <CRKCardSectionViewControllerDelegate, SearchUIFeedbackDelegate, CRKCardViewControllerProviding, SearchUICardViewDelegate> {

	NSMutableDictionary* _cardsByCardSectionIdentifiers;
	NSMutableDictionary* _cardViewControllersByCardIdentifiers;
	NSMutableArray* _pendingDismissalCommands;
	long long _preferredPunchoutIndex;
	NSMutableDictionary* _feedbackDelegateDemultiplexersByCardIdentifiers;
	CGSize _preferredContentSize;

}

@property (nonatomic,retain) NSMutableDictionary * feedbackDelegateDemultiplexersByCardIdentifiers;              //@synthesize feedbackDelegateDemultiplexersByCardIdentifiers=_feedbackDelegateDemultiplexersByCardIdentifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cardViewController:(id)arg1 preferredContentSizeDidChange:(CGSize)arg2 animated:(BOOL)arg3 ;
-(id)init;
-(id)customViewControllerForCardSection:(id)arg1 ;
-(void)presentViewController:(id)arg1 ;
-(void)userDidEngageCardSection:(id)arg1 withEngagementFeedback:(id)arg2 ;
-(void)cardSectionViewWillAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2 ;
-(void)cardSectionViewDidAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2 ;
-(void)cardSectionViewDidDisappearForCardSection:(id)arg1 withDisappearanceFeedback:(id)arg2 ;
-(CGSize)boundingSizeForCardSectionViewController:(id)arg1 ;
-(unsigned long long)displayPriorityForCard:(id)arg1 ;
-(id)cardViewControllerForCard:(id)arg1 ;
-(void)presentation:(id)arg1 didApplyCardSectionViewSource:(id)arg2 toCardViewController:(id)arg3 ;
-(BOOL)performCommand:(id)arg1 forCardSectionViewController:(id)arg2 ;
-(long long)preferredPunchoutIndexForCardSectionViewController:(id)arg1 ;
-(void)presentViewController:(id)arg1 forCardSectionViewController:(id)arg2 ;
-(void)cardSectionViewController:(id)arg1 didSelectPreferredPunchoutIndex:(long long)arg2 ;
-(id)_createCardViewControllerForCard:(id)arg1 ;
-(id)_cardViewControllerForCardSection:(id)arg1 ;
-(BOOL)_askDelegateToPerformReferentialCommand:(id)arg1 forCardSection:(id)arg2 ;
-(NSMutableDictionary *)feedbackDelegateDemultiplexersByCardIdentifiers;
-(void)setFeedbackDelegateDemultiplexersByCardIdentifiers:(NSMutableDictionary *)arg1 ;
@end

