/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ActionKit/ActionKit-Structs.h>
@class NSString, NSURL, NSDictionary;

@interface CLSocket : NSObject {

	NSString* _APIKey;
	long long _appID;
	NSURL* _authURL;
	NSDictionary* _channels;

}

@property (nonatomic,copy) NSString * APIKey;                      //@synthesize APIKey=_APIKey - In the implementation block
@property (assign,nonatomic) long long appID;                      //@synthesize appID=_appID - In the implementation block
@property (nonatomic,retain) NSURL * authURL;                      //@synthesize authURL=_authURL - In the implementation block
@property (nonatomic,retain) NSDictionary * channels;              //@synthesize channels=_channels - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(NSString *)APIKey;
-(NSURL *)authURL;
-(id)init;
-(long long)appID;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)channels;
-(void)setChannels:(NSDictionary *)arg1 ;
-(void)setAppID:(long long)arg1 ;
-(void)setAPIKey:(NSString *)arg1 ;
-(void)setAuthURL:(NSURL *)arg1 ;
@end
