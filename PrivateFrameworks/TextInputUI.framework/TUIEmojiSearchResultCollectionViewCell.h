/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputUI/TextInputUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UILabel, NSAttributedString;

@interface TUIEmojiSearchResultCollectionViewCell : UICollectionViewCell {

	UILabel* _animationFromLabel;
	UILabel* _animationToLabel;
	unsigned long long _nestedAnimationCount;
	NSAttributedString* _displayedEmojiString;
	UILabel* _emojiLabel;

}

@property (nonatomic,readonly) UILabel * emojiLabel;                                 //@synthesize emojiLabel=_emojiLabel - In the implementation block
@property (nonatomic,retain) NSAttributedString * displayedEmojiString;              //@synthesize displayedEmojiString=_displayedEmojiString - In the implementation block
+(id)reuseIdentifier;
+(id)_createEmojiLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(UILabel *)emojiLabel;
-(void)layoutSubviews;
-(void)setDisplayedEmojiString:(NSAttributedString *)arg1 ;
-(void)setDisplayedEmojiString:(id)arg1 animated:(BOOL)arg2 withAnimationOffset:(unsigned long long)arg3 ;
-(NSAttributedString *)displayedEmojiString;
-(void)setHighlighted:(BOOL)arg1 ;
@end
