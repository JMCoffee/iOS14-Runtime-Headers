/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface GEOTileEditionUpdate : NSObject {

	NSMutableArray* _entries;
	BOOL _flushEverything;
	BOOL _invalidateEverything;

}

@property (assign,nonatomic) BOOL flushEverything;                   //@synthesize flushEverything=_flushEverything - In the implementation block
@property (assign,nonatomic) BOOL invalidateEverything;              //@synthesize invalidateEverything=_invalidateEverything - In the implementation block
-(unsigned long long)tilesetCount;
-(void)setFlushEverything:(BOOL)arg1 ;
-(BOOL)invalidateEverything;
-(id)init;
-(void)addTileset:(unsigned)arg1 edition:(unsigned)arg2 provider:(unsigned)arg3 invalidateOnly:(BOOL)arg4 ;
-(void)tileset:(unsigned*)arg1 edition:(unsigned*)arg2 provider:(unsigned*)arg3 invalidateOnly:(BOOL*)arg4 atIndex:(unsigned long long)arg5 ;
-(void)setInvalidateEverything:(BOOL)arg1 ;
-(BOOL)flushEverything;
@end

