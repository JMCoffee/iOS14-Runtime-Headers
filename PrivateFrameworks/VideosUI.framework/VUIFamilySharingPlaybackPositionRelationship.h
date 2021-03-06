/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:47 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUIFamilySharingRelationship.h>

@class NSNumber, NSDate;

@interface VUIFamilySharingPlaybackPositionRelationship : VUIFamilySharingRelationship {

	NSNumber* _positionInMilliseconds;
	NSDate* _recordedAtTimestamp;

}

@property (nonatomic,retain) NSNumber * positionInMilliseconds;              //@synthesize positionInMilliseconds=_positionInMilliseconds - In the implementation block
@property (nonatomic,retain) NSDate * recordedAtTimestamp;                   //@synthesize recordedAtTimestamp=_recordedAtTimestamp - In the implementation block
-(NSNumber *)positionInMilliseconds;
-(void)setPositionInMilliseconds:(NSNumber *)arg1 ;
-(void)setRecordedAtTimestamp:(NSDate *)arg1 ;
-(NSDate *)recordedAtTimestamp;
@end

