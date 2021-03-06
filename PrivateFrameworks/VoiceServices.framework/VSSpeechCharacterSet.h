/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCharacterSet;

@interface VSSpeechCharacterSet : NSObject {

	NSCharacterSet* _characterSet;

}

@property (nonatomic,retain) NSCharacterSet * characterSet;              //@synthesize characterSet=_characterSet - In the implementation block
+(id)languageMapping;
-(NSCharacterSet *)characterSet;
-(void)setCharacterSet:(NSCharacterSet *)arg1 ;
-(id)initWithLanguage:(id)arg1 ;
-(id)unspeakableRangeOfText:(id)arg1 ;
@end

