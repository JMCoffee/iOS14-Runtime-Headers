/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageCaptureCore/ImageCaptureCore-Structs.h>
#import <ImageCaptureCore/ICCameraItem.h>

@class NSMutableArray, NSArray;

@interface ICCameraFolder : ICCameraItem {

	NSMutableArray* _files;
	NSMutableArray* _folders;
	os_unfair_lock_s _filesLock;
	os_unfair_lock_s _foldersLock;

}

@property (nonatomic,retain) NSMutableArray * files;                //@synthesize files=_files - In the implementation block
@property (nonatomic,retain) NSMutableArray * folders;              //@synthesize folders=_folders - In the implementation block
@property (nonatomic,readonly) NSArray * contents; 
-(void)addFile:(id)arg1 ;
-(NSArray *)contents;
-(NSMutableArray *)files;
-(BOOL)hasThumbnail;
-(id)metadata;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)dealloc;
-(void)deleteFile:(id)arg1 ;
-(NSMutableArray *)folders;
-(void)setFolders:(NSMutableArray *)arg1 ;
-(void)addFolder:(id)arg1 ;
-(void)deleteFolder:(id)arg1 ;
-(CGImageRef)thumbnail;
-(BOOL)containsItem:(id)arg1 ;
-(id)description;
-(void)setFiles:(NSMutableArray *)arg1 ;
-(void)deleteItem:(id)arg1 ;
-(id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 ;
-(void)requestThumbnail;
-(void)requestMetadata;
-(void)lockFiles;
-(void)unlockFiles;
-(void)lockFolders;
-(void)unlockFolders;
@end
