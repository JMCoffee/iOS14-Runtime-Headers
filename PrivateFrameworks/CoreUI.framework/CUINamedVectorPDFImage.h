/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUINamedVectorImage.h>

@interface CUINamedVectorPDFImage : CUINamedVectorImage

@property (nonatomic,readonly) CGPDFDocumentRef pdfDocument; 
-(CGPDFDocumentRef)pdfDocument;
-(CGImageRef)rasterizeImageUsingScaleFactor:(double)arg1 forTargetSize:(CGSize)arg2 ;
@end
