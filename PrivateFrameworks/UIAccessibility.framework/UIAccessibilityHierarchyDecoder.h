/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface UIAccessibilityHierarchyDecoder : NSObject {

	NSData* _hierarchyData;

}

@property (nonatomic,retain) NSData * hierarchyData;              //@synthesize hierarchyData=_hierarchyData - In the implementation block
-(void)setHierarchyData:(NSData *)arg1 ;
-(id)initWithHierarchyData:(id)arg1 ;
-(id)decodeHierarchyWithContainer:(id)arg1 error:(id*)arg2 ;
-(NSData *)hierarchyData;
@end
