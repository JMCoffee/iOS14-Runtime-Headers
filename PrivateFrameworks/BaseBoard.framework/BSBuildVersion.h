/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface BSBuildVersion : NSObject {

	NSString* _stringRepresentation;
	long long _majorBuildNumber;
	NSString* _majorBuildLetterString;
	long long _minorBuildNumber;
	NSString* _minorBuildLetterString;

}

@property (nonatomic,readonly) long long majorBuildNumber;                          //@synthesize majorBuildNumber=_majorBuildNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * majorBuildLetterString;              //@synthesize majorBuildLetterString=_majorBuildLetterString - In the implementation block
@property (nonatomic,readonly) long long minorBuildNumber;                          //@synthesize minorBuildNumber=_minorBuildNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * minorBuildLetterString;              //@synthesize minorBuildLetterString=_minorBuildLetterString - In the implementation block
@property (nonatomic,copy,readonly) NSString * stringRepresentation;                //@synthesize stringRepresentation=_stringRepresentation - In the implementation block
+(id)fromString:(id)arg1 ;
-(NSString *)majorBuildLetterString;
-(long long)majorBuildNumber;
-(long long)minorBuildNumber;
-(BOOL)isAfter:(id)arg1 ;
-(BOOL)isSameAs:(id)arg1 withPrecision:(long long)arg2 ;
-(long long)_compareAgainstBuildVersion:(id)arg1 withPrecision:(long long)arg2 ;
-(id)init;
-(id)initWithString:(id)arg1 ;
-(BOOL)isBefore:(id)arg1 withPrecision:(long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)minorBuildLetterString;
-(NSString *)stringRepresentation;
-(unsigned long long)hash;
-(BOOL)isSameAs:(id)arg1 ;
-(BOOL)isAfter:(id)arg1 withPrecision:(long long)arg2 ;
-(id)description;
-(BOOL)isBefore:(id)arg1 ;
@end

