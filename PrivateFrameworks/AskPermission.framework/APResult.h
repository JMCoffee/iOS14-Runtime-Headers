/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AskPermission.framework/AskPermission
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface APResult : NSObject {

	NSString* _bundleIdentifier;
	NSString* _buyParams;
	NSString* _itemIdentifier;
	NSString* _productType;

}

@property (nonatomic,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * buyParams;                     //@synthesize buyParams=_buyParams - In the implementation block
@property (nonatomic,readonly) NSString * itemIdentifier;                //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * productType;                   //@synthesize productType=_productType - In the implementation block
-(id)compile;
-(NSString *)itemIdentifier;
-(NSString *)bundleIdentifier;
-(NSString *)productType;
-(NSString *)buyParams;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(id)initWithBundleIdentifier:(id)arg1 buyParams:(id)arg2 itemIdentifier:(id)arg3 productType:(id)arg4 ;
@end
