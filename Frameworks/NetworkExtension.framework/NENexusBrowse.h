/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:20 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NWBrowseDescriptor, NWParameters, NSUUID;

@interface NENexusBrowse : NSObject {

	NWBrowseDescriptor* _descriptor;
	NWParameters* _parameters;
	NSUUID* _clientIdentifier;

}

@property (nonatomic,retain) NWBrowseDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,retain) NWParameters * parameters;                    //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,retain) NSUUID * clientIdentifier;                    //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
-(void)setDescriptor:(NWBrowseDescriptor *)arg1 ;
-(void)setParameters:(NWParameters *)arg1 ;
-(void)setClientIdentifier:(NSUUID *)arg1 ;
-(NWParameters *)parameters;
-(NWBrowseDescriptor *)descriptor;
-(NSUUID *)clientIdentifier;
@end

