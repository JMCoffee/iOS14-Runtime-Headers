/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailingDaemon.framework/QuickLookThumbnailingDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuickLookThumbnailingDaemon/QuickLookThumbnailingDaemon-Structs.h>
@class QLSqliteDatabase;

@interface QLCacheIndexDatabaseGenericEnumerator : NSObject {

	QLSqliteDatabase* _sqliteDatabase;
	sqlite3_stmtRef _stmt;

}
-(void)dealloc;
-(id)initWithSqliteDatabase:(id)arg1 ;
@end

