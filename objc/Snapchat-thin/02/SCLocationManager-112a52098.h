// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLocationManager
// Superclass: NSObject
// Address: 0x112a52098

@interface SCLocationManager

// Property: currentAuthorizationStatus; attributes: Ti,R,N,V_currentAuthorizationStatus
// Property: hasAuthorizationStatus; attributes: TB,V_hasAuthorizationStatus
// Property: state; attributes: T@"SCLocationManagerState",C,V_state
// Property: location; attributes: T@"CLLocation",C,V_location
// Property: heading; attributes: T@"CLHeading",C,V_heading
// Property: lastAuthorizationStatus; attributes: Ti,V_lastAuthorizationStatus
// Property: lastLocationAccuracy; attributes: TQ,V_lastLocationAccuracy
// Property: isBackgrounded; attributes: TB,R
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: locationOperationUpdateObservable; attributes: T@"SCObservable",R
// Property: lastAuthorized; attributes: TB,R
// Property: locationAccuracy; attributes: TQ,R,N
// Property: permissionsUpdateObservable; attributes: T@"SCObservable",R,N

// -[SCLocationManager initWithApplicationLifecycleEvents:batteryLogger:userPreferences:circumstanceEngine:appStartExperimentReader:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1001277c0

// -[SCLocationManager locationOperationUpdateObservable]
// Type encoding: @16@0:8
// Implementation: 0x10058a638

// -[SCLocationManager _setLocationOperationsUpdateObservableOnBatteryLogger]
// Type encoding: v16@0:8
// Implementation: 0x100127a8c

// -[SCLocationManager _subscribeToLifecycleEvents]
// Type encoding: v16@0:8
// Implementation: 0x100127b74

// -[SCLocationManager _createLocationManagerIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x100c371ec

// -[SCLocationManager setVisitMonitoringEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1055fc770

// -[SCLocationManager setSignificantLocationChangeMonitoringEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1055fc7e8

// -[SCLocationManager addObserver:]
// Type encoding: v24@0:8@16
// Implementation: 0x10058b3b8

// -[SCLocationManager removeObserver:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055fc860

// -[SCLocationManager setObserverStateDidChangeForObserver:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055fcb20

// -[SCLocationManager lastAuthorized]
// Type encoding: B16@0:8
// Implementation: 0x10058d56c

// -[SCLocationManager locationAccuracy]
// Type encoding: Q16@0:8
// Implementation: 0x100c73c74

// -[SCLocationManager getCurrentAuthorizationStatusWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x100c3b470

// -[SCLocationManager isBackgrounded]
// Type encoding: B16@0:8
// Implementation: 0x10058b808

// -[SCLocationManager requestLocationPermissionWithCompletionHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1055fcc88

// -[SCLocationManager requestLocationPermissionWithRequestType:completionHandler:]
// Type encoding: v32@0:8Q16@?24
// Implementation: 0x1055fcc94

// -[SCLocationManager fetchLocationAuthorized:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1055fcfbc

// -[SCLocationManager fetchLocationAuthorized:onQueue:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x1001281a8

// -[SCLocationManager fetchLocationAuthorizationStatus:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1055fcfc8

// -[SCLocationManager fetchLocationAuthorizationStatus:onQueue:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x10012823c

// -[SCLocationManager _recalculateDesiredLocationSettingsFromSource:observerIdentifier:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10058c168

// -[SCLocationManager _locationManagerStateFromObservers]
// Type encoding: @16@0:8
// Implementation: 0x1055fd238

// -[SCLocationManager _disabledLocationManagerState]
// Type encoding: @16@0:8
// Implementation: 0x100c741bc

// -[SCLocationManager _didReceiveLocations:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055fd4fc

// -[SCLocationManager locationManager:didUpdateLocations:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1055fd848

// -[SCLocationManager _logLocationReceivedPerBucketIfNecessary:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055fd904

// -[SCLocationManager _logLocationReceivedForBucketIfNecessary:duration:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x1055fda78

// -[SCLocationManager locationManager:didUpdateHeading:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1055fdb08

// -[SCLocationManager locationManager:didFailWithError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1055fdd88

// -[SCLocationManager locationManager:didVisit:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1055fe0a4

// -[SCLocationManager locationManagerDidChangeAuthorization:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c72580

// -[SCLocationManager requestLocationWithTimeout:desiredAccuracy:observerAttributedFeature:callbackQueue:callback:]
// Type encoding: v56@0:8d16d24@32@40@?48
// Implementation: 0x1055fe3f0

// -[SCLocationManager _onApplicationDidBecomeActive]
// Type encoding: v16@0:8
// Implementation: 0x100c780c0

// -[SCLocationManager _onApplicationWillEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x1055fe4c8

// -[SCLocationManager _onApplicationDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x1055fe4cc

// -[SCLocationManager _onApplicationWillResignActive]
// Type encoding: v16@0:8
// Implementation: 0x1055fe4d0

// -[SCLocationManager _setAppBackgrounded]
// Type encoding: v16@0:8
// Implementation: 0x1055fe4d4

// -[SCLocationManager _setAppForegrounded]
// Type encoding: v16@0:8
// Implementation: 0x100c780c4

// -[SCLocationManager tweakDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055fe4ec

// -[SCLocationManager _appStateDescription]
// Type encoding: @16@0:8
// Implementation: 0x1055fe618

// -[SCLocationManager _logStartUpdatingLocationFromSource:observerIdentifier:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1055fe658

// -[SCLocationManager _logStopUpdatingLocationFromSource:observerIdentifier:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1055fe6d8

// -[SCLocationManager permissionsUpdateObservable]
// Type encoding: @16@0:8
// Implementation: 0x10012812c

// -[SCLocationManager location]
// Type encoding: @16@0:8
// Implementation: 0x10059bfb8

// -[SCLocationManager setLocation:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055fe758

// -[SCLocationManager heading]
// Type encoding: @16@0:8
// Implementation: 0x1055fe760

// -[SCLocationManager setHeading:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055fe76c

// -[SCLocationManager lastAuthorizationStatus]
// Type encoding: i16@0:8
// Implementation: 0x10058d58c

// -[SCLocationManager setLastAuthorizationStatus:]
// Type encoding: v20@0:8i16
// Implementation: 0x100c72b4c

// -[SCLocationManager hasAuthorizationStatus]
// Type encoding: B16@0:8
// Implementation: 0x1001283d4

// -[SCLocationManager setHasAuthorizationStatus:]
// Type encoding: v20@0:8B16
// Implementation: 0x100c72b44

// -[SCLocationManager currentAuthorizationStatus]
// Type encoding: i16@0:8
// Implementation: 0x1055fe774

// -[SCLocationManager state]
// Type encoding: @16@0:8
// Implementation: 0x100c74200

// -[SCLocationManager setState:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055fe77c

// -[SCLocationManager lastLocationAccuracy]
// Type encoding: Q16@0:8
// Implementation: 0x100c734f0

// -[SCLocationManager setLastLocationAccuracy:]
// Type encoding: v24@0:8Q16
// Implementation: 0x100c734f8

// -[SCLocationManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1055fe784

// +[SCLocationManager sharedInstanceWithApplicationLifecycleEvents:batteryLogger:userPreferences:circumstanceEngine:appStartExperimentReader:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x100123a08

@end
