/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSPersistentContainer;

@interface CNContactMetadataPersistentStoreManager : NSObject {

	NSURL* _storeLocation;
	NSPersistentContainer* _container;

}

@property (nonatomic,readonly) NSURL * storeLocation;                          //@synthesize storeLocation=_storeLocation - In the implementation block
@property (nonatomic,readonly) NSPersistentContainer * container;              //@synthesize container=_container - In the implementation block
+(id)currentManagedObjectModel;
+(id)defaultStoreLocation;
+(id)createPersistentContainer;
+(id)createModel;
+(id)os_log;
-(id)persistentStoreCoordinator;
-(id)createManagedObjectContext;
-(id)storeDescription;
-(id)initWithStoreLocation:(id)arg1 ;
-(BOOL)setupIfNeeded:(id*)arg1 ;
-(BOOL)createStoreDirectoryIfNeeded:(id*)arg1 ;
-(NSURL *)storeLocation;
-(id)init;
-(BOOL)performWorkWithManagedObjectContext:(/*^block*/id)arg1 error:(id*)arg2 ;
-(NSPersistentContainer *)container;
@end
