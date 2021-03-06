/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IconServices/IconServices-Structs.h>
#import <IconServices/ISIcon.h>

@class NSArray, LSResourceProxy;

@interface ISIconIOS : ISIcon {

	NSArray* _decorations;
	LSResourceProxy* _resourceProxy;

}

@property (retain) LSResourceProxy * resourceProxy;              //@synthesize resourceProxy=_resourceProxy - In the implementation block
@property (nonatomic,copy) NSArray * decorations;                //@synthesize decorations=_decorations - In the implementation block
+(id)backgroundQueue;
-(id)initWithURL:(id)arg1 ;
-(void)getImageForImageDescriptor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)imageForDescriptor:(id)arg1 ;
-(CGImageRef)CGImageForImageDescriptor:(id)arg1 ;
-(id)_cachedImageForDescriptor:(id)arg1 ;
-(BOOL)isEqualToIcon:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)_prepareImageForSymbolImageDescriptor:(id)arg1 ;
-(void)setDecorations:(NSArray *)arg1 ;
-(void)prepareImagesForDescriptors:(id)arg1 ;
-(id)_prepareImageForImageDescriptor:(id)arg1 allowIO:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithResourceProxy:(id)arg1 ;
-(id)prepareImageForDescriptor:(id)arg1 ;
-(id)_initTransparent;
-(void)setResourceProxy:(LSResourceProxy *)arg1 ;
-(id)_imageForSymbolImageDescriptor:(id)arg1 ;
-(NSArray *)decorations;
-(unsigned long long)hash;
-(LSResourceProxy *)resourceProxy;
-(int)variantForSize:(CGSize)arg1 scale:(double)arg2 options:(unsigned long long)arg3 ;
-(void)prepareImagesForImageDescriptors:(id)arg1 ;
-(void)getCGImageForImageDescriptor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(double)_aspectRatio;
-(id)initWithResourceProxy:(id)arg1 decorations:(id)arg2 ;
-(id)initWithType:(id)arg1 ;
-(id)imageForImageDescriptor:(id)arg1 ;
@end

