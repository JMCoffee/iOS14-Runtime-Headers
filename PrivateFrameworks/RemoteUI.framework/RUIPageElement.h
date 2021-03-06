/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteUI/RUIElement.h>

@class RUIPage, NSString;

@interface RUIPageElement : RUIElement {

	RUIPage* _page;

}

@property (assign,nonatomic,__weak) RUIPage * page;                      //@synthesize page=_page - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (assign,getter=isLoading,nonatomic) BOOL loading; 
-(BOOL)isLoading;
-(void)setPage:(RUIPage *)arg1 ;
-(void)setLoading:(BOOL)arg1 ;
-(RUIPage *)page;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)staticValues;
@end

