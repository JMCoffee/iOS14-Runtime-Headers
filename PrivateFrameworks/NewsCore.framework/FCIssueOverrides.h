/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:13 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FCIssueOverrides : NSObject <NSCopying> {

	NSString* _title;
	NSString* _issueDescription;

}

@property (nonatomic,readonly) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * issueDescription;              //@synthesize issueDescription=_issueDescription - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(id)initWithTitle:(id)arg1 issueDescription:(id)arg2 ;
-(id)init;
-(NSString *)issueDescription;
@end

