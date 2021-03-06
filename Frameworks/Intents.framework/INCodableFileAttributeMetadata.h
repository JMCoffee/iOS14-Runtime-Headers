/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INCodableAttributeMetadata.h>

@class NSString, NSArray;

@interface INCodableFileAttributeMetadata : INCodableAttributeMetadata {

	NSString* _type;
	NSArray* _customUTIs;

}

@property (nonatomic,readonly) NSString * type;                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSArray * customUTIs;              //@synthesize customUTIs=_customUTIs - In the implementation block
@property (nonatomic,readonly) NSArray * UTIs; 
+(BOOL)supportsSecureCoding;
-(Class)wf_objectClass;
-(Class)wf_parameterClass;
-(BOOL)wf_processParameterValue:(id)arg1 forParameter:(id)arg2 codableAttribute:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)wf_parameterStateForIntentValue:(id)arg1 parameterDefinition:(id)arg2 ;
-(id)compatibleFileTypeForContentItem:(id)arg1 availableTypes:(id)arg2 ;
-(NSArray *)UTIs;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(id)__INCodableDescriptionTypeKey;
-(id)__INTypeCodableDescriptionTypeKey;
-(NSString *)type;
-(id)__INIntentResponseCodableDescriptionTypeKey;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)customUTIs;
-(void)encodeWithCoder:(id)arg1 ;
-(id)__INCodableDescriptionCustomUTIsKey;
-(id)__INIntentResponseCodableDescriptionCustomUTIsKey;
-(id)__INTypeCodableDescriptionCustomUTIsKey;
@end

