/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface FAInviteCompletionInfo : NSObject {

	unsigned long long _transportType;
	NSArray* _recipients;
	unsigned long long _status;

}

@property (assign,nonatomic) unsigned long long transportType;              //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,retain) NSArray * recipients;                          //@synthesize recipients=_recipients - In the implementation block
@property (assign,nonatomic) unsigned long long status;                     //@synthesize status=_status - In the implementation block
-(void)setRecipients:(NSArray *)arg1 ;
-(NSArray *)recipients;
-(void)setStatus:(unsigned long long)arg1 ;
-(unsigned long long)transportType;
-(unsigned long long)status;
-(void)setTransportType:(unsigned long long)arg1 ;
-(id)_transportStringValue;
-(id)_completionStatusStringValue;
-(id)serverReadableDictionary;
@end

