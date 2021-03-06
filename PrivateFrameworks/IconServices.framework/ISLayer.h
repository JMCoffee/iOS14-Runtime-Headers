/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ISEffect, ISCompositorResource;
#import <IconServices/IconServices-Structs.h>
@class ISColor, NSString, NSMutableArray, NSArray;

@interface ISLayer : NSObject {

	ISColor* _backgroundColor;
	NSString* _name;
	id<ISEffect> _effect;
	id<ISCompositorResource> _content;
	ISLayer* _mask;
	ISLayer* _internalSuperlayer;
	NSMutableArray* _internalSublayers;
	CGRect _frame;

}

@property (assign,nonatomic,__weak) ISLayer * internalSuperlayer;               //@synthesize internalSuperlayer=_internalSuperlayer - In the implementation block
@property (nonatomic,readonly) NSMutableArray * internalSublayers;              //@synthesize internalSublayers=_internalSublayers - In the implementation block
@property (assign,nonatomic) CGRect frame;                                      //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) CGRect bounds; 
@property (assign,nonatomic) CGSize size; 
@property (assign,nonatomic) CGPoint position; 
@property (nonatomic,retain) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) id<ISEffect> effect;                               //@synthesize effect=_effect - In the implementation block
@property (nonatomic,retain) ISColor * backgroundColor;                         //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) id<ISCompositorResource> content;                  //@synthesize content=_content - In the implementation block
@property (nonatomic,retain) ISLayer * mask;                                    //@synthesize mask=_mask - In the implementation block
@property (nonatomic,readonly) ISLayer * superlayer; 
@property (nonatomic,copy,readonly) NSArray * sublayers; 
-(id<ISEffect>)effect;
-(ISLayer *)mask;
-(void)setPosition:(CGPoint)arg1 ;
-(CGRect)bounds;
-(void)setInternalSuperlayer:(ISLayer *)arg1 ;
-(ISLayer *)superlayer;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)debugDescription;
-(void)setSize:(CGSize)arg1 ;
-(CGPoint)position;
-(ISColor *)backgroundColor;
-(void)addSublayer:(id)arg1 ;
-(ISLayer *)internalSuperlayer;
-(id<ISCompositorResource>)content;
-(id)init;
-(void)setContent:(id<ISCompositorResource>)arg1 ;
-(CGRect)frame;
-(void)setEffect:(id<ISEffect>)arg1 ;
-(void)removeFromSuperlayer;
-(void)insertSublayer:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)setName:(NSString *)arg1 ;
-(NSArray *)sublayers;
-(void)setMask:(ISLayer *)arg1 ;
-(NSMutableArray *)internalSublayers;
-(CGSize)size;
-(NSString *)name;
-(void)setBackgroundColor:(ISColor *)arg1 ;
@end

