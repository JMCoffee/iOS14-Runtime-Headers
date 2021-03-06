/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBSwitcherLiveContentOverlay;
@interface _SBFullScreenSwitcherLiveContentOverlayContext : NSObject {

	long long _overlayType;
	id<SBSwitcherLiveContentOverlay> _overlay;

}

@property (nonatomic,readonly) long long overlayType;                                 //@synthesize overlayType=_overlayType - In the implementation block
@property (nonatomic,readonly) id<SBSwitcherLiveContentOverlay> overlay;              //@synthesize overlay=_overlay - In the implementation block
-(id<SBSwitcherLiveContentOverlay>)overlay;
-(id)initWithOverlay:(id)arg1 overlayType:(long long)arg2 ;
-(long long)overlayType;
@end

