/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface PFStoreComparisonCache : NSObject {

	NSMutableDictionary* _identifierToStoreUUIDToObjectID;
	NSMutableDictionary* _storeUUIDToIdentifiers;

}
-(id)objectIDForIdentifier:(id)arg1 inStore:(id)arg2 ;
-(void)setObjectID:(id)arg1 forIdentifier:(id)arg2 ;
-(id)identifiersForStore:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

