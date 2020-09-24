/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FAInviteContext, LPImage, LPLinkMetadata;

@interface FAInviteLinkMetadata : NSObject {

	FAInviteContext* _context;
	LPImage* _image;
	LPImage* _icon;

}

@property (nonatomic,retain) FAInviteContext * context;                      //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) LPImage * image;                                //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) LPImage * icon;                                 //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) LPLinkMetadata * bubbleMetadata; 
@property (nonatomic,readonly) LPLinkMetadata * mailMetadata; 
-(void)setImage:(LPImage *)arg1 ;
-(LPImage *)icon;
-(void)setContext:(FAInviteContext *)arg1 ;
-(LPImage *)image;
-(FAInviteContext *)context;
-(void)setIcon:(LPImage *)arg1 ;
-(LPLinkMetadata *)bubbleMetadata;
-(LPLinkMetadata *)mailMetadata;
@end
