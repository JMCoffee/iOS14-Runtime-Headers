/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <UIKitCore/UIView.h>

@interface SXTouchForwardingView : UIView {

	/*^block*/id _touchedBlock;
	double _lastTouchTimestamp;

}

@property (assign,nonatomic) double lastTouchTimestamp;                  //@synthesize lastTouchTimestamp=_lastTouchTimestamp - In the implementation block
@property (setter=onTouch:,nonatomic,copy) id touchedBlock;              //@synthesize touchedBlock=_touchedBlock - In the implementation block
-(double)lastTouchTimestamp;
-(void)onTouch:(/*^block*/id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)touchedBlock;
-(void)setLastTouchTimestamp:(double)arg1 ;
@end
