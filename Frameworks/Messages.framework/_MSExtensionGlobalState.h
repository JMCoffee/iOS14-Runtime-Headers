/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Messages.framework/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _MSMessageComposeExtensionImplProtocol;
@interface _MSExtensionGlobalState : NSObject {

	id<_MSMessageComposeExtensionImplProtocol> _activeExtensionContext;

}

@property (nonatomic,retain) id<_MSMessageComposeExtensionImplProtocol> activeExtensionContext;              //@synthesize activeExtensionContext=_activeExtensionContext - In the implementation block
+(id)sharedInstance;
-(void)setActiveExtensionContext:(id<_MSMessageComposeExtensionImplProtocol>)arg1 ;
-(id<_MSMessageComposeExtensionImplProtocol>)activeExtensionContext;
@end
