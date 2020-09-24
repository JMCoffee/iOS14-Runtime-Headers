/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FileProvider-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSObject, FPItem, NSURL, NSString;

@interface FPActionOperationLocator : NSObject <NSCopying, NSSecureCoding> {

	NSObject* _object;

}

@property (nonatomic,readonly) BOOL isExternalURL; 
@property (nonatomic,readonly) BOOL isProviderItem; 
@property (nonatomic,readonly) FPItem * asFPItem; 
@property (nonatomic,readonly) NSURL * asURL; 
@property (nonatomic,readonly) id underlyingObject; 
@property (nonatomic,readonly) id identifier; 
@property (nonatomic,readonly) id parentIdentifier; 
@property (nonatomic,readonly) unsigned long long size; 
@property (nonatomic,readonly) NSString * filename; 
@property (nonatomic,readonly) BOOL isFolder; 
@property (nonatomic,readonly) BOOL requiresCrossDeviceCopy; 
+(BOOL)supportsSecureCoding;
+(id)locatorForItem:(id)arg1 ;
+(id)locatorForURL:(id)arg1 ;
-(id)identifier;
-(id)parentIdentifier;
-(BOOL)isDownloaded;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)asURL;
-(id)initWithObject:(id)arg1 ;
-(void)_setObject:(id)arg1 ;
-(FPItem *)asFPItem;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isFolder;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)size;
-(unsigned long long)hash;
-(NSString *)filename;
-(BOOL)isProviderItem;
-(BOOL)isExternalURL;
-(id)underlyingObject;
-(void)attachSandboxExtensionOnXPCEncoding;
-(BOOL)requiresCrossDeviceCopy;
@end
