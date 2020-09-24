/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSURL, NSTimer, NSArray;

@interface SBRecentAppLayoutsPersister : NSObject {

	NSObject*<OS_dispatch_queue> _ioQueue;
	NSURL* _persistenceURL;
	NSTimer* _persistTimer;
	BOOL _initializedNewStoreOnDisk;
	NSArray* _recents;

}

@property (nonatomic,retain) NSArray * recents;                             //@synthesize recents=_recents - In the implementation block
@property (nonatomic,readonly) BOOL initializedNewStoreOnDisk; 
-(NSArray *)recents;
-(void)syncToDiskSynchronously;
-(BOOL)initializedNewStoreOnDisk;
-(void)_loadRecents;
-(id)initWithPersistenceURL:(id)arg1 ;
-(void)setRecents:(NSArray *)arg1 ;
-(void)_enqueueDiskWrite;
-(id)_scheduledPersistTimer;
-(void)_queue_writeCompressedProtobufRepresentationToDisk:(id)arg1 ;
-(void)syncToDiskSoonIfDirty;
-(void)_persistTimerExpired:(id)arg1 ;
@end
