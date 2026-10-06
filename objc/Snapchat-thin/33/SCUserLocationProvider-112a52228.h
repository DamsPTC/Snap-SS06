// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUserLocationProvider
// Superclass: NSObject
// Address: 0x112a52228

@interface SCUserLocationProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: isNextGen; attributes: TB,R,N
// Property: location; attributes: T@"CLLocation",R
// Property: heading; attributes: T@"CLHeading",R

// -[SCUserLocationProvider initWithUserLocationPermissionsManager:locationManager:appStartExperimentReader:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x100506e88

// -[SCUserLocationProvider isNextGen]
// Type encoding: B16@0:8
// Implementation: 0x10050731c

// -[SCUserLocationProvider location]
// Type encoding: @16@0:8
// Implementation: 0x10059bfb0

// -[SCUserLocationProvider heading]
// Type encoding: @16@0:8
// Implementation: 0x1056029b0

// -[SCUserLocationProvider locationUpdateObservable]
// Type encoding: @16@0:8
// Implementation: 0x10058b264

// -[SCUserLocationProvider visitObservable]
// Type encoding: @16@0:8
// Implementation: 0x10058b830

// -[SCUserLocationProvider _createLocationUpdateObservable]
// Type encoding: @16@0:8
// Implementation: 0x10058b35c

// -[SCUserLocationProvider requestActiveLocationUpdatesWithRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056029b8

// -[SCUserLocationProvider requestLocationWithTimeout:desiredAccuracy:observerAttributedFeature:callbackQueue:callback:]
// Type encoding: v56@0:8d16Q24@32@40@?48
// Implementation: 0x105602aac

// -[SCUserLocationProvider locationObserverDispatchQueue]
// Type encoding: @16@0:8
// Implementation: 0x105602d5c

// -[SCUserLocationProvider locationObserverAttributedFeature]
// Type encoding: @16@0:8
// Implementation: 0x10058b56c

// -[SCUserLocationProvider locationObserverWantsActiveLocationMonitoring]
// Type encoding: B16@0:8
// Implementation: 0x10058c100

// -[SCUserLocationProvider onLocationUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105602d64

// -[SCUserLocationProvider onLocationVisit:significantChangeMonitoringAvailable:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105602e70

// -[SCUserLocationProvider _announceLocationUpdate]
// Type encoding: v16@0:8
// Implementation: 0x105602f84

// -[SCUserLocationProvider onLocationHeadingChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x105602fc8

// -[SCUserLocationProvider _announceHeadingUpdate]
// Type encoding: v16@0:8
// Implementation: 0x1056030d4

// -[SCUserLocationProvider onLocationError:]
// Type encoding: v24@0:8@16
// Implementation: 0x105603118

// -[SCUserLocationProvider _onAuthorizationChangedWithStatus:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10560316c

// -[SCUserLocationProvider _updateHasLocationAuthorization:]
// Type encoding: v20@0:8B16
// Implementation: 0x1056031fc

// -[SCUserLocationProvider _fetchAndStoreLocationPermissionsWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1005070a0

// -[SCUserLocationProvider _performLocationRequestWithTimeout:desiredAccuracy:observerAttributedFeature:callbackQueue:callback:]
// Type encoding: v56@0:8d16Q24@32@40@?48
// Implementation: 0x105603260

// -[SCUserLocationProvider _hasLocationAuthorization]
// Type encoding: B16@0:8
// Implementation: 0x10560346c

// -[SCUserLocationProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10560348c

@end
