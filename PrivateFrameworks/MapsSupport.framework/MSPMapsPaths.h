/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface MSPMapsPaths : NSObject {

	NSURL* _libraryURL;
	NSURL* _groupLibraryURL;
	/*^block*/id _invalidationHandler;
	NSString* _mapsDirectory;
	NSString* _cacheDirectory;
	NSString* _groupDirectory;
	NSString* _nanoDirectory;
	NSString* _geoPinnedPlacesSettingsPath;
	NSString* _geoCollectionsSettingsPath;
	NSString* _bookmarksSettingsPath;
	NSString* _geoBookmarksSettingsPath;
	NSString* _directionsSettingsPath;
	NSString* _historySettingsPath;
	NSString* _geoHistorySettingsPath;
	NSString* _nanoHistorySettingsPath;
	NSString* _failedSearchesSettingsPath;
	NSString* _failedGeoSearchesSettingsPath;
	NSString* _failedDirectionsSettingsPath;
	NSString* _failedGeoDirectionsSettingsPath;
	NSString* _routingAppLaunchRecordPath;
	NSString* _directionsCachePath;
	NSString* _pinsSettingsPath;
	NSString* _reportAProblemDirectionsRecordingsPath;
	NSString* _reportAProblemSearchRecordingsPath;
	NSString* _reportAProblemNotificationsPath;
	NSString* _favoritesSyncedMarkerFile;
	NSString* _historySyncedMarkerFile;

}

@property (nonatomic,readonly) NSString * homeDirectory; 
@property (nonatomic,readonly) NSString * mapsDirectory;                                                    //@synthesize mapsDirectory=_mapsDirectory - In the implementation block
@property (nonatomic,readonly) NSString * cacheDirectory;                                                   //@synthesize cacheDirectory=_cacheDirectory - In the implementation block
@property (nonatomic,readonly) NSString * groupDirectory;                                                   //@synthesize groupDirectory=_groupDirectory - In the implementation block
@property (nonatomic,readonly) NSString * nanoDirectory;                                                    //@synthesize nanoDirectory=_nanoDirectory - In the implementation block
@property (nonatomic,readonly) NSString * geoPinnedPlacesSettingsPath;                                      //@synthesize geoPinnedPlacesSettingsPath=_geoPinnedPlacesSettingsPath - In the implementation block
@property (nonatomic,readonly) NSString * geoCollectionsSettingsPath;                                       //@synthesize geoCollectionsSettingsPath=_geoCollectionsSettingsPath - In the implementation block
@property (nonatomic,readonly) NSString * bookmarksSettingsPath;                                            //@synthesize bookmarksSettingsPath=_bookmarksSettingsPath - In the implementation block
@property (nonatomic,readonly) NSString * geoBookmarksSettingsPath;                                         //@synthesize geoBookmarksSettingsPath=_geoBookmarksSettingsPath - In the implementation block
@property (nonatomic,readonly) NSString * directionsSettingsPath;                                           //@synthesize directionsSettingsPath=_directionsSettingsPath - In the implementation block
@property (nonatomic,readonly) NSString * historySettingsPath;                                              //@synthesize historySettingsPath=_historySettingsPath - In the implementation block
@property (nonatomic,readonly) NSString * geoHistorySettingsPath;                                           //@synthesize geoHistorySettingsPath=_geoHistorySettingsPath - In the implementation block
@property (nonatomic,readonly) NSString * nanoHistorySettingsPath;                                          //@synthesize nanoHistorySettingsPath=_nanoHistorySettingsPath - In the implementation block
@property (nonatomic,readonly) NSString * failedSearchesSettingsPath;                                       //@synthesize failedSearchesSettingsPath=_failedSearchesSettingsPath - In the implementation block
@property (nonatomic,readonly) NSString * failedGeoSearchesSettingsPath;                                    //@synthesize failedGeoSearchesSettingsPath=_failedGeoSearchesSettingsPath - In the implementation block
@property (nonatomic,readonly) NSString * failedGeoDirectionsSettingsPath;                                  //@synthesize failedGeoDirectionsSettingsPath=_failedGeoDirectionsSettingsPath - In the implementation block
@property (nonatomic,readonly) NSString * failedDirectionsSettingsPath;                                     //@synthesize failedDirectionsSettingsPath=_failedDirectionsSettingsPath - In the implementation block
@property (nonatomic,readonly) NSString * routingAppLaunchRecordPath;                                       //@synthesize routingAppLaunchRecordPath=_routingAppLaunchRecordPath - In the implementation block
@property (nonatomic,readonly) NSString * pinsSettingsPath;                                                 //@synthesize pinsSettingsPath=_pinsSettingsPath - In the implementation block
@property (nonatomic,readonly) NSString * directionsCachePath;                                              //@synthesize directionsCachePath=_directionsCachePath - In the implementation block
@property (nonatomic,readonly) NSString * reportAProblemDirectionsRecordingsPath;                           //@synthesize reportAProblemDirectionsRecordingsPath=_reportAProblemDirectionsRecordingsPath - In the implementation block
@property (nonatomic,readonly) NSString * reportAProblemSearchRecordingsPath;                               //@synthesize reportAProblemSearchRecordingsPath=_reportAProblemSearchRecordingsPath - In the implementation block
@property (nonatomic,readonly) NSString * reportAProblemNotificationsPath;                                  //@synthesize reportAProblemNotificationsPath=_reportAProblemNotificationsPath - In the implementation block
@property (nonatomic,readonly) NSString * favoritesSyncedMarkerFile;                                        //@synthesize favoritesSyncedMarkerFile=_favoritesSyncedMarkerFile - In the implementation block
@property (nonatomic,readonly) BOOL shouldSyncMergeFavoritesAfterCheckingOrCreatingMarkerFile; 
@property (nonatomic,readonly) NSString * historySyncedMarkerFile;                                          //@synthesize historySyncedMarkerFile=_historySyncedMarkerFile - In the implementation block
@property (nonatomic,readonly) BOOL shouldSyncMergeHistoryAfterCheckingOrCreatingMarkerFile; 
+(id)cacheDirectory;
+(id)groupDirectory;
+(id)routingAppLaunchRecordPath;
+(id)failedGeoDirectionsSettingsPath;
+(id)bookmarksSettingsPath;
+(id)failedSearchesSettingsPath;
+(id)failedDirectionsSettingsPath;
+(id)geoCollectionsSettingsPath;
+(id)directionsCachePath;
+(id)mapsDirectory;
+(id)pinsSettingsPath;
+(id)reportAProblemNotificationsPath;
+(id)historySettingsPath;
+(id)mapsApplicationContainerPathsWithInvalidationHandler:(/*^block*/id)arg1 ;
+(id)geoPinnedPlacesSettingsPath;
+(id)nanoHistorySettingsPath;
+(id)pathsAtLocation:(long long)arg1 ;
+(id)reportAProblemDirectionsRecordingsPath;
+(id)nanoDirectory;
+(id)mapsApplicationContainerPaths;
+(id)reportAProblemSearchRecordingsPath;
+(id)geoBookmarksSettingsPath;
+(id)currentMapsApplicationContainerURL;
+(id)directionsSettingsPath;
+(id)favoritesSyncedMarkerFile;
+(id)failedGeoSearchesSettingsPath;
+(id)currentMapsGroupContainerURL;
+(id)geoHistorySettingsPath;
+(id)historySyncedMarkerFile;
-(NSString *)cacheDirectory;
-(NSString *)groupDirectory;
-(NSString *)routingAppLaunchRecordPath;
-(NSString *)failedGeoDirectionsSettingsPath;
-(NSString *)bookmarksSettingsPath;
-(NSString *)failedSearchesSettingsPath;
-(NSString *)failedDirectionsSettingsPath;
-(NSString *)geoCollectionsSettingsPath;
-(NSString *)directionsCachePath;
-(NSString *)mapsDirectory;
-(NSString *)pinsSettingsPath;
-(id)initWithLibraryDirectoryURL:(id)arg1 groupLibraryURL:(id)arg2 invalidationHandler:(/*^block*/id)arg3 ;
-(BOOL)shouldSyncMergeHistoryAfterCheckingOrCreatingMarkerFile;
-(NSString *)reportAProblemNotificationsPath;
-(NSString *)historySettingsPath;
-(BOOL)deleteHistorySyncedMarkerFile;
-(NSString *)geoPinnedPlacesSettingsPath;
-(NSString *)nanoHistorySettingsPath;
-(void)_invalidate;
-(NSString *)reportAProblemDirectionsRecordingsPath;
-(NSString *)nanoDirectory;
-(NSString *)reportAProblemSearchRecordingsPath;
-(NSString *)homeDirectory;
-(BOOL)deleteFavoritesSyncedMarkerFile;
-(NSString *)geoBookmarksSettingsPath;
-(BOOL)_shouldSyncMergeAfterCheckingOrCreatingMarkerFileAtPath:(id)arg1 ;
-(NSString *)directionsSettingsPath;
-(NSString *)favoritesSyncedMarkerFile;
-(NSString *)failedGeoSearchesSettingsPath;
-(NSString *)geoHistorySettingsPath;
-(BOOL)shouldSyncMergeFavoritesAfterCheckingOrCreatingMarkerFile;
-(BOOL)_deleteSyncedFileAtPath:(id)arg1 ;
-(NSString *)historySyncedMarkerFile;
@end
