/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPortAssistant/AUUITableViewController.h>

@class AssistantUIViewController, NSDictionary, NSMutableDictionary;

@interface AssistantSubUIViewController : AUUITableViewController {

	AssistantUIViewController* _parentController;
	NSDictionary* _inParamDict;
	NSMutableDictionary* _outResultsDict;

}

@property (assign,nonatomic) AssistantUIViewController * parentController;              //@synthesize parentController=_parentController - In the implementation block
@property (nonatomic,retain) NSDictionary * inParamDict;                                //@synthesize inParamDict=_inParamDict - In the implementation block
@property (nonatomic,readonly) NSDictionary * outResultsDict;                           //@synthesize outResultsDict=_outResultsDict - In the implementation block
+(id)labelViewInContainer:(id*)arg1 width:(double)arg2 constrain:(BOOL)arg3 ;
+(id)labelViewInContainer:(id*)arg1 width:(double)arg2 ;
+(id)labelViewInContainer:(id*)arg1 width:(double)arg2 withSpinner:(id*)arg3 above:(BOOL)arg4 ;
+(id)topoViewWithWidth:(double)arg1 ;
+(id)containerViewWithWidth:(double)arg1 ;
+(id)tableViewWithWidth:(double)arg1 height:(double)arg2 ;
-(void)setParentController:(AssistantUIViewController *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(AssistantUIViewController *)parentController;
-(void)dealloc;
-(void)viewDidLoad;
-(void)setLeftNavigationButton:(id)arg1 enable:(BOOL)arg2 hide:(BOOL)arg3 ;
-(NSDictionary *)inParamDict;
-(void)setRightNavigationButton:(id)arg1 enable:(BOOL)arg2 hide:(BOOL)arg3 ;
-(id)getProductLocalizedStringWithFormat:(id)arg1 ;
-(void)setInParamDict:(NSDictionary *)arg1 ;
-(NSDictionary *)outResultsDict;
@end
