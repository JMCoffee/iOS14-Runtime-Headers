/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSArray;

@interface AMSThreadSafeDictionary : NSObject {

	NSMutableDictionary* _backingDictionary;
	NSObject*<OS_dispatch_queue> _backingDictionaryAccessQueue;

}

@property (nonatomic,retain) NSMutableDictionary * backingDictionary;                                //@synthesize backingDictionary=_backingDictionary - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> backingDictionaryAccessQueue;              //@synthesize backingDictionaryAccessQueue=_backingDictionaryAccessQueue - In the implementation block
@property (copy,readonly) NSArray * allKeys; 
@property (copy,readonly) NSArray * allValues; 
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setBackingDictionary:(NSMutableDictionary *)arg1 ;
-(void)removeAllObjects;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(NSArray *)allValues;
-(id)init;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(NSArray *)allKeys;
-(void)removeObjectForKey:(id)arg1 ;
-(NSMutableDictionary *)backingDictionary;
-(NSObject*<OS_dispatch_queue>)backingDictionaryAccessQueue;
-(void)setBackingDictionaryAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)objectForKey:(id)arg1 ;
@end
