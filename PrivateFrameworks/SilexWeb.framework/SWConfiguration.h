/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:17 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SilexWeb/SilexWeb-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@protocol SWLocation;
@class NSString, NSLocale, NSDictionary, NSURL;

@interface SWConfiguration : NSObject <NSMutableCopying> {

	NSString* _identifier;
	NSString* _storeFront;
	NSLocale* _locale;
	NSString* _contentSizeCategory;
	NSDictionary* _dataSources;
	id<SWLocation> _location;
	NSURL* _sourceURL;
	NSString* _systemVersion;
	CGSize _canvasSize;
	CGRect _contentFrame;

}

@property (nonatomic,copy) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * storeFront;                       //@synthesize storeFront=_storeFront - In the implementation block
@property (nonatomic,copy) NSLocale * locale;                           //@synthesize locale=_locale - In the implementation block
@property (nonatomic,copy) NSString * contentSizeCategory;              //@synthesize contentSizeCategory=_contentSizeCategory - In the implementation block
@property (assign,nonatomic) CGSize canvasSize;                         //@synthesize canvasSize=_canvasSize - In the implementation block
@property (assign,nonatomic) CGRect contentFrame;                       //@synthesize contentFrame=_contentFrame - In the implementation block
@property (nonatomic,copy) NSDictionary * dataSources;                  //@synthesize dataSources=_dataSources - In the implementation block
@property (nonatomic,copy) id<SWLocation> location;                     //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSURL * sourceURL;                           //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,copy) NSString * systemVersion;                    //@synthesize systemVersion=_systemVersion - In the implementation block
-(void)setContentFrame:(CGRect)arg1 ;
-(CGRect)contentFrame;
-(NSString *)identifier;
-(void)setSourceURL:(NSURL *)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)systemVersion;
-(void)setLocale:(NSLocale *)arg1 ;
-(void)setCanvasSize:(CGSize)arg1 ;
-(NSString *)storeFront;
-(void)setDataSources:(NSDictionary *)arg1 ;
-(id<SWLocation>)location;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setContentSizeCategory:(NSString *)arg1 ;
-(NSLocale *)locale;
-(BOOL)isEqualToConfiguration:(id)arg1 ;
-(void)setLocation:(id<SWLocation>)arg1 ;
-(NSString *)contentSizeCategory;
-(id)initWithStoreFront:(id)arg1 locale:(id)arg2 contentSizeCategory:(id)arg3 canvasSize:(CGSize)arg4 contentFrame:(CGRect)arg5 dataSources:(id)arg6 location:(id)arg7 sourceURL:(id)arg8 ;
-(NSDictionary *)dataSources;
-(void)setSystemVersion:(NSString *)arg1 ;
-(void)setStoreFront:(NSString *)arg1 ;
-(NSURL *)sourceURL;
-(CGSize)canvasSize;
@end

