/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UISApplicationSupportXPCServerInterface <NSObject>
@required
-(void)destroyScenesPersistentIdentifiers:(id)arg1 animationType:(id)arg2 destroySessions:(id)arg3 completion:(/*^block*/id)arg4;
-(oneway void)requestPasscodeUnlockUIWithCompletion:(/*^block*/id)arg1;
-(void)initializeClientWithParameters:(id)arg1 completion:(/*^block*/id)arg2;

@end
