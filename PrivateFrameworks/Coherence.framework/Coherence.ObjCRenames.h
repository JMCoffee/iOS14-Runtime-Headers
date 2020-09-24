/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:24 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Coherence.framework/Coherence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Coherence/Coherence-Structs.h>
@class NSString;

@interface Coherence.ObjCRenames : NSObject {

	 renames;

}

@property (readonly,nonatomic) long long generation; 
@property (readonly,nonatomic) long long count; 
@property (readonly,nonatomic) BOOL hasLocalRenames; 
@property (readonly,nonatomic) NSString * description; 
-(long long)generation;
-(id)init;
-(long long)count;
-(NSString *)description;
-(BOOL)hasLocalRenames;
-(id)renamedWithReplica:(id)arg1 ;
-(id)renamedWithRange:(NSRange)arg1 replica:(id)arg2 ;
-(id)renamed:(long long)arg1 replica:(id)arg2 ;
-(void)addMappingWithReplica:(id)arg1 from:(long long)arg2 ;
-(void)addMappingWithReplica:(id)arg1 fromRange:(NSRange)arg2 ;
@end
