/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:20 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FMKeyFrame : NSObject {

	float _value;
	long long _sampleTime;

}

@property (assign,nonatomic) long long sampleTime;              //@synthesize sampleTime=_sampleTime - In the implementation block
@property (assign,nonatomic) float value;                       //@synthesize value=_value - In the implementation block
-(void)setValue:(float)arg1 ;
-(long long)sampleTime;
-(float)value;
-(id)description;
-(void)setSampleTime:(long long)arg1 ;
-(id)initWithValue:(float)arg1 atTime:(long long)arg2 ;
@end
