// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesBLEClientController
// Superclass: NSObject
// Address: 0x112b4b6e8

@interface SCSpectaclesBLEClientController

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: transferChannel; attributes: Tq,R,N
// Property: state; attributes: TQ,R,N
// Property: timeout; attributes: Td,N,Vtimeout

// -[SCSpectaclesBLEClientController initWithDevice:peripheralResponseHandler:connectionHub:delegate:centralManager:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x106f6c9cc

// -[SCSpectaclesBLEClientController _unpairReasonFromConnectionFailure]
// Type encoding: Q16@0:8
// Implementation: 0x106f6d034

// -[SCSpectaclesBLEClientController transferChannel]
// Type encoding: q16@0:8
// Implementation: 0x106f6d0a4

// -[SCSpectaclesBLEClientController state]
// Type encoding: Q16@0:8
// Implementation: 0x106f6d0ac

// -[SCSpectaclesBLEClientController connect]
// Type encoding: v16@0:8
// Implementation: 0x106f6d0e4

// -[SCSpectaclesBLEClientController reConnectClient]
// Type encoding: v16@0:8
// Implementation: 0x106f6d1e8

// -[SCSpectaclesBLEClientController disconnect]
// Type encoding: v16@0:8
// Implementation: 0x106f6d2f8

// -[SCSpectaclesBLEClientController client]
// Type encoding: @16@0:8
// Implementation: 0x106f6d3f4

// -[SCSpectaclesBLEClientController bleMonitor:didFindPeripheral:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106f6d41c

// -[SCSpectaclesBLEClientController bleMonitor:didConnectPeripheral:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106f6d420

// -[SCSpectaclesBLEClientController bleMonitor:didDisconnectPeripheral:reason:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x106f6d584

// -[SCSpectaclesBLEClientController peripheralRequiresEncryptionSetup:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f6d798

// -[SCSpectaclesBLEClientController peripheralDidOpenStream:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f6d91c

// -[SCSpectaclesBLEClientController peripheral:didReceiveResponse:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106f6da64

// -[SCSpectaclesBLEClientController peripheral:didReceiveEncryptionResponse:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106f6dc9c

// -[SCSpectaclesBLEClientController peripheral:didFailWithError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106f6dca0

// -[SCSpectaclesBLEClientController communicationClientDidBecomeActive:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f6de48

// -[SCSpectaclesBLEClientController communicationClient:didError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106f6df6c

// -[SCSpectaclesBLEClientController _checkForExistingConnection]
// Type encoding: v16@0:8
// Implementation: 0x106f6e0d8

// -[SCSpectaclesBLEClientController _connectCoreBluetoothPeripheral]
// Type encoding: v16@0:8
// Implementation: 0x106f6e320

// -[SCSpectaclesBLEClientController _setupConnectedCoreBluetoothPeripheral]
// Type encoding: v16@0:8
// Implementation: 0x106f6e400

// -[SCSpectaclesBLEClientController _createSpectaclesPeripheralAndOpenStream]
// Type encoding: v16@0:8
// Implementation: 0x106f6e430

// -[SCSpectaclesBLEClientController _connectClient]
// Type encoding: v16@0:8
// Implementation: 0x106f6e4b8

// -[SCSpectaclesBLEClientController _clientConnected]
// Type encoding: v16@0:8
// Implementation: 0x106f6e5e8

// -[SCSpectaclesBLEClientController _interrupt]
// Type encoding: v16@0:8
// Implementation: 0x106f6e6a8

// -[SCSpectaclesBLEClientController _startEncryptionSetupTimer]
// Type encoding: v16@0:8
// Implementation: 0x106f6e768

// -[SCSpectaclesBLEClientController _stopEncryptionSetupTimer]
// Type encoding: v16@0:8
// Implementation: 0x106f6e7d0

// -[SCSpectaclesBLEClientController _encryptionSetupDidTimeout]
// Type encoding: v16@0:8
// Implementation: 0x106f6e7fc

// -[SCSpectaclesBLEClientController timeout]
// Type encoding: d16@0:8
// Implementation: 0x106f6e8e4

// -[SCSpectaclesBLEClientController setTimeout:]
// Type encoding: v24@0:8d16
// Implementation: 0x106f6e8ec

// -[SCSpectaclesBLEClientController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106f6e8f4

@end
