/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CSSearchQuery, EKEventStore;

@interface EKSpotlightSearch : NSObject {

	CSSearchQuery* csQuery;
	EKEventStore* _eventStore;

}

@property (__weak) EKEventStore * eventStore;              //@synthesize eventStore=_eventStore - In the implementation block
+(id)queryStringForSearchTerm:(id)arg1 matchingTypes:(unsigned long long)arg2 fromStartDate:(id)arg3 toEndDate:(id)arg4 ;
+(id)_queryStringForPeopleMatchingSearchTerm:(id)arg1 ;
+(id)searchWithCSQuery:(id)arg1 inStore:(id)arg2 resultHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(id)queryStringForSearchTerm:(id)arg1 matchingTypes:(unsigned long long)arg2 ;
-(id)query;
-(EKEventStore *)eventStore;
-(void)cancel;
-(void)start;
-(id)initWithSearchWithCSQuery:(id)arg1 inStore:(id)arg2 resultHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setEventStore:(EKEventStore *)arg1 ;
@end
