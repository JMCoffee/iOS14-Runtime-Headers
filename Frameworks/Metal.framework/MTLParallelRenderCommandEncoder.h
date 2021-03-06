/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLParallelRenderCommandEncoder <MTLCommandEncoder>
@required
-(void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
-(void)setStencilStoreAction:(unsigned long long)arg1;
-(void)setDepthStoreActionOptions:(unsigned long long)arg1;
-(void)setDepthStoreAction:(unsigned long long)arg1;
-(void)setColorStoreActionOptions:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
-(void)setStencilStoreActionOptions:(unsigned long long)arg1;
-(id)renderCommandEncoder;

@end

