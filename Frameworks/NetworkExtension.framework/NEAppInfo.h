/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSString, NSData;

@interface NEAppInfo : NSObject <NSSecureCoding, NSCopying> {

	int _pid;
	NSUUID* _uuid;
	NSString* _bundleID;
	NSString* _appVersion;
	NSData* _cdHash;

}

@property (assign,nonatomic) int pid;                          //@synthesize pid=_pid - In the implementation block
@property (nonatomic,copy) NSUUID * uuid;                      //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * appVersion;              //@synthesize appVersion=_appVersion - In the implementation block
@property (nonatomic,copy) NSData * cdHash;                    //@synthesize cdHash=_cdHash - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setAppVersion:(NSString *)arg1 ;
-(NSData *)cdHash;
-(NSString *)appVersion;
-(void)setBundleID:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCdHash:(NSData *)arg1 ;
-(id)debugDescription;
-(BOOL)isComplete;
-(void)setPid:(int)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uuid;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleID;
-(int)pid;
-(id)description;
@end

