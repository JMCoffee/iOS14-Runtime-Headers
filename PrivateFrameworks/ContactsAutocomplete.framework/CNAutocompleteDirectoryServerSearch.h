/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNAutocompleteSearch.h>

@class CNContactStore, NSString;

@interface CNAutocompleteDirectoryServerSearch : NSObject <CNAutocompleteSearch> {

	CNContactStore* _contactStore;

}

@property (nonatomic,retain) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithContactStore:(id)arg1 ;
-(CNContactStore *)contactStore;
-(id)init;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(id)executeRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)fetchContactsForFetchRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)autocompleteResultsForContacts:(id)arg1 request:(id)arg2 ;
@end

