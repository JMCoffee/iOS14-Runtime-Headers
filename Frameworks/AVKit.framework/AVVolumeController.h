/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:19 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVVolumeController <NSObject>
@property (getter=isChangingVolume,nonatomic,readonly) BOOL changingVolume; 
@property (nonatomic,readonly) float volume; 
@property (nonatomic,readonly) float effectiveVolumeLimit; 
@property (nonatomic,readonly) BOOL currentRouteHasVolumeControl; 
@required
+(id)volumeController;
-(float)volume;
-(float)effectiveVolumeLimit;
-(void)setClientWithIdentifier:(id)arg1 prefersSystemVolumeHUDHidden:(BOOL)arg2 forWindowSceneSessionWithIdentifier:(id)arg3;
-(void)beginChangingVolumeForWindowSceneSessionID:(id)arg1;
-(void)endChangingVolume;
-(void)setTargetVolume:(float)arg1;
-(BOOL)isChangingVolume;
-(BOOL)currentRouteHasVolumeControl;

@end
