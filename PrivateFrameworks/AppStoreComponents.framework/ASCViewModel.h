/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class ASCAdamID, ASCViewMetrics;


@protocol ASCViewModel <NSObject,NSCopying,NSSecureCoding>
@property (nonatomic,copy,readonly) ASCAdamID * id; 
@property (nonatomic,copy,readonly) ASCViewMetrics * metrics; 
@required
-(ASCViewMetrics *)metrics;
-(ASCAdamID *)id;

@end

