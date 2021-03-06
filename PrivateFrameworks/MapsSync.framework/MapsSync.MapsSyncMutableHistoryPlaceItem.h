/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSync/MapsSync.MapsSyncMutableHistoryItem.h>

@class GEOMapItemStorage, NSUUID;

@interface MapsSync.MapsSyncMutableHistoryPlaceItem : MapsSync.MapsSyncMutableHistoryItem {

	 _proxyHistory;

}

@property (retain,nonatomic) GEOMapItemStorage * mapItemStorage; 
@property (copy,nonatomic) NSUUID * supersededSearchId; 
-(void)setMapItemStorage:(GEOMapItemStorage *)arg1 ;
-(GEOMapItemStorage *)mapItemStorage;
-(id)initWithProxyObject:(id)arg1 ;
-(NSUUID *)supersededSearchId;
-(void)setSupersededSearchId:(NSUUID *)arg1 ;
@end

