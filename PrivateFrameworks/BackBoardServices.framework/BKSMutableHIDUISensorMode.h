/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardServices/BKSHIDUISensorMode.h>

@class NSString;

@interface BKSMutableHIDUISensorMode : BKSHIDUISensorMode

@property (assign,nonatomic) BOOL estimatedProximityMode; 
@property (assign,nonatomic) long long versionedPID; 
@property (nonatomic,retain) NSString * reason; 
@property (assign,nonatomic) unsigned long long changeSource; 
@property (assign,nonatomic) int proximityDetectionMode; 
@property (assign,nonatomic) BOOL postEventWithCurrentDetectionMask; 
@property (assign,nonatomic) BOOL digitizerEnabled; 
@property (assign,nonatomic) BOOL pocketTouchesExpected; 
@property (assign,nonatomic) BOOL tapToWakeEnabled; 
@property (assign,nonatomic) BOOL coverGestureEnabled; 
@property (assign,nonatomic) BOOL alwaysOnGesturesEnabled; 
-(id)initWithReason:(id)arg1 ;
-(void)setProximityDetectionMode:(int)arg1 ;
-(void)setChangeSource:(unsigned long long)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(void)setDigitizerEnabled:(BOOL)arg1 ;
-(void)setTapToWakeEnabled:(BOOL)arg1 ;
-(void)setCoverGestureEnabled:(BOOL)arg1 ;
-(void)setAlwaysOnGesturesEnabled:(BOOL)arg1 ;
-(void)setEstimatedProximityMode:(BOOL)arg1 ;
-(void)setPostEventWithCurrentDetectionMask:(BOOL)arg1 ;
-(void)setPocketTouchesExpected:(BOOL)arg1 ;
-(void)setVersionedPID:(long long)arg1 ;
@end

