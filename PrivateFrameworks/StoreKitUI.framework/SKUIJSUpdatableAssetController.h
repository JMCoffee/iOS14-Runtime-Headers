/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/SKUIJSUpdatableAssetController.h>

@protocol SKUIJSUpdatableAssetController <JSExport>
@required
-(void)refreshCachedManifest:(id)arg1;
-(id)currentManifestVersion;
-(id)loadResource:(id)arg1;
-(id)newestCachedManifestVersion;

@end


@class SKUIClientContext;

@interface SKUIJSUpdatableAssetController : IKJSObject <SKUIJSUpdatableAssetController> {

	SKUIClientContext* _clientContext;

}
-(void)refreshCachedManifest:(id)arg1 ;
-(id)initWithAppContext:(id)arg1 clientContext:(id)arg2 ;
-(id)currentManifestVersion;
-(id)loadResource:(id)arg1 ;
-(id)newestCachedManifestVersion;
@end
