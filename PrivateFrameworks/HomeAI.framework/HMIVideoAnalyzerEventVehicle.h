/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HomeAI/HMIVideoAnalyzerEvent.h>

@interface HMIVideoAnalyzerEventVehicle : HMIVideoAnalyzerEvent
+(id)logCategory;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithConfidence:(id)arg1 boundingBox:(CGRect)arg2 ;
-(id)initWithConfidence:(id)arg1 boundingBox:(CGRect)arg2 hasMotionVectors:(BOOL)arg3 ;
@end

