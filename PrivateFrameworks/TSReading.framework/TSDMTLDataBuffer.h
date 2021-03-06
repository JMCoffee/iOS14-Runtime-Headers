/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSDMTLDataBuffer <NSObject,TSDGPUDataBufferSharedAccessors,TSDGPUDataBufferAccessor>
@property (assign,nonatomic) unsigned long long metalDrawMode; 
@property (readonly) unsigned long long positionAttributeIndex; 
@property (readonly) unsigned long long texCoordAttributeIndex; 
@property (readonly) unsigned long long centerAttributeIndex; 
@required
+(id)newDataBufferWithVertexRect:(CGRect)arg1 textureRect:(CGRect)arg2 device:(id)arg3;
+(id)newDataBufferWithVertexRect:(CGRect)arg1 textureRect:(CGRect)arg2 textureFlipped:(BOOL)arg3 device:(id)arg4;
+(id)newDataBufferWithVertexAttributes:(id)arg1 vertexCount:(unsigned long long)arg2 indexElementCount:(unsigned long long)arg3 device:(id)arg4;
+(id)newDataBufferWithVertexRect:(CGRect)arg1 textureRect:(CGRect)arg2 meshSize:(CGSize)arg3 device:(id)arg4;
+(id)newDataBufferWithVertexRect:(CGRect)arg1 textureRect:(CGRect)arg2 meshSize:(CGSize)arg3 textureFlipped:(BOOL)arg4 device:(id)arg5;
+(id)newDataBufferWithVertexAttributes:(id)arg1 meshSize:(CGSize)arg2 device:(id)arg3;
+(id)newDataBufferWithVertexAttributes:(id)arg1 quadParticleCount:(unsigned long long)arg2 device:(id)arg3;
+(id)newDataBufferWithVertexRect:(CGRect)arg1 textureRect:(CGRect)arg2 meshSize:(CGSize)arg3 textureFlipped:(BOOL)arg4 includeCenterAttribute:(BOOL)arg5 addTransparentBorder:(BOOL)arg6 device:(id)arg7;
-(void)drawWithEncoder:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)setGLushort:(unsigned short)arg1 forIndexElement:(unsigned long long)arg2;
-(void)setMetalDrawMode:(unsigned long long)arg1;
-(id)initWithVertexAttributes:(id)arg1 vertexCount:(unsigned long long)arg2 indexElementCount:(unsigned long long)arg3 bufferCount:(unsigned long long)arg4;
-(id)initWithVertexRect:(CGRect)arg1 textureRect:(CGRect)arg2 meshSize:(CGSize)arg3 textureFlipped:(BOOL)arg4 includeCenterAttribute:(BOOL)arg5;
-(id)initWithVertexRect:(CGRect)arg1 textureRect:(CGRect)arg2 meshSize:(CGSize)arg3 textureFlipped:(BOOL)arg4 includeCenterAttribute:(BOOL)arg5 addTransparentBorder:(BOOL)arg6;
-(unsigned long long)metalDrawMode;
-(void)drawWithEncoder:(id)arg1 atIndex:(unsigned long long)arg2 range:(NSRange)arg3 advanceDynamicBuffer:(BOOL)arg4;
-(void)enableDataBuffer;
-(void)encodeWithEncoder:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)updateMetalDataBufferAttributes:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)setDataForAttribute:(id)arg1 atIndex:(unsigned long long)arg2 fromAttribute:(id)arg3 dataBuffer:(id)arg4 index:(unsigned long long)arg5;
-(id)vertexAttributeNamed:(id)arg1;
-(void)updateDataBufferAttributes:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)disableWithDevice:(id)arg1;
-(void)drawWithEncoder:(id)arg1 atIndex:(unsigned long long)arg2 range:(NSRange)arg3;
-(void)drawWithEncoder:(id)arg1 atIndex:(unsigned long long)arg2 advanceDynamicBuffer:(BOOL)arg3;
-(void)updateDataBufferAttributesWithBlock:(/*^block*/id)arg1;
-(unsigned long long)positionAttributeIndex;
-(unsigned long long)texCoordAttributeIndex;
-(unsigned long long)centerAttributeIndex;

@end

