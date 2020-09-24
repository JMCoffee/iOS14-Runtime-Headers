/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface BWColorLookupCache : NSObject {

	NSObject*<OS_dispatch_queue> _coreImageCacheIsolationQueue;
	NSMutableDictionary* _coreImageTableCache;

}
+(void)initialize;
-(id)fetchColorLookupTablesForFilter:(id)arg1 ;
-(void)dealloc;
-(id)interpolatedColorLookupTableFromTable:(id)arg1 toTable:(id)arg2 fractionComplete:(float)arg3 ;
-(id)init;
-(id)identityColorLookupTable;
-(id)colorLookupTablesForFilter:(id)arg1 ;
@end
