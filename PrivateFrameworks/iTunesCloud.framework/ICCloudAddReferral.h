/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ICCloudAddReferral : NSObject <NSSecureCoding> {

	NSString* _playlistGlobalID;
	long long _albumAdamID;

}

@property (nonatomic,copy,readonly) NSString * playlistGlobalID;              //@synthesize playlistGlobalID=_playlistGlobalID - In the implementation block
@property (nonatomic,readonly) long long albumAdamID;                         //@synthesize albumAdamID=_albumAdamID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)referralWithPlaylistGlobalID:(id)arg1 ;
+(id)referralWithAlbumAdamID:(long long)arg1 ;
-(NSString *)playlistGlobalID;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)albumAdamID;
@end

