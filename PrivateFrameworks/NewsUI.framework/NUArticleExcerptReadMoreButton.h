/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsUI/NewsUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class NSURL, UILabel, UIImageView;

@interface NUArticleExcerptReadMoreButton : UIButton {

	unsigned long long _excerptLenthType;
	NSURL* _domainURL;
	UILabel* _readStoryLabel;
	UILabel* _domainLabel;
	UIImageView* _arrowImageView;

}

@property (nonatomic,readonly) UILabel * readStoryLabel;                       //@synthesize readStoryLabel=_readStoryLabel - In the implementation block
@property (nonatomic,readonly) UILabel * domainLabel;                          //@synthesize domainLabel=_domainLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * arrowImageView;                   //@synthesize arrowImageView=_arrowImageView - In the implementation block
@property (assign,nonatomic) unsigned long long excerptLenthType;              //@synthesize excerptLenthType=_excerptLenthType - In the implementation block
@property (nonatomic,retain) NSURL * domainURL;                                //@synthesize domainURL=_domainURL - In the implementation block
+(double)readMoreButtonHeight;
+(id)arrowImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)domainLabel;
-(NSURL *)domainURL;
-(void)setDomainURL:(NSURL *)arg1 ;
-(void)setExcerptLenthType:(unsigned long long)arg1 ;
-(UILabel *)readStoryLabel;
-(UIImageView *)arrowImageView;
-(unsigned long long)excerptLenthType;
@end
