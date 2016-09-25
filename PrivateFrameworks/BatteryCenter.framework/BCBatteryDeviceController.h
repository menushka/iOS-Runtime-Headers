/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BatteryCenter.framework/BatteryCenter
 */

@interface BCBatteryDeviceController : NSObject {
    struct __CFRunLoopSource { } * _accessoriesChangedRunLoopSource;
    struct __CFRunLoopSource { } * _accessoriesLimitedPowerRunLoopSource;
    BOOL  _chargeChangeHandlingDisabled;
    NSMutableDictionary * _devicesByIdentifier;
    NSMapTable * _handlersByIdentifier;
    struct __CFRunLoopSource { } * _powerSourcesChangedRunLoopSource;
    NSObject<OS_dispatch_queue> * _queue;
    NSArray * _sortedDevices;
}

@property (nonatomic, readonly) NSArray *connectedDevices;
@property (nonatomic, readonly) NSString *connectedDevicesDidChangeNotificationName;
@property (nonatomic, readonly) NSArray *connectedDevicesIncludingMissingParts;

+ (id)_glyphForFirstPartyBatteryDeviceWithBaseIdentifier:(id)arg1 parts:(unsigned int)arg2;
+ (id)_glyphsForBatteryDevice:(id)arg1;
+ (id)_glyphsForFirstPartyBatteryDevice:(id)arg1;
+ (id)_internalBatteryDeviceGlyph;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_baseIdentifierFromPowerSourceDescription:(id)arg1;
- (id)_deviceByCoalescingDevice:(id)arg1;
- (int)_displayChargePercentForCurrentCapacity:(id)arg1 andMaxCapacity:(id)arg2 updateZeroValue:(BOOL)arg3;
- (BOOL)_displayIsChargingFromPowerSourceDescription:(id)arg1;
- (id)_displayNameForBaseIdentifier:(id)arg1 andParts:(unsigned int)arg2 fromPowerSourceDescription:(id)arg3;
- (id)_groupNameForBaseIdentifier:(id)arg1 fromPowerSourceDescription:(id)arg2;
- (void)_handlePSChange;
- (id)_identifierFromPowerSourceDescription:(id)arg1;
- (void)_incrementNumberOfConnectedDevices:(BOOL)arg1;
- (void)_incrementPercentChargeForConnectedDevices:(BOOL)arg1;
- (BOOL)_isDevicePartOfPairWithBaseIdentifier:(id)arg1 matchIdentifier:(id)arg2 andPart:(unsigned int)arg3;
- (struct CGSize { float x1; float x2; })_largestBatteryDeviceGlyphSize;
- (int)_lowBatteryLevelForBaseIdentifier:(id)arg1 fromPowerSourceDescription:(id)arg2;
- (id)_matchIdentifierFromPowerSourceDescription:(id)arg1;
- (id)_orderedFirstPartyAccessoryIdentifiers;
- (unsigned int)_partsFromPowerSourceDescription:(id)arg1;
- (void)_postDidChangeNotification;
- (int)_powerSourceStateFromPowerSourceDescription:(id)arg1;
- (int)_productIdentifierFromPowerSourceDescription:(id)arg1;
- (void)_queue_addDeviceChangeHandler:(id /* block */)arg1 withIdentifier:(id)arg2;
- (id)_queue_batteryDeviceWithIdentifier:(id)arg1;
- (void)_queue_callHandlersForDevice:(id)arg1;
- (id)_queue_connectedDevices;
- (id)_queue_connectedDevicesIncludingMissingParts;
- (void)_queue_handlePSChange;
- (void)_queue_invalidateConnectedDevices;
- (void)_queue_performUpdateWithPowerSourcesBlob:(void*)arg1 andPowerSourcesList:(struct __CFArray { }*)arg2;
- (void)_queue_removeBatteryDevicesWithIdentifiers:(id)arg1;
- (void)_queue_removeDeviceChangeHandlerWithIdentifier:(id)arg1;
- (void)_queue_setBatteryDevice:(id)arg1 forIdentifier:(id)arg2;
- (void)_reenableChargeChangeHandling;
- (id)_remainingPartsOfDeviceWithPart:(id)arg1;
- (BOOL)_shouldCoalesceDevices:(id)arg1 minimumPercentCharge:(int*)arg2;
- (BOOL)_shouldConsiderDeviceWithPowerSourceDescription:(id)arg1;
- (int)_transportTypeFromPowerSourceDescription:(id)arg1;
- (int)_vendorFromPowerSourceDescription:(id)arg1;
- (void)addDeviceChangeHandler:(id /* block */)arg1 withIdentifier:(id)arg2;
- (id)connectedDevices;
- (id)connectedDevicesDidChangeNotificationName;
- (id)connectedDevicesIncludingMissingParts;
- (void)connectedDevicesIncludingMissingPartsWithResult:(id /* block */)arg1;
- (void)connectedDevicesWithResult:(id /* block */)arg1;
- (void)dealloc;
- (id)init;
- (void)removeDeviceChangeHandlerWithIdentifier:(id)arg1;

@end
