/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIScrollView, SKUIProductPageHeaderViewController;


@protocol SKUIProductPageChildViewController <NSObject>
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (nonatomic,retain) SKUIProductPageHeaderViewController * headerViewController; 
@property (assign,nonatomic,__weak) id<SKUIProductPageChildViewControllerDelegate> delegate; 
@required
-(void)setDelegate:(id)arg1;
-(id<SKUIProductPageChildViewControllerDelegate>)delegate;
-(SKUIProductPageHeaderViewController *)headerViewController;
-(void)setHeaderViewController:(id)arg1;
-(UIScrollView *)scrollView;

@end
