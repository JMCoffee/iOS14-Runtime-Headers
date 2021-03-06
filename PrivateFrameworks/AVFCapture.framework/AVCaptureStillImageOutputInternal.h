/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class AVWeakReference, NSMutableArray, NSDictionary;

@interface AVCaptureStillImageOutputInternal : NSObject {

	AVWeakReference* weakReference;
	NSMutableArray* stillImageRequests;
	BOOL squareCropEnabled;
	CGSize previewImageSize;
	unsigned imageDataFormatType;
	float jpegQuality;
	BOOL jpegQualitySpecified;
	BOOL noiseReductionEnabled;
	NSDictionary* outputSettings;
	BOOL isCapturingPhoto;
	BOOL SISSupported;
	BOOL SISEnabled;
	BOOL SISActive;
	BOOL highResStillEnabled;
	unsigned shutterSoundID;
	SCD_Struct_AV29 preparedBracket;
	NSMutableArray* prepareRequests;
	unsigned long long maxBracketedCaptureCount;
	BOOL lensStabilizationDuringBracketedCaptureSupported;
	BOOL lensStabilizationDuringBracketedCaptureEnabled;
	BOOL bravoImageFusionSupported;
	ct_green_tea_logger_sRef greenTeaLogger;

}
-(void)dealloc;
-(id)init;
@end

