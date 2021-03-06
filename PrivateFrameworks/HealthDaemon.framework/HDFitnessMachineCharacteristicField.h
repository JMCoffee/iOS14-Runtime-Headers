/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HDFitnessMachineCharacteristicField : NSObject {

	BOOL _flagFieldFlipped;
	unsigned char _correspondingFlagBit;
	unsigned char _fieldLength;
	unsigned char _factor;
	BOOL _isSet;

}

@property (assign,nonatomic) BOOL flagFieldFlipped;                             //@synthesize flagFieldFlipped=_flagFieldFlipped - In the implementation block
@property (nonatomic,readonly) unsigned char correspondingFlagBit;              //@synthesize correspondingFlagBit=_correspondingFlagBit - In the implementation block
@property (nonatomic,readonly) unsigned char fieldLength;                       //@synthesize fieldLength=_fieldLength - In the implementation block
@property (nonatomic,readonly) unsigned char factor;                            //@synthesize factor=_factor - In the implementation block
@property (assign,nonatomic) BOOL isSet;                                        //@synthesize isSet=_isSet - In the implementation block
-(BOOL)isSet;
-(unsigned char)factor;
-(void)setIsSet:(BOOL)arg1 ;
-(id)initWithCorrespondingFlagBit:(unsigned char)arg1 fieldLength:(unsigned char)arg2 factor:(unsigned char)arg3 ;
-(void)setFlagFieldFlipped:(BOOL)arg1 ;
-(unsigned char)correspondingFlagBit;
-(unsigned char)fieldLength;
-(BOOL)isIncludedInFlags:(unsigned)arg1 ;
-(void)setValueWithBytes:(const char**)arg1 before:(const char*)arg2 ;
-(id)valueFromDouble:(double)arg1 ;
-(id)valueAsData;
-(void)markFieldSet;
-(BOOL)flagFieldFlipped;
@end

