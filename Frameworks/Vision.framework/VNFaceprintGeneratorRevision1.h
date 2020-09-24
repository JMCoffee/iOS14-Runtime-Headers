/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNFaceprintGenerator.h>

@interface VNFaceprintGeneratorRevision1 : VNFaceprintGenerator
+(unsigned)pixelFormat;
+(id)modelPath;
+(unsigned long long)numberOfChannels;
+(int)clusteringConfidence;
+(/*function pointer*/void*)faceDescriptorCreator;
+(CGRect)faceBoundingBox:(id)arg1 ;
+(/*function pointer*/void*)getFaceJunkClassifier;
+(float)magnifiedBBoxScaleFactor;
@end
