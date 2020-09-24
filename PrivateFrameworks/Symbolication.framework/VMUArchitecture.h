/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Symbolication/Symbolication-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VMUArchitecture : NSObject <NSCoding, NSCopying> {

	int _cpuType;
	int _cpuSubtype;

}
+(void)initialize;
+(id)currentArchitecture;
+(id)anyArchitecture;
+(id)ppcArchitecture;
+(id)ppc32Architecture;
+(id)ppc64Architecture;
+(id)i386Architecture;
+(id)x86_32Architecture;
+(id)x86_64Architecture;
+(id)armArchitecture;
+(id)architectureWithCpuType:(int)arg1 cpuSubtype:(int)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)is32Bit;
-(BOOL)isLittleEndian;
-(id)initWithCpuType:(int)arg1 cpuSubtype:(int)arg2 ;
-(BOOL)isEqualToArchitecture:(id)arg1 ;
-(BOOL)isBigEndian;
-(BOOL)matchesArchitecture:(id)arg1 ;
-(int)cpuSubtype;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(int)cpuType;
-(unsigned long long)hash;
-(BOOL)is64Bit;
-(id)description;
@end
