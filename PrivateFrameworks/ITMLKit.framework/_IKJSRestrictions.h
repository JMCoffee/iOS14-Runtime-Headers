/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol _IKJSRestrictions <IKJSRestrictions,JSExport>
@property (nonatomic,readonly) long long maxAppRank; 
@property (nonatomic,readonly) BOOL allowArtistActivity; 
@property (nonatomic,readonly) NSString * maxAppRating; 
@property (nonatomic,readonly) BOOL appInstallationAllowed; 
@property (nonatomic,readonly) BOOL appAnalyticsAllowed; 
@property (nonatomic,readonly) BOOL allowsITunes; 
@property (nonatomic,readonly) BOOL allowsShowingUndownloadedTVShows; 
@property (nonatomic,readonly) BOOL allowsShowingUndownloadedMovies; 
@required
-(BOOL)appAnalyticsAllowed;
-(BOOL)allowsShowingUndownloadedMovies;
-(BOOL)allowsShowingUndownloadedTVShows;
-(long long)maxAppRank;
-(BOOL)allowArtistActivity;
-(NSString *)maxAppRating;
-(BOOL)appInstallationAllowed;
-(BOOL)allowsITunes;

@end
