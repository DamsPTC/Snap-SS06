// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesMalibuPeripheral
// Superclass: NSObject
// Address: 0x112b4c4a8

@interface SCSpectaclesMalibuPeripheral

// Property: delegate; attributes: T@"<SCSpectaclesPeripheralDelegate>",W,N,V_delegate
// Property: performer; attributes: T@"<SCPerforming>",&,N,V_performer
// Property: peripheral; attributes: T@"CBPeripheral",&,N,V_peripheral
// Property: RSSI; attributes: T@"NSNumber",&,N,V_RSSI
// Property: stream; attributes: T@"<SCSpectaclesCommunicationChannel>",&,N,V_stream
// Property: messageBuffer; attributes: T@"SCSpectaclesMalibuNordicMessageBuffer",&,N,V_messageBuffer
// Property: encryptor; attributes: T@"SCSpectaclesAEADPacketEncryptor",&,N,V_encryptor
// Property: encryptionDisabled; attributes: TB,N,V_encryptionDisabled
// Property: outstandingRequests; attributes: T@"NSMutableDictionary",&,N,V_outstandingRequests
// Property: outstandingNonceExchangeMessage; attributes: T@"SCSpectaclesRequestMessage",&,N,V_outstandingNonceExchangeMessage
// Property: nextFreeRequestId; attributes: TC,N,V_nextFreeRequestId
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesMalibuPeripheral initWithPeripheral:delegate:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106f94f0c

// -[SCSpectaclesMalibuPeripheral openStream]
// Type encoding: v16@0:8
// Implementation: 0x106f9510c

// -[SCSpectaclesMalibuPeripheral isReadyToExchangeMessages]
// Type encoding: B16@0:8
// Implementation: 0x106f95218

// -[SCSpectaclesMalibuPeripheral setupEncryptionWithKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f952a0

// -[SCSpectaclesMalibuPeripheral _handleEncryptionSetupResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f955b0

// -[SCSpectaclesMalibuPeripheral sendRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f956c8

// -[SCSpectaclesMalibuPeripheral sendEncryptionRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f95bb4

// -[SCSpectaclesMalibuPeripheral _rpcClientError]
// Type encoding: @16@0:8
// Implementation: 0x106f95c14

// -[SCSpectaclesMalibuPeripheral rpcInvocationsFromRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f95c30

// -[SCSpectaclesMalibuPeripheral _handleRpcResponseData:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f95c38

// -[SCSpectaclesMalibuPeripheral _handlePushResponseData:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f95e24

// -[SCSpectaclesMalibuPeripheral messageBufferReceivedData:messageType:]
// Type encoding: v28@0:8@16C24
// Implementation: 0x106f95f5c

// -[SCSpectaclesMalibuPeripheral channelDidOpen:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f960f4

// -[SCSpectaclesMalibuPeripheral channel:didReadData:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106f96220

// -[SCSpectaclesMalibuPeripheral channelDidWriteData:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f96380

// -[SCSpectaclesMalibuPeripheral channel:didError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106f96384

// -[SCSpectaclesMalibuPeripheral channelDidClose:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f964e8

// -[SCSpectaclesMalibuPeripheral channel:didReadRSSI:error:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106f964ec

// -[SCSpectaclesMalibuPeripheral delegate]
// Type encoding: @16@0:8
// Implementation: 0x106f9665c

// -[SCSpectaclesMalibuPeripheral setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f96674

// -[SCSpectaclesMalibuPeripheral performer]
// Type encoding: @16@0:8
// Implementation: 0x106f96680

// -[SCSpectaclesMalibuPeripheral setPerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f96688

// -[SCSpectaclesMalibuPeripheral peripheral]
// Type encoding: @16@0:8
// Implementation: 0x106f966b8

// -[SCSpectaclesMalibuPeripheral setPeripheral:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f966c0

// -[SCSpectaclesMalibuPeripheral RSSI]
// Type encoding: @16@0:8
// Implementation: 0x106f966f0

// -[SCSpectaclesMalibuPeripheral setRSSI:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f966f8

// -[SCSpectaclesMalibuPeripheral stream]
// Type encoding: @16@0:8
// Implementation: 0x106f96728

// -[SCSpectaclesMalibuPeripheral setStream:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f96730

// -[SCSpectaclesMalibuPeripheral messageBuffer]
// Type encoding: @16@0:8
// Implementation: 0x106f96760

// -[SCSpectaclesMalibuPeripheral setMessageBuffer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f96768

// -[SCSpectaclesMalibuPeripheral encryptor]
// Type encoding: @16@0:8
// Implementation: 0x106f96798

// -[SCSpectaclesMalibuPeripheral setEncryptor:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f967a0

// -[SCSpectaclesMalibuPeripheral encryptionDisabled]
// Type encoding: B16@0:8
// Implementation: 0x106f967d0

// -[SCSpectaclesMalibuPeripheral setEncryptionDisabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106f967d8

// -[SCSpectaclesMalibuPeripheral outstandingRequests]
// Type encoding: @16@0:8
// Implementation: 0x106f967e0

// -[SCSpectaclesMalibuPeripheral setOutstandingRequests:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f967e8

// -[SCSpectaclesMalibuPeripheral outstandingNonceExchangeMessage]
// Type encoding: @16@0:8
// Implementation: 0x106f96818

// -[SCSpectaclesMalibuPeripheral setOutstandingNonceExchangeMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f96820

// -[SCSpectaclesMalibuPeripheral nextFreeRequestId]
// Type encoding: C16@0:8
// Implementation: 0x106f96850

// -[SCSpectaclesMalibuPeripheral setNextFreeRequestId:]
// Type encoding: v20@0:8C16
// Implementation: 0x106f96858

// -[SCSpectaclesMalibuPeripheral .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106f96860

@end
