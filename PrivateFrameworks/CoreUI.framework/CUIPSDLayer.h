/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CUIPSDLayer : NSObject {

	double _opacity;
	int _blendMode;
	NSString* _name;

}

@property (assign,nonatomic) double opacity;               //@synthesize opacity=_opacity - In the implementation block
@property (assign,nonatomic) int blendMode;                //@synthesize blendMode=_blendMode - In the implementation block
@property (nonatomic,retain) NSString * name;              //@synthesize name=_name - In the implementation block
-(void)dealloc;
-(double)opacity;
-(void)setBlendMode:(int)arg1 ;
-(id)init;
-(int)blendMode;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setOpacity:(double)arg1 ;
@end
