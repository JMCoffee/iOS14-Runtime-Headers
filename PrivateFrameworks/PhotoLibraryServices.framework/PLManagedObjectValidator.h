/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLManagedObjectValidator : NSObject
+(id)validateManagedObject:(id)arg1 ;
+(BOOL)validateAllObjectsUsingManagedObjectContext:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(BOOL)validateAllObjectsWithEntityClass:(Class)arg1 inManagedObjectContext:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
+(id)_entityClassesToValidate;
@end
