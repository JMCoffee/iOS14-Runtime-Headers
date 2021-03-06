/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:19 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIMenuElement.h>
#import <UIKitCore/_UIMenuLeaf.h>

@protocol UIDeferredMenuElementDelegate;
@class NSString, UIImage, NSArray;

@interface UIDeferredMenuElement : UIMenuElement <_UIMenuLeaf> {

	BOOL _requiresAuthenticatedInput;
	BOOL _fulfilled;
	unsigned long long _attributes;
	NSString* _discoverabilityTitle;
	long long _state;
	/*^block*/id _elementProvider;
	id _metadata;
	id<UIDeferredMenuElementDelegate> _delegate;
	NSArray* _fulfilledElements;

}

@property (nonatomic,copy) id elementProvider;                                               //@synthesize elementProvider=_elementProvider - In the implementation block
@property (nonatomic,retain) id metadata;                                                    //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic,__weak) id<UIDeferredMenuElementDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * fulfilledElements;                             //@synthesize fulfilledElements=_fulfilledElements - In the implementation block
@property (nonatomic,readonly) BOOL fulfilled;                                               //@synthesize fulfilled=_fulfilled - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) UIImage * image; 
@property (nonatomic,copy) NSString * discoverabilityTitle;                                  //@synthesize discoverabilityTitle=_discoverabilityTitle - In the implementation block
@property (assign,nonatomic) unsigned long long attributes;                                  //@synthesize attributes=_attributes - In the implementation block
@property (assign,nonatomic) long long state;                                                //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) BOOL requiresAuthenticatedInput;                              //@synthesize requiresAuthenticatedInput=_requiresAuthenticatedInput - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)elementWithProvider:(/*^block*/id)arg1 ;
-(id)_resolvedTargetFromFirstTarget:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMetadata:(id)arg1 ;
-(id)_immutableCopy;
-(void)_performWithTarget:(id)arg1 ;
-(void)_fulfill;
-(long long)_leafKeyModifierFlags;
-(id)metadata;
-(unsigned long long)attributes;
-(void)setDiscoverabilityTitle:(NSString *)arg1 ;
-(BOOL)fulfilled;
-(BOOL)requiresAuthenticatedInput;
-(void)setState:(long long)arg1 ;
-(NSString *)discoverabilityTitle;
-(id)_leafKeyInput;
-(void)setDelegate:(id<UIDeferredMenuElementDelegate>)arg1 ;
-(id)_validatedLeafWithAlternate:(id)arg1 target:(id)arg2 validation:(id)arg3 ;
-(void)setElementProvider:(id)arg1 ;
-(NSArray *)fulfilledElements;
-(BOOL)isLeaf;
-(id)elementProvider;
-(void)encodeWithCoder:(id)arg1 ;
-(id<UIDeferredMenuElementDelegate>)delegate;
-(BOOL)isLoadingPlaceholder;
-(BOOL)_isDefaultCommand;
-(void)setAttributes:(unsigned long long)arg1 ;
-(void)_acceptMenuVisit:(/*^block*/id)arg1 commandVisit:(/*^block*/id)arg2 actionVisit:(/*^block*/id)arg3 deferredElementVisit:(/*^block*/id)arg4 ;
-(long long)state;
-(NSString *)description;
-(id)_leafAlternates;
@end

