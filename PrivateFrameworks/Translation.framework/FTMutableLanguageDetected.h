/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTLanguageDetected.h>

@class NSString, NSArray;

@interface FTMutableLanguageDetected : FTLanguageDetected

@property (nonatomic,copy) NSString * detected_locale; 
@property (nonatomic,copy) NSArray * predictions; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)detected_locale;
-(void)setDetected_locale:(NSString *)arg1 ;
-(id)init;
-(NSArray *)predictions;
-(void)setPredictions:(NSArray *)arg1 ;
@end
