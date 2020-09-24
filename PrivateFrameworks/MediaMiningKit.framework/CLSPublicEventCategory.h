/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface CLSPublicEventCategory : NSObject <NSSecureCoding> {

	NSString* _category;
	NSString* _localizedName;
	NSArray* _localizedSubcategories;

}

@property (nonatomic,retain) NSString * localizedName;                      //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,retain) NSArray * localizedSubcategories;              //@synthesize localizedSubcategories=_localizedSubcategories - In the implementation block
@property (nonatomic,readonly) NSString * category;                         //@synthesize category=_category - In the implementation block
+(id)dance;
+(id)musicConcerts;
+(BOOL)supportsSecureCoding;
+(id)artsAndMuseums;
+(id)community;
+(id)theater;
+(id)festivalsAndFairs;
+(id)businessAndTechnology;
+(id)educational;
+(id)familyEvents;
+(id)tours;
+(id)appleEvents;
+(id)sports;
+(id)nightLife;
-(void)setLocalizedName:(NSString *)arg1 ;
-(id)initWithCategory:(id)arg1 ;
-(NSString *)localizedName;
-(NSString *)category;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSArray *)localizedSubcategories;
-(unsigned long long)levelForLocalizedSubcategory:(id)arg1 ;
-(void)setLocalizedSubcategories:(NSArray *)arg1 ;
@end
