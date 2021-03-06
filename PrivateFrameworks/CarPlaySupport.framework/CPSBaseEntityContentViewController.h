/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CPSEntityContentViewControllerDelegate.h>

@class CPEntity, CPSEntityResourceProvider, NSString;

@interface CPSBaseEntityContentViewController : UIViewController <CPSEntityContentViewControllerDelegate> {

	CPEntity* _entity;
	CPSEntityResourceProvider* _resourceProvider;

}

@property (nonatomic,retain) CPSEntityResourceProvider * resourceProvider;              //@synthesize resourceProvider=_resourceProvider - In the implementation block
@property (nonatomic,readonly) CPEntity * entity;                                       //@synthesize entity=_entity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CPEntity *)entity;
-(CPSEntityResourceProvider *)resourceProvider;
-(void)setResourceProvider:(CPSEntityResourceProvider *)arg1 ;
-(id)initWithEntity:(id)arg1 resourceProvider:(id)arg2 ;
-(void)didUpdateEntity:(id)arg1 ;
-(void)updateWithEntity:(id)arg1 ;
-(BOOL)shouldAppearInUnsafeArea;
-(BOOL)viewController:(id)arg1 didPressButton:(id)arg2 ;
@end

