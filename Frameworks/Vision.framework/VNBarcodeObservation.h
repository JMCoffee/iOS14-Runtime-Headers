/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNRectangleObservation.h>

@class NSString, CIBarcodeDescriptor, NSDictionary;

@interface VNBarcodeObservation : VNRectangleObservation {

	NSString* _cachedPayloadStringValue;
	NSString* _symbology;
	CIBarcodeDescriptor* _barcodeDescriptor;
	NSDictionary* _acbsBarcodeInfo;

}

@property (setter=setACBSBarcodeInfo:,nonatomic,copy) NSDictionary * acbsBarcodeInfo;              //@synthesize acbsBarcodeInfo=_acbsBarcodeInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * symbology;                                          //@synthesize symbology=_symbology - In the implementation block
@property (nonatomic,readonly) CIBarcodeDescriptor * barcodeDescriptor;                            //@synthesize barcodeDescriptor=_barcodeDescriptor - In the implementation block
@property (nonatomic,copy,readonly) NSString * payloadStringValue; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CIBarcodeDescriptor *)barcodeDescriptor;
-(id)initWithRequestRevision:(unsigned long long)arg1 symbology:(id)arg2 descriptor:(id)arg3 boundingBox:(CGRect)arg4 ;
-(id)initWithRequestRevision:(unsigned long long)arg1 symbology:(id)arg2 descriptor:(id)arg3 topLeft:(CGPoint)arg4 bottomLeft:(CGPoint)arg5 bottomRight:(CGPoint)arg6 topRight:(CGPoint)arg7 ;
-(NSString *)payloadStringValue;
-(NSDictionary *)acbsBarcodeInfo;
-(void)setACBSBarcodeInfo:(id)arg1 ;
-(NSString *)symbology;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end
