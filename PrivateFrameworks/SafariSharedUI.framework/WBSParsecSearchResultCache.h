/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray;

@interface WBSParsecSearchResultCache : NSObject {

	NSMutableDictionary* _resultSetCache;
	NSMutableDictionary* _resultSetsByPrefix;
	unsigned long long _cachedQueriesLimit;

}

@property (nonatomic,readonly) NSArray * allCachedQueries; 
-(BOOL)_shouldCacheResultSetForQueryMatching:(id)arg1 ;
-(BOOL)_resultSet:(id)arg1 isMatchForQuery:(id)arg2 ;
-(id)initWithCachedQueriesLimit:(unsigned long long)arg1 ;
-(void)cacheResultSetsFromSearchResponse:(id)arg1 ;
-(void)cacheResultSet:(id)arg1 ;
-(id)bestResultSetForQuery:(id)arg1 ;
-(id)resultSetWithQuery:(id)arg1 ;
-(NSArray *)allCachedQueries;
@end
