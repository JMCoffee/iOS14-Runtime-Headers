/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, CSCoder;

@interface SGSearchableItemSerializedAttributes : NSObject <NSCopying> {

	NSData* _attributeSetData;
	CSCoder* _attributeSetCoder;
	NSData* _htmlContentData;

}

@property (nonatomic,readonly) NSData * attributeSetData;                //@synthesize attributeSetData=_attributeSetData - In the implementation block
@property (nonatomic,readonly) CSCoder * attributeSetCoder;              //@synthesize attributeSetCoder=_attributeSetCoder - In the implementation block
@property (nonatomic,readonly) NSData * htmlContentData;                 //@synthesize htmlContentData=_htmlContentData - In the implementation block
+(id)serializedAttributesWithAttributeSetData:(id)arg1 attributeSetCoder:(id)arg2 htmlContentData:(id)arg3 ;
-(id)initWithAttributeSetData:(id)arg1 attributeSetCoder:(id)arg2 htmlContentData:(id)arg3 ;
-(CSCoder *)attributeSetCoder;
-(NSData *)htmlContentData;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqualToSerializedAttributes:(id)arg1 ;
-(NSData *)attributeSetData;
@end

