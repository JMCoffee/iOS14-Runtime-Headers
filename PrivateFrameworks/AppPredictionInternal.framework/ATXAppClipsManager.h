/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ATXPETEventTracker2Protocol;
@class ATXAppClipsFeedback;

@interface ATXAppClipsManager : NSObject {

	id<ATXPETEventTracker2Protocol> _tracker;
	ATXAppClipsFeedback* _feedback;

}

@property (nonatomic,readonly) ATXAppClipsFeedback * feedback;              //@synthesize feedback=_feedback - In the implementation block
+(void)openAppClipWithHeroAppPrediction:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)sortPredictionsOnFeedback:(id)arg1 ;
+(id)addPredictionLocationToHeroAppPredictions:(id)arg1 location:(id)arg2 ;
+(BOOL)clipsSupported;
-(ATXAppClipsFeedback *)feedback;
-(id)initWithFeedback:(id)arg1 tracker:(id)arg2 ;
-(void)donateAppClipsWithHeroAppPredictions:(id)arg1 ;
-(id)init;
-(void)logSuppressionMetricWithHeroAppPrediction:(id)arg1 suppresionType:(int)arg2 ;
-(id)initWithFeedback:(id)arg1 ;
-(id)_populateMetadataInHeroAppPrediction:(id)arg1 ;
@end

