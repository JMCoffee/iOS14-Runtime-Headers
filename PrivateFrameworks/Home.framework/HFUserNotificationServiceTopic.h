/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NAIdentifiable.h>

@protocol HFIconDescriptor;
@class NSSet, NSString;

@interface HFUserNotificationServiceTopic : NSObject <NAIdentifiable> {

	NSSet* _serviceTypes;
	NSSet* _accessoryCategoryTypes;
	NSString* _topicName;
	id<HFIconDescriptor> _iconDescriptor;

}

@property (nonatomic,copy,readonly) NSSet * serviceTypes;                        //@synthesize serviceTypes=_serviceTypes - In the implementation block
@property (nonatomic,copy,readonly) NSSet * accessoryCategoryTypes;              //@synthesize accessoryCategoryTypes=_accessoryCategoryTypes - In the implementation block
@property (nonatomic,copy,readonly) NSString * topicName;                        //@synthesize topicName=_topicName - In the implementation block
@property (nonatomic,readonly) id<HFIconDescriptor> iconDescriptor;              //@synthesize iconDescriptor=_iconDescriptor - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)na_identity;
+(id)_cameraTopic;
-(NSString *)identifier;
-(NSSet *)serviceTypes;
-(id)init;
-(id)initWithServiceTypes:(id)arg1 accessoryCategoryTypes:(id)arg2 topicName:(id)arg3 iconDescriptor:(id)arg4 ;
-(NSSet *)accessoryCategoryTypes;
-(id)initWithServiceType:(id)arg1 topicName:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id<HFIconDescriptor>)iconDescriptor;
-(unsigned long long)hash;
-(NSString *)topicName;
@end

