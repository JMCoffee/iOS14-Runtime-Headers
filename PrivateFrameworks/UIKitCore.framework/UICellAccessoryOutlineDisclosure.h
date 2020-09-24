/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICellAccessory.h>

@class UIImage;

@interface UICellAccessoryOutlineDisclosure : UICellAccessory {

	long long _style;
	/*^block*/id _actionHandler;

}

@property (nonatomic,readonly) double rotationAngle; 
@property (nonatomic,readonly) UIImage * _customImage; 
@property (assign,nonatomic) long long style;                       //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) id actionHandler;                        //@synthesize actionHandler=_actionHandler - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)rotationAngle;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)actionHandler;
-(long long)style;
-(long long)_systemType;
-(id)_identifier;
-(id)init;
-(void)setActionHandler:(id)arg1 ;
-(UIImage *)_customImage;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)_systemTypePlacementForHeader:(BOOL)arg1 ;
-(void)setStyle:(long long)arg1 ;
@end
