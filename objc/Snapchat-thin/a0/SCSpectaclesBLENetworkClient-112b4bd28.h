// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesBLENetworkClient
// Superclass: NSObject
// Address: 0x112b4bd28

@interface SCSpectaclesBLENetworkClient

// Property: connectivityDelegate; attributes: T@"<SCSpectaclesCommunicationClientConnectivityDelegate>",W,N,V_connectivityDelegate
// Property: messagingDelegate; attributes: T@"<SCSpectaclesCommunicationClientMessagingDelegate>",W,N,V_messagingDelegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesBLENetworkClient initWithPeripheral:rpcMessageFactory:connectivityDelegate:messagingDelegate:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106f7ba30

// -[SCSpectaclesBLENetworkClient cancelOutstandingRequest]
// Type encoding: v16@0:8
// Implementation: 0x106f7bbc0

// -[SCSpectaclesBLENetworkClient halt]
// Type encoding: v16@0:8
// Implementation: 0x106f7bbc4

// -[SCSpectaclesBLENetworkClient isActive]
// Type encoding: B16@0:8
// Implementation: 0x106f7bbcc

// -[SCSpectaclesBLENetworkClient isConnected]
// Type encoding: B16@0:8
// Implementation: 0x106f7bbd4

// -[SCSpectaclesBLENetworkClient sendRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f7bbdc

// -[SCSpectaclesBLENetworkClient start]
// Type encoding: v16@0:8
// Implementation: 0x106f7bd74

// -[SCSpectaclesBLENetworkClient suspend]
// Type encoding: v16@0:8
// Implementation: 0x106f7bdbc

// -[SCSpectaclesBLENetworkClient _fireBLERequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f7bdc8

// -[SCSpectaclesBLENetworkClient _startMonitoringStream]
// Type encoding: v16@0:8
// Implementation: 0x106f7bf98

// -[SCSpectaclesBLENetworkClient _stopMonitoringStream]
// Type encoding: v16@0:8
// Implementation: 0x106f7bff4

// -[SCSpectaclesBLENetworkClient _handlePeripheralResponse:requestMessage:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106f7c058

// -[SCSpectaclesBLENetworkClient _dequeuePendingRPCRequestForResponse:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f7c0bc

// -[SCSpectaclesBLENetworkClient peripheral:didFailWithError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106f7c214

// -[SCSpectaclesBLENetworkClient peripheral:didReceiveEncryptionResponse:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106f7c2a4

// -[SCSpectaclesBLENetworkClient peripheral:didReceiveResponse:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106f7c30c

// -[SCSpectaclesBLENetworkClient peripheralDidOpenStream:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f7c498

// -[SCSpectaclesBLENetworkClient peripheralRequiresEncryptionSetup:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f7c4e0

// -[SCSpectaclesBLENetworkClient connectivityDelegate]
// Type encoding: @16@0:8
// Implementation: 0x106f7c528

// -[SCSpectaclesBLENetworkClient setConnectivityDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f7c540

// -[SCSpectaclesBLENetworkClient messagingDelegate]
// Type encoding: @16@0:8
// Implementation: 0x106f7c54c

// -[SCSpectaclesBLENetworkClient setMessagingDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f7c564

// -[SCSpectaclesBLENetworkClient .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106f7c570

@end
