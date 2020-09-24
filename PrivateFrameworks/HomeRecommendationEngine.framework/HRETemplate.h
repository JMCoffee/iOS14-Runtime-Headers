/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeRecommendationEngine.framework/HomeRecommendationEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDictionary, NSString, NSSet;

@interface HRETemplate : NSObject {

	NSMutableDictionary* _config;

}

@property (nonatomic,retain) NSMutableDictionary * config;                       //@synthesize config=_config - In the implementation block
@property (nonatomic,readonly) NSDictionary * configuration; 
@property (nonatomic,readonly) NSDictionary * rankingConfig; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * longDescription; 
@property (nonatomic,readonly) id<HFIconDescriptor> iconDescriptor; 
@property (nonatomic,readonly) NSSet * optionalTypes; 
@property (nonatomic,readonly) NSSet * requiredTypes; 
@property (nonatomic,readonly) NSSet * requiredTypeGroups; 
+(id)representableObjectsFromHomeObjects:(id)arg1 context:(id)arg2 ;
+(BOOL)representableAccessoryObject:(id)arg1 containsObject:(id)arg2 ;
+(id)characteristicsTypesAllowingFullVarianceInVarianceDictionary:(id)arg1 ;
+(BOOL)targetValue:(id)arg1 withinAllowedVariance:(id)arg2 ;
+(id)representableObjectToUseForVerboseString:(id)arg1 actionableObjects:(id)arg2 ;
+(id)staticTemplates;
+(id)typesForObjectsInContext:(id)arg1 intersectingWithObjects:(id)arg2 ;
+(BOOL)shouldUseVerboseStringWithObjectsInContext:(id)arg1 actionableObjectsInActions:(id)arg2 actionableObjectsInEvents:(id)arg3 ;
-(NSString *)identifier;
-(NSMutableDictionary *)config;
-(NSString *)title;
-(id)init;
-(void)setConfig:(NSMutableDictionary *)arg1 ;
-(id)triggerType;
-(id)initWithConfiguration:(id)arg1 ;
-(id<HFIconDescriptor>)iconDescriptor;
-(NSDictionary *)configuration;
-(NSString *)longDescription;
-(id)naturalLanguageTitleForObjectsInContext:(id)arg1 forRecommendation:(id)arg2 options:(id)arg3 ;
-(id)iconDescriptorForHomeObjects:(id)arg1 forRecommendation:(id)arg2 ;
-(NSDictionary *)rankingConfig;
-(id)naturalLanguageTitleForRecommendation:(id)arg1 options:(id)arg2 ;
-(NSSet *)requiredTypes;
-(NSSet *)requiredTypeGroups;
-(id)involvedTypes;
-(id)recommendationSplitStrategy;
-(id)processedActionMap;
-(id)triggerCharacteristicTypes;
-(NSSet *)optionalTypes;
@end
