/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ECTransferActionReplayerSubclassMethods <NSObject>
@required
-(BOOL)isRecoverableError:(id)arg1;
-(id)fetchBodyDataForRemoteID:(id)arg1 mailboxURL:(id)arg2;
-(BOOL)downloadFailed;
-(id)copyItems:(id)arg1 destinationMailboxURL:(id)arg2;
-(id)moveItems:(id)arg1 destinationMailboxURL:(id)arg2;
-(id)appendItem:(id)arg1 mailboxURL:(id)arg2;
-(BOOL)deleteSourceMessagesFromTransferItems:(id)arg1;

@end

