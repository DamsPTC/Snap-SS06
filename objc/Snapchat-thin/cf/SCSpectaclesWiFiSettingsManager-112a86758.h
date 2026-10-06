// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesWiFiSettingsManager
// Superclass: NSObject
// Address: 0x112a86758

@interface SCSpectaclesWiFiSettingsManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: wifiStatus; attributes: T@"SCObservable",R,N,V_wifiStatus
// Property: wifiNetworkList; attributes: T@"SCObservable",R,N,V_wifiNetworkList
// Property: connectingWiFiSSID; attributes: T@"SCObservable",R,N,V_connectingWiFiSSID
// Property: connectWiFiError; attributes: T@"SCObservable",R,N,V_connectWiFiError
// Property: forgetWiFiError; attributes: T@"SCObservable",R,N,V_forgetWiFiError

// -[SCSpectaclesWiFiSettingsManager initWithCurrentDevice:connectionHub:ssidScanner:onDemandResourceFetching:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x105a6b254

// -[SCSpectaclesWiFiSettingsManager _handleSsidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a6b724

// -[SCSpectaclesWiFiSettingsManager _shouldForceBoot]
// Type encoding: B16@0:8
// Implementation: 0x105a6b780

// -[SCSpectaclesWiFiSettingsManager isWiFiSettingsAccessible]
// Type encoding: B16@0:8
// Implementation: 0x105a6b7b8

// -[SCSpectaclesWiFiSettingsManager currentPhoneWiFiSSID]
// Type encoding: @16@0:8
// Implementation: 0x105a6b878

// -[SCSpectaclesWiFiSettingsManager connectedDeviceWiFiSSID]
// Type encoding: @16@0:8
// Implementation: 0x105a6b8a0

// -[SCSpectaclesWiFiSettingsManager _requestDevicePowerStateIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x105a6b8fc

// -[SCSpectaclesWiFiSettingsManager requestAvailableWiFiNetworksAsync]
// Type encoding: v16@0:8
// Implementation: 0x105a6b9cc

// -[SCSpectaclesWiFiSettingsManager requestWiFiNetworkStatusAsync]
// Type encoding: v16@0:8
// Implementation: 0x105a6ba78

// -[SCSpectaclesWiFiSettingsManager enableSpectaclesWiFiSettings:]
// Type encoding: v20@0:8B16
// Implementation: 0x105a6bb10

// -[SCSpectaclesWiFiSettingsManager connectWiFiWithSSID:password:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a6bb74

// -[SCSpectaclesWiFiSettingsManager forgetWiFiWithSSID:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a6bc78

// -[SCSpectaclesWiFiSettingsManager canForgetWiFi]
// Type encoding: B16@0:8
// Implementation: 0x105a6bcbc

// -[SCSpectaclesWiFiSettingsManager wifiNetworkForSSID:]
// Type encoding: @24@0:8@16
// Implementation: 0x105a6bcf4

// -[SCSpectaclesWiFiSettingsManager supportProxyNetwork]
// Type encoding: B16@0:8
// Implementation: 0x105a6be40

// -[SCSpectaclesWiFiSettingsManager _resetConnectWiFiRequestTimer]
// Type encoding: v16@0:8
// Implementation: 0x105a6be78

// -[SCSpectaclesWiFiSettingsManager _startConnectWiFiRequestTimer]
// Type encoding: v16@0:8
// Implementation: 0x105a6bea4

// -[SCSpectaclesWiFiSettingsManager _connectWiFiRequestTimeout:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a6befc

// -[SCSpectaclesWiFiSettingsManager _resetCurrentlyConnectingSSIDIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x105a6bf94

// -[SCSpectaclesWiFiSettingsManager _setCurrentlyConnectingSSID:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a6c074

// -[SCSpectaclesWiFiSettingsManager _didUpdateWiFiNetworkStatus:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a6c0fc

// -[SCSpectaclesWiFiSettingsManager _didUpdateAvailableWiFiNetworks:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a6c3f4

// -[SCSpectaclesWiFiSettingsManager _didFailToConnectToWiFi:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a6c4f4

// -[SCSpectaclesWiFiSettingsManager _didFailToForgetWiFi:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a6c53c

// -[SCSpectaclesWiFiSettingsManager _handlePowerState:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a6c544

// -[SCSpectaclesWiFiSettingsManager handleResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a6c630

// -[SCSpectaclesWiFiSettingsManager _handlePushMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a6cb20

// -[SCSpectaclesWiFiSettingsManager responseMonitorState]
// Type encoding: q16@0:8
// Implementation: 0x105a6cc60

// -[SCSpectaclesWiFiSettingsManager wifiStatus]
// Type encoding: @16@0:8
// Implementation: 0x105a6cc68

// -[SCSpectaclesWiFiSettingsManager wifiNetworkList]
// Type encoding: @16@0:8
// Implementation: 0x105a6cc70

// -[SCSpectaclesWiFiSettingsManager connectingWiFiSSID]
// Type encoding: @16@0:8
// Implementation: 0x105a6cc78

// -[SCSpectaclesWiFiSettingsManager connectWiFiError]
// Type encoding: @16@0:8
// Implementation: 0x105a6cc80

// -[SCSpectaclesWiFiSettingsManager forgetWiFiError]
// Type encoding: @16@0:8
// Implementation: 0x105a6cc88

// -[SCSpectaclesWiFiSettingsManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105a6cc90

@end
