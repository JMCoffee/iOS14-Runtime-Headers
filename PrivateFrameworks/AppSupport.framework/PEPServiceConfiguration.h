/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PEPServiceConfiguration : NSObject {

	NSString* _cacheFilePath;
	BOOL _shouldDownloadNetworkConfigFile;
	double _cachedFileLastModifyDate;

}
+(id)sharedInstance;
-(BOOL)registerNetworkDefaultsForAppID:(id)arg1 ;
-(void)dealloc;
-(void)_postNotification;
-(id)init;
-(BOOL)registerNetworkDefaultsForAppIDs:(id)arg1 forceUpdate:(BOOL)arg2 ;
-(void)_updateDefaults:(id)arg1 ;
@end
