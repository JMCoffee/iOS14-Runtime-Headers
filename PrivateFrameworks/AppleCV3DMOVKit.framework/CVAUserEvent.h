/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSData, NSArray, NSString, NSNumber;

@interface CVAUserEvent : NSObject <NSSecureCoding> {

	unsigned long long _eventType;
	double _timestamp;
	NSUUID* _uuid;
	NSData* _anchorData;
	NSArray* _transformCameraToAnchor;
	NSString* _peerDisplayName;
	NSNumber* _sessionID;
	NSNumber* _movLowestTimestamp;

}

@property (assign,nonatomic) unsigned long long eventType;                   //@synthesize eventType=_eventType - In the implementation block
@property (assign,nonatomic) double timestamp;                               //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                  //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSData * anchorData;                            //@synthesize anchorData=_anchorData - In the implementation block
@property (nonatomic,retain) NSArray * transformCameraToAnchor;              //@synthesize transformCameraToAnchor=_transformCameraToAnchor - In the implementation block
@property (nonatomic,retain) NSString * peerDisplayName;                     //@synthesize peerDisplayName=_peerDisplayName - In the implementation block
@property (nonatomic,retain) NSNumber * sessionID;                           //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) NSNumber * movLowestTimestamp;                  //@synthesize movLowestTimestamp=_movLowestTimestamp - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classes;
-(void)setEventType:(unsigned long long)arg1 ;
-(void)setSessionID:(NSNumber *)arg1 ;
-(unsigned long long)eventType;
-(NSNumber *)sessionID;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uuid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithEventType:(unsigned long long)arg1 timestamp:(double)arg2 ;
-(void)setPeerDisplayName:(NSString *)arg1 ;
-(void)setAnchorData:(NSData *)arg1 ;
-(NSData *)anchorData;
-(void)setMovLowestTimestamp:(NSNumber *)arg1 ;
-(NSNumber *)movLowestTimestamp;
-(NSString *)peerDisplayName;
-(void)setTransformCameraToAnchor:(NSArray *)arg1 ;
-(NSArray *)transformCameraToAnchor;
@end

