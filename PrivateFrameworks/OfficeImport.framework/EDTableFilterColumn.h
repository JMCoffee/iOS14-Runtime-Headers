/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface EDTableFilterColumn : NSObject {

	unsigned long long mColumnIndex;
	NSMutableArray* mFilters;
	int mFiltersRelation;

}
-(void)setColumnIndex:(unsigned long long)arg1 ;
-(void)addFilter:(id)arg1 ;
-(id)filterAtIndex:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)columnIndex;
-(id)description;
-(unsigned long long)filterCount;
-(void)setFiltersRelation:(int)arg1 ;
-(int)filtersRelation;
@end

