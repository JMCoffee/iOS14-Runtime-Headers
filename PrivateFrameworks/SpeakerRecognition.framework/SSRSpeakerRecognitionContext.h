/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, CSAsset, NSDictionary, NSURL, SSRLoggingAggregator;

@interface SSRSpeakerRecognitionContext : NSObject {

	BOOL _osTransactionReqd;
	float _combinationWeight;
	NSString* _sessionId;
	NSArray* _voiceProfileArray;
	unsigned long long _spIdType;
	CSAsset* _asset;
	NSString* _locale;
	unsigned long long _activeChannel;
	unsigned long long _scoreType;
	unsigned long long _recognitionStyle;
	NSDictionary* _vtEventInfo;
	NSString* _configVersion;
	NSURL* _resourceFilePath;
	NSURL* _vadResourcePath;
	NSDictionary* _modelsContext;
	NSDictionary* _expModelsContext;
	unsigned long long _maxAllowedAudioSamples;
	NSString* _debugUtteranceAudioFile;
	NSString* _debugUtteranceMetaFile;
	SSRLoggingAggregator* _logAggregator;

}

@property (nonatomic,retain) NSArray * voiceProfileArray;                              //@synthesize voiceProfileArray=_voiceProfileArray - In the implementation block
@property (assign,nonatomic) unsigned long long spIdType;                              //@synthesize spIdType=_spIdType - In the implementation block
@property (nonatomic,retain) CSAsset * asset;                                          //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) NSString * locale;                                        //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) unsigned long long activeChannel;                       //@synthesize activeChannel=_activeChannel - In the implementation block
@property (nonatomic,readonly) unsigned long long scoreType;                           //@synthesize scoreType=_scoreType - In the implementation block
@property (nonatomic,readonly) unsigned long long recognitionStyle;                    //@synthesize recognitionStyle=_recognitionStyle - In the implementation block
@property (nonatomic,readonly) float combinationWeight;                                //@synthesize combinationWeight=_combinationWeight - In the implementation block
@property (nonatomic,readonly) NSDictionary * vtEventInfo;                             //@synthesize vtEventInfo=_vtEventInfo - In the implementation block
@property (nonatomic,readonly) NSString * configVersion;                               //@synthesize configVersion=_configVersion - In the implementation block
@property (nonatomic,readonly) NSURL * resourceFilePath;                               //@synthesize resourceFilePath=_resourceFilePath - In the implementation block
@property (nonatomic,readonly) NSURL * vadResourcePath;                                //@synthesize vadResourcePath=_vadResourcePath - In the implementation block
@property (nonatomic,readonly) NSDictionary * modelsContext;                           //@synthesize modelsContext=_modelsContext - In the implementation block
@property (nonatomic,readonly) NSDictionary * expModelsContext;                        //@synthesize expModelsContext=_expModelsContext - In the implementation block
@property (nonatomic,readonly) NSDictionary * numEnrollmentUtterances; 
@property (nonatomic,readonly) unsigned long long maxAllowedAudioSamples;              //@synthesize maxAllowedAudioSamples=_maxAllowedAudioSamples - In the implementation block
@property (nonatomic,readonly) BOOL osTransactionReqd;                                 //@synthesize osTransactionReqd=_osTransactionReqd - In the implementation block
@property (nonatomic,readonly) NSString * debugUtteranceAudioFile;                     //@synthesize debugUtteranceAudioFile=_debugUtteranceAudioFile - In the implementation block
@property (nonatomic,readonly) NSString * debugUtteranceMetaFile;                      //@synthesize debugUtteranceMetaFile=_debugUtteranceMetaFile - In the implementation block
@property (nonatomic,retain) SSRLoggingAggregator * logAggregator;                     //@synthesize logAggregator=_logAggregator - In the implementation block
@property (nonatomic,readonly) NSString * sessionId;                                   //@synthesize sessionId=_sessionId - In the implementation block
-(NSString *)configVersion;
-(NSString *)sessionId;
-(void)setLocale:(NSString *)arg1 ;
-(CSAsset *)asset;
-(void)dealloc;
-(NSString *)locale;
-(unsigned long long)activeChannel;
-(void)setAsset:(CSAsset *)arg1 ;
-(unsigned long long)spIdType;
-(id)description;
-(id)initWithVoiceRecognitionContext:(id)arg1 error:(id*)arg2 ;
-(NSURL *)vadResourcePath;
-(NSDictionary *)modelsContext;
-(NSDictionary *)expModelsContext;
-(NSURL *)resourceFilePath;
-(unsigned long long)recognitionStyle;
-(SSRLoggingAggregator *)logAggregator;
-(NSDictionary *)vtEventInfo;
-(NSString *)debugUtteranceAudioFile;
-(NSString *)debugUtteranceMetaFile;
-(unsigned long long)maxAllowedAudioSamples;
-(BOOL)osTransactionReqd;
-(float)combinationWeight;
-(NSDictionary *)numEnrollmentUtterances;
-(unsigned long long)scoreType;
-(void)setSpIdType:(unsigned long long)arg1 ;
-(void)setLogAggregator:(SSRLoggingAggregator *)arg1 ;
-(NSArray *)voiceProfileArray;
-(void)setVoiceProfileArray:(NSArray *)arg1 ;
-(id)pickAssetForProfiles:(id)arg1 forSpIdType:(unsigned long long)arg2 withAssetArray:(id)arg3 ;
-(id)pickAssetForProfiles:(id)arg1 forSpIdType:(unsigned long long)arg2 ;
-(void)composeModelContextsForProfiles:(id)arg1 forSpIdType:(unsigned long long)arg2 forAsset:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_checkIfModelsPresentForProfiles:(id)arg1 forSpIdType:(unsigned long long)arg2 forAsset:(id)arg3 ;
@end

