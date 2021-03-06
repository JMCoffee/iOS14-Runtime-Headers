/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBFolderObserver <NSObject>
@optional
-(void)folder:(id)arg1 willAddIcon:(id)arg2;
-(void)folder:(id)arg1 didRemoveLists:(id)arg2 atIndexes:(id)arg3;
-(void)folderIconStateDidDirty:(id)arg1;
-(void)folder:(id)arg1 didReplaceIcon:(id)arg2 withIcon:(id)arg3;
-(void)folder:(id)arg1 didMoveIcon:(id)arg2;
-(void)folder:(id)arg1 didMoveList:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
-(void)folder:(id)arg1 listHiddenDidChange:(id)arg2;
-(void)folder:(id)arg1 didAddIcons:(id)arg2 removedIcons:(id)arg3;
-(void)folder:(id)arg1 didAddList:(id)arg2;

@end

