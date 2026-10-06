// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesCommunicationChannelEndpoint
// Superclass: NSObject
// Address: 0x112b58550

@interface SCSpectaclesCommunicationChannelEndpoint

// Property: channelType; attributes: Tq,R,N,V_channelType
// Property: wifiSSID; attributes: T@"NSString",R,C,N,V_wifiSSID
// Property: networkURL; attributes: T@"NSURL",R,N,V_networkURL
// Property: interpretNilSSIDAsUnknown; attributes: TB,R,N,V_interpretNilSSIDAsUnknown
// Property: BTCAccessory; attributes: T@"EAAccessory",R,N,V_BTCAccessory
// Property: BLEPeripheral; attributes: T@"CBPeripheral",R,N,V_BLEPeripheral
// Property: serviceUUID; attributes: T@"CBUUID",R,N,V_serviceUUID
// Property: txCharacteristicUUID; attributes: T@"CBUUID",R,N,V_txCharacteristicUUID
// Property: rxCharacteristicUUID; attributes: T@"CBUUID",R,N,V_rxCharacteristicUUID

// -[SCSpectaclesCommunicationChannelEndpoint channelType]
// Type encoding: q16@0:8
// Implementation: 0x106fd2508

// -[SCSpectaclesCommunicationChannelEndpoint wifiSSID]
// Type encoding: @16@0:8
// Implementation: 0x106fd2510

// -[SCSpectaclesCommunicationChannelEndpoint networkURL]
// Type encoding: @16@0:8
// Implementation: 0x106fd2518

// -[SCSpectaclesCommunicationChannelEndpoint interpretNilSSIDAsUnknown]
// Type encoding: B16@0:8
// Implementation: 0x106fd2520

// -[SCSpectaclesCommunicationChannelEndpoint BTCAccessory]
// Type encoding: @16@0:8
// Implementation: 0x106fd2528

// -[SCSpectaclesCommunicationChannelEndpoint BLEPeripheral]
// Type encoding: @16@0:8
// Implementation: 0x106fd2530

// -[SCSpectaclesCommunicationChannelEndpoint serviceUUID]
// Type encoding: @16@0:8
// Implementation: 0x106fd2538

// -[SCSpectaclesCommunicationChannelEndpoint txCharacteristicUUID]
// Type encoding: @16@0:8
// Implementation: 0x106fd2540

// -[SCSpectaclesCommunicationChannelEndpoint rxCharacteristicUUID]
// Type encoding: @16@0:8
// Implementation: 0x106fd2548

// -[SCSpectaclesCommunicationChannelEndpoint .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106fd2550

// +[SCSpectaclesCommunicationChannelEndpoint endpointWithNetworkURL:wifiSSID:interpretNilSSIDAsUnknown:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x106fd232c

// +[SCSpectaclesCommunicationChannelEndpoint endpointWithBTCAccessory:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fd23c4

// +[SCSpectaclesCommunicationChannelEndpoint endpointWithBLEPeripheral:serviceUUID:txCharacteristicUUID:rxCharacteristicUUID:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106fd2424

@end
