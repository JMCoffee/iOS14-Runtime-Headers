/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <QuartzCore/CALayer.h>

@protocol TSDTileGeometryProviding;
@class CALayer, NSMutableArray;

@interface TSDTilingLayer : CALayer {

	int mTilingMode;
	CGSize mTileSize;
	struct {
		unsigned tiled : 1;
		unsigned hasCustomContents : 1;
		unsigned drawsInBackground : 1;
		unsigned forceTiling : 1;
		unsigned needsTileLayout : 1;
		unsigned needsTileDisplay : 1;
		unsigned needsSelfDisplay : 1;
	}  mFlags;
	CGRect mLastVisibleBounds;
	CGSize mLastBoundsSize;
	CALayer* mProviderContentLayer;
	NSMutableArray* mDirtyTiles;
	BOOL mHasEverHadTileLayout;
	id<TSDTileGeometryProviding> _geometryProvider;

}

@property (assign,nonatomic) int tilingMode; 
@property (assign,nonatomic) BOOL drawsInBackground; 
@property (assign,nonatomic) BOOL forceTiling; 
@property (nonatomic,retain) id<TSDTileGeometryProviding> geometryProvider;              //@synthesize geometryProvider=_geometryProvider - In the implementation block
+(CGSize)defaultTileSize;
+(CGImageRef)p_newCheckerboardImage;
+(CGImageRef)p_newGeneratedCheckerboardImage;
-(void)setContents:(id)arg1 ;
-(void)setContentsScale:(double)arg1 ;
-(int)tilingMode;
-(void)dealloc;
-(void)setTilingMode:(int)arg1 ;
-(void)layoutSublayers;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(id)init;
-(void)display;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)setNeedsLayoutForTilingLayers;
-(void)setNeedsLayout;
-(BOOL)forceTiling;
-(void)setDrawsInBackground:(BOOL)arg1 ;
-(void)tilingSafeSetSublayers:(id)arg1 ;
-(BOOL)tilingSafeHasContents;
-(id)p_tileLayers;
-(BOOL)drawsInBackground;
-(unsigned long long)p_tilesWide;
-(BOOL)p_updateTileSizeWithLayerSize:(CGSize)arg1 ;
-(unsigned long long)p_tilesHigh;
-(void)setTileContents:(id)arg1 ;
-(void)p_updateTileIndexes:(id)arg1 visibleBounds:(CGRect)arg2 ;
-(void)i_setNeedsTileDisplayForTile:(id)arg1 ;
-(void)setNeedsDisplayForDirtyTiles:(id)arg1 ;
-(id)p_nonTileAndContentLayers;
-(id)p_tileAndContentLayers;
-(void)i_drawRect:(CGRect)arg1 inContext:(CGContextRef)arg2 inBackground:(BOOL)arg3 ;
-(void)setForceTiling:(BOOL)arg1 ;
-(void)i_drawTile:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)i_drawTileInBackground:(id)arg1 inRect:(CGRect)arg2 ;
-(id<TSDTileGeometryProviding>)geometryProvider;
-(void)setGeometryProvider:(id<TSDTileGeometryProviding>)arg1 ;
@end
