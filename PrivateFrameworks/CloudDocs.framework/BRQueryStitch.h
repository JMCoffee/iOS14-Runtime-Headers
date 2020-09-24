/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, BRFileObjectID, NSURL;

@interface BRQueryStitch : NSObject {

	NSArray* _contexts;
	BRFileObjectID* _objid;
	char _kind;
	NSURL* _fromURL;
	NSURL* _url;

}

@property (nonatomic,retain) NSURL * fromURL;                 //@synthesize fromURL=_fromURL - In the implementation block
@property (nonatomic,retain) NSArray * contexts;              //@synthesize contexts=_contexts - In the implementation block
-(void)setQueries:(id)arg1 ;
-(NSURL *)fromURL;
-(void)dealloc;
-(void)setContexts:(NSArray *)arg1 ;
-(void)done;
-(void)_enableUpdatesFromIPCAfterStitchingOnAllQueries;
-(void)_deletionDone;
-(void)_creationDone;
-(void)_renameDone;
-(id)initWithURL:(id)arg1 objid:(id)arg2 kind:(char)arg3 ;
-(void)setFromURL:(NSURL *)arg1 ;
-(NSArray *)contexts;
-(id)description;
@end
