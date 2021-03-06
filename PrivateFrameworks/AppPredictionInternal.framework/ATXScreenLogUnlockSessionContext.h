/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class ATXHomeScreenLogUnlockSessionManager;

@interface ATXScreenLogUnlockSessionContext : NSObject <NSSecureCoding> {

	ATXHomeScreenLogUnlockSessionManager* _unlockSessionManager;

}

@property (nonatomic,retain) ATXHomeScreenLogUnlockSessionManager * unlockSessionManager;              //@synthesize unlockSessionManager=_unlockSessionManager - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithUnlockSessionManager:(id)arg1 ;
-(BOOL)isEqualToATXScreenLogUnlockSessionContext:(id)arg1 ;
-(void)updateWithClientModelCacheUpdate:(id)arg1 ;
-(void)updateWithBlendingUICacheUpdate:(id)arg1 ;
-(void)updateWithUIEvent:(id)arg1 ;
-(ATXHomeScreenLogUnlockSessionManager *)unlockSessionManager;
-(void)setUnlockSessionManager:(ATXHomeScreenLogUnlockSessionManager *)arg1 ;
@end

