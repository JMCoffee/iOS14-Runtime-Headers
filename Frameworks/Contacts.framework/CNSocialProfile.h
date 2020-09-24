/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/CNObjectValidation.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface CNSocialProfile : NSObject <CNObjectValidation, NSCopying, NSSecureCoding> {

	NSString* _urlString;
	NSString* _username;
	NSString* _userIdentifier;
	NSString* _service;
	NSString* _displayname;
	NSString* _teamIdentifier;
	NSArray* _bundleIdentifiers;

}

@property (nonatomic,copy) NSString * urlString;                     //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,copy) NSString * username;                      //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * userIdentifier;                //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,copy) NSString * service;                       //@synthesize service=_service - In the implementation block
@property (nonatomic,copy) NSString * displayname;                   //@synthesize displayname=_displayname - In the implementation block
@property (nonatomic,copy) NSString * teamIdentifier;                //@synthesize teamIdentifier=_teamIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * bundleIdentifiers;              //@synthesize bundleIdentifiers=_bundleIdentifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)localizedStringForKey:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)socialProfileWithDictionaryRepresentation:(id)arg1 ;
+(/*^block*/id)Username;
+(id)localizedStringForService:(id)arg1 ;
-(NSString *)teamIdentifier;
-(NSString *)urlString;
-(id)initWithUrlString:(id)arg1 username:(id)arg2 userIdentifier:(id)arg3 service:(id)arg4 displayname:(id)arg5 teamIdentifier:(id)arg6 bundleIdentifiers:(id)arg7 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setUrlString:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)userIdentifier;
-(void)setTeamIdentifier:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ignoreURLs:(BOOL)arg2 ;
-(id)initWithUrlString:(id)arg1 username:(id)arg2 userIdentifier:(id)arg3 service:(id)arg4 displayname:(id)arg5 ;
-(void)setUserIdentifier:(NSString *)arg1 ;
-(NSString *)displayname;
-(NSArray *)bundleIdentifiers;
-(NSString *)username;
-(id)initWithUrlString:(id)arg1 username:(id)arg2 userIdentifier:(id)arg3 service:(id)arg4 ;
-(void)setBundleIdentifiers:(NSArray *)arg1 ;
-(void)setDisplayname:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)service;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isValid:(id*)arg1 ;
-(unsigned long long)hash;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)description;
-(id)dictionaryRepresentation;
-(void)setService:(NSString *)arg1 ;
@end
