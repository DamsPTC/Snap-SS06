// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesDevicePeripheral
// Superclass: NSObject
// Address: 0x112b4bd78

@interface SCSpectaclesDevicePeripheral

// Property: delegate; attributes: T@"<SCSpectaclesPeripheralDelegate>",W,N,V_delegate
// Property: peripheral; attributes: T@"CBPeripheral",&,N,V_peripheral
// Property: RSSI; attributes: T@"NSNumber",&,N,V_RSSI
// Property: performer; attributes: T@"<SCPerforming>",&,N,V_performer
// Property: messageBuffer; attributes: T@"SCSpectaclesHermosaMessageBuffer",&,N,V_messageBuffer
// Property: encryptor; attributes: T@"<SCSpectaclesPacketEncryptor>",&,N,V_encryptor
// Property: encryptionDisabled; attributes: TB,N,V_encryptionDisabled
// Property: stream; attributes: T@"<SCSpectaclesCommunicationChannel>",&,N,V_stream
// Property: requests; attributes: T@"NSMutableDictionary",&,N,V_requests
// Property: outstandingEncryptionSetupRequest; attributes: T@"SCSpectaclesRequestMessage",&,N,V_outstandingEncryptionSetupRequest
// Property: rpcMessageFactory; attributes: T@"<SCSpectaclesRpcMessageFactory>",&,N,V_rpcMessageFactory
// Property: packetEncryptorBuilder; attributes: T@"<SCSpectaclesPacketEncryptorBuilder>",&,N,V_packetEncryptorBuilder
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesDevicePeripheral initWithPeripheral:rpcMessageFactory:packetEncryptorBuilder:enableBLEImprovements:delegate:]
// Type encoding: @52@0:8@16@24@32B40@44
// Implementation: 0x106f7c5d0

// -[SCSpectaclesDevicePeripheral _findAndDequeueRequestMessageForResponse:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106f7c87c

// -[SCSpectaclesDevicePeripheral _handleResponseData:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f7c968

// -[SCSpectaclesDevicePeripheral _handlePushMessageData:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f7cbcc

// -[SCSpectaclesDevicePeripheral _cleanupStalePendingRequests]
// Type encoding: v16@0:8
// Implementation: 0x106f7cd08

// -[SCSpectaclesDevicePeripheral openStream]
// Type encoding: v16@0:8
// Implementation: 0x106f7d0e0

// -[SCSpectaclesDevicePeripheral isReadyToExchangeMessages]
// Type encoding: B16@0:8
// Implementation: 0x106f7d1ec

// -[SCSpectaclesDevicePeripheral setupEncryptionWithKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f7d274

// -[SCSpectaclesDevicePeripheral _runEncryptionSetup]
// Type encoding: v16@0:8
// Implementation: 0x106f7d408

// -[SCSpectaclesDevicePeripheral _handleEncryptionSetupResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f7d5a0

// -[SCSpectaclesDevicePeripheral sendRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f7d600

// -[SCSpectaclesDevicePeripheral sendEncryptionRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f7db50

// -[SCSpectaclesDevicePeripheral messageBufferReceivedData:messageType:]
// Type encoding: v28@0:8@16C24
// Implementation: 0x106f7db54

// -[SCSpectaclesDevicePeripheral channelDidOpen:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f7dd64

// -[SCSpectaclesDevicePeripheral channel:didReadData:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106f7de90

// -[SCSpectaclesDevicePeripheral channelDidWriteData:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f7dff0

// -[SCSpectaclesDevicePeripheral channel:didError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106f7dff4

// -[SCSpectaclesDevicePeripheral channelDidClose:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f7e158

// -[SCSpectaclesDevicePeripheral channel:didReadRSSI:error:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106f7e15c

// -[SCSpectaclesDevicePeripheral delegate]
// Type encoding: @16@0:8
// Implementation: 0x106f7e2cc

// -[SCSpectaclesDevicePeripheral setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f7e2e4

// -[SCSpectaclesDevicePeripheral peripheral]
// Type encoding: @16@0:8
// Implementation: 0x106f7e2f0

// -[SCSpectaclesDevicePeripheral setPeripheral:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f7e2f8

// -[SCSpectaclesDevicePeripheral RSSI]
// Type encoding: @16@0:8
// Implementation: 0x106f7e328

// -[SCSpectaclesDevicePeripheral setRSSI:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f7e330

// -[SCSpectaclesDevicePeripheral performer]
// Type encoding: @16@0:8
// Implementation: 0x106f7e360

// -[SCSpectaclesDevicePeripheral setPerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f7e368

// -[SCSpectaclesDevicePeripheral messageBuffer]
// Type encoding: @16@0:8
// Implementation: 0x106f7e398

// -[SCSpectaclesDevicePeripheral setMessageBuffer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f7e3a0

// -[SCSpectaclesDevicePeripheral encryptor]
// Type encoding: @16@0:8
// Implementation: 0x106f7e3d0

// -[SCSpectaclesDevicePeripheral setEncryptor:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f7e3d8

// -[SCSpectaclesDevicePeripheral encryptionDisabled]
// Type encoding: B16@0:8
// Implementation: 0x106f7e408

// -[SCSpectaclesDevicePeripheral setEncryptionDisabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106f7e410

// -[SCSpectaclesDevicePeripheral stream]
// Type encoding: @16@0:8
// Implementation: 0x106f7e418

// -[SCSpectaclesDevicePeripheral setStream:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f7e420

// -[SCSpectaclesDevicePeripheral requests]
// Type encoding: @16@0:8
// Implementation: 0x106f7e450

// -[SCSpectaclesDevicePeripheral setRequests:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f7e458

// -[SCSpectaclesDevicePeripheral outstandingEncryptionSetupRequest]
// Type encoding: @16@0:8
// Implementation: 0x106f7e488

// -[SCSpectaclesDevicePeripheral setOutstandingEncryptionSetupRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f7e490

// -[SCSpectaclesDevicePeripheral rpcMessageFactory]
// Type encoding: @16@0:8
// Implementation: 0x106f7e4c0

// -[SCSpectaclesDevicePeripheral setRpcMessageFactory:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f7e4c8

// -[SCSpectaclesDevicePeripheral packetEncryptorBuilder]
// Type encoding: @16@0:8
// Implementation: 0x106f7e4f8

// -[SCSpectaclesDevicePeripheral setPacketEncryptorBuilder:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f7e500

// -[SCSpectaclesDevicePeripheral .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106f7e530

@end
