/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:13 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/PDAnimateBehavior.h>

@class NSMutableDictionary;

@interface PDAnimateEffectBehavior : PDAnimateBehavior {

	BOOL mHasTransition;
	int mTransition;
	NSMutableDictionary* mPropertyMap;

}

@property (nonatomic,retain) NSMutableDictionary * propertyMap; 
-(void)setTransition:(int)arg1 ;
-(BOOL)hasProperties;
-(id)init;
-(int)transition;
-(NSMutableDictionary *)propertyMap;
-(BOOL)hasTransition;
-(void)setPropertyMap:(NSMutableDictionary *)arg1 ;
@end
