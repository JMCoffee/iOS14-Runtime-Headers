/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteUI/RemoteUI-Structs.h>
#import <UIKitCore/UITableViewHeaderFooterView.h>

@class UITableView;

@interface RUITableViewHeaderFooterView : UITableViewHeaderFooterView {

	UITableView* _tableView;

}

@property (__weak) UITableView * tableView;              //@synthesize tableView=_tableView - In the implementation block
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)insetsForHeaderFooter;
@end

