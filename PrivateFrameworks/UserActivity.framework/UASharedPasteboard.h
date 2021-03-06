/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UASharedPasteboardManager;

@interface UASharedPasteboard : NSObject {

	UASharedPasteboardManager* _manager;

}

@property (assign) UASharedPasteboardManager * manager;              //@synthesize manager=_manager - In the implementation block
+(void)initialize;
+(void)clearLocalPasteboardInformation;
+(void)startPreventingPasteboardSharing;
+(void)stopPreventingPasteboardSharing;
+(void)localPasteboardDidAddData:(id)arg1 toItemAtIndex:(unsigned long long)arg2 generation:(unsigned long long)arg3 ;
+(id)remotePasteboard;
+(void)localPasteboardDidAddItems:(id)arg1 forGeneration:(unsigned long long)arg2 ;
+(void)localPasteboardDidPasteGeneration:(unsigned long long)arg1 ;
-(void)setManager:(UASharedPasteboardManager *)arg1 ;
-(UASharedPasteboardManager *)manager;
-(id)currentRemoteDeviceName;
-(void)requestRemotePasteboardDataForProcess:(int)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)requestRemotePasteboardTypesForProcess:(int)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)returnPasteboardDataBeforeArchives;
-(void)prefetchRemotePasteboardTypes:(id)arg1 ;
@end

