/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PrintKit/PrintKit-Structs.h>
@class NSDictionary, NSString;

@interface PKTray : NSObject {

	NSDictionary* _trayDict;

}

@property (retain) NSDictionary * trayDict;                 //@synthesize trayDict=_trayDict - In the implementation block
@property (readonly) BOOL isEmpty; 
@property (readonly) NSString * name; 
@property (readonly) NSString * localizedName; 
+(id)traysWithAttrs:(ipp_sRef)arg1 ;
+(id)filter:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(id)trayWithString:(id)arg1 andMediaSource:(id)arg2 ;
-(NSString *)localizedName;
-(void)dealloc;
-(BOOL)isEmpty;
-(NSString *)name;
-(id)description;
-(id)initWithString:(id)arg1 andMediaSource:(id)arg2 ;
-(void)setTrayDict:(NSDictionary *)arg1 ;
-(NSDictionary *)trayDict;
@end

