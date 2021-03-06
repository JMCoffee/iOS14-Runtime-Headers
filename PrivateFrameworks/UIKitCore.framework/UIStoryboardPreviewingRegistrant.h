/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>

@protocol UIViewControllerPreviewing;
@class UIStoryboardPreviewingSegueTemplateStorage, UIViewController, UIView, NSString;

@interface UIStoryboardPreviewingRegistrant : NSObject <NSCoding, UIViewControllerPreviewingDelegate> {

	id<UIViewControllerPreviewing> _previewingContext;
	UIStoryboardPreviewingSegueTemplateStorage* _segueTemplateStorage;
	UIViewController* _viewController;
	UIView* _sourceView;

}

@property (assign,nonatomic,__weak) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic,__weak) UIView * sourceView;                            //@synthesize sourceView=_sourceView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIViewController *)viewController;
-(UIView *)sourceView;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)registerForPreviewing;
-(void)setSourceView:(UIView *)arg1 ;
-(void)unregisterForPreviewing;
@end

