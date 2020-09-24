/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NFAppletCollection;
@class NSString, NSArray, NSObject, NSData;

@interface NFApplet : NSObject <NSSecureCoding> {

	NSString* _groupHeadID;
	NSArray* _groupMemberIDs;
	NSArray* _referencedAppIDs;
	BOOL _isContainer;
	BOOL _isProxy;
	NSString* _packageIdentifier;
	NSString* _moduleIdentifier;
	NSArray* _multiSEApplicationGroupMemberIDs;
	unsigned char _appletGPState;
	unsigned char _groupActivationStyle;
	NSObject*<NFAppletCollection> _appletCollection;
	NSData* _typeFSystemCode;
	unsigned char _family;
	unsigned char _activationState;
	BOOL _authTransientSupport;
	BOOL _authTransientConfigurable;
	NSString* _identifier;
	NSString* _seIdentifier;
	NSData* _identifierAsData;
	NSData* _discretionaryData;

}

@property (nonatomic,retain,readonly) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain,readonly) NSString * seIdentifier;                   //@synthesize seIdentifier=_seIdentifier - In the implementation block
@property (nonatomic,retain,readonly) NSData * identifierAsData;                 //@synthesize identifierAsData=_identifierAsData - In the implementation block
@property (nonatomic,retain,readonly) NSData * discretionaryData;                //@synthesize discretionaryData=_discretionaryData - In the implementation block
@property (nonatomic,retain,readonly) NSString * packageIdentifier; 
@property (nonatomic,readonly) unsigned char family;                             //@synthesize family=_family - In the implementation block
@property (nonatomic,readonly) unsigned char lifecycleState; 
@property (nonatomic,readonly) unsigned char activationState;                    //@synthesize activationState=_activationState - In the implementation block
@property (nonatomic,readonly) BOOL authTransientSupport;                        //@synthesize authTransientSupport=_authTransientSupport - In the implementation block
@property (nonatomic,retain,readonly) NFApplet * groupHead; 
@property (nonatomic,retain,readonly) NSArray * groupMembers; 
@property (nonatomic,retain,readonly) NSArray * referencedApps; 
@property (nonatomic,readonly) BOOL authTransientConfigurable;                   //@synthesize authTransientConfigurable=_authTransientConfigurable - In the implementation block
@property (nonatomic,readonly) BOOL isTypeF; 
@property (nonatomic,readonly) BOOL suppressTypeB; 
@property (nonatomic,readonly) unsigned char supportedTypeFSystem; 
@property (nonatomic,readonly) BOOL isGPLocked; 
@property (nonatomic,readonly) BOOL containsSubKeys; 
+(BOOL)supportsSecureCoding;
-(NSString *)identifier;
-(id)appletCollection;
-(unsigned char)groupActivationStyle;
-(void)_setIsActive:(BOOL)arg1 ;
-(unsigned char)activationState;
-(id)groupHeadID;
-(unsigned char)family;
-(NSArray *)referencedApps;
-(id)multiSSDMembers;
-(BOOL)containsSubKeys;
-(NSString *)packageIdentifier;
-(BOOL)isTypeF;
-(NSString *)seIdentifier;
-(id)multiSEGroupMemberIDs;
-(NFApplet *)groupHead;
-(id)asDictionary;
-(BOOL)authTransientSupport;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)groupMemberIDs;
-(BOOL)isContainer;
-(NSData *)identifierAsData;
-(BOOL)isPPSEControllable;
-(BOOL)isGPLocked;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqualToApplet:(id)arg1 ;
-(unsigned long long)rawGPState;
-(NSData *)discretionaryData;
-(void)setAppletCollection:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned char)lifecycleState;
-(NSArray *)groupMembers;
-(id)moduleIdentifier;
-(BOOL)authTransientConfigurable;
-(BOOL)isProxy;
-(id)description;
-(BOOL)suppressTypeB;
-(unsigned char)supportedTypeFSystem;
@end
