// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesHomeDeviceStatusProvider
// Superclass: NSObject
// Address: 0x112a240f8

@interface SCSpectaclesHomeDeviceStatusProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: bluetoothConnectionStatusObservable; attributes: T@"SCBridgeObservable",&,N,V_bluetoothConnectionStatusObservable
// Property: wifiConnectionStatusObservable; attributes: T@"SCBridgeObservable",&,N,V_wifiConnectionStatusObservable
// Property: batteryStatusObservable; attributes: T@"SCBridgeObservable",&,N,V_batteryStatusObservable

// -[SCSpectaclesHomeDeviceStatusProvider initWithSpectaclesDevice:spectaclesManager:spectaclesAppStatusProvider:wifiSettingsManager:currentPhoneDeviceName:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x105235538

// -[SCSpectaclesHomeDeviceStatusProvider pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x105235720

// -[SCSpectaclesHomeDeviceStatusProvider _setupStatusObservations]
// Type encoding: v16@0:8
// Implementation: 0x10523572c

// -[SCSpectaclesHomeDeviceStatusProvider _refreshAllStatusWithDelay]
// Type encoding: v16@0:8
// Implementation: 0x105235af8

// -[SCSpectaclesHomeDeviceStatusProvider _refreshAllStatus]
// Type encoding: v16@0:8
// Implementation: 0x105235be8

// -[SCSpectaclesHomeDeviceStatusProvider _refreshBatteryStatus]
// Type encoding: v16@0:8
// Implementation: 0x105235c14

// -[SCSpectaclesHomeDeviceStatusProvider _refreshBluetoothStatus]
// Type encoding: v16@0:8
// Implementation: 0x105235d10

// -[SCSpectaclesHomeDeviceStatusProvider _connectionStateFromAppState:]
// Type encoding: i24@0:8q16
// Implementation: 0x105235ea0

// -[SCSpectaclesHomeDeviceStatusProvider _refreshWiFiStatus]
// Type encoding: v16@0:8
// Implementation: 0x105235eb0

// -[SCSpectaclesHomeDeviceStatusProvider _refreshStatusIfNeededWithNewDeviceState:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052360a0

// -[SCSpectaclesHomeDeviceStatusProvider spectaclesDeviceDidUpdateState:]
// Type encoding: v24@0:8@16
// Implementation: 0x105236154

// -[SCSpectaclesHomeDeviceStatusProvider spectaclesDevice:didUpdateInfo:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105236168

// -[SCSpectaclesHomeDeviceStatusProvider statusCoordinator:needsToUpdateStateForDevice:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105236188

// -[SCSpectaclesHomeDeviceStatusProvider batteryStatusObservable]
// Type encoding: @16@0:8
// Implementation: 0x10523619c

// -[SCSpectaclesHomeDeviceStatusProvider setBatteryStatusObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052361a4

// -[SCSpectaclesHomeDeviceStatusProvider bluetoothConnectionStatusObservable]
// Type encoding: @16@0:8
// Implementation: 0x1052361d4

// -[SCSpectaclesHomeDeviceStatusProvider setBluetoothConnectionStatusObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052361dc

// -[SCSpectaclesHomeDeviceStatusProvider wifiConnectionStatusObservable]
// Type encoding: @16@0:8
// Implementation: 0x10523620c

// -[SCSpectaclesHomeDeviceStatusProvider setWifiConnectionStatusObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105236214

// -[SCSpectaclesHomeDeviceStatusProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105236244

@end
