/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <VoiceMemos/RCWaveformDataSource.h>
#import <libobjc.A.dylib/RCWaveformDataSourceObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, RCComposition, _RCTimeRangeFileInputWaveformDataSource, NSString;

@interface RCCompositionWaveformDataSource : RCWaveformDataSource <RCWaveformDataSourceObserver> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	float _progressOfFinishedFragments;
	float _progressWeightPerFragment;
	BOOL _preferLoadingFragmentWaveforms;
	BOOL _saveGeneratedWaveform;
	BOOL _highlightLastDecomposedFragment;
	RCComposition* _composition;
	_RCTimeRangeFileInputWaveformDataSource* _activeFragmentDataSource;

}

@property (retain) _RCTimeRangeFileInputWaveformDataSource * activeFragmentDataSource;              //@synthesize activeFragmentDataSource=_activeFragmentDataSource - In the implementation block
@property (nonatomic,readonly) RCComposition * composition;                                         //@synthesize composition=_composition - In the implementation block
@property (nonatomic,readonly) BOOL preferLoadingFragmentWaveforms;                                 //@synthesize preferLoadingFragmentWaveforms=_preferLoadingFragmentWaveforms - In the implementation block
@property (assign,nonatomic) BOOL saveGeneratedWaveform;                                            //@synthesize saveGeneratedWaveform=_saveGeneratedWaveform - In the implementation block
@property (assign,nonatomic) BOOL highlightLastDecomposedFragment;                                  //@synthesize highlightLastDecomposedFragment=_highlightLastDecomposedFragment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(_RCTimeRangeFileInputWaveformDataSource *)activeFragmentDataSource;
-(BOOL)saveGeneratedWaveform;
-(void)setActiveFragmentDataSource:(_RCTimeRangeFileInputWaveformDataSource *)arg1 ;
-(SCD_Struct_RC7)timeRangeToHighlight;
-(void)waveformDataSource:(id)arg1 didLoadWaveformSegment:(id)arg2 ;
-(BOOL)highlightLastDecomposedFragment;
-(BOOL)shouldMergeLiveWaveform;
-(void)startLoading;
-(double)duration;
-(void)dealloc;
-(RCComposition *)composition;
-(void)setSaveGeneratedWaveform:(BOOL)arg1 ;
-(void)waveformDataSourceDidFinishLoading:(id)arg1 ;
-(id)saveableWaveform;
-(void)setHighlightLastDecomposedFragment:(BOOL)arg1 ;
-(id)synchronouslyApproximateWaveformSegmentsByReadingCurrentFileAheadTimeRange:(SCD_Struct_RC7)arg1 ;
-(id)_dataSourceForAVContentURL:(id)arg1 isDecomposedFragment:(BOOL)arg2 sourceTimeRange:(SCD_Struct_RC7)arg3 destinationTime:(double)arg4 ;
-(void)cancelLoading;
-(id)initWithComposition:(id)arg1 ;
-(void)waveformGeneratorDidFinishLoading:(id)arg1 error:(id)arg2 ;
-(BOOL)preferLoadingFragmentWaveforms;
-(BOOL)_synchronouslyAppendSegmentsFromDataSource:(id)arg1 ;
-(float)loadingProgress;
@end
