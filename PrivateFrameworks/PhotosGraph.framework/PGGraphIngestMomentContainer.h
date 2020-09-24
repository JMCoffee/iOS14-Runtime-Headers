/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PGGraphIngestMoment.h>

@class NSDate, NSString, CLSClueCollection, CLSInvestigationPhotoKitFeeder, NSNumber, PGManager;

@interface PGGraphIngestMomentContainer : NSObject <PGGraphIngestMoment> {

	CLSClueCollection* _clueCollection;
	CLSInvestigationPhotoKitFeeder* _feeder;
	NSNumber* _isInterestingNumber;
	NSNumber* _isInterestingWithAlternateJunkingNumber;
	NSNumber* _isSmartInterestingNumber;
	NSNumber* _contentScoreNumber;
	PGManager* _manager;

}

@property (nonatomic,retain) CLSClueCollection * clueCollection;                                 //@synthesize clueCollection=_clueCollection - In the implementation block
@property (nonatomic,retain) CLSInvestigationPhotoKitFeeder * feeder;                            //@synthesize feeder=_feeder - In the implementation block
@property (nonatomic,retain) NSNumber * isInterestingNumber;                                     //@synthesize isInterestingNumber=_isInterestingNumber - In the implementation block
@property (nonatomic,retain) NSNumber * isInterestingWithAlternateJunkingNumber;                 //@synthesize isInterestingWithAlternateJunkingNumber=_isInterestingWithAlternateJunkingNumber - In the implementation block
@property (nonatomic,retain) NSNumber * isSmartInterestingNumber;                                //@synthesize isSmartInterestingNumber=_isSmartInterestingNumber - In the implementation block
@property (nonatomic,retain) NSNumber * contentScoreNumber;                                      //@synthesize contentScoreNumber=_contentScoreNumber - In the implementation block
@property (nonatomic,retain) PGManager * manager;                                                //@synthesize manager=_manager - In the implementation block
@property (nonatomic,readonly) NSDate * localStartDate; 
@property (nonatomic,readonly) NSDate * localEndDate; 
@property (nonatomic,readonly) NSDate * universalStartDate; 
@property (nonatomic,readonly) NSDate * universalEndDate; 
@property (nonatomic,readonly) BOOL isSmartInteresting; 
@property (nonatomic,readonly) BOOL isInteresting; 
@property (nonatomic,readonly) BOOL isInterestingWithAlternateJunking; 
@property (nonatomic,readonly) double contentScore; 
@property (nonatomic,readonly) unsigned long long numberOfItems; 
@property (nonatomic,readonly) unsigned long long numberOfItemsWithPersons; 
@property (nonatomic,readonly) unsigned long long totalNumberOfPersons; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) double inhabitationScore; 
@property (nonatomic,readonly) BOOL hasHigherThanImprovedAssets; 
@property (nonatomic,readonly) BOOL hasAssetsWithInterestingScenes; 
@property (nonatomic,readonly) BOOL containsBetterScoringAsset; 
@property (nonatomic,readonly) BOOL containsNonJunkAssets; 
@property (nonatomic,readonly) unsigned long long numberOfShinyGemItems; 
@property (nonatomic,readonly) unsigned long long numberOfRegularGemItems; 
@property (nonatomic,readonly) double behavioralScore; 
@property (nonatomic,readonly) double scenesProcessedRatio; 
@property (nonatomic,readonly) double facesProcessedRatio; 
@property (nonatomic,readonly) unsigned long long numberOfAssetsInExtendedCuration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDate *)universalEndDate;
-(double)contentScore;
-(double)behavioralScore;
-(BOOL)isInteresting;
-(NSDate *)universalStartDate;
-(NSNumber *)isInterestingNumber;
-(BOOL)isInterestingWithAlternateJunking;
-(NSDate *)localStartDate;
-(NSDate *)localEndDate;
-(BOOL)hasAssetsWithInterestingScenes;
-(BOOL)hasHigherThanImprovedAssets;
-(void)setClueCollection:(CLSClueCollection *)arg1 ;
-(double)inhabitationScore;
-(void)setIsInterestingWithAlternateJunkingNumber:(NSNumber *)arg1 ;
-(BOOL)containsBetterScoringAsset;
-(void)setIsSmartInterestingNumber:(NSNumber *)arg1 ;
-(void)setFeeder:(CLSInvestigationPhotoKitFeeder *)arg1 ;
-(void)setManager:(PGManager *)arg1 ;
-(void)setIsInterestingNumber:(NSNumber *)arg1 ;
-(unsigned long long)numberOfAssetsInExtendedCuration;
-(NSNumber *)isSmartInterestingNumber;
-(CLSInvestigationPhotoKitFeeder *)feeder;
-(double)facesProcessedRatio;
-(PGManager *)manager;
-(BOOL)containsNonJunkAssets;
-(unsigned long long)totalNumberOfPersons;
-(void)setContentScoreNumber:(NSNumber *)arg1 ;
-(void)_computeScoresIfNeeded;
-(BOOL)isSmartInteresting;
-(unsigned long long)numberOfShinyGemItems;
-(unsigned long long)numberOfRegularGemItems;
-(NSString *)uuid;
-(unsigned long long)numberOfItemsWithPersons;
-(id)initMomentContainerWithFeeder:(id)arg1 clueCollection:(id)arg2 manager:(id)arg3 ;
-(double)scenesProcessedRatio;
-(unsigned long long)numberOfItems;
-(CLSClueCollection *)clueCollection;
-(NSNumber *)isInterestingWithAlternateJunkingNumber;
-(NSNumber *)contentScoreNumber;
@end
