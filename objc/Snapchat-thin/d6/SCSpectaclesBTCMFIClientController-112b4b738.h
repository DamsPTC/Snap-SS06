// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesBTCMFIClientController
// Superclass: NSObject
// Address: 0x112b4b738

@interface SCSpectaclesBTCMFIClientController

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: transferChannel; attributes: Tq,R,N
// Property: state; attributes: TQ,R,N
// Property: timeout; attributes: Td,N,V_timeout

// -[SCSpectaclesBTCMFIClientController initWithDevice:connectionHub:delegate:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106f6e9a8

// -[SCSpectaclesBTCMFIClientController transferChannel]
// Type encoding: q16@0:8
// Implementation: 0x106f6ee80

// -[SCSpectaclesBTCMFIClientController state]
// Type encoding: Q16@0:8
// Implementation: 0x106f6ee88

// -[SCSpectaclesBTCMFIClientController connect]
// Type encoding: v16@0:8
// Implementation: 0x106f6eec0

// -[SCSpectaclesBTCMFIClientController reConnectClient]
// Type encoding: v16@0:8
// Implementation: 0x106f6efc4

// -[SCSpectaclesBTCMFIClientController disconnect]
// Type encoding: v16@0:8
// Implementation: 0x106f6f0e4

// -[SCSpectaclesBTCMFIClientController client]
// Type encoding: @16@0:8
// Implementation: 0x106f6f1e0

// -[SCSpectaclesBTCMFIClientController communicationClientDidBecomeActive:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f6f208

// -[SCSpectaclesBTCMFIClientController communicationClient:didError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106f6f32c

// -[SCSpectaclesBTCMFIClientController bluetoothDidConnect:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f6f498

// -[SCSpectaclesBTCMFIClientController bluetoothDidDisconnect:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f6f5a0

// -[SCSpectaclesBTCMFIClientController bluetoothNeedsPicker]
// Type encoding: v16@0:8
// Implementation: 0x106f6f6ac

// -[SCSpectaclesBTCMFIClientController bluetoothDetectedOverload]
// Type encoding: v16@0:8
// Implementation: 0x106f6f884

// -[SCSpectaclesBTCMFIClientController _startBTCOnSpectacles]
// Type encoding: v16@0:8
// Implementation: 0x106f6f974

// -[SCSpectaclesBTCMFIClientController _connectExternalAccessory]
// Type encoding: v16@0:8
// Implementation: 0x106f6fd34

// -[SCSpectaclesBTCMFIClientController _connectClient]
// Type encoding: v16@0:8
// Implementation: 0x106f6fde8

// -[SCSpectaclesBTCMFIClientController _clientConnected]
// Type encoding: v16@0:8
// Implementation: 0x106f6fefc

// -[SCSpectaclesBTCMFIClientController _interrupt]
// Type encoding: v16@0:8
// Implementation: 0x106f6ff7c

// -[SCSpectaclesBTCMFIClientController _BTCStoppedOnSpectacles]
// Type encoding: v16@0:8
// Implementation: 0x106f70014

// -[SCSpectaclesBTCMFIClientController _stateTimeoutWhileDisconnecting]
// Type encoding: v16@0:8
// Implementation: 0x106f7010c

// -[SCSpectaclesBTCMFIClientController _updateStateTimeout]
// Type encoding: v16@0:8
// Implementation: 0x106f70154

// -[SCSpectaclesBTCMFIClientController _handleStateTimeoutTimer]
// Type encoding: v16@0:8
// Implementation: 0x106f701e0

// -[SCSpectaclesBTCMFIClientController _stopBTCOnSpectacles]
// Type encoding: v16@0:8
// Implementation: 0x106f702c0

// -[SCSpectaclesBTCMFIClientController _getConnectedExternalAccessory]
// Type encoding: B16@0:8
// Implementation: 0x106f704b0

// -[SCSpectaclesBTCMFIClientController timeout]
// Type encoding: d16@0:8
// Implementation: 0x106f70538

// -[SCSpectaclesBTCMFIClientController setTimeout:]
// Type encoding: v24@0:8d16
// Implementation: 0x106f70540

// -[SCSpectaclesBTCMFIClientController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106f70548

@end
