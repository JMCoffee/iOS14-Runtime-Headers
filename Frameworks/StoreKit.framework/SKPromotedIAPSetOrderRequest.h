/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKit/SKRequest.h>

@class NSArray, NSString;

@interface SKPromotedIAPSetOrderRequest : SKRequest {

	/*^block*/id _completionHandler;
	NSArray* _order;
	NSString* _bundleId;

}

@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSArray * order;                   //@synthesize order=_order - In the implementation block
@property (nonatomic,copy) NSString * bundleId;               //@synthesize bundleId=_bundleId - In the implementation block
-(void)setOrder:(NSArray *)arg1 ;
-(NSArray *)order;
-(void)_start;
-(void)setBundleId:(NSString *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(NSString *)bundleId;
-(id)completionHandler;
-(void)_handleReply:(id)arg1 ;
-(id)initWithOrder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithOrder:(id)arg1 bundleId:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end
