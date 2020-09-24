/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, FAFamilyMember, FAEligibilityRequirements, FAFamilyCloudKitProperties, NSDictionary, NSString;

@interface FAFamilyCircle : NSObject <NSSecureCoding> {

	BOOL _canAddMembers;
	BOOL _showAddMemberButton;
	NSArray* _pendingMembers;
	NSArray* _invites;
	FAFamilyMember* _me;
	NSArray* _members;
	FAEligibilityRequirements* _eligibilityRequirements;
	FAFamilyCloudKitProperties* _cloudKitProperties;
	NSDictionary* __serverResponse;
	NSString* _addMemberButtonLabel;
	NSString* _familyMembersFooterLabel;

}

@property (readonly) NSDictionary * _serverResponse;                                   //@synthesize _serverResponse=__serverResponse - In the implementation block
@property (nonatomic,copy,readonly) NSArray * firstNames; 
@property (nonatomic,copy,readonly) NSArray * invites;                                 //@synthesize invites=_invites - In the implementation block
@property (nonatomic,copy,readonly) NSArray * pendingMembers;                          //@synthesize pendingMembers=_pendingMembers - In the implementation block
@property (nonatomic,readonly) FAFamilyMember * me;                                    //@synthesize me=_me - In the implementation block
@property (nonatomic,readonly) BOOL canAddMembers;                                     //@synthesize canAddMembers=_canAddMembers - In the implementation block
@property (nonatomic,copy,readonly) NSString * addMemberButtonLabel;                   //@synthesize addMemberButtonLabel=_addMemberButtonLabel - In the implementation block
@property (nonatomic,copy,readonly) NSString * familyMembersFooterLabel;               //@synthesize familyMembersFooterLabel=_familyMembersFooterLabel - In the implementation block
@property (nonatomic,readonly) BOOL showAddMemberButton;                               //@synthesize showAddMemberButton=_showAddMemberButton - In the implementation block
@property (readonly) NSArray * members;                                                //@synthesize members=_members - In the implementation block
@property (readonly) FAEligibilityRequirements * eligibilityRequirements;              //@synthesize eligibilityRequirements=_eligibilityRequirements - In the implementation block
@property (readonly) FAFamilyCloudKitProperties * cloudKitProperties;                  //@synthesize cloudKitProperties=_cloudKitProperties - In the implementation block
+(BOOL)supportsSecureCoding;
-(FAFamilyMember *)me;
-(NSArray *)firstNames;
-(id)initWithServerResponse:(id)arg1 ;
-(id)memberForAltDSID:(id)arg1 ;
-(NSArray *)pendingMembers;
-(FAEligibilityRequirements *)eligibilityRequirements;
-(FAFamilyCloudKitProperties *)cloudKitProperties;
-(BOOL)canAddMembers;
-(NSString *)addMemberButtonLabel;
-(NSString *)familyMembersFooterLabel;
-(BOOL)showAddMemberButton;
-(NSArray *)invites;
-(NSArray *)members;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)_serverResponse;
@end
