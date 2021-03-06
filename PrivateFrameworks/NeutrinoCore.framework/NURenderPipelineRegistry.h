/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface NURenderPipelineRegistry : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _registry;

}
+(id)sharedRegistry;
-(id)init;
-(id)description;
-(void)_registerRenderPipeline:(id)arg1 forIdentifier:(id)arg2 ;
-(void)registerRenderPipeline:(id)arg1 forIdentifier:(id)arg2 ;
-(id)_renderPipelineForIdentifier:(id)arg1 ;
-(id)renderPipelineForIdentifier:(id)arg1 ;
@end

