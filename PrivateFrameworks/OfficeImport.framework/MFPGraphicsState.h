/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface MFPGraphicsState : NSObject {

	CGAffineTransform mPageTransform;
	CGAffineTransform mWorldTransform;

}
-(id)initWithDefaults;
-(void)removeTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)worldTransform;
-(void)setWorldTransform:(CGAffineTransform)arg1 ;
-(void)multiplyWorldTransformBy:(CGAffineTransform)arg1 order:(int)arg2 ;
-(void)setPageTransform:(CGAffineTransform)arg1 ;
-(id)initWithGraphicsState:(id)arg1 ;
-(CGAffineTransform)pageTransform;
@end

