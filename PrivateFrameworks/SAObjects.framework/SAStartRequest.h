/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, NSNumber, SASStartSpeech;

@interface SAStartRequest : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * origin; 
@property (nonatomic,copy) NSString * applicationName; 
@property (assign,nonatomic) BOOL clearContext; 
@property (assign,nonatomic) BOOL eyesFree; 
@property (assign,nonatomic) BOOL handsFree; 
@property (nonatomic,copy) NSString * hardwareBuild; 
@property (nonatomic,copy) NSString * inputOrigin; 
@property (nonatomic,copy) NSNumber * isCarryDevice; 
@property (nonatomic,copy) NSString * motionActivity; 
@property (nonatomic,copy) NSNumber * motionConfidence; 
@property (nonatomic,retain) SASStartSpeech * sourceSpeechRequest; 
@property (assign,nonatomic) BOOL talkOnly; 
@property (assign,nonatomic) BOOL textToSpeechIsMuted; 
@property (nonatomic,copy) NSString * turnId; 
@property (nonatomic,copy) NSString * utterance; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)startRequest;
+(id)startRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setOrigin:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)utterance;
-(void)setUtterance:(NSString *)arg1 ;
-(id)groupIdentifier;
-(BOOL)handsFree;
-(void)setHandsFree:(BOOL)arg1 ;
-(NSString *)turnId;
-(BOOL)textToSpeechIsMuted;
-(void)setTextToSpeechIsMuted:(BOOL)arg1 ;
-(NSString *)origin;
-(BOOL)requiresResponse;
-(void)setApplicationName:(NSString *)arg1 ;
-(void)setEyesFree:(BOOL)arg1 ;
-(NSString *)inputOrigin;
-(void)setInputOrigin:(NSString *)arg1 ;
-(void)setClearContext:(BOOL)arg1 ;
-(NSNumber *)isCarryDevice;
-(void)setIsCarryDevice:(NSNumber *)arg1 ;
-(NSNumber *)motionConfidence;
-(void)setMotionConfidence:(NSNumber *)arg1 ;
-(void)setMotionActivity:(NSString *)arg1 ;
-(NSString *)applicationName;
-(void)setTurnId:(NSString *)arg1 ;
-(void)setTalkOnly:(BOOL)arg1 ;
-(BOOL)clearContext;
-(BOOL)eyesFree;
-(BOOL)talkOnly;
-(NSString *)motionActivity;
-(NSString *)hardwareBuild;
-(void)setHardwareBuild:(NSString *)arg1 ;
-(SASStartSpeech *)sourceSpeechRequest;
-(void)setSourceSpeechRequest:(SASStartSpeech *)arg1 ;
@end
