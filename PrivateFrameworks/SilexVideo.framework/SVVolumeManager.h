/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVVideoTransitionObserver.h>

@protocol SVVolumeReporting, SVVideoVolumeObserverFactory, SVVideoVolumeObserving;
@class NSString;

@interface SVVolumeManager : NSObject <SVVideoTransitionObserver> {

	id<SVVolumeReporting> _volumeReporter;
	id<SVVideoVolumeObserverFactory> _volumeObserverFactory;
	id<SVVideoVolumeObserving> _volumeObserver;

}

@property (nonatomic,readonly) id<SVVolumeReporting> volumeReporter;                                //@synthesize volumeReporter=_volumeReporter - In the implementation block
@property (nonatomic,readonly) id<SVVideoVolumeObserverFactory> volumeObserverFactory;              //@synthesize volumeObserverFactory=_volumeObserverFactory - In the implementation block
@property (nonatomic,retain) id<SVVideoVolumeObserving> volumeObserver;                             //@synthesize volumeObserver=_volumeObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setVolumeObserver:(id<SVVideoVolumeObserving>)arg1 ;
-(id<SVVolumeReporting>)volumeReporter;
-(id<SVVideoVolumeObserving>)volumeObserver;
-(void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)initWithVolumeReporter:(id)arg1 volumeObserverFactory:(id)arg2 ;
-(id<SVVideoVolumeObserverFactory>)volumeObserverFactory;
@end
