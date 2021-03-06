/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UICollectionViewDataSource <NSObject>
@optional
-(id)collectionView:(id)arg1 indexPathForIndexTitle:(id)arg2 atIndex:(long long)arg3;
-(id)indexTitlesForCollectionView:(id)arg1;
-(BOOL)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
-(void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
-(long long)numberOfSectionsInCollectionView:(id)arg1;

@required
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;

@end

