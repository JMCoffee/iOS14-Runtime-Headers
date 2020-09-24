/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:24 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSData;


@protocol MDLSkinDeformerComponent <MDLComponent>
@property (nonatomic,readonly) NSArray * jointPaths; 
@property (nonatomic,readonly) NSData * jointBindTransforms; 
@property (nonatomic,readonly) SCD_Struct_MD1 meshBindTransform; 
@required
-(unsigned long long)copyJointBindTransformsInto:(/*function pointer*/void**)arg1 maxCount:(unsigned long long)arg2;
-(NSArray *)jointPaths;
-(NSData *)jointBindTransforms;
-(SCD_Struct_MD1)meshBindTransform;

@end
