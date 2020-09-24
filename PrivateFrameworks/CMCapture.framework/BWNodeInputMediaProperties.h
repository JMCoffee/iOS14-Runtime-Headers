/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, BWNodeInput, BWFormat, BWVideoFormat;

@interface BWNodeInputMediaProperties : NSObject {

	NSString* _associatedAttachedMediaKey;
	BWNodeInput* _owningNodeInput;
	BWFormat* _resolvedFormat;
	BWFormat* _liveFormat;

}

@property (nonatomic,retain) BWFormat * resolvedFormat; 
@property (nonatomic,readonly) BWVideoFormat * resolvedVideoFormat; 
@property (nonatomic,readonly) BWFormat * liveFormat;                            //@synthesize liveFormat=_liveFormat - In the implementation block
@property (nonatomic,readonly) BWVideoFormat * liveVideoFormat; 
-(BWFormat *)liveFormat;
-(BWVideoFormat *)liveVideoFormat;
-(id)liveFormatFormat;
-(void)_setOwningNodeInput:(id)arg1 associatedAttachedMediaKey:(id)arg2 ;
-(void)dealloc;
-(BWFormat *)resolvedFormat;
-(void)setResolvedFormat:(BWFormat *)arg1 ;
-(id)resolvedPointCloudFormat;
-(void)setLiveFormat:(BWFormat *)arg1 ;
-(BWVideoFormat *)resolvedVideoFormat;
@end
