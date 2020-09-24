/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemProvider.h>

@class HMHome, NSMutableSet;

@interface HFRoomItemProvider : HFItemProvider {

	/*^block*/id _filter;
	HMHome* _home;
	NSMutableSet* _roomItems;

}

@property (nonatomic,retain) NSMutableSet * roomItems;              //@synthesize roomItems=_roomItems - In the implementation block
@property (nonatomic,copy) id filter;                               //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) HMHome * home;                       //@synthesize home=_home - In the implementation block
-(id)items;
-(id)filter;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithHome:(id)arg1 ;
-(id)init;
-(void)setFilter:(id)arg1 ;
-(id)invalidationReasons;
-(NSMutableSet *)roomItems;
-(void)setRoomItems:(NSMutableSet *)arg1 ;
-(id)reloadItems;
-(HMHome *)home;
@end
