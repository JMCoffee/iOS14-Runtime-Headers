/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:47 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, HKDisplayCategory;

@interface WDStoredDataCategory : NSObject {

	NSMutableArray* _displayTypes;
	HKDisplayCategory* _category;

}

@property (retain) HKDisplayCategory * category;                           //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) NSMutableArray * displayTypes;              //@synthesize displayTypes=_displayTypes - In the implementation block
-(NSMutableArray *)displayTypes;
-(HKDisplayCategory *)category;
-(void)setCategory:(HKDisplayCategory *)arg1 ;
@end
