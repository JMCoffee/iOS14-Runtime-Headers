/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:13 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/CoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString, _LSOpenConfiguration, NSXPCConnection, NSDictionary;

@interface _LSAppLinkOpenState : NSObject <NSCopying, NSSecureCoding> {

	NSURL* _URL;
	NSString* _bundleIdentifier;
	_LSOpenConfiguration* _openConfiguration;
	NSXPCConnection* _XPCConnection;
	NSDictionary* _browserState;

}

@property (copy) NSURL * URL;                                             //@synthesize URL=_URL - In the implementation block
@property (copy) NSString * bundleIdentifier;                             //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (retain) _LSOpenConfiguration * openConfiguration;              //@synthesize openConfiguration=_openConfiguration - In the implementation block
@property (readonly) const SCD_Struct_LS15* auditToken; 
@property (retain) NSXPCConnection * XPCConnection;                       //@synthesize XPCConnection=_XPCConnection - In the implementation block
@property (copy) NSDictionary * browserState;                             //@synthesize browserState=_browserState - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)browserState;
-(_LSOpenConfiguration *)openConfiguration;
-(void)setXPCConnection:(NSXPCConnection *)arg1 ;
-(void)setBrowserState:(NSDictionary *)arg1 ;
-(NSXPCConnection *)XPCConnection;
-(void)setOpenConfiguration:(_LSOpenConfiguration *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)bundleIdentifier;
-(id)debugDescription;
-(NSURL *)URL;
-(const SCD_Struct_LS15*)auditToken;
-(void)setURL:(NSURL *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

