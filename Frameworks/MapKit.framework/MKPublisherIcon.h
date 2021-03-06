/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:26 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage, NSString;

@interface MKPublisherIcon : NSObject {

	UIImage* _publisherImage;
	NSString* _publisherName;

}

@property (nonatomic,readonly) UIImage * publisherImage;              //@synthesize publisherImage=_publisherImage - In the implementation block
@property (nonatomic,readonly) NSString * publisherName;              //@synthesize publisherName=_publisherName - In the implementation block
-(id)initUsingName:(id)arg1 andImage:(id)arg2 ;
-(UIImage *)publisherImage;
-(NSString *)publisherName;
@end

