/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpotlight/CSSearchQuery.h>

@class NSArray, NSString;

@interface CSUserQuery : CSSearchQuery

@property (copy) NSArray * filterQueries; 
@property (readonly) NSString * keyboardLanguage; 
@property (getter=isCancelled,readonly) BOOL cancelled; 
@property (readonly) unsigned long long foundItemCount; 
-(void)cancel;
-(void)setFilterQueries:(NSArray *)arg1 ;
-(NSArray *)filterQueries;
-(NSString *)keyboardLanguage;
-(void)start;
-(id)initWithQueryString:(id)arg1 context:(id)arg2 ;
-(id)initWithSearchString:(id)arg1 keyboardLanguage:(id)arg2 attributes:(id)arg3 ;
@end

