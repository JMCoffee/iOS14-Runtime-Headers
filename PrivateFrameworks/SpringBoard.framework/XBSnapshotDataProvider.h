/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class XBSnapshotDataProviderContext;


@protocol XBSnapshotDataProvider <NSObject>
@property (nonatomic,retain,readonly) XBSnapshotDataProviderContext * context; 
@optional
-(id)fetchImageForFormat:(long long)arg1;
-(id)fallbackSnapshotDataProvider;
-(void)invalidateImage;
-(BOOL)hasProtectedContent;
-(id)fetchImage;
-(id)fetchImageData:(out CGAffineTransform*)arg1;

@required
-(XBSnapshotDataProviderContext *)context;

@end

