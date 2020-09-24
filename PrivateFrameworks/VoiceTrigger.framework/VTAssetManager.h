/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, VTPolicy;

@interface VTAssetManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	VTPolicy* _enablePolicy;

}
+(id)sharedInstance;
-(id)_findLatestInstalledAsset:(id)arg1 ;
-(void)_runAssetQuery:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_isReadyToUse;
-(id)init;
-(void)_fetchRemoteMetaData;
-(id)_defaultDownloadOptions;
-(void)_downloadAsset:(id)arg1 withComplete:(/*^block*/id)arg2 ;
-(id)installedAssetForLanguage:(id)arg1 ;
-(void)_fetchRemoteAssetForLanguage:(id)arg1 supportPremium:(BOOL)arg2 ;
-(id)_installedAssetForLanguage:(id)arg1 supportPremium:(BOOL)arg2 ;
-(id)_assetQueryForLanguage:(id)arg1 supportPremium:(BOOL)arg2 ;
-(id)_filteredAssetsForAssets:(id)arg1 language:(id)arg2 supportPremium:(BOOL)arg3 ;
-(id)_installedAssetWithoutMetaDataForLanguage:(id)arg1 supportPremium:(BOOL)arg2 ;
-(void)_updateFromRemoteToLocalAssets:(id)arg1 ;
-(void)_addKeyValuePairForQuery:(id*)arg1 ;
-(void)_startDownloadingVoiceTriggerAsset:(id)arg1 progress:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)assetForLanguage:(id)arg1 ;
@end
