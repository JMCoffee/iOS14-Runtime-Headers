/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKPlayerStateChangeEventUserInfo.h>

@interface IKPlayerShouldHandleStateChangeEventUserInfo : IKPlayerStateChangeEventUserInfo {

	BOOL _shouldHandle;
	double _requestedTime;
	double _proposedTime;

}

@property (nonatomic,readonly) double requestedTime;              //@synthesize requestedTime=_requestedTime - In the implementation block
@property (nonatomic,readonly) BOOL shouldHandle;                 //@synthesize shouldHandle=_shouldHandle - In the implementation block
@property (nonatomic,readonly) double proposedTime;               //@synthesize proposedTime=_proposedTime - In the implementation block
-(double)proposedTime;
-(id)initWithState:(long long)arg1 ;
-(void)processReturnJSValue:(id)arg1 inContext:(id)arg2 ;
-(double)requestedTime;
-(id)initWithState:(long long)arg1 oldState:(long long)arg2 ;
-(id)initWithState:(long long)arg1 requestedTime:(double)arg2 ;
-(id)initWithState:(long long)arg1 oldState:(long long)arg2 requestedTime:(double)arg3 ;
-(BOOL)shouldHandle;
@end
