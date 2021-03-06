/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRAVDistantExternalDeviceMetadata.h>

@class NSString, MRSupportedProtocolMessages, MRDeviceInfo;

@interface MRAVMutableDistantExternalDeviceMetadata : MRAVDistantExternalDeviceMetadata

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * hostName; 
@property (assign,nonatomic) long long hostPort; 
@property (nonatomic,retain) MRSupportedProtocolMessages * supportedMessages; 
@property (nonatomic,retain) MRDeviceInfo * deviceInfo; 
@property (assign,nonatomic) BOOL usingSystemPairing; 
-(void)setDeviceInfo:(MRDeviceInfo *)arg1 ;
-(void)setHostPort:(long long)arg1 ;
-(void)setSupportedMessages:(MRSupportedProtocolMessages *)arg1 ;
-(void)setUsingSystemPairing:(BOOL)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setHostName:(NSString *)arg1 ;
@end

