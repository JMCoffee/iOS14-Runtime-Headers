/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class CertInfoCertificateListCellContentView;

@interface CertInfoCertificateListTableViewCell : UITableViewCell {

	CertInfoCertificateListCellContentView* _certificateContentView;

}
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)layoutSubviews;
-(void)updateWithTrustDescription:(id)arg1 certificateIndex:(unsigned long long)arg2 ;
@end
