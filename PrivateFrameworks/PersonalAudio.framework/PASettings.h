/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PersonalAudio.framework/PersonalAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HearingCore/HCSettings.h>

@class PAConfiguration, NSDictionary;

@interface PASettings : HCSettings

@property (assign,nonatomic) BOOL personalMediaEnabled; 
@property (nonatomic,retain) PAConfiguration * personalMediaConfiguration; 
@property (nonatomic,retain) PAConfiguration * audiogramConfiguration; 
@property (assign,nonatomic) unsigned long long personalAudioAccommodationTypes; 
@property (assign,nonatomic) unsigned long long currentEnrollmentProgress; 
@property (assign,nonatomic) BOOL configurationCameFromEnrollment; 
@property (assign,nonatomic) BOOL configurationCameFromUser; 
@property (assign,nonatomic) BOOL shouldUpdateAccessory; 
@property (nonatomic,retain) NSDictionary * transparencyCustomized; 
@property (nonatomic,retain) NSDictionary * transparencyAmplification; 
@property (nonatomic,retain) NSDictionary * transparencyBalance; 
@property (nonatomic,retain) NSDictionary * transparencyTone; 
@property (assign,nonatomic) BOOL personalSoundVisible; 
@property (assign,nonatomic) BOOL personalMediaDebugMode; 
+(id)sharedInstance;
-(void)setTransparencyBalance:(NSDictionary *)arg1 ;
-(void)setPersonalAudioAccommodationTypes:(unsigned long long)arg1 ;
-(void)setTransparencyTone:(double)arg1 forAddress:(id)arg2 ;
-(void)setPersonalMediaConfiguration:(PAConfiguration *)arg1 ;
-(void)setTransparencyTone:(NSDictionary *)arg1 ;
-(void)setTransparencyCustomized:(BOOL)arg1 forAddress:(id)arg2 ;
-(void)setCurrentEnrollmentProgress:(unsigned long long)arg1 ;
-(id)configurationWithKey:(id)arg1 ;
-(unsigned long long)currentEnrollmentProgress;
-(void)setTransparencyAmplification:(NSDictionary *)arg1 ;
-(void)setTransparencyBalance:(double)arg1 forAddress:(id)arg2 ;
-(double)transparencyBalanceForAddress:(id)arg1 ;
-(void)setPersonalMediaDebugMode:(BOOL)arg1 ;
-(BOOL)transparencyCustomizedForAddress:(id)arg1 ;
-(double)transparencyAmplificationForAddress:(id)arg1 ;
-(void)setConfigurationCameFromEnrollment:(BOOL)arg1 ;
-(void)logMessage:(id)arg1 ;
-(void)setConfiguration:(id)arg1 forKey:(id)arg2 ;
-(id)preferenceDomain;
-(void)setAudiogramConfiguration:(PAConfiguration *)arg1 ;
-(double)transparencyToneForAddress:(id)arg1 ;
-(void)setTransparencyCustomized:(NSDictionary *)arg1 ;
-(BOOL)shouldStoreLocally;
-(NSDictionary *)transparencyTone;
-(id)preferenceKeyForSelector:(SEL)arg1 ;
-(PAConfiguration *)audiogramConfiguration;
-(BOOL)configurationCameFromUser;
-(void)setConfigurationCameFromUser:(BOOL)arg1 ;
-(NSDictionary *)transparencyAmplification;
-(NSDictionary *)transparencyBalance;
-(void)setPersonalSoundVisible:(BOOL)arg1 ;
-(BOOL)configurationCameFromEnrollment;
-(void)setPersonalMediaEnabled:(BOOL)arg1 ;
-(BOOL)personalMediaEnabled;
-(PAConfiguration *)personalMediaConfiguration;
-(void)setTransparencyAmplification:(double)arg1 forAddress:(id)arg2 ;
-(NSDictionary *)transparencyCustomized;
-(void)setShouldUpdateAccessory:(BOOL)arg1 ;
-(BOOL)personalMediaDebugMode;
-(BOOL)shouldUpdateAccessory;
-(unsigned long long)personalAudioAccommodationTypes;
-(BOOL)personalSoundVisible;
-(id)keysToSync;
@end

