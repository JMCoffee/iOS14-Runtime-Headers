/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage, UIScreen;

@interface SSScreenSnapshot : NSObject {

	UIImage* _image;
	UIScreen* _screen;

}

@property (nonatomic,readonly) UIImage * image; 
@property (nonatomic,readonly) UIScreen * screen; 
+(id)snapshotWithImage:(id)arg1 fromScreen:(id)arg2 ;
-(UIScreen *)screen;
-(UIImage *)image;
@end
