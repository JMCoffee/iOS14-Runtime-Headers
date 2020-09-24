/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBActivationSettings, NSSet;

@interface SBIconLaunchContext : NSObject {

	SBActivationSettings* _activationSettings;
	NSSet* _actions;

}

@property (nonatomic,retain) SBActivationSettings * activationSettings;              //@synthesize activationSettings=_activationSettings - In the implementation block
@property (nonatomic,copy) NSSet * actions;                                          //@synthesize actions=_actions - In the implementation block
-(void)setActivationSettings:(SBActivationSettings *)arg1 ;
-(NSSet *)actions;
-(SBActivationSettings *)activationSettings;
-(void)setActions:(NSSet *)arg1 ;
@end
