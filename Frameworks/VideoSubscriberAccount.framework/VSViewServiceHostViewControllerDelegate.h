/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VSViewServiceHostViewControllerDelegate <NSObject>
@required
-(void)presentViewServiceHostViewController:(id)arg1;
-(void)dismissViewServiceHostViewController:(id)arg1;
-(void)viewServiceHostViewController:(id)arg1 request:(id)arg2 didFinishWithResponse:(id)arg3;
-(void)viewServiceHostViewController:(id)arg1 request:(id)arg2 didFailWithError:(id)arg3;
-(void)viewServiceHostViewController:(id)arg1 didChooseAdditionalProvidersForRequest:(id)arg2;
-(void)viewServiceHostViewController:(id)arg1 didCancelRequest:(id)arg2;
-(BOOL)viewServiceHostViewController:(id)arg1 shouldAuthenticateAccountProviderWithIdentifier:(id)arg2;

@end
