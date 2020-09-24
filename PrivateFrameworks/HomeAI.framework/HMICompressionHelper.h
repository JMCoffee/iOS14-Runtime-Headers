/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString;

@interface HMICompressionHelper : HMFObject <HMFLogging>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)logCategory;
-(char*)getDataOutWithSize:(unsigned long long)arg1 withFlag:(unsigned long long)arg2 fd:(int*)arg3 ;
-(void)uncompressedContentsForCompressedFile:(id)arg1 outPath:(id)arg2 ;
-(int)unTarFileWithFd:(id)arg1 toPath:(id)arg2 ;
-(int)unpackageTarData:(void*)arg1 size:(unsigned long long)arg2 parentDir:(const char*)arg3 ;
@end
