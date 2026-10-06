// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesHomeWifiManager
// Superclass: NSObject
// Address: 0x112a84458

@interface SCSpectaclesHomeWifiManager

// Property: spectaclesManager; attributes: T@"<SCSpectaclesManaging>",W,N,V_spectaclesManager
// Property: spectaclesManagingDataFlow; attributes: T@"<SCSpectaclesManagingDataFlow>",W,N,V_spectaclesManagingDataFlow
// Property: analyticsLogger; attributes: T@"<SCSpectaclesAppLogger>",W,N,V_analyticsLogger
// Property: announcer; attributes: T@"SCSpectaclesHomeWifiManagerEventListenerAnnouncer",&,N,V_announcer
// Property: performer; attributes: T@"SCQueuePerformer",&,N,V_performer
// Property: state; attributes: TQ,N,V_state
// Property: device; attributes: T@"SCSpectaclesDevice",W,N,V_device
// Property: currentWifiSsid; attributes: T@"NSString",C,N,V_currentWifiSsid
// Property: wifiAPList; attributes: T@"NSMutableArray",&,N,V_wifiAPList
// Property: specsRefreshTokenInvalid; attributes: TB,N,V_specsRefreshTokenInvalid
// Property: pendingSnapsNotificationTimer; attributes: T@"SCWeakTimer",&,N,V_pendingSnapsNotificationTimer
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesHomeWifiManager initWithAuthorizationProvider:spectaclesManager:spectaclesManagingDataFlow:analyticsLogger:networkConnectivityServices:applicationLifecycleEvents:]
// Type encoding: @64@0:8@?16@24@32@40@48@56
// Implementation: 0x100c5b22c

// -[SCSpectaclesHomeWifiManager startMfiShareWifiCredentials]
// Type encoding: v16@0:8
// Implementation: 0x105a30dd0

// -[SCSpectaclesHomeWifiManager cancelMfiShareWifiCredentials]
// Type encoding: v16@0:8
// Implementation: 0x105a30ed4

// -[SCSpectaclesHomeWifiManager removeWifiNetwork:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a30fcc

// -[SCSpectaclesHomeWifiManager alreadyAddedCurrentNetwork]
// Type encoding: B16@0:8
// Implementation: 0x105a31380

// -[SCSpectaclesHomeWifiManager hasWifiNetworkRequiringCredentialsUpdate]
// Type encoding: B16@0:8
// Implementation: 0x105a31528

// -[SCSpectaclesHomeWifiManager wifiAPNeedsCredentialsUpdate:]
// Type encoding: B24@0:8@16
// Implementation: 0x105a31634

// -[SCSpectaclesHomeWifiManager currentFlowIsResharingCredentials]
// Type encoding: B16@0:8
// Implementation: 0x105a3168c

// -[SCSpectaclesHomeWifiManager addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a31708

// -[SCSpectaclesHomeWifiManager removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a31758

// -[SCSpectaclesHomeWifiManager spectaclesDeviceDidUpdateState:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a317d0

// -[SCSpectaclesHomeWifiManager spectaclesDevice:didReceiveCloudUploadEvent:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105a319e4

// -[SCSpectaclesHomeWifiManager spectaclesDevice:didReceiveClientId:requestAuthzCode:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x105a31f64

// -[SCSpectaclesHomeWifiManager spectaclesDevice:didReceiveWifiAPList:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a321b4

// -[SCSpectaclesHomeWifiManager _handleSsidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a3235c

// -[SCSpectaclesHomeWifiManager authorizationFailed:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105a32504

// -[SCSpectaclesHomeWifiManager dataFlowsRequest:executedTask:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a32508

// -[SCSpectaclesHomeWifiManager dataFlowsRequest:failedToExecutedTask:error:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105a32754

// -[SCSpectaclesHomeWifiManager dataFlowsRequestCompleted:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a328fc

// -[SCSpectaclesHomeWifiManager dataFlowsRequestCancelled:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a32a3c

// -[SCSpectaclesHomeWifiManager dataFlowsRequest:failedWithError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a32b7c

// -[SCSpectaclesHomeWifiManager applicationStartupComplete]
// Type encoding: v16@0:8
// Implementation: 0x100c871c4

// -[SCSpectaclesHomeWifiManager _transitionToState:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105a32cd0

// -[SCSpectaclesHomeWifiManager _wifiApFromListWithSsid:]
// Type encoding: @24@0:8@16
// Implementation: 0x105a33194

// -[SCSpectaclesHomeWifiManager _requestLastCloudUploadTime:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a332ec

// -[SCSpectaclesHomeWifiManager _pendingSnapsNotificationTimeout:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a333a4

// -[SCSpectaclesHomeWifiManager _connectedDevice]
// Type encoding: @16@0:8
// Implementation: 0x100c5b988

// -[SCSpectaclesHomeWifiManager sendAuthzCodeForDevice:authzCode:codeVerifier:redirectUri:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x105a33428

// -[SCSpectaclesHomeWifiManager sendAccessTokenForDevice:accessToken:refreshToken:expirationTimeMs:userId:]
// Type encoding: v56@0:8@16@24@32q40@48
// Implementation: 0x105a334c8

// -[SCSpectaclesHomeWifiManager requestClientId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a33570

// -[SCSpectaclesHomeWifiManager _startMfiSharingWiFiCredentials]
// Type encoding: v16@0:8
// Implementation: 0x105a335b8

// -[SCSpectaclesHomeWifiManager _cancelMfiSharingWiFiCredentials]
// Type encoding: v16@0:8
// Implementation: 0x105a33704

// -[SCSpectaclesHomeWifiManager _handleTaskCheckShareWifiCredentialsStatusCompleted:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a33750

// -[SCSpectaclesHomeWifiManager _handleTaskFailed:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a33968

// -[SCSpectaclesHomeWifiManager spectaclesManager]
// Type encoding: @16@0:8
// Implementation: 0x100c5bb40

// -[SCSpectaclesHomeWifiManager setSpectaclesManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a33b00

// -[SCSpectaclesHomeWifiManager spectaclesManagingDataFlow]
// Type encoding: @16@0:8
// Implementation: 0x105a33b0c

// -[SCSpectaclesHomeWifiManager setSpectaclesManagingDataFlow:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a33b24

// -[SCSpectaclesHomeWifiManager analyticsLogger]
// Type encoding: @16@0:8
// Implementation: 0x105a33b30

// -[SCSpectaclesHomeWifiManager setAnalyticsLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a33b48

// -[SCSpectaclesHomeWifiManager announcer]
// Type encoding: @16@0:8
// Implementation: 0x105a33b54

// -[SCSpectaclesHomeWifiManager setAnnouncer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a33b5c

// -[SCSpectaclesHomeWifiManager performer]
// Type encoding: @16@0:8
// Implementation: 0x105a33b8c

// -[SCSpectaclesHomeWifiManager setPerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a33b94

// -[SCSpectaclesHomeWifiManager state]
// Type encoding: Q16@0:8
// Implementation: 0x105a33bc4

// -[SCSpectaclesHomeWifiManager setState:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105a33bcc

// -[SCSpectaclesHomeWifiManager device]
// Type encoding: @16@0:8
// Implementation: 0x105a33bd4

// -[SCSpectaclesHomeWifiManager setDevice:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a33bec

// -[SCSpectaclesHomeWifiManager currentWifiSsid]
// Type encoding: @16@0:8
// Implementation: 0x105a33bf8

// -[SCSpectaclesHomeWifiManager setCurrentWifiSsid:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a33c00

// -[SCSpectaclesHomeWifiManager wifiAPList]
// Type encoding: @16@0:8
// Implementation: 0x105a33c08

// -[SCSpectaclesHomeWifiManager setWifiAPList:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a33c10

// -[SCSpectaclesHomeWifiManager specsRefreshTokenInvalid]
// Type encoding: B16@0:8
// Implementation: 0x105a33c40

// -[SCSpectaclesHomeWifiManager setSpecsRefreshTokenInvalid:]
// Type encoding: v20@0:8B16
// Implementation: 0x105a33c48

// -[SCSpectaclesHomeWifiManager pendingSnapsNotificationTimer]
// Type encoding: @16@0:8
// Implementation: 0x105a33c50

// -[SCSpectaclesHomeWifiManager setPendingSnapsNotificationTimer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a33c58

// -[SCSpectaclesHomeWifiManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105a33c88

// +[SCSpectaclesHomeWifiManager homeWifiStateToString:]
// Type encoding: @24@0:8Q16
// Implementation: 0x105a317a8

@end
