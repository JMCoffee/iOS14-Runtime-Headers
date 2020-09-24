/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/BWVideoFormatRequirements.h>

@interface BWInferenceVideoFormatRequirements : BWVideoFormatRequirements {

	BOOL _deviceOriented;
	long long _videoContentMode;
	BOOL _includesInvalidContent;
	int _rotationDegrees;

}

@property (assign,nonatomic) BOOL deviceOriented;                      //@synthesize deviceOriented=_deviceOriented - In the implementation block
@property (assign,nonatomic) int rotationDegrees;                      //@synthesize rotationDegrees=_rotationDegrees - In the implementation block
@property (assign,nonatomic) long long videoContentMode;               //@synthesize videoContentMode=_videoContentMode - In the implementation block
@property (assign,nonatomic) BOOL includesInvalidContent;              //@synthesize includesInvalidContent=_includesInvalidContent - In the implementation block
+(id)defaultEspressoFormatRequirementsWithWidth:(long long)arg1 height:(long long)arg2 ;
-(BOOL)deviceOriented;
-(void)setVideoContentMode:(long long)arg1 ;
-(long long)videoContentMode;
-(int)rotationDegrees;
-(void)setIncludesInvalidContent:(BOOL)arg1 ;
-(BOOL)includesInvalidContent;
-(void)setDeviceOriented:(BOOL)arg1 ;
-(void)setRotationDegrees:(int)arg1 ;
-(id)initWithFormat:(id)arg1 ;
@end
