/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolDOMDataBinding : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * binding; 
@property (nonatomic,copy) NSString * value; 
@property (nonatomic,copy) NSString * type; 
-(NSString *)binding;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)type;
-(NSString *)value;
-(void)setType:(NSString *)arg1 ;
-(void)setBinding:(NSString *)arg1 ;
-(id)initWithBinding:(id)arg1 value:(id)arg2 ;
@end
