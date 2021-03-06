/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarFoundation/CalendarFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface CalDefaultDictionary : NSObject <NSCopying> {

	Class _defaultClass;
	NSMutableDictionary* _dict;

}
-(id)keys;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDictionary:(id)arg1 ;
-(void)removeAllObjects;
-(id)_copyWithZone:(NSZone*)arg1 isDeepCopy:(BOOL)arg2 ;
-(id)_mutableCopyOfFinalDictionaryWithZone:(NSZone*)arg1 isDeepCopy:(BOOL)arg2 ;
-(id)finalDictionary;
-(id)existingObjectForKey:(id)arg1 ;
-(id)deepCopy;
-(unsigned long long)count;
-(void)removeObjectForKey:(id)arg1 ;
-(id)initWithDefaultClass:(Class)arg1 ;
-(id)objectForKey:(id)arg1 ;
@end

