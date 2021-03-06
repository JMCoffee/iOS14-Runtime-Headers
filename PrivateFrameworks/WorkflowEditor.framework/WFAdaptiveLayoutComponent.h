/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:24 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/CKComponent.h>

@interface WFAdaptiveLayoutComponent : CKComponent {

	vector<CKComponent *, std::__1::allocator<CKComponent *> >* _children;

}
+(id)newWithChildren:(const vector<CKComponent *, std::__1::allocator<CKComponent *> >*)arg1 size:(const CKComponentSize*)arg2 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
@end

