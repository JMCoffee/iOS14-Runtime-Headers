/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class PKPaymentPassAction;

@interface PKPaymentRemoteContentPassActionResponse : PKPaymentWebServiceResponse {

	PKPaymentPassAction* _updatedAction;

}

@property (nonatomic,retain) PKPaymentPassAction * updatedAction;              //@synthesize updatedAction=_updatedAction - In the implementation block
-(void)setUpdatedAction:(PKPaymentPassAction *)arg1 ;
-(id)initWithExistingAction:(id)arg1 data:(id)arg2 ;
-(PKPaymentPassAction *)updatedAction;
@end

