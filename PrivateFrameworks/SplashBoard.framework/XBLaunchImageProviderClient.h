/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSBaseXPCClient.h>

@class XBApplicationLaunchCompatibilityInfo;

@interface XBLaunchImageProviderClient : BSBaseXPCClient {

	XBApplicationLaunchCompatibilityInfo* _appInfo;

}
+(void)preheatServiceWithTimeout:(double)arg1 ;
-(id)init;
-(id)initWithApplicationInfo:(id)arg1 ;
-(unsigned)generateImageWithContext:(id)arg1 captureInfo:(id*)arg2 error:(id*)arg3 ;
@end
