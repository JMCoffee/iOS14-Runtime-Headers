/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:47 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SSOperationProgress, NSString;

@interface SSDownloadPhase : NSObject <SSXPCCoding, NSCopying> {

	SSOperationProgress* _operationProgress;

}

@property (readonly) SSOperationProgress * operationProgress; 
@property (readonly) long long phaseType; 
@property (readonly) long long progressValue; 
@property (readonly) long long totalProgressValue; 
@property (readonly) long long progressUnits; 
@property (readonly) double estimatedSecondsRemaining; 
@property (readonly) float progressChangeRate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SSOperationProgress *)operationProgress;
-(long long)phaseType;
-(id)initWithOperationProgress:(id)arg1 ;
-(long long)progressUnits;
-(float)progressChangeRate;
-(long long)progressValue;
-(long long)totalProgressValue;
-(void)dealloc;
-(id)init;
-(double)estimatedSecondsRemaining;
@end
