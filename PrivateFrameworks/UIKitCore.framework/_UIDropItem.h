/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIDragItem.h>

@class UIDragItem, NSItemProvider;

@interface _UIDropItem : UIDragItem {

	UIDragItem* _localDragItem;
	NSItemProvider* _dropItemProvider;

}

@property (setter=_setLocalDragItem:,getter=_localDragItem,nonatomic,retain) UIDragItem * localDragItem;                           //@synthesize localDragItem=_localDragItem - In the implementation block
@property (setter=_setDropItemProvider:,getter=_dropItemProvider,nonatomic,retain) NSItemProvider * dropItemProvider;              //@synthesize dropItemProvider=_dropItemProvider - In the implementation block
-(id)itemProvider;
-(void)_setPrivateLocalContext:(id)arg1 ;
-(id)_privateLocalContext;
-(void)_setDropItemProvider:(id)arg1 ;
-(id)_localDragItem;
-(void)_setLocalDragItem:(id)arg1 ;
-(id)_dropItemProvider;
-(void)setLocalObject:(id)arg1 ;
-(id)localObject;
@end
