/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MLModel, NSDictionary, MLModelConfiguration, NSString;

@interface _PSRuleRankingMLModel : NSObject {

	BOOL _isAdaptedModel;
	BOOL _isAdaptedMLModelOK;
	double _scoreThreshold;
	MLModel* _mlModel;
	NSDictionary* _metadata;
	NSDictionary* _psConfigForAdaptableModel;
	MLModelConfiguration* _adaptableModelConfiguration;
	NSString* _adaptedModelRecipeVersion;

}

@property (retain) MLModel * mlModel;                                                         //@synthesize mlModel=_mlModel - In the implementation block
@property (retain) NSDictionary * metadata;                                                   //@synthesize metadata=_metadata - In the implementation block
@property (assign) BOOL isAdaptedModel;                                                       //@synthesize isAdaptedModel=_isAdaptedModel - In the implementation block
@property (retain) NSDictionary * psConfigForAdaptableModel;                                  //@synthesize psConfigForAdaptableModel=_psConfigForAdaptableModel - In the implementation block
@property (nonatomic,retain) MLModelConfiguration * adaptableModelConfiguration;              //@synthesize adaptableModelConfiguration=_adaptableModelConfiguration - In the implementation block
@property (assign,nonatomic) BOOL isAdaptedMLModelOK;                                         //@synthesize isAdaptedMLModelOK=_isAdaptedMLModelOK - In the implementation block
@property (retain) NSString * adaptedModelRecipeVersion;                                      //@synthesize adaptedModelRecipeVersion=_adaptedModelRecipeVersion - In the implementation block
@property (assign) double scoreThreshold;                                                     //@synthesize scoreThreshold=_scoreThreshold - In the implementation block
-(BOOL)isAdaptedModelCreated;
-(MLModel *)mlModel;
-(BOOL)isAdaptedModelUsed;
-(BOOL)isAdaptedModel;
-(void)setIsAdaptedModel:(BOOL)arg1 ;
-(void)loadDefaultRuleMinerMLModel;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(void)setAdaptedModelRecipeVersion:(NSString *)arg1 ;
-(void)setPsConfigForAdaptableModel:(NSDictionary *)arg1 ;
-(id)extractAdaptedModelRecipeID;
-(NSDictionary *)metadata;
-(id)initWithAdaptableModelConfig:(id)arg1 isAdaptedMLModelOK:(BOOL)arg2 scoreThreshold:(double)arg3 ;
-(id)initWithMLModel:(id)arg1 scoreThreshold:(double)arg2 isAdaptedModel:(BOOL)arg3 psConfigForAdaptableModel:(id)arg4 isAdaptedMLModelOK:(BOOL)arg5 ;
-(id)rankRules:(id)arg1 contextItems:(id)arg2 ;
-(void)setScoreThreshold:(double)arg1 ;
-(void)setIsAdaptedMLModelOK:(BOOL)arg1 ;
-(NSDictionary *)psConfigForAdaptableModel;
-(void)setMlModel:(MLModel *)arg1 ;
-(id)getAdaptedModelVersion;
-(NSString *)adaptedModelRecipeVersion;
-(double)scoreThreshold;
-(void)setAdaptableModelConfiguration:(MLModelConfiguration *)arg1 ;
-(id)giveModelDescription;
-(MLModelConfiguration *)adaptableModelConfiguration;
-(BOOL)isAdaptedMLModelOK;
@end

