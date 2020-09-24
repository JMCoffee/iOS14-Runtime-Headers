/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSAudioFileReaderDelegate <NSObject>
@required
-(void)audioFileReaderDidStartRecording:(id)arg1 successfully:(BOOL)arg2 error:(id)arg3;
-(void)audioFileReaderBufferAvailable:(id)arg1 buffer:(id)arg2 atTime:(unsigned long long)arg3;
-(void)audioFileReaderDidStopRecording:(id)arg1 forReason:(long long)arg2;

@end
