/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WPDaemon/WPDManager.h>
#import <libobjc.A.dylib/CBPeripheralManagerDelegate.h>

@class WPAdvertisingRequestsQueue, NSMutableDictionary, NSMutableIndexSet, NSMutableSet, CBPeripheralManager, WPDAdvertisingData, NSIndexSet, NSString;

@interface WPDAdvertisingManager : WPDManager <CBPeripheralManagerDelegate> {

	BOOL _allowCompoundAdvertisements;
	WPAdvertisingRequestsQueue* _advertisingRequests;
	NSMutableDictionary* _clientAdvertisingRequests;
	NSMutableIndexSet* _currentAdvertisers;
	NSMutableSet* _clientsToNotifyOnAddressChange;
	NSMutableDictionary* _publishedServices;
	CBPeripheralManager* _connectablePeripheralManager;
	CBPeripheralManager* _nonConnectablePeripheralManager;
	WPDAdvertisingData* _currentConnectableAdvertisingData;
	WPDAdvertisingData* _currentNonConnectableAdvertisingData;
	NSMutableDictionary* _preallocatedServices;
	NSIndexSet* _rangingTypes;
	NSMutableSet* _rangingClients;

}

@property (retain) WPAdvertisingRequestsQueue * advertisingRequests;                                 //@synthesize advertisingRequests=_advertisingRequests - In the implementation block
@property (retain) NSMutableDictionary * clientAdvertisingRequests;                                  //@synthesize clientAdvertisingRequests=_clientAdvertisingRequests - In the implementation block
@property (retain) NSMutableIndexSet * currentAdvertisers;                                           //@synthesize currentAdvertisers=_currentAdvertisers - In the implementation block
@property (retain) NSMutableSet * clientsToNotifyOnAddressChange;                                    //@synthesize clientsToNotifyOnAddressChange=_clientsToNotifyOnAddressChange - In the implementation block
@property (retain) NSMutableDictionary * publishedServices;                                          //@synthesize publishedServices=_publishedServices - In the implementation block
@property (nonatomic,retain) CBPeripheralManager * connectablePeripheralManager;                     //@synthesize connectablePeripheralManager=_connectablePeripheralManager - In the implementation block
@property (nonatomic,retain) CBPeripheralManager * nonConnectablePeripheralManager;                  //@synthesize nonConnectablePeripheralManager=_nonConnectablePeripheralManager - In the implementation block
@property (nonatomic,retain) WPDAdvertisingData * currentConnectableAdvertisingData;                 //@synthesize currentConnectableAdvertisingData=_currentConnectableAdvertisingData - In the implementation block
@property (nonatomic,retain) WPDAdvertisingData * currentNonConnectableAdvertisingData;              //@synthesize currentNonConnectableAdvertisingData=_currentNonConnectableAdvertisingData - In the implementation block
@property (assign) BOOL allowCompoundAdvertisements;                                                 //@synthesize allowCompoundAdvertisements=_allowCompoundAdvertisements - In the implementation block
@property (retain) NSMutableDictionary * preallocatedServices;                                       //@synthesize preallocatedServices=_preallocatedServices - In the implementation block
@property (nonatomic,readonly) BOOL isRanging; 
@property (nonatomic,readonly) NSIndexSet * rangingTypes;                                            //@synthesize rangingTypes=_rangingTypes - In the implementation block
@property (retain) NSMutableSet * rangingClients;                                                    //@synthesize rangingClients=_rangingClients - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithServer:(id)arg1 ;
-(id)generateStateDump;
-(id)removeAdvertisingRequest:(id)arg1 forClient:(id)arg2 ;
-(BOOL)allowCompoundAdvertisements;
-(NSMutableDictionary *)publishedServices;
-(void)preallocateServices;
-(id)removeAdvertisingRequestsForClient:(id)arg1 ;
-(void)peripheralManager:(id)arg1 didAddService:(id)arg2 error:(id)arg3 ;
-(id)requestFromAdvertisingDataConnectable:(BOOL)arg1 AddressChangeNotificationNeeded:(BOOL)arg2 ;
-(id)getCharacteristicForClient:(id)arg1 ;
-(void)peripheralManager:(id)arg1 central:(id)arg2 didUnsubscribeFromCharacteristic:(id)arg3 ;
-(void)setAllowCompoundAdvertisements:(BOOL)arg1 ;
-(WPAdvertisingRequestsQueue *)advertisingRequests;
-(void)addAdvertisingRequest:(id)arg1 forDaemon:(id)arg2 ;
-(id)advertisingRules;
-(id)removeAdvertisingRequest:(id)arg1 forClient:(id)arg2 shouldUpdate:(BOOL)arg3 ;
-(NSMutableSet *)rangingClients;
-(void)peripheralManagerIsReadyToUpdateSubscribers:(id)arg1 ;
-(void)setCurrentNonConnectableAdvertisingData:(WPDAdvertisingData *)arg1 ;
-(id)advertisingRulesiOS;
-(void)setCurrentConnectableAdvertisingData:(WPDAdvertisingData *)arg1 ;
-(void)setCurrentAdvertisers:(NSMutableIndexSet *)arg1 ;
-(void)addCharacteristic:(id)arg1 Properties:(unsigned long long)arg2 Permissions:(unsigned long long)arg3 Service:(id)arg4 Name:(id)arg5 ;
-(void)resetAdvertisingManager;
-(void)peripheralManager:(id)arg1 didReceiveReadRequest:(id)arg2 ;
-(void)setPublishedServices:(NSMutableDictionary *)arg1 ;
-(void)update;
-(id)advertisingRulesOSX;
-(id)getManager;
-(void)removeAdvertisingRequest:(id)arg1 forDaemon:(id)arg2 ;
-(void)setNonConnectablePeripheralManager:(CBPeripheralManager *)arg1 ;
-(id)addAdvertisingRequest:(id)arg1 forClient:(id)arg2 ;
-(WPDAdvertisingData *)currentConnectableAdvertisingData;
-(void)setAdvertisingRequests:(WPAdvertisingRequestsQueue *)arg1 ;
-(BOOL)platformSupportsMultipleAdvertising;
-(void)setConnectablePeripheralManager:(CBPeripheralManager *)arg1 ;
-(NSMutableDictionary *)clientAdvertisingRequests;
-(id)clientForAdvRequest:(id)arg1 ;
-(id)getCurrentAdvertisers;
-(NSIndexSet *)rangingTypes;
-(void)peripheralManager:(id)arg1 central:(id)arg2 didSubscribeToCharacteristic:(id)arg3 ;
-(WPDAdvertisingData *)currentNonConnectableAdvertisingData;
-(void)setClientsToNotifyOnAddressChange:(NSMutableSet *)arg1 ;
-(void)peripheralManager:(id)arg1 didReceiveWriteRequests:(id)arg2 ;
-(BOOL)heySiriAdvertActive:(BOOL)arg1 ;
-(void)enableRanging:(BOOL)arg1 forClient:(id)arg2 ;
-(void)peripheralManager:(id)arg1 didStopAdvertisingWithError:(id)arg2 ;
-(BOOL)isRanging;
-(void)informClientsAdvertisingPending:(id)arg1 ;
-(CBPeripheralManager *)connectablePeripheralManager;
-(void)updateAdvertiser;
-(void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2 ;
-(CBPeripheralManager *)nonConnectablePeripheralManager;
-(NSMutableIndexSet *)currentAdvertisers;
-(BOOL)isAdvertiserTestMode;
-(id)NSUUIDfromCBUUID:(id)arg1 ;
-(void)addCharacteristic:(id)arg1 forService:(id)arg2 forClient:(id)arg3 ;
-(void)removeServiceForClient:(id)arg1 ;
-(void)setRangingClients:(NSMutableSet *)arg1 ;
-(void)setPreallocatedServices:(NSMutableDictionary *)arg1 ;
-(id)getClientUUIDsForCharacteristic:(id)arg1 ;
-(NSMutableSet *)clientsToNotifyOnAddressChange;
-(void)setClientAdvertisingRequests:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)preallocatedServices;
@end

