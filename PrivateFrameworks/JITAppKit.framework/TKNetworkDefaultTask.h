/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TKNetworkTask.h>

@class MCLURLDataLoaderTask, NSString;

@interface TKNetworkDefaultTask : NSObject <TKNetworkTask> {

	MCLURLDataLoaderTask* _task;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(id)initWithTask:(id)arg1 ;
@end
