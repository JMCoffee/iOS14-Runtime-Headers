/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/TUMotionManagerObserver.h>

@interface TeaUI.BlueprintViewportMonitor : NSObject <UICollectionViewDelegate, UITableViewDelegate, TUMotionManagerObserver> {

	 observers;
	 options;

}
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)motionManager:(id)arg1 didUpdateMotionData:(id)arg2 ;
-(void)motionManager:(id)arg1 motionEnabled:(BOOL)arg2 ;
-(id)init;
@end
