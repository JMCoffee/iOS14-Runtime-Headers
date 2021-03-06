/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, NSMutableArray;

@interface ICDocCamDocumentInfoCollection : NSObject {

	NSString* _title;
	NSDate* _creationDate;
	NSDate* _modificationDate;
	NSString* _uniqueIdentifier;
	NSMutableArray* _docInfos;

}

@property (nonatomic,readonly) long long docCamPDFVersion; 
@property (nonatomic,retain) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                     //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) NSDate * modificationDate;                 //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,retain) NSString * uniqueIdentifier;               //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * docInfos;                 //@synthesize docInfos=_docInfos - In the implementation block
-(void)setModificationDate:(NSDate *)arg1 ;
-(NSDate *)modificationDate;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(void)bumpModificationDate;
-(NSString *)title;
-(void)setCreationDate:(NSDate *)arg1 ;
-(id)init;
-(NSString *)uniqueIdentifier;
-(NSDate *)creationDate;
-(void)setTitle:(NSString *)arg1 ;
-(long long)docCamPDFVersion;
-(NSMutableArray *)docInfos;
-(void)setDocInfos:(NSMutableArray *)arg1 ;
@end

