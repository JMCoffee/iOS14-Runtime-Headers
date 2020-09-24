/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <libobjc.A.dylib/AVPlayerItemOutputPullDelegate.h>

@class NSString;

@interface WebCoreAVFPullDelegate : NSObject <AVPlayerItemOutputPullDelegate> {

	BinarySemaphore m_semaphore;

}

@property (nonatomic,readonly) BinarySemaphore* semaphore; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)outputMediaDataWillChange:(id)arg1 ;
-(void)outputSequenceWasFlushed:(id)arg1 ;
-(BinarySemaphore*)semaphore;
@end
