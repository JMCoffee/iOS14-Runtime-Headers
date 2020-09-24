/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLSClassificationBasedSignalModel.h>

@class CLSSignalNode, NSString;

@interface CLSSDModel : NSObject <CLSClassificationBasedSignalModel> {

	unsigned long long _version;
	unsigned long long _minimumSupportedVersion;
	CLSSignalNode* _foodNode;
	CLSSignalNode* _landscapeCityscapeNode;

}

@property (readonly) unsigned long long version;                              //@synthesize version=_version - In the implementation block
@property (readonly) unsigned long long minimumSupportedVersion;              //@synthesize minimumSupportedVersion=_minimumSupportedVersion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)latestVersion;
+(id)modelWithVersion:(unsigned long long)arg1 ;
+(id)name;
+(unsigned long long)currentAnalyzerVersion;
-(unsigned long long)version;
-(void)processSignals:(id)arg1 intoProcessedSignals:(id)arg2 ;
-(void)setupVersion33;
-(id)nodeForSignalIdentifier:(unsigned long long)arg1 ;
-(id)modelInfo;
-(unsigned long long)minimumSupportedVersion;
-(BOOL)isResponsibleForSignalIdentifier:(unsigned long long)arg1 ;
-(id)initWithVersion:(unsigned long long)arg1 ;
-(void)setupVersion51_4;
@end
