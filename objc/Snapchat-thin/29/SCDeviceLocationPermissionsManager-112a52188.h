// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDeviceLocationPermissionsManager
// Superclass: NSObject
// Address: 0x112a52188

@interface SCDeviceLocationPermissionsManager

// Property: lastAuthorizationStatus; attributes: TQ,R
// Property: lastAuthorized; attributes: TB,R
// Property: hasAuthorizationStatus; attributes: TB,R
// Property: coreLocationAuthorizationStatus; attributes: Ti,R
// Property: locationAccuracy; attributes: TQ,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDeviceLocationPermissionsManager initWithLocationAuthorizationManager:circumstanceEngine:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100127f5c

// -[SCDeviceLocationPermissionsManager lastAuthorized]
// Type encoding: B16@0:8
// Implementation: 0x10058d4a4

// -[SCDeviceLocationPermissionsManager coreLocationAuthorizationStatus]
// Type encoding: i16@0:8
// Implementation: 0x100c78fe8

// -[SCDeviceLocationPermissionsManager lastAuthorizationStatus]
// Type encoding: Q16@0:8
// Implementation: 0x100c78fbc

// -[SCDeviceLocationPermissionsManager hasAuthorizationStatus]
// Type encoding: B16@0:8
// Implementation: 0x1055ff0fc

// -[SCDeviceLocationPermissionsManager locationAccuracy]
// Type encoding: Q16@0:8
// Implementation: 0x1055ff104

// -[SCDeviceLocationPermissionsManager fetchLocationAuthorizationStatus:onQueue:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x1005072b4

// -[SCDeviceLocationPermissionsManager fetchLocationAuthorized:onQueue:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x100128198

// -[SCDeviceLocationPermissionsManager requestLocationAuthorizationWithHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1055ff10c

// -[SCDeviceLocationPermissionsManager permissionsUpdateObservable]
// Type encoding: @16@0:8
// Implementation: 0x100506da8

// -[SCDeviceLocationPermissionsManager onLocationAccuracyChange:]
// Type encoding: v24@0:8Q16
// Implementation: 0x100c73d08

// -[SCDeviceLocationPermissionsManager onLocationAuthorizationStatusChange:]
// Type encoding: v20@0:8i16
// Implementation: 0x100c738d0

// -[SCDeviceLocationPermissionsManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1055ff114

@end
