/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:24 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSArray;

@interface BWStreamStartStopSynchronizer : NSObject {

	NSDictionary* _streamStatesByPortType;
	float _timeoutInSeconds;
	BOOL _masterStartedGroupEntered;
	NSArray* _synchronizationSlavesOrderedByPriority;

}

@property (assign,nonatomic) BOOL waitForMasterAEToSettle; 
@property (nonatomic,retain) NSArray * synchronizationSlavesOrderedByPriority; 
+(void)initialize;
-(void)dealloc;
-(void)streamDidStop:(id)arg1 ;
-(void)streamDidStart:(id)arg1 ;
-(BOOL)waitForMasterAEToSettle;
-(void)setWaitForMasterAEToSettle:(BOOL)arg1 ;
-(id)initWithStreams:(id)arg1 timeoutInSeconds:(float)arg2 ;
-(void)setSynchronizationSlavesOrderedByPriority:(NSArray *)arg1 ;
-(NSArray *)synchronizationSlavesOrderedByPriority;
-(BOOL)streamWillStart:(id)arg1 ;
-(BOOL)streamWillStop:(id)arg1 ;
@end
