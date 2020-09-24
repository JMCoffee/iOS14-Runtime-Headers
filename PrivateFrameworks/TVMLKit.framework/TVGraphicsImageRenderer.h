/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVMLKit/TVMLKit-Structs.h>
@interface TVGraphicsImageRenderer : NSObject
+(id)preferredFormat;
+(id)imageWithSize:(CGSize)arg1 format:(id)arg2 actions:(/*^block*/id)arg3 ;
+(id)formatWithCGImage:(CGImageRef)arg1 ;
+(id)imageWithSize:(CGSize)arg1 format:(id)arg2 cgContextActions:(/*^block*/id)arg3 ;
+(id)formatWithUIImage:(id)arg1 ;
+(id)imageWithSize:(CGSize)arg1 alpha:(BOOL)arg2 actions:(/*^block*/id)arg3 ;
+(id)imageWithSize:(CGSize)arg1 alpha:(BOOL)arg2 cgContextActions:(/*^block*/id)arg3 ;
+(id)decodedImage:(id)arg1 opaque:(BOOL)arg2 ;
@end
