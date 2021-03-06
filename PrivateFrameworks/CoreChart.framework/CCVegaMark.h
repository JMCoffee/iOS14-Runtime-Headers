/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:47 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CCVegaMarkInterface.h>

@class NSString, CALayer, JSValue;

@interface CCVegaMark : NSObject <CCVegaMarkInterface> {

	JSValue* _items;
	JSValue* mark;

}

@property (retain) JSValue * mark; 
@property (nonatomic,readonly) unsigned long long itemCount; 
@property (nonatomic,readonly) BOOL clip; 
@property (nonatomic,readonly) BOOL interactive; 
@property (nonatomic,readonly) NSString * marktype; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * role; 
@property (nonatomic,readonly) double zindex; 
@property (nonatomic,retain) CALayer * caLayer; 
@property (assign,nonatomic) BOOL isDirty; 
-(BOOL)isDirty;
-(BOOL)clip;
-(JSValue *)mark;
-(void)setIsDirty:(BOOL)arg1 ;
-(BOOL)interactive;
-(void)setMark:(JSValue *)arg1 ;
-(NSString *)role;
-(double)zindex;
-(CALayer *)caLayer;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)itemCount;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(id)initWithJSValue:(id)arg1 ;
-(NSString *)name;
-(void)setCaLayer:(CALayer *)arg1 ;
-(id)getString:(id)arg1 defaultValue:(id)arg2 ;
-(NSString *)marktype;
@end

