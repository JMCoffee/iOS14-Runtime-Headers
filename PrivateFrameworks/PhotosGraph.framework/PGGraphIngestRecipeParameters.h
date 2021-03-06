/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface PGGraphIngestRecipeParameters : NSObject {

	NSArray* _momentsToIngest;
	NSArray* _highligthsToIngest;
	NSArray* _preProcessors;
	NSArray* _postProcessors;

}

@property (nonatomic,retain) NSArray * momentsToIngest;                 //@synthesize momentsToIngest=_momentsToIngest - In the implementation block
@property (nonatomic,retain) NSArray * highligthsToIngest;              //@synthesize highligthsToIngest=_highligthsToIngest - In the implementation block
@property (nonatomic,retain) NSArray * preProcessors;                   //@synthesize preProcessors=_preProcessors - In the implementation block
@property (nonatomic,retain) NSArray * postProcessors;                  //@synthesize postProcessors=_postProcessors - In the implementation block
+(id)lighweightGraphIngestParameters;
-(NSArray *)preProcessors;
-(NSArray *)momentsToIngest;
-(NSArray *)postProcessors;
-(NSArray *)highligthsToIngest;
-(void)setMomentsToIngest:(NSArray *)arg1 ;
-(void)setHighligthsToIngest:(NSArray *)arg1 ;
-(void)setPreProcessors:(NSArray *)arg1 ;
-(void)setPostProcessors:(NSArray *)arg1 ;
@end

