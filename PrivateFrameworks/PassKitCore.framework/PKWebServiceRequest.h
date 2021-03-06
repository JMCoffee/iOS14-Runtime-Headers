/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSString, NSArray;

@interface PKWebServiceRequest : NSObject <NSSecureCoding> {

	NSMutableArray* _diagnosticReasonsList;
	NSString* _boundInterfaceIdentifier;

}

@property (nonatomic,copy) NSString * boundInterfaceIdentifier;              //@synthesize boundInterfaceIdentifier=_boundInterfaceIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * diagnosticReasons; 
+(id)_HTTPBodyWithDictionary:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)_murlRequestWithURL:(id)arg1 ;
-(id)_murlRequestWithServiceURL:(id)arg1 endpointComponents:(id)arg2 queryParameters:(id)arg3 appleAccountInformation:(id)arg4 ;
-(void)addDiagnosticReason:(id)arg1 ;
-(NSArray *)diagnosticReasons;
-(id)_murlRequestWithURL:(id)arg1 appleAccountInformation:(id)arg2 ;
-(NSString *)boundInterfaceIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setBoundInterfaceIdentifier:(NSString *)arg1 ;
@end

