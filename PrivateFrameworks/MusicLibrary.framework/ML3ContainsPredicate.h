/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/ML3PropertyPredicate.h>

@interface ML3ContainsPredicate : ML3PropertyPredicate {

	id _values;

}

@property (nonatomic,copy) id values;              //@synthesize values=_values - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)predicateWithProperty:(id)arg1 values:(id)arg2 ;
+(id)predicateWithProperty:(id)arg1 valueSet:(id)arg2 ;
-(id)values;
-(void)setValues:(id)arg1 ;
-(id)databaseStatementParameters;
-(void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)containsPropertyPredicate:(id)arg1 matchingValue:(id)arg2 usingComparison:(int)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithProperty:(id)arg1 values:(id)arg2 ;
@end

