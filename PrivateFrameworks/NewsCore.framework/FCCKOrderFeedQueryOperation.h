/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@class FCCKContentDatabase, NSArray, NSDictionary, FCEdgeCacheHint, NSError;

@interface FCCKOrderFeedQueryOperation : FCOperation {

	FCCKContentDatabase* _database;
	NSArray* _feedRequests;
	NSArray* _desiredKeys;
	unsigned long long _resultsLimit;
	unsigned long long _queryPriority;
	NSArray* _articleLinkKeys;
	NSDictionary* _additionalRequestHTTPHeaders;
	FCEdgeCacheHint* _edgeCacheHint;
	NSArray* _networkEvents;
	/*^block*/id _queryCompletionHandler;
	NSArray* _resultFeedItemAndArticleRecords;
	NSArray* _resultTagRecords;
	NSArray* _resultIssueRecords;
	NSArray* _resultFeedResponses;
	NSError* _resultError;

}

@property (nonatomic,retain) NSArray * resultFeedItemAndArticleRecords;              //@synthesize resultFeedItemAndArticleRecords=_resultFeedItemAndArticleRecords - In the implementation block
@property (nonatomic,retain) NSArray * resultTagRecords;                             //@synthesize resultTagRecords=_resultTagRecords - In the implementation block
@property (nonatomic,retain) NSArray * resultIssueRecords;                           //@synthesize resultIssueRecords=_resultIssueRecords - In the implementation block
@property (nonatomic,retain) NSArray * resultFeedResponses;                          //@synthesize resultFeedResponses=_resultFeedResponses - In the implementation block
@property (nonatomic,retain) NSError * resultError;                                  //@synthesize resultError=_resultError - In the implementation block
@property (nonatomic,copy) NSArray * networkEvents;                                  //@synthesize networkEvents=_networkEvents - In the implementation block
@property (nonatomic,retain) FCCKContentDatabase * database;                         //@synthesize database=_database - In the implementation block
@property (nonatomic,copy) NSArray * feedRequests;                                   //@synthesize feedRequests=_feedRequests - In the implementation block
@property (nonatomic,copy) NSArray * desiredKeys;                                    //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;                        //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (assign,nonatomic) unsigned long long queryPriority;                       //@synthesize queryPriority=_queryPriority - In the implementation block
@property (nonatomic,copy) NSArray * articleLinkKeys;                                //@synthesize articleLinkKeys=_articleLinkKeys - In the implementation block
@property (nonatomic,copy) NSDictionary * additionalRequestHTTPHeaders;              //@synthesize additionalRequestHTTPHeaders=_additionalRequestHTTPHeaders - In the implementation block
@property (nonatomic,copy) FCEdgeCacheHint * edgeCacheHint;                          //@synthesize edgeCacheHint=_edgeCacheHint - In the implementation block
@property (nonatomic,copy) id queryCompletionHandler;                                //@synthesize queryCompletionHandler=_queryCompletionHandler - In the implementation block
-(NSDictionary *)additionalRequestHTTPHeaders;
-(NSArray *)networkEvents;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(FCCKContentDatabase *)database;
-(void)setAdditionalRequestHTTPHeaders:(NSDictionary *)arg1 ;
-(BOOL)validateOperation;
-(void)resetForRetry;
-(void)prepareOperation;
-(void)setDatabase:(FCCKContentDatabase *)arg1 ;
-(void)setQueryPriority:(unsigned long long)arg1 ;
-(NSError *)resultError;
-(void)_processResultsRecord:(id)arg1 feedItemAndArticleRecords:(id)arg2 tagRecords:(id)arg3 issueRecords:(id)arg4 ;
-(void)setResultError:(NSError *)arg1 ;
-(void)setFeedRequests:(NSArray *)arg1 ;
-(NSArray *)resultFeedItemAndArticleRecords;
-(NSArray *)feedRequests;
-(id)_requiredKeys;
-(NSArray *)articleLinkKeys;
-(void)setEdgeCacheHint:(FCEdgeCacheHint *)arg1 ;
-(id)_feedRelativeDictionaryFromResultsArray:(id)arg1 ;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(NSArray *)desiredKeys;
-(NSArray *)resultTagRecords;
-(void)setResultTagRecords:(NSArray *)arg1 ;
-(NSArray *)resultIssueRecords;
-(FCEdgeCacheHint *)edgeCacheHint;
-(id)_constructFeedQuery;
-(void)setArticleLinkKeys:(NSArray *)arg1 ;
-(void)setNetworkEvents:(NSArray *)arg1 ;
-(id)queryCompletionHandler;
-(void)setResultFeedResponses:(NSArray *)arg1 ;
-(NSArray *)resultFeedResponses;
-(void)setResultFeedItemAndArticleRecords:(NSArray *)arg1 ;
-(void)setResultIssueRecords:(NSArray *)arg1 ;
-(unsigned long long)resultsLimit;
-(id)_predicateForPerFeedFieldName:(id)arg1 key:(id)arg2 defaultValue:(id)arg3 ;
-(void)setQueryCompletionHandler:(id)arg1 ;
-(unsigned long long)queryPriority;
@end

