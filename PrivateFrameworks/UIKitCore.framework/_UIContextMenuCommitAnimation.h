/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIView, _UIPortalView, _UIContextMenuCommitContainerView;

@interface _UIContextMenuCommitAnimation : NSObject {

	double _sourceRadius;
	double _destinationRadius;
	UIView* _source;
	UIView* _destination;
	UIView* _container;
	UIView* _morphContainer;
	UIView* _sourceSnapshotView;
	UIView* _sourceTransformView;
	UIView* _destinationTransformView;
	UIView* _originalContentSnapshotView;
	_UIPortalView* _destinationContentPortalView;
	_UIContextMenuCommitContainerView* _animationContainer;
	unsigned long long _animationCount;

}

@property (nonatomic,retain) UIView * source;                                                     //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) UIView * destination;                                                //@synthesize destination=_destination - In the implementation block
@property (nonatomic,retain) UIView * container;                                                  //@synthesize container=_container - In the implementation block
@property (nonatomic,retain) UIView * morphContainer;                                             //@synthesize morphContainer=_morphContainer - In the implementation block
@property (nonatomic,retain) UIView * sourceSnapshotView;                                         //@synthesize sourceSnapshotView=_sourceSnapshotView - In the implementation block
@property (nonatomic,retain) UIView * sourceTransformView;                                        //@synthesize sourceTransformView=_sourceTransformView - In the implementation block
@property (nonatomic,retain) UIView * destinationTransformView;                                   //@synthesize destinationTransformView=_destinationTransformView - In the implementation block
@property (nonatomic,retain) UIView * originalContentSnapshotView;                                //@synthesize originalContentSnapshotView=_originalContentSnapshotView - In the implementation block
@property (nonatomic,retain) _UIPortalView * destinationContentPortalView;                        //@synthesize destinationContentPortalView=_destinationContentPortalView - In the implementation block
@property (nonatomic,retain) _UIContextMenuCommitContainerView * animationContainer;              //@synthesize animationContainer=_animationContainer - In the implementation block
@property (assign,nonatomic) unsigned long long animationCount;                                   //@synthesize animationCount=_animationCount - In the implementation block
@property (assign,nonatomic) double sourceRadius;                                                 //@synthesize sourceRadius=_sourceRadius - In the implementation block
@property (assign,nonatomic) double destinationRadius;                                            //@synthesize destinationRadius=_destinationRadius - In the implementation block
-(_UIContextMenuCommitContainerView *)animationContainer;
-(void)setDestination:(UIView *)arg1 ;
-(UIView *)destination;
-(unsigned long long)animationCount;
-(void)setAnimationCount:(unsigned long long)arg1 ;
-(void)setContainer:(UIView *)arg1 ;
-(void)setSource:(UIView *)arg1 ;
-(void)setSourceRadius:(double)arg1 ;
-(void)_prepareSnapshots;
-(UIView *)sourceTransformView;
-(double)destinationRadius;
-(void)setDestinationRadius:(double)arg1 ;
-(void)_prepareAnimationViews;
-(void)setMorphContainer:(UIView *)arg1 ;
-(UIView *)destinationTransformView;
-(UIView *)originalContentSnapshotView;
-(void)setOriginalContentSnapshotView:(UIView *)arg1 ;
-(void)setSourceSnapshotView:(UIView *)arg1 ;
-(UIView *)sourceSnapshotView;
-(void)setAnimationContainer:(_UIContextMenuCommitContainerView *)arg1 ;
-(void)setDestinationContentPortalView:(_UIPortalView *)arg1 ;
-(void)setDestinationTransformView:(UIView *)arg1 ;
-(void)setSourceTransformView:(UIView *)arg1 ;
-(id)initWithSource:(id)arg1 container:(id)arg2 ;
-(void)animateWithAlongsideActions:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(_UIPortalView *)destinationContentPortalView;
-(double)sourceRadius;
-(UIView *)source;
-(UIView *)morphContainer;
-(UIView *)container;
@end

