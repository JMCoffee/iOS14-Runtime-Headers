/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/TIKeyboardInteractionProtocol.h>

@protocol TITypingSessionDelegate;
@class NSString, NSMutableArray, NSLocale, NSDate, TIWordEntry, TIKeyboardInput, TIKeyboardState, TIKeyboardTouchEvent, NSMutableDictionary;

@interface TITypingSession : NSObject <NSSecureCoding, TIKeyboardInteractionProtocol> {

	BOOL _didReceiveSecureFieldEvent;
	BOOL _includeInputToLastWord;
	NSString* _layoutName;
	NSString* _startContext;
	NSMutableArray* _layouts;
	NSLocale* _locale;
	NSDate* _startTime;
	NSDate* _endTime;
	NSString* _applicationID;
	id<TITypingSessionDelegate> _delegate;
	NSMutableArray* _userActionHistory;
	TIWordEntry* _currentWord;
	TIKeyboardInput* _lastInput;
	TIKeyboardState* _savedDeleteInputKeyboardState;
	unsigned long long _currentLayoutID;
	TIWordEntry* _lastWord;
	TIKeyboardTouchEvent* _timeCalibrationTouch;
	double _calibratedTimeBase;
	NSMutableDictionary* _touchesHistory;
	long long _lastActivePathIndex;

}

@property (nonatomic,retain) NSMutableArray * userActionHistory;                           //@synthesize userActionHistory=_userActionHistory - In the implementation block
@property (nonatomic,retain) TIWordEntry * currentWord;                                    //@synthesize currentWord=_currentWord - In the implementation block
@property (nonatomic,retain) TIKeyboardInput * lastInput;                                  //@synthesize lastInput=_lastInput - In the implementation block
@property (nonatomic,retain) NSMutableArray * layouts;                                     //@synthesize layouts=_layouts - In the implementation block
@property (nonatomic,retain) TIKeyboardState * savedDeleteInputKeyboardState;              //@synthesize savedDeleteInputKeyboardState=_savedDeleteInputKeyboardState - In the implementation block
@property (assign,nonatomic) unsigned long long currentLayoutID;                           //@synthesize currentLayoutID=_currentLayoutID - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                                            //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) TIWordEntry * lastWord;                                       //@synthesize lastWord=_lastWord - In the implementation block
@property (assign,nonatomic) BOOL includeInputToLastWord;                                  //@synthesize includeInputToLastWord=_includeInputToLastWord - In the implementation block
@property (retain) TIKeyboardTouchEvent * timeCalibrationTouch;                            //@synthesize timeCalibrationTouch=_timeCalibrationTouch - In the implementation block
@property (assign) double calibratedTimeBase;                                              //@synthesize calibratedTimeBase=_calibratedTimeBase - In the implementation block
@property (assign,nonatomic) BOOL didReceiveSecureFieldEvent;                              //@synthesize didReceiveSecureFieldEvent=_didReceiveSecureFieldEvent - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * touchesHistory;                         //@synthesize touchesHistory=_touchesHistory - In the implementation block
@property (assign,nonatomic) long long lastActivePathIndex;                                //@synthesize lastActivePathIndex=_lastActivePathIndex - In the implementation block
@property (nonatomic,copy) NSString * layoutName;                                          //@synthesize layoutName=_layoutName - In the implementation block
@property (nonatomic,copy) NSString * startContext;                                        //@synthesize startContext=_startContext - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                                           //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSDate * endTime;                                             //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,copy) NSString * applicationID;                                       //@synthesize applicationID=_applicationID - In the implementation block
@property (assign,nonatomic,__weak) id<TITypingSessionDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)layoutName;
-(NSDate *)endTime;
-(void)setApplicationID:(NSString *)arg1 ;
-(NSString *)applicationID;
-(void)setClientID:(id)arg1 keyboardState:(id)arg2 ;
-(void)setUserActionHistory:(NSMutableArray *)arg1 ;
-(void)contextDidChange:(id)arg1 wordDelete:(BOOL)arg2 cursorMoved:(BOOL)arg3 extendsPriorWord:(BOOL)arg4 inWord:(id)arg5 range:(NSRange)arg6 selectionLocation:(unsigned long long)arg7 keyboardState:(id)arg8 ;
-(void)setTouchesHistory:(NSMutableDictionary *)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(void)setTimeCalibrationTouch:(TIKeyboardTouchEvent *)arg1 ;
-(NSMutableArray *)layouts;
-(void)setDidReceiveSecureFieldEvent:(BOOL)arg1 ;
-(NSMutableArray *)userActionHistory;
-(BOOL)testForRapidDeleteContextChange:(id)arg1 ;
-(BOOL)isCurrentWordEmpty;
-(BOOL)didReceiveSecureFieldEvent;
-(double)calibratedCurrentTimestamp;
-(NSLocale *)locale;
-(TIKeyboardTouchEvent *)timeCalibrationTouch;
-(void)setCurrentLayoutID:(unsigned long long)arg1 ;
-(void)setLayouts:(NSMutableArray *)arg1 ;
-(NSDate *)startTime;
-(void)setStartTime:(NSDate *)arg1 ;
-(TIWordEntry *)currentWord;
-(void)setSavedDeleteInputKeyboardState:(TIKeyboardState *)arg1 ;
-(void)addTouchEvent:(id)arg1 ;
-(long long)lastActivePathIndex;
-(id)init;
-(TIWordEntry *)lastWord;
-(void)setLastActivePathIndex:(long long)arg1 ;
-(void)setDelegate:(id<TITypingSessionDelegate>)arg1 ;
-(void)layoutDidChange:(id)arg1 keyboardState:(id)arg2 ;
-(void)candidatesOffered:(id)arg1 keyboardState:(id)arg2 ;
-(double)calibratedTimeBase;
-(void)setEndTime:(NSDate *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setIncludeInputToLastWord:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCurrentWord:(TIWordEntry *)arg1 ;
-(id<TITypingSessionDelegate>)delegate;
-(void)setStartContext:(NSString *)arg1 ;
-(void)setLayoutName:(NSString *)arg1 ;
-(unsigned long long)currentLayoutID;
-(void)addDrawInputWithSyllableCount:(unsigned long long)arg1 keyboardState:(id)arg2 ;
-(NSString *)startContext;
-(void)setCalibratedTimeBase:(double)arg1 ;
-(void)candidateAccepted:(id)arg1 withInput:(id)arg2 documentState:(id)arg3 inputContext:(id)arg4 inputStem:(id)arg5 predictionBarHit:(BOOL)arg6 useCandidateSelection:(BOOL)arg7 candidateIndex:(long long)arg8 keyboardState:(id)arg9 ;
-(id)initWithLocale:(id)arg1 keyboardLayout:(id)arg2 ;
-(BOOL)includeInputToLastWord;
-(void)addKeyInput:(id)arg1 keyboardState:(id)arg2 ;
-(NSMutableDictionary *)touchesHistory;
-(void)setLastInput:(TIKeyboardInput *)arg1 ;
-(NSString *)description;
-(TIKeyboardInput *)lastInput;
-(void)setLastWord:(TIWordEntry *)arg1 ;
-(TIKeyboardState *)savedDeleteInputKeyboardState;
@end
