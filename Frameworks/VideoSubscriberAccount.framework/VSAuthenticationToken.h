/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate, NSString, NSData;


@protocol VSAuthenticationToken <NSObject>
@property (nonatomic,copy,readonly) NSDate * expirationDate; 
@property (nonatomic,copy) NSString * body; 
@property (nonatomic,copy,readonly) NSData * serializedData; 
@required
-(BOOL)isOpaque;
-(void)setBody:(id)arg1;
-(NSString *)body;
-(NSDate *)expirationDate;
-(NSData *)serializedData;
-(BOOL)isValid;
-(id)initWithSerializedData:(id)arg1;
-(BOOL)isFromUnsupportedProvider;

@end
