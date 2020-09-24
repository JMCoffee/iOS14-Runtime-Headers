/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UIButton.h>

@interface AVTAvatarActionButton : UIButton {

	BOOL _isDestructive;

}

@property (assign,nonatomic) BOOL isDestructive;              //@synthesize isDestructive=_isDestructive - In the implementation block
+(id)destructiveButtonWithAction:(id)arg1 ;
+(id)defaultButtonWithAction:(id)arg1 ;
+(id)buttonWithAction:(id)arg1 ;
-(BOOL)isDestructive;
-(void)setIsDestructive:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end
