/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITapGestureRecognizer.h>
#import <libobjc.A.dylib/AKPenDetectionGestureRecognizerProtocol.h>

@class NSString;

@interface AKTapGestureRecognizer : UITapGestureRecognizer <AKPenDetectionGestureRecognizerProtocol> {

	BOOL _penGestureDetected;

}

@property (assign,nonatomic) BOOL penGestureDetected;               //@synthesize penGestureDetected=_penGestureDetected - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setPenGestureDetected:(BOOL)arg1 ;
-(void)_checkTouchesForStylus:(id)arg1 ;
-(BOOL)penGestureDetected;
@end

