/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PBHandshake : NSObject {

	unsigned _position;
	unsigned _version;
	unsigned _state;

}

@property (assign,nonatomic) unsigned position;              //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) unsigned version;               //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned state;                 //@synthesize state=_state - In the implementation block
-(void)setPosition:(unsigned)arg1 ;
-(unsigned)version;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)position;
-(void)setState:(unsigned)arg1 ;
-(unsigned)state;
-(id)description;
@end

