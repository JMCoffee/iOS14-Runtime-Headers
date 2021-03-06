/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLProtectionSpace, NSDate, NSData;

@interface _WBSSavedPasswordPartialCredential : NSObject {

	NSURLProtectionSpace* _protectionSpace;
	NSDate* _date;
	NSData* _persistentIdentifier;

}

@property (nonatomic,readonly) NSURLProtectionSpace * protectionSpace;              //@synthesize protectionSpace=_protectionSpace - In the implementation block
@property (nonatomic,readonly) NSDate * date;                                       //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSData * persistentIdentifier;                       //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
-(NSDate *)date;
-(id)initWithProtectionSpace:(id)arg1 date:(id)arg2 persistentIdentifier:(id)arg3 ;
-(NSURLProtectionSpace *)protectionSpace;
-(NSData *)persistentIdentifier;
@end

