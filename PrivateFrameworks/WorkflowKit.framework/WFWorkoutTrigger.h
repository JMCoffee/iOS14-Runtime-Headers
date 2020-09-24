/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/WFTrigger.h>

@class NSArray;

@interface WFWorkoutTrigger : WFTrigger {

	BOOL _onStart;
	BOOL _onEnd;
	unsigned long long _selection;
	NSArray* _selectedWorkoutTypes;

}

@property (assign,nonatomic) unsigned long long selection;              //@synthesize selection=_selection - In the implementation block
@property (nonatomic,copy) NSArray * selectedWorkoutTypes;              //@synthesize selectedWorkoutTypes=_selectedWorkoutTypes - In the implementation block
@property (assign,nonatomic) BOOL onStart;                              //@synthesize onStart=_onStart - In the implementation block
@property (assign,nonatomic) BOOL onEnd;                                //@synthesize onEnd=_onEnd - In the implementation block
+(id)onIcon;
+(id)onLabel;
+(id)offLabel;
+(id)triggerTypeIcon;
+(id)offIcon;
+(BOOL)isSupportedOnThisDevice;
+(BOOL)supportsSecureCoding;
+(BOOL)isUserInitiated;
+(id)localizedDisplayName;
+(BOOL)isAllowedToRunAutomatically;
+(id)localizedDisplayExplanation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)onEnd;
-(id)init;
-(void)setSelection:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)onStart;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)selection;
-(id)localizedDescriptionWithConfigurationSummary;
-(NSArray *)selectedWorkoutTypes;
-(id)localizedPastTenseDescription;
-(BOOL)hasValidConfiguration;
-(void)setSelectedWorkoutTypes:(NSArray *)arg1 ;
-(void)setOnStart:(BOOL)arg1 ;
-(void)setOnEnd:(BOOL)arg1 ;
@end
