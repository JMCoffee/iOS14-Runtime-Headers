/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol GEOTransitVehicleEntries <NSObject>
@property (nonatomic,readonly) unsigned long long firstTripID; 
@property (nonatomic,readonly) unsigned long long tripIDForNextUpcomingDeparture; 
@property (nonatomic,copy,readonly) NSArray * tripIDs; 
@property (nonatomic,copy,readonly) NSArray * upcomingTripIDs; 
@required
-(unsigned long long)firstTripID;
-(NSArray *)upcomingTripIDs;
-(unsigned long long)tripIDForNextUpcomingDeparture;
-(NSArray *)tripIDs;

@end
