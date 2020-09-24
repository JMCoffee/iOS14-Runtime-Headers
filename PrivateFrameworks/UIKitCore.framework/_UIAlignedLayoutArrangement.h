/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UILayoutArrangement.h>
#import <UIKitCore/_UIALAPropertySource.h>

@class NSMutableDictionary, NSSet, NSString;

@interface _UIAlignedLayoutArrangement : _UILayoutArrangement <_UIALAPropertySource> {

	NSMutableDictionary* _alignmentConstraints;
	unsigned long long _alignment;

}

@property (assign,nonatomic) unsigned long long alignment;                         //@synthesize alignment=_alignment - In the implementation block
@property (assign,nonatomic) long long axis; 
@property (assign,nonatomic) BOOL layoutFillsCanvas; 
@property (assign,nonatomic) BOOL layoutUsesCanvasMarginsWhenFilling; 
@property (nonatomic,readonly) NSSet * _newlyHiddenItems; 
@property (nonatomic,readonly) NSSet * _newlyUnhiddenItems; 
@property (nonatomic,readonly) NSSet * invalidBaselineConstraints; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)_configurationHistoryClass;
-(void)setLayoutFillsCanvas:(BOOL)arg1 ;
-(id)initWithItems:(id)arg1 ;
-(BOOL)_requiresNotificationForHasBaselinePropertyChanges;
-(void)_addConstraintGroupsAsNecessary;
-(BOOL)_canvasConnectionConstraintsNeedUpdatePass;
-(void)setAxis:(long long)arg1 ;
-(unsigned long long)_indexOfItemForLocationAttribute:(long long)arg1 ;
-(void)_setUpConstraintForItem:(id)arg1 referenceItem:(id)arg2 attribute:(long long)arg3 inConstraintsTable:(id)arg4 ;
-(void)_removeConstraintGroupsAsNecessary;
-(BOOL)_wantsConstraintsUsingAttributesForAxis:(long long)arg1 ;
-(void)setLayoutUsesCanvasMarginsWhenFilling:(BOOL)arg1 ;
-(void)_updateConfigurationHistory;
-(long long)_attributeForConstraintGroupName:(id)arg1 ;
-(unsigned long long)alignment;
-(id)_baselineDependentConstraints;
-(void)_removeIndividualConstraintsAsNecessary;
-(BOOL)_wantsAmbiguitySuppressionConstraints;
-(BOOL)_hasStaleConfiguration;
-(BOOL)_wantsConstraintsForAttribute:(long long)arg1 ;
-(id)_alignmentConfigurationHistory;
-(BOOL)_spanningGuideConstraintsNeedUpdate;
-(void)_addIndividualConstraintsIfPossible;
-(void)_clearAllConstraintsArrays;
-(long long)_axisForSpanningLayoutGuide;
-(id)_identifierForSpanningLayoutGuide;
-(id)_alignmentPropertySource;
-(BOOL)_usesCenteringConnectionConstraint;
-(void)_updateArrangementConstraints;
-(void)setAlignment:(unsigned long long)arg1 ;
-(BOOL)_usesInequalitySpanningConstraintForAttribute:(long long)arg1 ;
-(long long)_layoutRelationForCanvasConnectionForAttribute:(long long)arg1 ;
@end
