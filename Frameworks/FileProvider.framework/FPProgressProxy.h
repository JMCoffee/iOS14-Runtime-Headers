/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProgress.h>

@class NSURL, NSObservation;

@interface FPProgressProxy : NSProgress {

	id _subscriber;
	NSURL* _fileURL;
	BOOL _shouldStopAccessingURL;
	NSObservation* _observation;
	BOOL _didSetupParentProgress;
	BOOL _updateFileCount;

}

@property (assign,nonatomic) BOOL updateFileCount;              //@synthesize updateFileCount=_updateFileCount - In the implementation block
+(void)initialize;
-(void)dealloc;
-(void)stopTrackingIfStarted;
-(void)setProgressDidSetupHandler:(/*^block*/id)arg1 ;
-(void)startTrackingFileURL:(id)arg1 kind:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)updateFileCount;
-(void)setUpdateFileCount:(BOOL)arg1 ;
-(void)_updateWithProgress:(id)arg1 ;
-(void)setCancellationHandler:(/*^block*/id)arg1 ;
@end
