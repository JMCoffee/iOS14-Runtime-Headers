/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BMStream;
@class NSDateInterval;

@interface BMStreamQuery : NSObject {

	id<BMStream> _stream;
	NSDateInterval* _interval;
	long long _origin;

}

@property (nonatomic,readonly) id<BMStream> stream;                    //@synthesize stream=_stream - In the implementation block
@property (nonatomic,readonly) NSDateInterval * interval;              //@synthesize interval=_interval - In the implementation block
@property (nonatomic,readonly) long long origin;                       //@synthesize origin=_origin - In the implementation block
+(id)publisherForStream:(id)arg1 interval:(id)arg2 origin:(long long)arg3 ;
+(id)publisherForStream:(id)arg1 interval:(id)arg2 ;
-(id<BMStream>)stream;
-(NSDateInterval *)interval;
-(long long)origin;
-(id)init;
-(id)initWithStream:(id)arg1 interval:(id)arg2 origin:(long long)arg3 ;
@end
