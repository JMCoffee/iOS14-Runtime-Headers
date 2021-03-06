/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNUIPRLikenessResolver.h>

@protocol CNUIPRLikenessResolver <NSObject>
@required
+(id)descriptorForRequiredKeys;
-(id)likenessesForContact:(id)arg1 workScheduler:(id)arg2;
-(id)resolveLikenessesForContacts:(id)arg1 workScheduler:(id)arg2 withContentHandler:(/*^block*/id)arg3;
-(id)likenessesForContact:(id)arg1 options:(id)arg2 workScheduler:(id)arg3;
-(id)basicMonogramObservableFromString:(id)arg1 color:(id)arg2;
-(id)placeholderProviderFactory;

@end


@protocol CNUIPRLikenessResolver, OS_dispatch_source, CNSchedulerProvider, CNUIPlaceholderProviderFactory;
@class CNCache, CNQueue, NSObject, CNContactStore, CNSchedulerProvider, NSString;

@interface CNUIPRLikenessResolver : NSObject <CNUIPRLikenessResolver> {

	id<CNUIPRLikenessResolver> _likenessResolver;
	CNCache* _likenessCache;
	CNQueue* _evictionQueue;
	NSObject*<OS_dispatch_source> _memoryMonitoringSource;
	id<CNSchedulerProvider> _mainThreadSchedulerProvider;
	id<CNUIPlaceholderProviderFactory> _placeholderProviderFactory;

}

@property (nonatomic,retain) id<CNUIPRLikenessResolver> likenessResolver;                                //@synthesize likenessResolver=_likenessResolver - In the implementation block
@property (nonatomic,retain) CNCache * likenessCache;                                                    //@synthesize likenessCache=_likenessCache - In the implementation block
@property (nonatomic,retain) CNQueue * evictionQueue;                                                    //@synthesize evictionQueue=_evictionQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> memoryMonitoringSource;                       //@synthesize memoryMonitoringSource=_memoryMonitoringSource - In the implementation block
@property (nonatomic,retain) id<CNSchedulerProvider> mainThreadSchedulerProvider;                        //@synthesize mainThreadSchedulerProvider=_mainThreadSchedulerProvider - In the implementation block
@property (nonatomic,retain) id<CNUIPlaceholderProviderFactory> placeholderProviderFactory;              //@synthesize placeholderProviderFactory=_placeholderProviderFactory - In the implementation block
@property (assign,nonatomic) long long prohibitedSources; 
@property (nonatomic,readonly) CNContactStore * contactStore; 
@property (nonatomic,readonly) CNSchedulerProvider * schedulerProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptorForRequiredKeys;
+(id)_cacheKeyForContact:(id)arg1 ;
+(unsigned long long)maxContacts;
-(CNCache *)likenessCache;
-(id)initWithContactStore:(id)arg1 scheduler:(id)arg2 ;
-(id)initWithLikenessResolver:(id)arg1 capacity:(unsigned long long)arg2 schedulerProvider:(id)arg3 ;
-(void)setMainThreadSchedulerProvider:(id<CNSchedulerProvider>)arg1 ;
-(void)setProhibitedSources:(long long)arg1 ;
-(id)initWithLikenessResolver:(id)arg1 ;
-(void)dealloc;
-(void)setPlaceholderProviderFactory:(id<CNUIPlaceholderProviderFactory>)arg1 ;
-(CNContactStore *)contactStore;
-(id)likenessLookup;
-(CNSchedulerProvider *)schedulerProvider;
-(id)likenessesForContact:(id)arg1 workScheduler:(id)arg2 ;
-(id)resolveLikenessesForContacts:(id)arg1 workScheduler:(id)arg2 withContentHandler:(/*^block*/id)arg3 ;
-(void)refreshCacheKey:(id)arg1 ;
-(id<CNUIPRLikenessResolver>)likenessResolver;
-(NSObject*<OS_dispatch_source>)memoryMonitoringSource;
-(void)emptyCache:(id)arg1 ;
-(void)setLikenessCache:(CNCache *)arg1 ;
-(void)setLikenessResolver:(id<CNUIPRLikenessResolver>)arg1 ;
-(id)likenessesForContact:(id)arg1 options:(id)arg2 workScheduler:(id)arg3 ;
-(id)initWithContactStore:(id)arg1 scheduler:(id)arg2 meMonitor:(id)arg3 ;
-(id)basicMonogramObservableFromString:(id)arg1 color:(id)arg2 ;
-(id<CNSchedulerProvider>)mainThreadSchedulerProvider;
-(id<CNUIPlaceholderProviderFactory>)placeholderProviderFactory;
-(void)setMemoryMonitoringSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setEvictionQueue:(CNQueue *)arg1 ;
-(long long)prohibitedSources;
-(id)initWithLikenessResolver:(id)arg1 capacity:(unsigned long long)arg2 ;
-(CNQueue *)evictionQueue;
@end

