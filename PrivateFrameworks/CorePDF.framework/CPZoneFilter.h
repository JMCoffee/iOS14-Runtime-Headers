/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CPPage;

@interface CPZoneFilter : NSObject {

	CPPage* page;
	double minArea;

}
+(void)filterZonesInPage:(id)arg1 ;
-(id)initWithPage:(id)arg1 ;
-(void)filterZonesInZone:(id)arg1 ;
-(void)findBackgroundGraphicsInZone:(id)arg1 ;
-(void)findUsedGraphicsInZone:(id)arg1 ;
@end

