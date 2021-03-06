/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DNDSSettingsSyncManager.h>

@protocol DNDSSettingsSyncManagerDataSource, DNDSSettingsSyncManagerDelegate;
@class NPSManager, NPSDomainAccessor, NSString;

@interface DNDSLegacySettingsSyncManager : NSObject <DNDSSettingsSyncManager> {

	BOOL _listen;
	BOOL _send;
	NPSManager* _npsManager;
	NPSDomainAccessor* _accessor;
	id<DNDSSettingsSyncManagerDataSource> _dataSource;
	id<DNDSSettingsSyncManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<DNDSSettingsSyncManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<DNDSSettingsSyncManagerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)cleanupState;
+(id)sendManagerForPairedDevice:(id)arg1 ;
+(id)receiveManagerForPairedDevice:(id)arg1 ;
-(void)setDataSource:(id<DNDSSettingsSyncManagerDataSource>)arg1 ;
-(void)dealloc;
-(void)update;
-(id<DNDSSettingsSyncManagerDataSource>)dataSource;
-(void)setDelegate:(id<DNDSSettingsSyncManagerDelegate>)arg1 ;
-(void)resume;
-(id<DNDSSettingsSyncManagerDelegate>)delegate;
-(void)_endMonitoringForChanges;
-(void)_beginMonitoringForChanges;
-(id)_initWithListen:(BOOL)arg1 send:(BOOL)arg2 pairedDevice:(id)arg3 ;
-(void)_updateBypassSettings;
-(void)_updateScheduleSettingsWithDate:(id)arg1 ;
-(void)_propagateBypassSettings:(id)arg1 ;
-(void)_propagateScheduleSettings:(id)arg1 ;
@end

