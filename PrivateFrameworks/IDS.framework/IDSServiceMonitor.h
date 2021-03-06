/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IDSServiceMonitor : NSObject {

	long long _availability;
	NSString* _service;
	int _token;

}

@property (nonatomic,readonly) NSString * service; 
-(id)initWithService:(id)arg1 ;
-(long long)serviceAvailability;
-(void)updateAvailability;
-(void)dealloc;
-(void)_updateAvailability;
-(NSString *)service;
-(void)_postAvailability:(long long)arg1 ;
@end

