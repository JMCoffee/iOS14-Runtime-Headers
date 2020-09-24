/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NearField/NFSession.h>
#import <libobjc.A.dylib/NFHostEmulationSessionCallbacks.h>

@protocol NFHCESessionDelegate;
@class NSString;

@interface NFHCESession : NFSession <NFHostEmulationSessionCallbacks> {

	id<NFHCESessionDelegate> _delegate;

}

@property (assign) id<NFHCESessionDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<NFHCESessionDelegate>)arg1 ;
-(id<NFHCESessionDelegate>)delegate;
-(void)didEndUnexpectedly;
-(void)endSession;
-(id)readAPDU:(id*)arg1 ;
-(void)didReceiveAPDU:(id)arg1 ;
-(void)didConnectToReader;
-(void)didDisconnectFromReader;
-(id)startEmulation;
-(id)stopEmulation;
-(id)sendAPDU:(id)arg1 ;
@end
