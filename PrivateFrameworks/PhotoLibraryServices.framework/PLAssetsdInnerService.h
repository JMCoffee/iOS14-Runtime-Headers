/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLAssetsdServicePermissions, PLLazyObject;

@interface PLAssetsdInnerService : NSObject {

	PLAssetsdServicePermissions* _permissions;
	long long _requiredState;
	PLLazyObject* _lazyService;

}
-(id)instantiateInnerService;
-(id)initWithPermissions:(id)arg1 requiredLibraryServicesState:(long long)arg2 lazyService:(id)arg3 ;
-(void)getInnerServiceWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)_awaitForRequiredLibraryStateWithContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

