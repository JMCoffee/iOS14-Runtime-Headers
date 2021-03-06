/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SXLayoutOptions;

@interface SXLayoutParameters : NSObject {

	SXLayoutOptions* _layoutOptions;
	unsigned long long _layoutType;
	double _expectedDuration;

}

@property (nonatomic,readonly) SXLayoutOptions * layoutOptions;              //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (nonatomic,readonly) unsigned long long layoutType;                //@synthesize layoutType=_layoutType - In the implementation block
@property (nonatomic,readonly) double expectedDuration;                      //@synthesize expectedDuration=_expectedDuration - In the implementation block
-(SXLayoutOptions *)layoutOptions;
-(unsigned long long)layoutType;
-(double)expectedDuration;
-(id)description;
-(id)initWithLayoutOptions:(id)arg1 layoutType:(unsigned long long)arg2 expectedDuration:(double)arg3 ;
@end

