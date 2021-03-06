/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSDictionary;

@interface HUSoftwareLibraryLookupResult : NSObject {

	NSSet* _matchedLibraryItems;
	NSDictionary* _accessoriesByBundleIDs;
	NSSet* _matchedStoreItems;
	NSDictionary* _accessoriesByStoreIDs;
	NSSet* _unmatchedRequests;

}

@property (nonatomic,retain) NSSet * matchedLibraryItems;                        //@synthesize matchedLibraryItems=_matchedLibraryItems - In the implementation block
@property (nonatomic,retain) NSDictionary * accessoriesByBundleIDs;              //@synthesize accessoriesByBundleIDs=_accessoriesByBundleIDs - In the implementation block
@property (nonatomic,retain) NSSet * matchedStoreItems;                          //@synthesize matchedStoreItems=_matchedStoreItems - In the implementation block
@property (nonatomic,retain) NSDictionary * accessoriesByStoreIDs;               //@synthesize accessoriesByStoreIDs=_accessoriesByStoreIDs - In the implementation block
@property (nonatomic,retain) NSSet * unmatchedRequests;                          //@synthesize unmatchedRequests=_unmatchedRequests - In the implementation block
+(id)resultForRequests:(id)arg1 ;
+(id)resultForAccessories:(id)arg1 ;
+(id)_libraryResultForRequests:(id)arg1 ;
+(id)_storeResultForRequests:(id)arg1 ;
-(id)init;
-(NSSet *)matchedLibraryItems;
-(NSSet *)matchedStoreItems;
-(NSDictionary *)accessoriesByBundleIDs;
-(NSDictionary *)accessoriesByStoreIDs;
-(NSSet *)unmatchedRequests;
-(void)setMatchedLibraryItems:(NSSet *)arg1 ;
-(void)setAccessoriesByBundleIDs:(NSDictionary *)arg1 ;
-(void)setMatchedStoreItems:(NSSet *)arg1 ;
-(void)setAccessoriesByStoreIDs:(NSDictionary *)arg1 ;
-(void)setUnmatchedRequests:(NSSet *)arg1 ;
@end

