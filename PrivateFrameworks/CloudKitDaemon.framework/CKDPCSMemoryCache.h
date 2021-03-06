/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source, NSObject;
@class NSMutableDictionary, NSObject;

@interface CKDPCSMemoryCache : NSObject {

	BOOL _memoryStatusChanged;
	int _fakeMemoryWarningToken;
	unsigned long long _maxEntries;
	double _minAge;
	NSMutableDictionary* _cacheEntries;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_source> _memoryNotificationSource;
	unsigned long long _memoryStatus;
	id<NSObject> _memoryCacheEvictNotificationObserver;
	double _oldestCacheEntry;
	unsigned long long _memoryCacheRequestCount;
	unsigned long long _memoryCacheHitCount;
	unsigned long long _memoryCacheHighwaterCount;
	unsigned long long _memoryCacheDeleteCount;
	unsigned long long _memoryCacheUpdateCount;
	unsigned long long _memoryCacheEvictCount;

}

@property (nonatomic,retain) NSMutableDictionary * cacheEntries;                                  //@synthesize cacheEntries=_cacheEntries - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;                            //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> memoryNotificationSource;              //@synthesize memoryNotificationSource=_memoryNotificationSource - In the implementation block
@property (assign) unsigned long long memoryStatus;                                               //@synthesize memoryStatus=_memoryStatus - In the implementation block
@property (assign) BOOL memoryStatusChanged;                                                      //@synthesize memoryStatusChanged=_memoryStatusChanged - In the implementation block
@property (nonatomic,retain) id<NSObject> memoryCacheEvictNotificationObserver;                   //@synthesize memoryCacheEvictNotificationObserver=_memoryCacheEvictNotificationObserver - In the implementation block
@property (assign) int fakeMemoryWarningToken;                                                    //@synthesize fakeMemoryWarningToken=_fakeMemoryWarningToken - In the implementation block
@property (assign) double oldestCacheEntry;                                                       //@synthesize oldestCacheEntry=_oldestCacheEntry - In the implementation block
@property (assign) unsigned long long memoryCacheRequestCount;                                    //@synthesize memoryCacheRequestCount=_memoryCacheRequestCount - In the implementation block
@property (assign) unsigned long long memoryCacheHitCount;                                        //@synthesize memoryCacheHitCount=_memoryCacheHitCount - In the implementation block
@property (assign) unsigned long long memoryCacheHighwaterCount;                                  //@synthesize memoryCacheHighwaterCount=_memoryCacheHighwaterCount - In the implementation block
@property (assign) unsigned long long memoryCacheDeleteCount;                                     //@synthesize memoryCacheDeleteCount=_memoryCacheDeleteCount - In the implementation block
@property (assign) unsigned long long memoryCacheUpdateCount;                                     //@synthesize memoryCacheUpdateCount=_memoryCacheUpdateCount - In the implementation block
@property (assign) unsigned long long memoryCacheEvictCount;                                      //@synthesize memoryCacheEvictCount=_memoryCacheEvictCount - In the implementation block
@property (assign,nonatomic) unsigned long long maxEntries;                                       //@synthesize maxEntries=_maxEntries - In the implementation block
@property (assign,nonatomic) double minAge;                                                       //@synthesize minAge=_minAge - In the implementation block
+(id)globalEvictQueue;
+(void)registerEvictionTimer;
-(id)CKStatusReportArray;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)memoryCacheDeleteCount;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(id<NSObject>)memoryCacheEvictNotificationObserver;
-(void)setMinAge:(double)arg1 ;
-(void)setMemoryCacheHitCount:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_source>)memoryNotificationSource;
-(void)setMemoryCacheHighwaterCount:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)setMemoryCacheDeleteCount:(unsigned long long)arg1 ;
-(void)getPCSDataFromCacheForID:(id)arg1 databaseScope:(long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setMemoryCacheUpdateCount:(unsigned long long)arg1 ;
-(void)setCacheEntries:(NSMutableDictionary *)arg1 ;
-(void)setMaxEntries:(unsigned long long)arg1 ;
-(void)setOldestCacheEntry:(double)arg1 ;
-(BOOL)memoryStatusChanged;
-(void)setFakeMemoryWarningToken:(int)arg1 ;
-(BOOL)hasStatusToReport;
-(id)init;
-(unsigned long long)memoryCacheHighwaterCount;
-(void)setMemoryCacheRequestCount:(unsigned long long)arg1 ;
-(unsigned long long)_cacheCount;
-(unsigned long long)maxEntries;
-(void)clearCache;
-(void)runCacheEviction;
-(void)_lockedEvictEntriesFromCache;
-(unsigned long long)memoryCacheEvictCount;
-(unsigned long long)memoryCacheHitCount;
-(void)setMemoryStatus:(unsigned long long)arg1 ;
-(void)setMemoryCacheEvictNotificationObserver:(id<NSObject>)arg1 ;
-(unsigned long long)memoryCacheUpdateCount;
-(void)setMemoryCacheEvictCount:(unsigned long long)arg1 ;
-(double)minAge;
-(unsigned long long)memoryStatus;
-(void)setMemoryNotificationSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setMemoryStatusChanged:(BOOL)arg1 ;
-(NSMutableDictionary *)cacheEntries;
-(int)fakeMemoryWarningToken;
-(double)oldestCacheEntry;
-(void)setPCSData:(id)arg1 forItemID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(unsigned long long)memoryCacheRequestCount;
@end

