/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TUAudioDeviceControllerActions.h>

@protocol OS_dispatch_queue, TUAudioDeviceControllerActions;
@class AVAudioClient, NSObject, NSHashTable, AVAudioDevice, NSArray, NSString;

@interface TUAudioDeviceController : NSObject <TUAudioDeviceControllerActions> {

	AVAudioClient* _audioClient;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSHashTable* _delegates;
	id<TUAudioDeviceControllerActions> _actionsDelegate;

}

@property (nonatomic,retain) AVAudioClient * audioClient;                                            //@synthesize audioClient=_audioClient - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                               //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,retain) NSHashTable * delegates;                                                //@synthesize delegates=_delegates - In the implementation block
@property (assign,nonatomic,__weak) id<TUAudioDeviceControllerActions> actionsDelegate;              //@synthesize actionsDelegate=_actionsDelegate - In the implementation block
@property (nonatomic,retain) AVAudioDevice * currentInputDevice; 
@property (nonatomic,retain) AVAudioDevice * currentOutputDevice; 
@property (nonatomic,readonly) NSArray * devices; 
@property (nonatomic,readonly) NSArray * inputDevices; 
@property (nonatomic,readonly) NSArray * outputDevices; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)outputDevices;
-(NSHashTable *)delegates;
-(void)removeDelegate:(id)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(id)initWithActionsDelegate:(id)arg1 serialQueue:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(oneway void)setCurrentAudioOutputDeviceToDeviceWithUID:(id)arg1 ;
-(void)setCurrentInputDevice:(AVAudioDevice *)arg1 ;
-(AVAudioClient *)audioClient;
-(void)choosePreferredDeviceIfNecessary;
-(void)setAudioClient:(AVAudioClient *)arg1 ;
-(NSString *)debugDescription;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegates:(NSHashTable *)arg1 ;
-(id)init;
-(id<TUAudioDeviceControllerActions>)actionsDelegate;
-(oneway void)setCurrentAudioInputDeviceToDeviceWithUID:(id)arg1 ;
-(AVAudioDevice *)currentOutputDevice;
-(NSArray *)inputDevices;
-(NSArray *)devices;
-(void)setActionsDelegate:(id<TUAudioDeviceControllerActions>)arg1 ;
-(void)setCurrentOutputDevice:(AVAudioDevice *)arg1 ;
-(AVAudioDevice *)currentInputDevice;
@end

