/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMediaRemote/NMRNowPlayingState.h>

@class NSNumber, NSString, MPArtworkCatalog;

@interface NMRPlaceholderNowPlayingState : NMRNowPlayingState {

	BOOL explicitTrack;
	BOOL alwaysLive;
	BOOL playbackRateCommandSupported;
	BOOL nextTrackCommandEnabled;
	BOOL previousTrackCommandEnabled;
	BOOL skipForwardCommandEnabled;
	BOOL skipBackwardCommandEnabled;
	float playbackRate;
	float preferredPlaybackRate;
	unsigned playbackState;
	NSNumber* itemPersistentID;
	NSString* title;
	NSString* artist;
	NSString* album;
	MPArtworkCatalog* artworkCatalog;
	NSString* collectionTitle;
	NSString* radioStationName;
	double fastForwardTimeInterval;
	double rewindTimeInterval;

}

@property (nonatomic,copy) NSNumber * itemPersistentID; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * artist; 
@property (nonatomic,copy) NSString * album; 
@property (nonatomic,retain) MPArtworkCatalog * artworkCatalog; 
@property (nonatomic,copy) NSString * collectionTitle; 
@property (assign,nonatomic) float playbackRate; 
@property (assign,nonatomic) float preferredPlaybackRate; 
@property (assign,nonatomic) unsigned playbackState; 
@property (assign,getter=isExplicitTrack,nonatomic) BOOL explicitTrack; 
@property (nonatomic,retain) NSString * radioStationName; 
@property (assign,getter=isAlwaysLive,nonatomic) BOOL alwaysLive; 
@property (assign,getter=isPlaybackRateCommandSupported,nonatomic) BOOL playbackRateCommandSupported; 
@property (assign,getter=isNextTrackCommandEnabled,nonatomic) BOOL nextTrackCommandEnabled; 
@property (assign,getter=isPreviousTrackCommandEnabled,nonatomic) BOOL previousTrackCommandEnabled; 
@property (assign,getter=isSkipForwardCommandEnabled,nonatomic) BOOL skipForwardCommandEnabled; 
@property (assign,getter=isSkipBackwardCommandEnabled,nonatomic) BOOL skipBackwardCommandEnabled; 
@property (assign,nonatomic) double fastForwardTimeInterval; 
@property (assign,nonatomic) double rewindTimeInterval; 
-(void)setRadioStationName:(NSString *)arg1 ;
-(NSString *)artist;
-(BOOL)isAlwaysLive;
-(void)setPlaybackRate:(float)arg1 ;
-(NSString *)radioStationName;
-(float)playbackRate;
-(void)setCollectionTitle:(NSString *)arg1 ;
-(void)setPlaybackState:(unsigned)arg1 ;
-(void)setArtworkCatalog:(MPArtworkCatalog *)arg1 ;
-(void)setAlwaysLive:(BOOL)arg1 ;
-(void)setArtist:(NSString *)arg1 ;
-(NSString *)title;
-(void)setAlbum:(NSString *)arg1 ;
-(NSString *)collectionTitle;
-(BOOL)isExplicitTrack;
-(MPArtworkCatalog *)artworkCatalog;
-(unsigned)playbackState;
-(void)setPreferredPlaybackRate:(float)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)album;
-(void)setExplicitTrack:(BOOL)arg1 ;
-(float)preferredPlaybackRate;
-(NSNumber *)itemPersistentID;
-(void)setItemPersistentID:(NSNumber *)arg1 ;
-(BOOL)isPlaybackRateCommandSupported;
-(BOOL)isNextTrackCommandEnabled;
-(BOOL)isPreviousTrackCommandEnabled;
-(BOOL)isSkipForwardCommandEnabled;
-(BOOL)isSkipBackwardCommandEnabled;
-(double)fastForwardTimeInterval;
-(double)rewindTimeInterval;
-(void)setPlaybackRateCommandSupported:(BOOL)arg1 ;
-(void)setNextTrackCommandEnabled:(BOOL)arg1 ;
-(void)setPreviousTrackCommandEnabled:(BOOL)arg1 ;
-(void)setSkipForwardCommandEnabled:(BOOL)arg1 ;
-(void)setSkipBackwardCommandEnabled:(BOOL)arg1 ;
-(void)setFastForwardTimeInterval:(double)arg1 ;
-(void)setRewindTimeInterval:(double)arg1 ;
@end
