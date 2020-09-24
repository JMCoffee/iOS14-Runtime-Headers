/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray;

@interface _UIKBCompositeImageView : UIView {

	NSArray* _imageViews;
	CGSize _imageSize;

}

@property (assign,nonatomic) CGSize imageSize;                  //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,retain) NSArray * imageViews;              //@synthesize imageViews=_imageViews - In the implementation block
-(CGSize)imageSize;
-(void)layoutSubviews;
-(void)setImageSize:(CGSize)arg1 ;
-(NSArray *)imageViews;
-(void)setImageViews:(NSArray *)arg1 ;
@end
