/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUserActivity, UABestAppSuggestion;

@interface UAUserActivityProxy : NSObject <NSSecureCoding> {

	BOOL _isRemoteActivity;
	NSString* _activityType;
	NSString* _bundleId;
	NSUserActivity* _internalActivity;
	UABestAppSuggestion* _suggestedActivity;
	unsigned long long _hashValue;

}

@property (retain) NSUserActivity * internalActivity;                    //@synthesize internalActivity=_internalActivity - In the implementation block
@property (retain) UABestAppSuggestion * suggestedActivity;              //@synthesize suggestedActivity=_suggestedActivity - In the implementation block
@property (assign) unsigned long long hashValue;                         //@synthesize hashValue=_hashValue - In the implementation block
@property (readonly) NSString * activityType;                            //@synthesize activityType=_activityType - In the implementation block
@property (readonly) NSString * bundleId;                                //@synthesize bundleId=_bundleId - In the implementation block
@property (readonly) BOOL isRemoteActivity;                              //@synthesize isRemoteActivity=_isRemoteActivity - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)activityType;
-(id)contentAttributeSet;
-(unsigned long long)hashValue;
-(id)activityTitle;
-(void)setInternalActivity:(NSUserActivity *)arg1 ;
-(NSUserActivity *)internalActivity;
-(void)setHashValue:(unsigned long long)arg1 ;
-(void)setSuggestedActivity:(UABestAppSuggestion *)arg1 ;
-(BOOL)isRemoteActivity;
-(UABestAppSuggestion *)suggestedActivity;
-(id)initWithSuggestion:(id)arg1 ;
-(id)initWithActivity:(id)arg1 bundleId:(id)arg2 ;
-(void)accessActivity:(/*^block*/id)arg1 ;
-(void)launchActivityWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)activitySubTitle;
-(id)activityIfAvailible;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleId;
-(unsigned long long)hash;
-(id)description;
@end
