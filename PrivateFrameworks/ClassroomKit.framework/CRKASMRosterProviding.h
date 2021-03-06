/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol CRKASMRosterProviding <NSObject>
@property (nonatomic,readonly) id<CRKASMRoster> roster; 
@property (getter=isPopulated,nonatomic,readonly) BOOL populated; 
@property (nonatomic,readonly) id<CRKASMUserFetching> userFetcher; 
@property (nonatomic,copy,readonly) NSArray * locationsWithManagePermissions; 
@required
-(void)refresh;
-(BOOL)isPopulated;
-(id<CRKASMRoster>)roster;
-(void)createCourseWithProperties:(id)arg1 completion:(/*^block*/id)arg2;
-(void)updateCourseWithIdentifier:(id)arg1 properties:(id)arg2 completion:(/*^block*/id)arg3;
-(BOOL)ingestCertificates:(id)arg1 forTrustedUserIdentifier:(id)arg2 error:(id*)arg3;
-(void)removeCourseWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(NSArray *)locationsWithManagePermissions;
-(id)studentDirectoryForLocationIDs:(id)arg1;
-(id)instructorDirectoryForLocationIDs:(id)arg1;
-(id<CRKASMUserFetching>)userFetcher;

@end

