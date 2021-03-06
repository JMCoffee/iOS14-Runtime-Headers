/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:26 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ExposureNotification/ExposureNotification-Structs.h>
@class NSString;

@interface ENArchive : NSObject {

	archiveRef _archive;
	archive_entryRef _entry;
	NSString* _originalPath;
	BOOL _endOfArchive;

}

@property (nonatomic,readonly) BOOL endOfArchive;                         //@synthesize endOfArchive=_endOfArchive - In the implementation block
@property (nonatomic,copy,readonly) NSString * entryPath; 
@property (nonatomic,readonly) unsigned long long entrySize; 
@property (nonatomic,readonly) unsigned short entryFileType; 
-(void)close;
-(void)dealloc;
-(id)initWithPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)readDataIntoBuffer:(void*)arg1 length:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)cloneToCurrentEntryAndReturnError:(id*)arg1 ;
-(unsigned long long)entrySize;
-(NSString *)entryPath;
-(BOOL)endOfArchive;
-(BOOL)advanceEntryAndReturnError:(id*)arg1 ;
-(id)getDataWithSize:(unsigned long long)arg1 error:(id*)arg2 ;
-(unsigned short)entryFileType;
-(id)getDataAndReturnError:(id*)arg1 ;
-(BOOL)skipBytes:(unsigned long long)arg1 error:(id*)arg2 ;
@end

