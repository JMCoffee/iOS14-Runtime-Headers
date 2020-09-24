/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/FPOperationClient.h>

@protocol FPCancellable, OS_dispatch_queue;
@class NSObject;

@interface FPOperation : NSOperation <FPOperationClient> {

	id<FPCancellable> _remoteOperation;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned char _uuid[16];
	id _executionTransaction;
	BOOL _finished;
	/*^block*/id _finishedBlock;

}

@property (getter=isExecuting,readonly) BOOL executing; 
@property (getter=isFinished,readonly) BOOL finished;                                 //@synthesize finished=_finished - In the implementation block
@property (nonatomic,retain) id<FPCancellable> remoteOperation;                       //@synthesize remoteOperation=_remoteOperation - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize queue=_queue - In the implementation block
@property (copy) id finishedBlock;                                                    //@synthesize finishedBlock=_finishedBlock - In the implementation block
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)cancel;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)invalidate;
-(void)_setExecuting:(BOOL)arg1 ;
-(BOOL)_finishIfCancelled;
-(void)_setFinished:(BOOL)arg1 ;
-(void)completedWithResult:(id)arg1 error:(id)arg2 ;
-(BOOL)finishIfCancelled;
-(id<FPCancellable>)remoteOperation;
-(void)setRemoteOperation:(id<FPCancellable>)arg1 ;
-(void)dealloc;
-(void)operationDidProgressWithInfo:(id)arg1 error:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)start;
-(id)init;
-(id)operationDescription;
-(id)finishedBlock;
-(void)setFinishedBlock:(id)arg1 ;
-(id)proxifiedDescription;
-(void)setCancellationHandler:(id)arg1 ;
-(void)resetRemoteOperation;
-(void)_setRemoteCancellationHandler:(id)arg1 ;
-(id)description;
@end
