/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsServices.framework/NewsServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class NSArray, _UIResilientRemoteViewContainerViewController;

@interface NSSNewsViewController : UIViewController {

	BOOL _linkPreviewing;
	NSArray* _articleIDs;
	_UIResilientRemoteViewContainerViewController* _remoteViewContainerViewController;

}

@property (nonatomic,copy) NSArray * articleIDs;                                                                             //@synthesize articleIDs=_articleIDs - In the implementation block
@property (nonatomic,retain) _UIResilientRemoteViewContainerViewController * remoteViewContainerViewController;              //@synthesize remoteViewContainerViewController=_remoteViewContainerViewController - In the implementation block
@property (assign,getter=isLinkPreviewing,nonatomic) BOOL linkPreviewing;                                                    //@synthesize linkPreviewing=_linkPreviewing - In the implementation block
+(BOOL)canOpenURL:(id)arg1 ;
-(NSArray *)articleIDs;
-(id)initWithURL:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
-(void)requestRemoteViewController;
-(void)viewDidLoad;
-(void)setLinkPreviewing:(BOOL)arg1 ;
-(void)setArticleIDs:(NSArray *)arg1 ;
-(id)initWithArticleID:(id)arg1 ;
-(BOOL)isLinkPreviewing;
-(id)initWithArticleIDs:(id)arg1 ;
-(_UIResilientRemoteViewContainerViewController *)remoteViewContainerViewController;
-(void)setupRemoteViewController:(id)arg1 ;
-(void)setRemoteViewContainerViewController:(_UIResilientRemoteViewContainerViewController *)arg1 ;
@end

