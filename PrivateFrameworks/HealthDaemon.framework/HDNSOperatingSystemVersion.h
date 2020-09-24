/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HealthDaemon/HealthDaemon-Structs.h>
@interface HDNSOperatingSystemVersion : NSObject {

	SCD_Struct_HD6 _versionStruct;

}

@property (assign) SCD_Struct_HD6 versionStruct;              //@synthesize versionStruct=_versionStruct - In the implementation block
+(id)versionWithMajor:(long long)arg1 minor:(long long)arg2 patch:(long long)arg3 ;
+(id)unknownVersion;
-(void)setVersionStruct:(SCD_Struct_HD6)arg1 ;
-(SCD_Struct_HD6)versionStruct;
@end
