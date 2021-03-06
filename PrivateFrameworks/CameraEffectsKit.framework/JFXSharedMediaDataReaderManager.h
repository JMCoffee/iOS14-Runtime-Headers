/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol JFXPlayableElement;
@class JFXARMetadataMediaReader, JFXDepthDataMediaReader;

@interface JFXSharedMediaDataReaderManager : NSObject {

	id<JFXPlayableElement> _playableElement;
	JFXARMetadataMediaReader* _weakSharedARMetadataReader;
	JFXDepthDataMediaReader* _weakSharedDepthDataReader;

}

@property (nonatomic,retain) id<JFXPlayableElement> playableElement;                                    //@synthesize playableElement=_playableElement - In the implementation block
@property (assign,nonatomic,__weak) JFXARMetadataMediaReader * weakSharedARMetadataReader;              //@synthesize weakSharedARMetadataReader=_weakSharedARMetadataReader - In the implementation block
@property (assign,nonatomic,__weak) JFXDepthDataMediaReader * weakSharedDepthDataReader;                //@synthesize weakSharedDepthDataReader=_weakSharedDepthDataReader - In the implementation block
@property (nonatomic,readonly) JFXARMetadataMediaReader * sharedARMetadataReader; 
@property (nonatomic,readonly) JFXDepthDataMediaReader * sharedDepthDataReader; 
-(id<JFXPlayableElement>)playableElement;
-(JFXARMetadataMediaReader *)sharedARMetadataReader;
-(id)initWithPlayableElement:(id)arg1 ;
-(JFXARMetadataMediaReader *)weakSharedARMetadataReader;
-(void)setWeakSharedARMetadataReader:(JFXARMetadataMediaReader *)arg1 ;
-(JFXDepthDataMediaReader *)weakSharedDepthDataReader;
-(void)setWeakSharedDepthDataReader:(JFXDepthDataMediaReader *)arg1 ;
-(JFXDepthDataMediaReader *)sharedDepthDataReader;
-(void)setPlayableElement:(id<JFXPlayableElement>)arg1 ;
@end

