// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesWiFiClientController
// Superclass: NSObject
// Address: 0x112b4b828

@interface SCSpectaclesWiFiClientController

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: transferChannel; attributes: Tq,R,N
// Property: state; attributes: TQ,R,N
// Property: timeout; attributes: Td,N,V_timeout

// -[SCSpectaclesWiFiClientController initWithDevice:connectionHub:delegate:wiFiNetworksControllerFactory:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106f70b44

// -[SCSpectaclesWiFiClientController transferChannel]
// Type encoding: q16@0:8
// Implementation: 0x106f711b0

// -[SCSpectaclesWiFiClientController state]
// Type encoding: Q16@0:8
// Implementation: 0x106f711b8

// -[SCSpectaclesWiFiClientController connect]
// Type encoding: v16@0:8
// Implementation: 0x106f71230

// -[SCSpectaclesWiFiClientController reConnectClient]
// Type encoding: v16@0:8
// Implementation: 0x106f712a8

// -[SCSpectaclesWiFiClientController disconnect]
// Type encoding: v16@0:8
// Implementation: 0x106f7133c

// -[SCSpectaclesWiFiClientController client]
// Type encoding: @16@0:8
// Implementation: 0x106f713ac

// -[SCSpectaclesWiFiClientController handleResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f713f4

// -[SCSpectaclesWiFiClientController responseMonitorState]
// Type encoding: q16@0:8
// Implementation: 0x106f71478

// -[SCSpectaclesWiFiClientController wiFiNetworksControllerConnectedWiFiNetwork:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f71480

// -[SCSpectaclesWiFiClientController wiFiNetworksController:failedWithError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106f714ec

// -[SCSpectaclesWiFiClientController communicationClientDidBecomeActive:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f715e4

// -[SCSpectaclesWiFiClientController communicationClient:didError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106f7165c

// -[SCSpectaclesWiFiClientController _startWiFiAPOnSpectacles]
// Type encoding: v16@0:8
// Implementation: 0x106f71714

// -[SCSpectaclesWiFiClientController _joinWiFiNetwork]
// Type encoding: v16@0:8
// Implementation: 0x106f71ae4

// -[SCSpectaclesWiFiClientController _connectClient]
// Type encoding: v16@0:8
// Implementation: 0x106f71c48

// -[SCSpectaclesWiFiClientController _clientConnected]
// Type encoding: v16@0:8
// Implementation: 0x106f71e78

// -[SCSpectaclesWiFiClientController _reConnectClient]
// Type encoding: v16@0:8
// Implementation: 0x106f71fec

// -[SCSpectaclesWiFiClientController _connectClientAfterDelay]
// Type encoding: v16@0:8
// Implementation: 0x106f72164

// -[SCSpectaclesWiFiClientController _interrupt]
// Type encoding: v16@0:8
// Implementation: 0x106f7237c

// -[SCSpectaclesWiFiClientController _wifiAPStoppedOnSpectacles]
// Type encoding: v16@0:8
// Implementation: 0x106f7255c

// -[SCSpectaclesWiFiClientController _stateTimeout]
// Type encoding: v16@0:8
// Implementation: 0x106f72688

// -[SCSpectaclesWiFiClientController _stateTimeoutWhileDisconnecting]
// Type encoding: v16@0:8
// Implementation: 0x106f72714

// -[SCSpectaclesWiFiClientController _updateStateTimeout]
// Type encoding: v16@0:8
// Implementation: 0x106f72840

// -[SCSpectaclesWiFiClientController _handleStateTimeoutTimer]
// Type encoding: v16@0:8
// Implementation: 0x106f728d4

// -[SCSpectaclesWiFiClientController _createWifiNetworksController]
// Type encoding: B16@0:8
// Implementation: 0x106f729e8

// -[SCSpectaclesWiFiClientController _startWiFiOnSpectacles]
// Type encoding: v16@0:8
// Implementation: 0x106f72b7c

// -[SCSpectaclesWiFiClientController _stopWiFiOnSpectacles]
// Type encoding: v16@0:8
// Implementation: 0x106f72fb4

// -[SCSpectaclesWiFiClientController _deviceWiFiURL]
// Type encoding: @16@0:8
// Implementation: 0x106f73130

// -[SCSpectaclesWiFiClientController _ssidPassword]
// Type encoding: @16@0:8
// Implementation: 0x106f73258

// -[SCSpectaclesWiFiClientController timeout]
// Type encoding: d16@0:8
// Implementation: 0x106f73340

// -[SCSpectaclesWiFiClientController setTimeout:]
// Type encoding: v24@0:8d16
// Implementation: 0x106f73348

// -[SCSpectaclesWiFiClientController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106f73350

@end
