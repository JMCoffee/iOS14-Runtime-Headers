/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RUIHeader <NSObject>
@optional
-(double)headerHeightForWidth:(double)arg1 inView:(id)arg2;
-(void)setSubHeaderText:(id)arg1 attributes:(id)arg2;
-(void)setImageAlignment:(int)arg1;
-(id)subHeaderLabel;
-(void)setDetailText:(id)arg1 attributes:(id)arg2;
-(id)detailHeaderLabel;
-(void)setSectionIsFirst:(BOOL)arg1;
-(double)headerHeightForWidth:(double)arg1 inTableView:(id)arg2;
-(void)setDelegate:(id)arg1;
-(void)setImageSize:(CGSize)arg1;
-(void)setIconImage:(id)arg1;
-(void)setText:(id)arg1 attributes:(id)arg2;
-(id)headerLabel;

@required
-(id)initWithAttributes:(id)arg1;

@end
