/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NACVolumeController.h>

@protocol NACVolumeControllerDelegate;
@class NSString, NACEventThrottler, NSNumber, NSOrderedSet;

@interface NACVolumeControllerDemo : NSObject <NACVolumeController> {

	NSString* _audioCategory;
	NACEventThrottler* _defaultsThrottler;
	NSNumber* _volumeValue;
	BOOL _allowUserToExceedEUVolumeLimit;
	NSString* _currentListeningMode;
	BOOL _observingListeningModes;
	BOOL _systemMuted;
	BOOL _prominentHapticEnabled;
	float _hapticIntensity;
	id<NACVolumeControllerDelegate> _delegate;
	long long _hapticState;

}

@property (assign,nonatomic,__weak) id<NACVolumeControllerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (getter=isVolumeControlAvailable,nonatomic,readonly) BOOL volumeControlAvailable; 
@property (getter=isVolumeWarningEnabled,nonatomic,readonly) BOOL volumeWarningEnabled; 
@property (nonatomic,readonly) long long volumeWarningState; 
@property (getter=isMuted,nonatomic,readonly) BOOL muted; 
@property (nonatomic,readonly) float volumeValue; 
@property (nonatomic,readonly) float EUVolumeLimit; 
@property (assign,getter=isSystemMuted,nonatomic) BOOL systemMuted;                                      //@synthesize systemMuted=_systemMuted - In the implementation block
@property (assign,nonatomic) long long hapticState;                                                      //@synthesize hapticState=_hapticState - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * availableListeningModes; 
@property (nonatomic,retain) NSString * currentListeningMode; 
@property (assign,nonatomic) float hapticIntensity;                                                      //@synthesize hapticIntensity=_hapticIntensity - In the implementation block
@property (assign,getter=isProminentHapticEnabled,nonatomic) BOOL prominentHapticEnabled;                //@synthesize prominentHapticEnabled=_prominentHapticEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)EUVolumeLimit;
-(id)initWithAudioCategory:(id)arg1 ;
-(long long)volumeWarningState;
-(BOOL)isVolumeControlAvailable;
-(void)setVolumeValue:(float)arg1 ;
-(float)volumeValue;
-(void)dealloc;
-(void)setMuted:(BOOL)arg1 ;
-(void)setHapticIntensity:(float)arg1 ;
-(id)init;
-(BOOL)isMuted;
-(void)_applicationDidBecomeActiveNotification:(id)arg1 ;
-(void)setDelegate:(id<NACVolumeControllerDelegate>)arg1 ;
-(float)hapticIntensity;
-(id<NACVolumeControllerDelegate>)delegate;
-(void)allowUserToExceedEUVolumeLimit;
-(NSOrderedSet *)availableListeningModes;
-(void)setProminentHapticEnabled:(BOOL)arg1 ;
-(void)setHapticState:(long long)arg1 ;
-(void)setSystemMuted:(BOOL)arg1 ;
-(BOOL)isVolumeWarningEnabled;
-(NSString *)currentListeningMode;
-(void)setCurrentListeningMode:(NSString *)arg1 ;
-(void)beginObservingListeningModes;
-(void)endObservingListeningModes;
-(void)endObservingVolume;
-(void)beginObservingVolume;
-(BOOL)isSystemMuted;
-(long long)hapticState;
-(BOOL)isProminentHapticEnabled;
-(void)setVolumeValue:(float)arg1 muted:(BOOL)arg2 overrideEULimit:(BOOL)arg3 ;
-(void)_persistVolumeValue:(id)arg1 ;
-(void)_setNeedsVolumeReload;
-(id)_volumeDictionary;
@end
