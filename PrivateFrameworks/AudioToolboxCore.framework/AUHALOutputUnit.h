/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
#import <AudioToolboxCore/AUAudioUnitV2Bridge.h>

@interface AUHALOutputUnit : AUAudioUnitV2Bridge {

	/*^block*/id _outputProvider;
	/*^block*/id _inputHandler;
	BOOL _inputWasEnabled;
	BOOL _outputWasEnabled;
	BOOL _inputBusEnabled;
	int _renderObserverToken;
	unordered_map<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long), std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<const long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)> > >* _renderObservers;

}

@property (assign,getter=isInputEnabled,nonatomic) BOOL inputEnabled; 
@property (assign,getter=isOutputEnabled,nonatomic) BOOL outputEnabled; 
-(BOOL)isRunning;
-(BOOL)isInputEnabled;
-(void)setOutputEnabled:(BOOL)arg1 ;
-(/*^block*/id)_inputHandler;
-(long long)tokenByAddingRenderObserver:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)setInputEnabled:(BOOL)arg1 ;
-(BOOL)canPerformInput;
-(void)initAUHALOutputUnit;
-(void)addRenderObserver:(/*function pointer*/void*)arg1 userData:(void*)arg2 ;
-(int)enableBus:(unsigned)arg1 scope:(unsigned)arg2 enable:(BOOL)arg3 ;
-(id)initWithComponentDescription:(AudioComponentDescription)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(void)stopHardware;
-(BOOL)canPerformOutput;
-(/*^block*/id)outputProvider;
-(void)removeRenderObserver:(/*function pointer*/void*)arg1 userData:(void*)arg2 ;
-(BOOL)startHardwareAndReturnError:(id*)arg1 ;
-(void)setInputHandler:(/*^block*/id)arg1 ;
-(id)initWithAudioUnit:(OpaqueAudioComponentInstanceRef)arg1 description:(AudioComponentDescription)arg2 ;
-(BOOL)isOutputEnabled;
-(void)removeRenderObserver:(long long)arg1 ;
-(void)setOutputProvider:(/*^block*/id)arg1 ;
@end

