/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXValidationReportingServices;
#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@class NSString, NSMutableArray;

@interface AXValidationManager : NSObject {

	BOOL _shouldLogToConsole;
	BOOL _shouldCrashOnError;
	BOOL _shouldReportToServer;
	BOOL _forceDoNotReport;
	BOOL _debugBuild;
	BOOL _shouldPerformValidationChecks;
	unsigned long long _numberOfValidationErrors;
	NSString* _validationTargetName;
	NSString* _overrideProcessName;
	NSMutableArray* _consoleErrorMessages;
	id<AXValidationReportingServices> _validationReportingServices;
	unsigned long long _numberOfValidations;
	unsigned long long _numberOfValidationWarnings;
	NSMutableArray* _consoleWarningMessages;

}

@property (assign,nonatomic) BOOL shouldPerformValidationChecks;                                         //@synthesize shouldPerformValidationChecks=_shouldPerformValidationChecks - In the implementation block
@property (assign,nonatomic) BOOL shouldLogToConsole;                                                    //@synthesize shouldLogToConsole=_shouldLogToConsole - In the implementation block
@property (assign,nonatomic) BOOL shouldCrashOnError;                                                    //@synthesize shouldCrashOnError=_shouldCrashOnError - In the implementation block
@property (assign,nonatomic) BOOL shouldReportToServer;                                                  //@synthesize shouldReportToServer=_shouldReportToServer - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfValidations;                                     //@synthesize numberOfValidations=_numberOfValidations - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfValidationErrors;                                //@synthesize numberOfValidationErrors=_numberOfValidationErrors - In the implementation block
@property (nonatomic,retain) NSMutableArray * consoleErrorMessages;                                      //@synthesize consoleErrorMessages=_consoleErrorMessages - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfValidationWarnings;                              //@synthesize numberOfValidationWarnings=_numberOfValidationWarnings - In the implementation block
@property (nonatomic,retain) NSMutableArray * consoleWarningMessages;                                    //@synthesize consoleWarningMessages=_consoleWarningMessages - In the implementation block
@property (nonatomic,retain) id<AXValidationReportingServices> validationReportingServices;              //@synthesize validationReportingServices=_validationReportingServices - In the implementation block
@property (assign,nonatomic) BOOL forceDoNotReport;                                                      //@synthesize forceDoNotReport=_forceDoNotReport - In the implementation block
@property (nonatomic,copy) NSString * validationTargetName;                                              //@synthesize validationTargetName=_validationTargetName - In the implementation block
@property (nonatomic,copy) NSString * overrideProcessName;                                               //@synthesize overrideProcessName=_overrideProcessName - In the implementation block
@property (assign,getter=isDebugBuild,nonatomic) BOOL debugBuild;                                        //@synthesize debugBuild=_debugBuild - In the implementation block
+(id)sharedInstance;
-(void)_clearState;
-(BOOL)validateClass:(id)arg1 conformsToProtocol:(id)arg2 ;
-(void)sendValidateExceptionForClass:(id)arg1 isKindOfClass:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4 ;
-(BOOL)validateClass:(id)arg1 ;
-(id)_nameForMethod:(objc_methodRef)arg1 ;
-(void)sendExceptionForSafeBlock:(id)arg1 overrideProcessName:(id)arg2 ;
-(BOOL)forceDoNotReport;
-(void)_resetState;
-(BOOL)client:(id)arg1 validateProtocol:(id)arg2 hasRequiredInstanceMethod:(id)arg3 ;
-(void)setConsoleWarningMessages:(NSMutableArray *)arg1 ;
-(void)setConsoleErrorMessages:(NSMutableArray *)arg1 ;
-(BOOL)validateClass:(id)arg1 hasInstanceVariable:(id)arg2 withType:(const char*)arg3 ;
-(void)sendGenericReport:(id)arg1 withTag:(id)arg2 overrideProcessName:(id)arg3 ;
-(BOOL)installSafeCategory:(id)arg1 ;
-(void)sendFailedAssertionWithErrorMessage:(id)arg1 overrideProcessName:(id)arg2 ;
-(void)performValidations:(/*^block*/id)arg1 withPreValidationHandler:(/*^block*/id)arg2 postValidationHandler:(/*^block*/id)arg3 ;
-(BOOL)client:(id)arg1 validateProtocol:(id)arg2 conformsToProtocol:(id)arg3 ;
-(NSMutableArray *)consoleWarningMessages;
-(void)_printConsoleReport:(BOOL)arg1 isDelayed:(BOOL)arg2 ;
-(void)sendValidationSuccessForProcessName:(id)arg1 ;
-(void)sendValidateExceptionForProtocol:(id)arg1 hasProperty:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4 ;
-(NSString *)overrideProcessName;
-(BOOL)client:(id)arg1 validateProtocol:(id)arg2 hasOptionalInstanceMethod:(id)arg3 ;
-(void)sendValidateExceptionForClass:(id)arg1 hasInstanceMethod:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4 ;
-(BOOL)client:(id)arg1 validateProtocol:(id)arg2 hasOptionalClassMethod:(id)arg3 ;
-(id<AXValidationReportingServices>)validationReportingServices;
-(void)sendValidateExceptionForClass:(id)arg1 hasProperty:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4 ;
-(void)sendValidateExceptionForProtocol:(id)arg1 conformsToProtocol:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4 ;
-(void)setShouldCrashOnError:(BOOL)arg1 ;
-(BOOL)shouldPerformValidationChecks;
-(void)sendExceptionForSafeCategoryOnWrongTarget:(id)arg1 targetBundle:(id)arg2 expectedBundle:(id)arg3 overrideProcessName:(id)arg4 ;
-(void)setNumberOfValidationWarnings:(unsigned long long)arg1 ;
-(void)sendValidateExceptionForClass:(id)arg1 conformsToProtocol:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4 ;
-(void)sendExceptionForSafeIVarKey:(id)arg1 onTarget:(id)arg2 overrideProcessName:(id)arg3 ;
-(unsigned long long)numberOfValidations;
-(BOOL)validateProtocol:(id)arg1 hasRequiredInstanceMethod:(id)arg2 ;
-(void)performValidations:(/*^block*/id)arg1 withPreValidationHandler:(/*^block*/id)arg2 postValidationHandler:(/*^block*/id)arg3 safeCategoryInstallationHandler:(/*^block*/id)arg4 ;
-(void)sendExceptionForSafeValueKey:(id)arg1 onTarget:(id)arg2 overrideProcessName:(id)arg3 ;
-(void)setForceDoNotReport:(BOOL)arg1 ;
-(void)setOverrideProcessName:(NSString *)arg1 ;
-(unsigned long long)numberOfValidationWarnings;
-(BOOL)shouldLogToConsole;
-(BOOL)installSafeCategory:(id)arg1 canInteractWithTargetClass:(BOOL)arg2 ;
-(BOOL)_client:(id)arg1 validateClass:(id)arg2 hasClassMethod:(id)arg3 withFullSignature:(const char*)arg4 argList:(char*)arg5 ;
-(void)_generateWarningsForPrefixedMethodNames:(id)arg1 client:(id)arg2 methodType:(int)arg3 methodName:(id)arg4 className:(id)arg5 ;
-(void)setShouldLogToConsole:(BOOL)arg1 ;
-(BOOL)validateClass:(id)arg1 hasClassMethod:(id)arg2 withFullSignature:(const char*)arg3 ;
-(BOOL)client:(id)arg1 validateClass:(id)arg2 hasInstanceMethod:(id)arg3 withFullSignature:(const char*)arg4 ;
-(BOOL)client:(id)arg1 validateClass:(id)arg2 hasInstanceMethod:(id)arg3 withFullSignature:(const char*)arg4 argList:(char*)arg5 ;
-(id)init;
-(BOOL)_client:(id)arg1 validateClass:(id)arg2 hasMethod:(id)arg3 methodType:(int)arg4 ;
-(BOOL)client:(id)arg1 validateProtocol:(id)arg2 hasMethod:(id)arg3 isInstanceMethod:(BOOL)arg4 isRequired:(BOOL)arg5 ;
-(NSString *)validationTargetName;
-(void)setShouldReportToServer:(BOOL)arg1 ;
-(BOOL)validateProtocol:(id)arg1 hasRequiredClassMethod:(id)arg2 ;
-(void)sendValidateExceptionForClass:(id)arg1 errorMessage:(id)arg2 overrideProcessName:(id)arg3 ;
-(unsigned long long)numberOfValidationErrors;
-(void)sendValidateExceptionForClass:(id)arg1 hasClassMethod:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4 ;
-(void)setDebugBuild:(BOOL)arg1 ;
-(void)_generateWarningsOnSafeCategoryClass:(Class)arg1 ;
-(void)setNumberOfValidationErrors:(unsigned long long)arg1 ;
-(BOOL)client:(id)arg1 validateClass:(id)arg2 hasProperty:(id)arg3 withType:(const char*)arg4 ;
-(void)sendFailedTestCase:(id)arg1 withTag:(id)arg2 overrideProcessName:(id)arg3 ;
-(void)installSafeCategories:(/*^block*/id)arg1 afterDelay:(double)arg2 validationTargetName:(id)arg3 overrideProcessName:(id)arg4 ;
-(NSMutableArray *)consoleErrorMessages;
-(BOOL)client:(id)arg1 validateClass:(id)arg2 ;
-(BOOL)client:(id)arg1 validateClass:(id)arg2 hasInstanceVariable:(id)arg3 withType:(const char*)arg4 ;
-(void)sendExceptionForInstallingSafeCategory:(id)arg1 onTarget:(id)arg2 overrideProcessName:(id)arg3 ;
-(BOOL)shouldCrashOnError;
-(void)_iterateMethodsOfType:(int)arg1 onClass:(Class)arg2 block:(/*^block*/id)arg3 ;
-(void)sendValidateExceptionForProtocol:(id)arg1 hasMethod:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4 ;
-(BOOL)validateClass:(id)arg1 hasProperty:(id)arg2 customGetter:(id)arg3 customSetter:(id)arg4 withType:(const char*)arg5 ;
-(BOOL)validateClass:(id)arg1 hasInstanceMethod:(id)arg2 withFullSignature:(const char*)arg3 ;
-(BOOL)client:(id)arg1 validateClass:(id)arg2 conformsToProtocol:(id)arg3 ;
-(void)setShouldPerformValidationChecks:(BOOL)arg1 ;
-(BOOL)validateClass:(id)arg1 isKindOfClass:(id)arg2 ;
-(BOOL)shouldReportToServer;
-(BOOL)validateProtocol:(id)arg1 hasOptionalInstanceMethod:(id)arg2 ;
-(void)sendValidateExceptionForClass:(id)arg1 hasInstanceVariable:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4 ;
-(BOOL)_client:(id)arg1 validateClass:(id)arg2 hasMethod:(id)arg3 methodType:(int)arg4 returnType:(id)arg5 arguments:(id)arg6 ;
-(BOOL)client:(id)arg1 validateClass:(id)arg2 hasClassMethod:(id)arg3 withFullSignature:(const char*)arg4 ;
-(BOOL)client:(id)arg1 validateProtocol:(id)arg2 hasRequiredClassMethod:(id)arg3 ;
-(void)setValidationTargetName:(NSString *)arg1 ;
-(BOOL)client:(id)arg1 validateClass:(id)arg2 hasProperty:(id)arg3 customGetter:(id)arg4 customSetter:(id)arg5 withType:(const char*)arg6 ;
-(void)setNumberOfValidations:(unsigned long long)arg1 ;
-(void)_generateWarningsForMethodType:(int)arg1 onClass:(Class)arg2 superclassMethods:(objc_method*)arg3 numberOfSuperclassMethods:(unsigned)arg4 ;
-(BOOL)isDebugBuild;
-(BOOL)client:(id)arg1 validateClass:(id)arg2 isKindOfClass:(id)arg3 ;
-(BOOL)validateProtocol:(id)arg1 hasMethod:(id)arg2 isInstanceMethod:(BOOL)arg3 isRequired:(BOOL)arg4 ;
-(BOOL)validateClass:(id)arg1 hasProperty:(id)arg2 withType:(const char*)arg3 ;
-(BOOL)validateProtocol:(id)arg1 hasOptionalClassMethod:(id)arg2 ;
-(BOOL)validateProtocol:(id)arg1 conformsToProtocol:(id)arg2 ;
-(void)setValidationReportingServices:(id<AXValidationReportingServices>)arg1 ;
@end
