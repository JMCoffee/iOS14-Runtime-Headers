/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VUINowPlayingFeature <NSObject>
@property (nonatomic,readonly) unsigned long long type; 
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (assign,getter=shouldAutoRemove,nonatomic) BOOL autoRemove; 
@property (nonatomic,retain) id userInfo; 
@required
-(void)setActive:(BOOL)arg1;
-(void)setUserInfo:(id)arg1;
-(BOOL)isActive;
-(unsigned long long)type;
-(id)userInfo;
-(BOOL)shouldAutoRemove;
-(void)setAutoRemove:(BOOL)arg1;

@end
