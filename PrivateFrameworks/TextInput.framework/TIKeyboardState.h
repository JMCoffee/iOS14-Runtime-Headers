/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, NSArray, TIInputContextHistory, TIKeyboardLayout, TIKeyboardLayoutState, TIDocumentState, TIKeyboardSecureCandidateRenderTraits, BKSHIDEventAuthenticationMessage, TIKeyboardCandidate, TITextInputTraits, NSDictionary;

@interface TIKeyboardState : NSObject <NSCopying, NSSecureCoding> {

	SCD_Union_TI12 _mask;
	SCD_Union_TI14 _autocorrectionListUIState;
	int _shiftState;
	NSUUID* _documentIdentifier;
	NSString* _clientIdentifier;
	NSString* _inputMode;
	NSArray* _auxiliaryInputModeLanguages;
	NSString* _recipientIdentifier;
	TIInputContextHistory* _inputContextHistory;
	TIKeyboardLayout* _keyLayout;
	TIKeyboardLayoutState* _layoutState;
	TIDocumentState* _documentState;
	TIKeyboardSecureCandidateRenderTraits* _secureCandidateRenderTraits;
	BKSHIDEventAuthenticationMessage* _eventAuthenticationMessage;
	NSString* _inputForMarkedText;
	NSString* _searchStringForMarkedText;
	TIKeyboardCandidate* _currentCandidate;
	TITextInputTraits* _textInputTraits;
	NSString* _responseContext;
	unsigned long long _autofillMode;
	NSDictionary* _autofillContext;
	NSArray* _supportedPayloadIds;
	NSArray* _statisticChanges;

}

@property (nonatomic,retain) NSUUID * documentIdentifier;                                                    //@synthesize documentIdentifier=_documentIdentifier - In the implementation block
@property (nonatomic,copy) NSString * clientIdentifier;                                                      //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,copy) NSString * inputMode;                                                             //@synthesize inputMode=_inputMode - In the implementation block
@property (nonatomic,copy) NSArray * auxiliaryInputModeLanguages;                                            //@synthesize auxiliaryInputModeLanguages=_auxiliaryInputModeLanguages - In the implementation block
@property (nonatomic,copy) NSString * recipientIdentifier;                                                   //@synthesize recipientIdentifier=_recipientIdentifier - In the implementation block
@property (nonatomic,retain) TIInputContextHistory * inputContextHistory;                                    //@synthesize inputContextHistory=_inputContextHistory - In the implementation block
@property (nonatomic,retain) TIKeyboardLayout * keyLayout;                                                   //@synthesize keyLayout=_keyLayout - In the implementation block
@property (assign,nonatomic) int shiftState;                                                                 //@synthesize shiftState=_shiftState - In the implementation block
@property (nonatomic,copy) TIKeyboardLayoutState * layoutState;                                              //@synthesize layoutState=_layoutState - In the implementation block
@property (nonatomic,retain) TIDocumentState * documentState;                                                //@synthesize documentState=_documentState - In the implementation block
@property (nonatomic,copy) TIKeyboardSecureCandidateRenderTraits * secureCandidateRenderTraits;              //@synthesize secureCandidateRenderTraits=_secureCandidateRenderTraits - In the implementation block
@property (nonatomic,copy) BKSHIDEventAuthenticationMessage * eventAuthenticationMessage;                    //@synthesize eventAuthenticationMessage=_eventAuthenticationMessage - In the implementation block
@property (nonatomic,copy) NSString * inputForMarkedText;                                                    //@synthesize inputForMarkedText=_inputForMarkedText - In the implementation block
@property (nonatomic,copy) NSString * searchStringForMarkedText;                                             //@synthesize searchStringForMarkedText=_searchStringForMarkedText - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidate * currentCandidate;                                         //@synthesize currentCandidate=_currentCandidate - In the implementation block
@property (assign,nonatomic) BOOL userSelectedCurrentCandidate; 
@property (assign,nonatomic) BOOL shouldSkipCandidateSelection; 
@property (assign,nonatomic) BOOL suppressingCandidateSelection; 
@property (assign,nonatomic) BOOL needsCandidateMetadata; 
@property (assign,nonatomic) BOOL keyboardEventsLagging; 
@property (assign,nonatomic) BOOL hardwareKeyboardMode; 
@property (assign,nonatomic) BOOL splitKeyboardMode; 
@property (assign,nonatomic) BOOL floatingKeyboardMode; 
@property (assign,nonatomic) BOOL landscapeOrientation; 
@property (assign,nonatomic) BOOL omitEmojiCandidates; 
@property (assign,nonatomic) BOOL emojiSearchMode; 
@property (assign,nonatomic) BOOL emojiPopoverMode; 
@property (assign,nonatomic) BOOL wordLearningEnabled; 
@property (assign,nonatomic) BOOL autocorrectionEnabled; 
@property (assign,nonatomic) BOOL shortcutConversionEnabled; 
@property (assign,nonatomic) BOOL candidateSelectionPredictionEnabled; 
@property (assign,nonatomic) BOOL autocapitalizationEnabled; 
@property (nonatomic,retain) TITextInputTraits * textInputTraits;                                            //@synthesize textInputTraits=_textInputTraits - In the implementation block
@property (nonatomic,copy) NSString * responseContext;                                                       //@synthesize responseContext=_responseContext - In the implementation block
@property (assign,nonatomic) unsigned long long autocapitalizationType; 
@property (assign,nonatomic) unsigned long long keyboardType; 
@property (assign,nonatomic) BOOL secureTextEntry; 
@property (assign,nonatomic) BOOL autocorrectionListUIDisplayed; 
@property (assign,nonatomic) BOOL autocorrectionListUIAutoDisplayMode; 
@property (assign,nonatomic) BOOL canSendCurrentLocation; 
@property (assign,nonatomic) BOOL isScreenLocked; 
@property (assign,nonatomic) BOOL longPredictionListEnabled; 
@property (assign,nonatomic) BOOL needAutofill; 
@property (assign,nonatomic) unsigned long long autofillMode;                                                //@synthesize autofillMode=_autofillMode - In the implementation block
@property (nonatomic,retain) NSDictionary * autofillContext;                                                 //@synthesize autofillContext=_autofillContext - In the implementation block
@property (assign,nonatomic) BOOL needOneTimeCodeAutofill; 
@property (nonatomic,readonly) BOOL needContactAutofill; 
@property (nonatomic,copy) NSArray * supportedPayloadIds;                                                    //@synthesize supportedPayloadIds=_supportedPayloadIds - In the implementation block
@property (nonatomic,readonly) BOOL shouldOutputFullwidthSpace; 
@property (nonatomic,copy) NSArray * statisticChanges;                                                       //@synthesize statisticChanges=_statisticChanges - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)responseContext;
-(BOOL)needOneTimeCodeAutofill;
-(NSString *)searchStringForMarkedText;
-(void)setSecureTextEntry:(BOOL)arg1 ;
-(NSString *)inputForMarkedText;
-(void)setAutocapitalizationType:(unsigned long long)arg1 ;
-(BOOL)needAutofill;
-(unsigned long long)keyboardType;
-(TIKeyboardLayoutState *)layoutState;
-(void)setCandidateSelectionPredictionEnabled:(BOOL)arg1 ;
-(int)shiftState;
-(NSString *)inputMode;
-(void)setEmojiPopoverMode:(BOOL)arg1 ;
-(TITextInputTraits *)textInputTraits;
-(void)setInputMode:(NSString *)arg1 ;
-(BOOL)wordLearningEnabled;
-(void)setShiftState:(int)arg1 ;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(void)setCurrentCandidate:(TIKeyboardCandidate *)arg1 ;
-(void)setKeyboardType:(unsigned long long)arg1 ;
-(void)setStatisticChanges:(NSArray *)arg1 ;
-(NSArray *)auxiliaryInputModeLanguages;
-(NSString *)recipientIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTextInputTraits:(TITextInputTraits *)arg1 ;
-(void)setCanSendCurrentLocation:(BOOL)arg1 ;
-(void)setKeyLayout:(TIKeyboardLayout *)arg1 ;
-(void)setAuxiliaryInputModeLanguages:(NSArray *)arg1 ;
-(TIInputContextHistory *)inputContextHistory;
-(BKSHIDEventAuthenticationMessage *)eventAuthenticationMessage;
-(void)setInputForMarkedText:(NSString *)arg1 ;
-(TIKeyboardSecureCandidateRenderTraits *)secureCandidateRenderTraits;
-(void)setDocumentIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)documentIdentifier;
-(BOOL)candidateSelectionPredictionEnabled;
-(void)setAutocorrectionEnabled:(BOOL)arg1 ;
-(void)setWordLearningEnabled:(BOOL)arg1 ;
-(unsigned long long)autocapitalizationType;
-(BOOL)needsCandidateMetadata;
-(void)setKeyboardEventsLagging:(BOOL)arg1 ;
-(void)setEmojiSearchMode:(BOOL)arg1 ;
-(void)setRecipientIdentifier:(NSString *)arg1 ;
-(BOOL)floatingKeyboardMode;
-(void)setShouldSkipCandidateSelection:(BOOL)arg1 ;
-(void)setAutofillContext:(NSDictionary *)arg1 ;
-(BOOL)landscapeOrientation;
-(void)setSearchStringForMarkedText:(NSString *)arg1 ;
-(void)setLandscapeOrientation:(BOOL)arg1 ;
-(void)setShortcutConversionEnabled:(BOOL)arg1 ;
-(TIKeyboardLayout *)keyLayout;
-(void)setSupportedPayloadIds:(NSArray *)arg1 ;
-(unsigned long long)autofillMode;
-(BOOL)canSendCurrentLocation;
-(BOOL)autocorrectionListUIAutoDisplayMode;
-(void)setEventAuthenticationMessage:(BKSHIDEventAuthenticationMessage *)arg1 ;
-(void)setNeedsCandidateMetadata:(BOOL)arg1 ;
-(NSString *)clientIdentifier;
-(void)setAutocapitalizationEnabled:(BOOL)arg1 ;
-(BOOL)suppressingCandidateSelection;
-(void)setUserSelectedCurrentCandidate:(BOOL)arg1 ;
-(BOOL)splitKeyboardMode;
-(TIDocumentState *)documentState;
-(void)setLayoutState:(TIKeyboardLayoutState *)arg1 ;
-(BOOL)keyboardEventsLagging;
-(BOOL)needContactAutofill;
-(BOOL)autocorrectionListUIDisplayed;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)shouldSkipCandidateSelection;
-(void)setSplitKeyboardMode:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)emojiPopoverMode;
-(void)setInputContextHistory:(TIInputContextHistory *)arg1 ;
-(BOOL)emojiSearchMode;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAutofillMode:(unsigned long long)arg1 ;
-(BOOL)shortcutConversionEnabled;
-(void)_createTextInputTraitsIfNecessary;
-(void)setOmitEmojiCandidates:(BOOL)arg1 ;
-(void)setNeedOneTimeCodeAutofill:(BOOL)arg1 ;
-(BOOL)shouldOutputFullwidthSpace;
-(BOOL)autocorrectionEnabled;
-(BOOL)isScreenLocked;
-(void)setSuppressingCandidateSelection:(BOOL)arg1 ;
-(void)setSecureCandidateRenderTraits:(TIKeyboardSecureCandidateRenderTraits *)arg1 ;
-(void)setFloatingKeyboardMode:(BOOL)arg1 ;
-(void)setNeedAutofill:(BOOL)arg1 ;
-(BOOL)secureTextEntry;
-(void)setResponseContext:(NSString *)arg1 ;
-(BOOL)hardwareKeyboardMode;
-(BOOL)userSelectedCurrentCandidate;
-(BOOL)omitEmojiCandidates;
-(void)setAutocorrectionListUIAutoDisplayMode:(BOOL)arg1 ;
-(void)setHardwareKeyboardMode:(BOOL)arg1 ;
-(void)setLongPredictionListEnabled:(BOOL)arg1 ;
-(void)setIsScreenLocked:(BOOL)arg1 ;
-(BOOL)autocapitalizationEnabled;
-(id)description;
-(BOOL)longPredictionListEnabled;
-(TIKeyboardCandidate *)currentCandidate;
-(NSDictionary *)autofillContext;
-(void)setAutocorrectionListUIDisplayed:(BOOL)arg1 ;
-(void)setDocumentState:(TIDocumentState *)arg1 ;
-(NSArray *)supportedPayloadIds;
-(NSArray *)statisticChanges;
@end
