/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class JFXARMetadata;

@interface JFXARMetadataMediaReaderItem : NSObject {

	JFXARMetadata* _arMetadata;
	SCD_Struct_JF4 _timeRange;

}

@property (nonatomic,readonly) JFXARMetadata * arMetadata;              //@synthesize arMetadata=_arMetadata - In the implementation block
@property (nonatomic,readonly) SCD_Struct_JF4 timeRange;                //@synthesize timeRange=_timeRange - In the implementation block
-(SCD_Struct_JF4)timeRange;
-(JFXARMetadata *)arMetadata;
-(id)initWithARMetadata:(id)arg1 timeRange:(SCD_Struct_JF4)arg2 ;
@end

