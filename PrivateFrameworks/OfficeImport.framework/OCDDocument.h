/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OCDWriter, OCDSummary, OADBlipCollection, NSMutableArray, OADTableStyleCollection, OITSUPointerKeyDictionary, OADTheme, OADTextListStyle, OADGraphicStyleCache, NSData, OCDReader;

@interface OCDDocument : NSObject {

	OCDWriter* mWriter;
	OCDSummary* mSummary;
	OADBlipCollection* mBlips;
	NSMutableArray* mCharts;
	OADTableStyleCollection* mTableStyles;
	OITSUPointerKeyDictionary* mDualDrawableMap;
	OADTheme* mDocumentTheme;
	OADTextListStyle* mDefaultTextStyle;
	OADGraphicStyleCache* mGraphicStyleCache;
	NSData* mEncryptionInfo;
	OCDReader* mReader;

}

@property (nonatomic,retain) OCDReader * reader; 
@property (nonatomic,retain) OCDWriter * writer; 
@property (nonatomic,readonly) OCDSummary * summary; 
@property (nonatomic,readonly) OADBlipCollection * blips; 
@property (nonatomic,readonly) NSMutableArray * charts; 
@property (nonatomic,readonly) OADTableStyleCollection * tableStyles; 
@property (nonatomic,readonly) OITSUPointerKeyDictionary * dualDrawableMap; 
@property (nonatomic,readonly) OADTextListStyle * defaultTextStyle; 
@property (nonatomic,retain) OADGraphicStyleCache * graphicStyleCache; 
-(void)setWriter:(OCDWriter *)arg1 ;
-(NSMutableArray *)charts;
-(OCDReader *)reader;
-(OCDSummary *)summary;
-(OADBlipCollection *)blips;
-(id)init;
-(id)theme;
-(void)setTheme:(id)arg1 ;
-(void)setReader:(OCDReader *)arg1 ;
-(OCDWriter *)writer;
-(OADTextListStyle *)defaultTextStyle;
-(void)removeUnnecessaryOverrides;
-(OADTableStyleCollection *)tableStyles;
-(BOOL)isFromBinaryFile;
-(id)encryptionInfo;
-(void)setEncryptionInfo:(id)arg1 ;
-(void)setUpPropertyHierarchyPreservingEffectiveValues;
-(id)bulletBlips;
-(OITSUPointerKeyDictionary *)dualDrawableMap;
-(OADGraphicStyleCache *)graphicStyleCache;
-(void)setGraphicStyleCache:(OADGraphicStyleCache *)arg1 ;
@end
