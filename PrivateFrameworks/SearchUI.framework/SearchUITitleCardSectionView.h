/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUICardSectionView.h>

@class TLKLabel, NUIContainerBoxView;

@interface SearchUITitleCardSectionView : SearchUICardSectionView {

	TLKLabel* _label;
	NUIContainerBoxView* _containerView;

}

@property (nonatomic,retain) TLKLabel * label;                                 //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NUIContainerBoxView * containerView;              //@synthesize containerView=_containerView - In the implementation block
+(BOOL)supportsRecyclingForCardSection:(id)arg1 ;
-(NUIContainerBoxView *)containerView;
-(void)setContainerView:(NUIContainerBoxView *)arg1 ;
-(void)updateWithRowModel:(id)arg1 ;
-(id)setupContentView;
-(void)setLabel:(TLKLabel *)arg1 ;
-(TLKLabel *)label;
@end
