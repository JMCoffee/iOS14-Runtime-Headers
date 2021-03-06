/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSURL;

@interface _GEOResourceManifestTileSetOverride : NSObject <NSSecureCoding> {

	int _style;
	int _size;
	int _scale;
	NSNumber* _version;
	NSURL* _baseURL;
	NSURL* _localizationURL;

}

@property (nonatomic,readonly) int style;                        //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) int size;                         //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) int scale;                        //@synthesize scale=_scale - In the implementation block
@property (nonatomic,copy) NSNumber * version;                   //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSURL * baseURL;                      //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,copy) NSURL * localizationURL;              //@synthesize localizationURL=_localizationURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSURL *)localizationURL;
-(void)setLocalizationURL:(NSURL *)arg1 ;
-(NSURL *)baseURL;
-(void)setBaseURL:(NSURL *)arg1 ;
-(NSNumber *)version;
-(id)initWithStyle:(int)arg1 size:(int)arg2 scale:(int)arg3 ;
-(int)scale;
-(void)setVersion:(NSNumber *)arg1 ;
-(int)style;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(int)size;
@end

