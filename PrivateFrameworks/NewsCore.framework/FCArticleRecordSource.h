/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCRecordSource.h>

@class NSArray;

@interface FCArticleRecordSource : FCRecordSource {

	NSArray* _nonLocalizableKeys;
	NSArray* _localizableKeys;
	NSArray* _alwaysLocalizedKeys;
	NSArray* _engagementRecordKeys;
	NSArray* _conversionRecordKeys;

}

@property (nonatomic,readonly) NSArray * engagementRecordKeys;              //@synthesize engagementRecordKeys=_engagementRecordKeys - In the implementation block
@property (nonatomic,readonly) NSArray * conversionRecordKeys;              //@synthesize conversionRecordKeys=_conversionRecordKeys - In the implementation block
+(BOOL)useTaggedImages;
+(id)modificationDateFromCKRecord:(id)arg1 ;
+(id)identifierFromCKRecord:(id)arg1 ;
+(id)canaryRecordName;
+(BOOL)supportsDeletions;
+(id)changeTagFromCKRecord:(id)arg1 ;
-(id)recordIDPrefix;
-(unsigned long long)highThresholdDataSizeLimit;
-(unsigned long long)storeVersion;
-(unsigned long long)lowThresholdDataSizeLimit;
-(id)alwaysLocalizedKeys;
-(id)urlStringForThumbnailKey:(id)arg1 inRecord:(id)arg2 ;
-(id)localizableKeys;
-(id)experimentalizableKeys;
-(id)storeFilename;
-(id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2 desiredArticleRecordFieldOptions:(unsigned long long)arg3 experimentalizableFieldsPostfix:(id)arg4 engagementCohortsExpField:(id)arg5 conversionCohortsExpField:(id)arg6 activeTreatmentID:(id)arg7 ;
-(NSArray *)engagementRecordKeys;
-(id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2 experimentalizableFieldsPostfix:(id)arg3 activeTreatmentID:(id)arg4 ;
-(id)engagementDataFromCKRecord:(id)arg1 ;
-(id)saveArticleRecords:(id)arg1 ;
-(id)recordFromCKRecord:(id)arg1 base:(id)arg2 ;
-(id)localizableExperimentalizableKeys;
-(id)saveFeedItemAndArticleRecords:(id)arg1 ;
-(NSArray *)conversionRecordKeys;
-(id)conversionDataFromCKRecord:(id)arg1 ;
-(id)recordType;
-(id)nonLocalizableKeys;
-(int)pbRecordType;
@end

