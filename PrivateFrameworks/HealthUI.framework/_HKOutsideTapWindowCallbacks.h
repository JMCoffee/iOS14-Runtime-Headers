/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizerDelegate.h>

@class UITapGestureRecognizer, UIWindow, NSMutableArray, NSString;

@interface _HKOutsideTapWindowCallbacks : NSObject <UIGestureRecognizerDelegate> {

	UITapGestureRecognizer* _recognizer;
	UIWindow* _window;
	NSMutableArray* _callbacks;

}

@property (nonatomic,retain) UITapGestureRecognizer * recognizer;              //@synthesize recognizer=_recognizer - In the implementation block
@property (assign,nonatomic,__weak) UIWindow * window;                         //@synthesize window=_window - In the implementation block
@property (nonatomic,retain) NSMutableArray * callbacks;                       //@synthesize callbacks=_callbacks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIWindow *)window;
-(void)setWindow:(UIWindow *)arg1 ;
-(id)initWithWindow:(id)arg1 ;
-(void)setCallbacks:(NSMutableArray *)arg1 ;
-(NSMutableArray *)callbacks;
-(void)_handleTap:(id)arg1 ;
-(void)addCallbackForView:(id)arg1 outsideTapBlock:(/*^block*/id)arg2 ;
-(BOOL)matchesWindow:(id)arg1 ;
-(void)removeCallbackForView:(id)arg1 ;
-(void)_installTapGestureRecognizerIfNeeded;
-(void)_removeTapGestureRecognizerIfNeeded;
-(UITapGestureRecognizer *)recognizer;
-(void)setRecognizer:(UITapGestureRecognizer *)arg1 ;
@end
