/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSAttributedString;


@protocol HRFeatureRegulatoryPanelDisplayable <NSObject>
@property (nonatomic,copy,readonly) NSAttributedString * titleString; 
@property (nonatomic,copy,readonly) NSAttributedString * valueString; 
@property (nonatomic,readonly) BOOL isInteractive; 
@property (nonatomic,readonly) long long cellAccessoryType; 
@property (assign,nonatomic,__weak) id<HRFeatureRegulatoryPanelDisplayUpdateDelegate> updateDelegate; 
@optional
-(id<HRFeatureRegulatoryPanelDisplayUpdateDelegate>)updateDelegate;
-(void)setUpdateDelegate:(id)arg1;
-(void)handleUserInteractionWithItemWithHostViewController:(id)arg1;

@required
-(BOOL)isInteractive;
-(NSAttributedString *)valueString;
-(NSAttributedString *)titleString;
-(long long)cellAccessoryType;

@end

