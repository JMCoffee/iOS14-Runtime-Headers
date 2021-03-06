/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSOrderedSet, NSMutableOrderedSet, NSMutableArray;

@interface CNCalculatesMultiValueDiff : NSObject {

	NSArray* _multiValue1;
	NSArray* _multiValue2;
	NSOrderedSet* _originalIdentifiers;
	NSOrderedSet* _finalIdentifiers;
	NSMutableOrderedSet* _addedIdentifiers;
	NSMutableOrderedSet* _removedIdentifiers;
	NSMutableOrderedSet* _sameIdentifiers;
	NSMutableOrderedSet* _calculatedFinalIdentifiers;
	NSMutableArray* _updates;

}
+(id)diffMultiValue:(id)arg1 toMultiValue:(id)arg2 ;
-(void)calculateDiff;
-(id)initWithMultiValue1:(id)arg1 multiValue2:(id)arg2 ;
-(void)setupOriginalIdentifiers;
-(void)setupFinalIdentifiers;
-(void)setupAddedIdentifiers;
-(void)appendAddUpdates;
-(void)setupRemovedIdentifiers;
-(void)setupSameIdentifiers;
-(void)setupCalculatedFinalIdentifiers;
-(void)appendRemoveUpdates;
-(void)appendReplaceUpdates;
-(void)appendReorderUpdates;
-(id)updates;
@end

