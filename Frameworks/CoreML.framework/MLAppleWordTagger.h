/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLModel.h>
#import <libobjc.A.dylib/MLModelSpecificationLoader.h>

@class MLAppleWordTaggerParameters, NSString;

@interface MLAppleWordTagger : MLModel <MLModelSpecificationLoader> {

	void* wordTaggingModel;
	MLAppleWordTaggerParameters* _parameters;

}

@property (readonly) MLAppleWordTaggerParameters * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)loadModelFromSpecification:(MLModelSpecification*)arg1 configuration:(id)arg2 error:(id*)arg3 ;
+(BOOL)saveAppleWordTaggingModelToURL:(id)arg1 wordTaggerParameters:(id)arg2 error:(id*)arg3 ;
-(MLAppleWordTaggerParameters *)parameters;
-(void)dealloc;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithParameters:(id)arg1 modelDescription:(id)arg2 nlpHandle:(id)arg3 configuration:(id)arg4 error:(id*)arg5 ;
@end

