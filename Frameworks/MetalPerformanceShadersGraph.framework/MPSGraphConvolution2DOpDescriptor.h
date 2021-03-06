/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:26 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MetalPerformanceShadersGraph.framework/MetalPerformanceShadersGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalPerformanceShadersGraph/MetalPerformanceShadersGraph-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MPSGraphConvolution2DOpDescriptor : NSObject <NSCopying> {

	unsigned long long _strideInX;
	unsigned long long _strideInY;
	unsigned long long _dilationRateInX;
	unsigned long long _dilationRateInY;
	unsigned long long _paddingLeft;
	unsigned long long _paddingRight;
	unsigned long long _paddingTop;
	unsigned long long _paddingBottom;
	unsigned long long _paddingStyle;
	unsigned long long _dataLayout;
	unsigned long long _weightsLayout;
	unsigned long long _groups;

}

@property (assign,nonatomic) unsigned long long strideInX;                    //@synthesize strideInX=_strideInX - In the implementation block
@property (assign,nonatomic) unsigned long long strideInY;                    //@synthesize strideInY=_strideInY - In the implementation block
@property (assign,nonatomic) unsigned long long dilationRateInX;              //@synthesize dilationRateInX=_dilationRateInX - In the implementation block
@property (assign,nonatomic) unsigned long long dilationRateInY;              //@synthesize dilationRateInY=_dilationRateInY - In the implementation block
@property (assign,nonatomic) unsigned long long paddingLeft;                  //@synthesize paddingLeft=_paddingLeft - In the implementation block
@property (assign,nonatomic) unsigned long long paddingRight;                 //@synthesize paddingRight=_paddingRight - In the implementation block
@property (assign,nonatomic) unsigned long long paddingTop;                   //@synthesize paddingTop=_paddingTop - In the implementation block
@property (assign,nonatomic) unsigned long long paddingBottom;                //@synthesize paddingBottom=_paddingBottom - In the implementation block
@property (assign,nonatomic) unsigned long long paddingStyle;                 //@synthesize paddingStyle=_paddingStyle - In the implementation block
@property (assign,nonatomic) unsigned long long dataLayout;                   //@synthesize dataLayout=_dataLayout - In the implementation block
@property (assign,nonatomic) unsigned long long weightsLayout;                //@synthesize weightsLayout=_weightsLayout - In the implementation block
@property (assign,nonatomic) unsigned long long groups;                       //@synthesize groups=_groups - In the implementation block
+(id)descriptorWithStrideInX:(unsigned long long)arg1 strideInY:(unsigned long long)arg2 dilationRateInX:(unsigned long long)arg3 dilationRateInY:(unsigned long long)arg4 groups:(unsigned long long)arg5 paddingLeft:(unsigned long long)arg6 paddingRight:(unsigned long long)arg7 paddingTop:(unsigned long long)arg8 paddingBottom:(unsigned long long)arg9 paddingStyle:(unsigned long long)arg10 dataLayout:(unsigned long long)arg11 weightsLayout:(unsigned long long)arg12 ;
+(id)descriptorWithStrideInX:(unsigned long long)arg1 strideInY:(unsigned long long)arg2 dilationRateInX:(unsigned long long)arg3 dilationRateInY:(unsigned long long)arg4 groups:(unsigned long long)arg5 paddingStyle:(unsigned long long)arg6 dataLayout:(unsigned long long)arg7 weightsLayout:(unsigned long long)arg8 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPaddingLeft:(unsigned long long)arg1 ;
-(unsigned long long)paddingRight;
-(unsigned long long)paddingLeft;
-(unsigned long long)paddingTop;
-(void)setPaddingTop:(unsigned long long)arg1 ;
-(unsigned long long)strideInX;
-(unsigned long long)strideInY;
-(void)setStrideInX:(unsigned long long)arg1 ;
-(void)setStrideInY:(unsigned long long)arg1 ;
-(unsigned long long)paddingBottom;
-(unsigned long long)groups;
-(void)setPaddingBottom:(unsigned long long)arg1 ;
-(unsigned long long)weightsLayout;
-(void)setPaddingRight:(unsigned long long)arg1 ;
-(void)setGroups:(unsigned long long)arg1 ;
-(unsigned long long)dataLayout;
-(unsigned long long)dilationRateInX;
-(unsigned long long)dilationRateInY;
-(void)setDilationRateInX:(unsigned long long)arg1 ;
-(void)setDilationRateInY:(unsigned long long)arg1 ;
-(void)setPaddingStyle:(unsigned long long)arg1 ;
-(void)setDataLayout:(unsigned long long)arg1 ;
-(void)setWeightsLayout:(unsigned long long)arg1 ;
-(void)setExplicitPaddingWithPaddingLeft:(unsigned long long)arg1 paddingRight:(unsigned long long)arg2 paddingTop:(unsigned long long)arg3 paddingBottom:(unsigned long long)arg4 ;
-(unsigned long long)paddingStyle;
@end

