/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:20 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVSpeechSynthesizerDelegate <NSObject>
@optional
-(void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2;
-(void)speechSynthesizer:(id)arg1 didStartSpeechUtterance:(id)arg2;
-(void)speechSynthesizer:(id)arg1 didPauseSpeechUtterance:(id)arg2;
-(void)speechSynthesizer:(id)arg1 didContinueSpeechUtterance:(id)arg2;
-(void)speechSynthesizer:(id)arg1 didCancelSpeechUtterance:(id)arg2;
-(void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(NSRange)arg2 utterance:(id)arg3;

@end

