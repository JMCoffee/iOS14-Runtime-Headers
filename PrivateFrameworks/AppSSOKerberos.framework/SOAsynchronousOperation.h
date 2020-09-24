/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@interface SOAsynchronousOperation : NSOperation {

	unsigned long long _state;

}

@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isReady;
-(void)finish;
-(void)setState:(unsigned long long)arg1 ;
-(void)start;
-(id)init;
-(BOOL)isAsynchronous;
-(unsigned long long)state;
-(void)main;
@end
