/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class IMDiMessageIDSTrustedData, NSString, NSNumber;


@protocol IMPlayedReceiptProcessingParameter <IMPipelineParameter>
@property (nonatomic,readonly) IMDiMessageIDSTrustedData * idsTrustedData; 
@property (nonatomic,readonly) NSString * GUID; 
@property (nonatomic,readonly) NSNumber * timestamp; 
@property (nonatomic,readonly) BOOL isFromStorage; 
@property (nonatomic,readonly) BOOL isLastFromStorage; 
@property (nonatomic,readonly) BOOL isFromDefaultPairedDevice; 
@required
-(NSNumber *)timestamp;
-(void)setChat:(id)arg1;
-(NSString *)GUID;
-(BOOL)isFromDefaultPairedDevice;
-(BOOL)isFromStorage;
-(BOOL)isLastFromStorage;
-(void)setMessageItems:(id)arg1;
-(IMDiMessageIDSTrustedData *)idsTrustedData;

@end

