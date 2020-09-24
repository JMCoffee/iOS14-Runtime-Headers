/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSDictionary;

@interface NSDirectoryEnumerator : NSEnumerator

@property (copy,readonly) NSDictionary * fileAttributes; 
@property (copy,readonly) NSDictionary * directoryAttributes; 
@property (readonly) BOOL isEnumeratingDirectoryPostOrder; 
@property (readonly) unsigned long long level; 
-(unsigned long long)level;
-(BOOL)isEnumeratingDirectoryPostOrder;
-(id)nextObject;
-(NSDictionary *)directoryAttributes;
-(void)skipDescendents;
-(void)skipDescendants;
-(NSDictionary *)fileAttributes;
@end
