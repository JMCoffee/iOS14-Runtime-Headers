/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MFComposeRecipient.h>

@class NSArray;

@interface MFComposeRecipientGroup : MFComposeRecipient {

	NSArray* _children;

}
-(void*)record;
-(int)property;
-(id)children;
-(BOOL)isGroup;
-(int)recordID;
-(id)address;
-(id)sortedChildren;
-(id)placeholderName;
-(id)childrenWithCompleteMatches;
-(BOOL)wasCompleteMatch;
-(id)completelyMatchedAttributedStrings;
-(id)unlocalizedLabel;
-(id)displayString;
-(void)_populateSortedChildren;
-(BOOL)isEqual:(id)arg1 ;
-(id)commentedAddress;
-(id)compositeName;
-(BOOL)isRemovableFromSearchResults;
-(id)label;
-(id)initWithChildren:(id)arg1 displayString:(id)arg2 ;
@end
