/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNEspressoModelClassifier.h>

@interface VNSceneClassifier : VNEspressoModelClassifier {

	shared_ptr<vision::mod::ImageClassifier_HierarchicalModel>* _sceneClassifierHierarchicalModel;

}
+(id)returnAllResultsOptionKey;
+(shared_ptr<vision::mod::ImageDescriptorProcessorAbstract>*)createDescriprorProcessorWithModelPath:(const char*)arg1 nBatch:(int)arg2 computePlatform:(int)arg3 computePath:(int)arg4 options:(Options)arg5 ;
+(shared_ptr<vision::mod::ImageClassifierAbstract>*)createClassifierWithDescriptor:(shared_ptr<vision::mod::ImageDescriptorProcessorAbstract>*)arg1 classifierAbsolutePath:(const char*)arg2 computePlatform:(int)arg3 computePath:(int)arg4 labelsFilename:(const char*)arg5 options:(Options)arg6 ;
+(id)classifierResourceTypesToNamesForRevision:(unsigned long long)arg1 ;
+(Class)espressoModelImageprintClass;
+(id)createObservationWithDescriptors:(id)arg1 forRequestRevision:(unsigned long long)arg2 ;
+(id)configurationOptionKeysForDetectorKey;
+(id)supportedImageSizeSetForProcessingOptions:(id)arg1 ;
+(void)initDumpDebugIntermediates:(id*)arg1 debugInfo:(id*)arg2 ;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(id)supportedImageSizeSetForProcessingOptions:(id)arg1 ;
-(BOOL)isSceneprinterCompatibleWithSceneprinterCreatedWithOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)initImageDescriptorBuffer:(id)arg1 descriptorBuffer:(shared_ptr<vision::mod::ImageDescriptorBufferAbstract>*)arg2 error:(id*)arg3 ;
-(id)labelOperationPointsForRequestRevision:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)completeInitializationForSession:(id)arg1 error:(id*)arg2 ;
@end

