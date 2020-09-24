/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBWallpaperObserver.h>
#import <libobjc.A.dylib/SBFLegibilitySettingsProvider.h>

@protocol SBFLegibilitySettingsProviderDelegate;
@class SBWallpaperController, _UILegibilitySettings, NSString;

@interface SBSpotlightLegibilityProvider : NSObject <SBWallpaperObserver, SBFLegibilitySettingsProvider> {

	long long _variant;
	SBWallpaperController* _wallpaperController;
	_UILegibilitySettings* _currentLegibilitySettings;
	id<SBFLegibilitySettingsProviderDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings; 
@property (assign,nonatomic,__weak) id<SBFLegibilitySettingsProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithVariant:(long long)arg1 wallpaperController:(id)arg2 ;
-(CGRect)_rectForSpotlightHeader;
-(void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2 ;
-(void)dealloc;
-(void)wallpaperDidChangeForVariant:(long long)arg1 ;
-(id)initWithVariant:(long long)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setDelegate:(id<SBFLegibilitySettingsProviderDelegate>)arg1 ;
-(id<SBFLegibilitySettingsProviderDelegate>)delegate;
-(void)wallpaperGeometryDidChangeForVariant:(long long)arg1 ;
-(void)_calculateLegibilitySettings;
@end
