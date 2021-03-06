/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString;

@interface SASVTokenData : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * endTimeMillis; 
@property (assign,nonatomic) float score; 
@property (nonatomic,copy) NSNumber * startTimeMillis; 
@property (nonatomic,copy) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tokenData;
+(id)tokenDataWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(id)groupIdentifier;
-(NSString *)text;
-(float)score;
-(void)setScore:(float)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(NSNumber *)endTimeMillis;
-(void)setEndTimeMillis:(NSNumber *)arg1 ;
-(NSNumber *)startTimeMillis;
-(void)setStartTimeMillis:(NSNumber *)arg1 ;
@end

