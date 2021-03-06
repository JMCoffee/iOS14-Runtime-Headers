/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSArray, NSSet;

@interface CRKFetchCourseInvitationsResultObject : CATTaskResultObject {

	NSArray* _courseInvitations;
	NSSet* _acceptedInvitationIdentifiers;

}

@property (nonatomic,retain) NSArray * courseInvitations;                      //@synthesize courseInvitations=_courseInvitations - In the implementation block
@property (nonatomic,copy) NSSet * acceptedInvitationIdentifiers;              //@synthesize acceptedInvitationIdentifiers=_acceptedInvitationIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)courseInvitations;
-(void)setCourseInvitations:(NSArray *)arg1 ;
-(NSSet *)acceptedInvitationIdentifiers;
-(void)setAcceptedInvitationIdentifiers:(NSSet *)arg1 ;
@end

