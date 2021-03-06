/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AdPlatformsCommon.framework/AdPlatformsCommon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdPlatformsCommon/APXPCActionRequester.h>
#import <libobjc.A.dylib/APMetricDaemonDeliverer.h>
#import <libobjc.A.dylib/APMetricNotificationRegisterOwner.h>
#import <libobjc.A.dylib/APMetricReceiving.h>

@protocol APMetricNotificationRegisterAPMetricReceiving;
@class NSString;

@interface APMetricDaemonDelivery : APXPCActionRequester <APMetricDaemonDeliverer, APMetricNotificationRegisterOwner, APMetricReceiving> {

	id<APMetricNotificationRegister><APMetricReceiving> _notificationRegistrar;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<APMetricNotificationRegister><APMetricReceiving> notificationRegistrar;              //@synthesize notificationRegistrar=_notificationRegistrar - In the implementation block
+(id)machService;
+(BOOL)canShareConnection;
+(id)daemonDelivery;
+(void)setDaemonDelivery:(id)arg1 ;
-(void)connectionInterrupted;
-(id)remoteObjectInterface;
-(void)connectionInvalidated;
-(id)init;
-(void)extendCollectionClassesForRemoteInterface:(id)arg1 ;
-(void)receivedMetric:(id)arg1 ;
-(id<APMetricNotificationRegister><APMetricReceiving>)notificationRegistrar;
@end

