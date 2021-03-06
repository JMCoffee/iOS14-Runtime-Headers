/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIColor, UIFont, LPPadding;

@interface LPButtonStyle : NSObject {

	UIColor* _foregroundColor;
	UIColor* _backgroundColor;
	UIFont* _font;
	LPPadding* _padding;
	LPPadding* _margin;

}

@property (nonatomic,retain) UIColor * foregroundColor;              //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIFont * font;                          //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) LPPadding * padding;                    //@synthesize padding=_padding - In the implementation block
@property (nonatomic,retain) LPPadding * margin;                     //@synthesize margin=_margin - In the implementation block
+(id)systemPillButtonStyleForPlatform:(long long)arg1 ;
-(void)setMargin:(LPPadding *)arg1 ;
-(void)setForegroundColor:(UIColor *)arg1 ;
-(UIColor *)foregroundColor;
-(void)setPadding:(LPPadding *)arg1 ;
-(LPPadding *)padding;
-(UIColor *)backgroundColor;
-(UIFont *)font;
-(LPPadding *)margin;
-(id)init;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
@end

