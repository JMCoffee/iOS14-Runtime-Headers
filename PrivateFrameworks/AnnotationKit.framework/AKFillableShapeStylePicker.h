/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKModernToolbarPicker.h>

@class NSArray;

@interface AKFillableShapeStylePicker : AKModernToolbarPicker {

	NSArray* _buttons;
	BOOL _showFill;

}

@property (assign,nonatomic) BOOL showFill;              //@synthesize showFill=_showFill - In the implementation block
-(id)initWithFrame:(CGRect)arg1 controller:(id)arg2 ;
-(void)_styleButtonPressed:(id)arg1 ;
-(void)revalidateItems:(id)arg1 ;
-(void)_updateImagesForAnnotationType:(id)arg1 ;
-(void)setShowFill:(BOOL)arg1 ;
-(BOOL)showFill;
@end

