/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUSCardSection.h>

@class SAUIImageResource, NSString;

@interface SAUSRowCardSection : SAUSCardSection

@property (nonatomic,retain) SAUIImageResource * image; 
@property (assign,nonatomic) BOOL imageIsRightAligned; 
@property (nonatomic,copy) NSString * leftText; 
@property (nonatomic,copy) NSString * rightText; 
+(id)rowCardSection;
+(id)rowCardSectionWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setImage:(SAUIImageResource *)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;
-(NSString *)leftText;
-(void)setImageIsRightAligned:(BOOL)arg1 ;
-(BOOL)imageIsRightAligned;
-(SAUIImageResource *)image;
-(NSString *)rightText;
-(void)setRightText:(NSString *)arg1 ;
-(void)setLeftText:(NSString *)arg1 ;
@end
