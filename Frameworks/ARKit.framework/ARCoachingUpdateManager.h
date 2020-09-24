/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLCommandQueue, ARCoachingUpdateManagerDelegate;
@class CAMetalLayer, CADisplayLink;

@interface ARCoachingUpdateManager : NSObject {

	CAMetalLayer* _metalLayer;
	id<MTLCommandQueue> _commandQueue;
	CADisplayLink* _displayLink;
	double _lastUpdateTime;
	id<ARCoachingUpdateManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ARCoachingUpdateManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)start;
-(void)update;
-(void)setDelegate:(id<ARCoachingUpdateManagerDelegate>)arg1 ;
-(id<ARCoachingUpdateManagerDelegate>)delegate;
-(void)stop;
-(void)drawWithTimeDelta:(double)arg1 ;
-(id)init:(id)arg1 metalLayer:(id)arg2 ;
@end
