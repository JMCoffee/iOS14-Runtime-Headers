/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SetupAssistantUI/BFFFaceIDViewController.h>
#import <libobjc.A.dylib/BFFFaceIDViewControllerDelegate.h>

@class NSString;

@interface BFFFinishSetupFaceIDViewController : BFFFaceIDViewController <BFFFaceIDViewControllerDelegate> {

	NSString* _passcode;
	/*^block*/id _completion;

}

@property (nonatomic,copy) NSString * passcode;              //@synthesize passcode=_passcode - In the implementation block
@property (nonatomic,copy) id completion;                    //@synthesize completion=_completion - In the implementation block
-(void)setCompletion:(id)arg1 ;
-(NSString *)passcode;
-(id)completion;
-(id)init;
-(void)setPasscode:(NSString *)arg1 ;
-(id)passcodeForFaceIDViewController:(id)arg1 ;
-(void)faceIDViewController:(id)arg1 didCompleteWithResult:(unsigned long long)arg2 pushedViewControllers:(id)arg3 ;
@end
