/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:47 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSWorkspaceSceneRequestOptions.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>

@class NSString, NSSet;

@interface UISceneRequestOptions : FBSWorkspaceSceneRequestOptions <BSXPCSecureCoding> {

	BOOL _requestFullscreen;
	BOOL _requestBackground;
	BOOL _preserveLayout;
	NSString* _sourceIdentifier;
	NSSet* _actions;
	long long _sceneRequestIntent;

}

@property (nonatomic,copy) NSString * sourceIdentifier;                 //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (nonatomic,copy) NSSet * actions;                             //@synthesize actions=_actions - In the implementation block
@property (assign,nonatomic) BOOL requestFullscreen;                    //@synthesize requestFullscreen=_requestFullscreen - In the implementation block
@property (assign,nonatomic) BOOL requestBackground;                    //@synthesize requestBackground=_requestBackground - In the implementation block
@property (assign,nonatomic) BOOL preserveLayout;                       //@synthesize preserveLayout=_preserveLayout - In the implementation block
@property (assign,nonatomic) long long sceneRequestIntent;              //@synthesize sceneRequestIntent=_sceneRequestIntent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsBSXPCSecureCoding;
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(NSString *)sourceIdentifier;
-(NSSet *)actions;
-(void)setActions:(NSSet *)arg1 ;
-(BOOL)requestFullscreen;
-(BOOL)requestBackground;
-(long long)sceneRequestIntent;
-(void)setSceneRequestIntent:(long long)arg1 ;
-(BOOL)preserveLayout;
-(void)setPreserveLayout:(BOOL)arg1 ;
-(void)setRequestFullscreen:(BOOL)arg1 ;
-(void)setRequestBackground:(BOOL)arg1 ;
@end

