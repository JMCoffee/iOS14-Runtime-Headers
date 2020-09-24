/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSValue, UIView, UIDragPreviewParameters, NSDictionary, _DUIPreview;

@interface UIDragPreview : NSObject <NSCopying> {

	NSValue* _preferredAnchorPoint;
	BOOL _preventAfterScreenUpdatesSnapshot;
	BOOL _avoidAnimation;
	UIView* _view;
	UIDragPreviewParameters* _parameters;
	NSDictionary* __springboardParameters;

}

@property (assign,setter=_setPreventAfterScreenUpdatesSnapshot:,getter=_preventAfterScreenUpdatesSnapshot,nonatomic) BOOL preventAfterScreenUpdatesSnapshot;              //@synthesize preventAfterScreenUpdatesSnapshot=_preventAfterScreenUpdatesSnapshot - In the implementation block
@property (assign,nonatomic) BOOL avoidAnimation;                                                                                                                         //@synthesize avoidAnimation=_avoidAnimation - In the implementation block
@property (assign,nonatomic) CGPoint preferredAnchorPoint; 
@property (nonatomic,readonly) _DUIPreview * _duiPreview; 
@property (assign,nonatomic) BOOL _springboardPlatterStyle; 
@property (nonatomic,copy) NSDictionary * _springboardParameters;                                                                                                         //@synthesize _springboardParameters=__springboardParameters - In the implementation block
@property (nonatomic,readonly) UIView * view;                                                                                                                             //@synthesize view=_view - In the implementation block
@property (nonatomic,copy,readonly) UIDragPreviewParameters * parameters;                                                                                                 //@synthesize parameters=_parameters - In the implementation block
+(id)previewForURL:(id)arg1 title:(id)arg2 ;
+(id)previewForURL:(id)arg1 ;
+(CGSize)textBoundingSize;
+(CGSize)defaultBoundingSize;
-(UIDragPreviewParameters *)parameters;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIView *)view;
-(_DUIPreview *)_duiPreview;
-(id)initWithView:(id)arg1 ;
-(BOOL)_springboardPlatterStyle;
-(void)set_springboardPlatterStyle:(BOOL)arg1 ;
-(void)setAvoidAnimation:(BOOL)arg1 ;
-(id)initWithView:(id)arg1 parameters:(id)arg2 ;
-(CGPoint)preferredAnchorPoint;
-(void)setPreferredAnchorPoint:(CGPoint)arg1 ;
-(BOOL)avoidAnimation;
-(NSDictionary *)_springboardParameters;
-(BOOL)_preventAfterScreenUpdatesSnapshot;
-(void)set_springboardParameters:(NSDictionary *)arg1 ;
-(void)_setPreventAfterScreenUpdatesSnapshot:(BOOL)arg1 ;
@end
