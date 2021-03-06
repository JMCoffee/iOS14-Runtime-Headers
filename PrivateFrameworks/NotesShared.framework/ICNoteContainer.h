/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/ICCloudSyncingObject.h>
#import <libobjc.A.dylib/ICNoteContainer.h>

@class ICCRDTIdentifierOrderedSetVersionedDocument, NSNumber, ICAccount, NSString, CROrderedSet, NSManagedObjectContext, ICFolderCustomNoteSortType, NSArray, NSData;

@interface ICNoteContainer : ICCloudSyncingObject <ICNoteContainer> {

	BOOL _subFolderOrderMergeableDataDirty;
	ICCRDTIdentifierOrderedSetVersionedDocument* _subFolderIdentifiersOrderedSetDocument;
	NSNumber* transientNoteCount;

}

@property (nonatomic,retain) ICAccount * owner; 
@property (nonatomic,retain) NSString * accountNameForAccountListSorting; 
@property (assign,nonatomic) BOOL isHiddenNoteContainer; 
@property (nonatomic,retain) NSString * nestedTitleForSorting; 
@property (nonatomic,retain) ICCRDTIdentifierOrderedSetVersionedDocument * subFolderIdentifiersOrderedSetDocument;              //@synthesize subFolderIdentifiersOrderedSetDocument=_subFolderIdentifiersOrderedSetDocument - In the implementation block
@property (assign,nonatomic) int sortOrder; 
@property (nonatomic,readonly) CROrderedSet * subFolderIdentifiersOrderedSet; 
@property (assign,getter=isSubFolderOrderMergeableDataDirty,nonatomic) BOOL subFolderOrderMergeableDataDirty;                   //@synthesize subFolderOrderMergeableDataDirty=_subFolderOrderMergeableDataDirty - In the implementation block
@property (nonatomic,retain) NSNumber * transientNoteCount; 
@property (nonatomic,readonly) ICAccount * noteContainerAccount; 
@property (readonly) NSManagedObjectContext * managedObjectContext; 
@property (nonatomic,readonly) ICFolderCustomNoteSortType * customNoteSortType; 
@property (nonatomic,readonly) BOOL isSharedViaICloud; 
@property (nonatomic,readonly) BOOL isSharedReadOnly; 
@property (nonatomic,readonly) BOOL isAllNotesContainer; 
@property (nonatomic,readonly) BOOL canBeSharedViaICloud; 
@property (nonatomic,readonly) BOOL supportsEditingNotes; 
@property (nonatomic,readonly) BOOL isTrashFolder; 
@property (nonatomic,readonly) NSString * containerIdentifier; 
@property (nonatomic,readonly) NSArray * visibleSubFolders; 
@property (nonatomic,retain) NSData * subFolderOrderMergeableData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keyPathsForValuesAffectingCloudAccount;
-(id)cacheKey;
-(NSString *)containerIdentifier;
-(void)willSave;
-(BOOL)supportsVisibilityTestingType:(long long)arg1 ;
-(id)predicateForSearchableNotes;
-(id)predicateForSearchableAttachments;
-(NSNumber *)transientNoteCount;
-(void)setTransientNoteCount:(NSNumber *)arg1 ;
-(BOOL)isSharedViaICloud;
-(BOOL)isSharedReadOnly;
-(void)willTurnIntoFault;
-(id)accountName;
-(id)predicateForVisibleNotes;
-(id)predicateForPinnedNotes;
-(BOOL)isAllNotesContainer;
-(id)noteVisibilityTestingForSearchingAccount;
-(BOOL)isSubFolderOrderMergeableDataDirty;
-(ICCRDTIdentifierOrderedSetVersionedDocument *)subFolderIdentifiersOrderedSetDocument;
-(void)writeSubFolderMergeableData;
-(void)setSubFolderOrderMergeableDataDirty:(BOOL)arg1 ;
-(void)setSubFolderIdentifiersOrderedSetDocument:(ICCRDTIdentifierOrderedSetVersionedDocument *)arg1 ;
-(CROrderedSet *)subFolderIdentifiersOrderedSet;
-(id)titleForNavigationBar;
-(BOOL)noteIsVisible:(id)arg1 ;
-(id)visibleNotes;
-(unsigned long long)visibleNotesCount;
-(id)titleForTableViewCell;
-(BOOL)canBeSharedViaICloud;
-(BOOL)isModernCustomFolder;
-(void)saveSubFolderMergeableDataIfNeeded;
-(BOOL)mergeWithSubFolderMergeableData:(id)arg1 ;
-(void)updateSubFolderMergeableDataChangeCount;
-(ICAccount *)noteContainerAccount;
-(ICFolderCustomNoteSortType *)customNoteSortType;
-(BOOL)supportsEditingNotes;
-(BOOL)isTrashFolder;
-(NSArray *)visibleSubFolders;
-(NSData *)subFolderOrderMergeableData;
-(void)setSubFolderOrderMergeableData:(NSData *)arg1 ;
-(id)cloudAccount;
-(void)willRefresh:(BOOL)arg1 ;
@end

