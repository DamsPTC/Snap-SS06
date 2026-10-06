// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesLagunaPeripheral
// Superclass: NSObject
// Address: 0x112b4c2c8

@interface SCSpectaclesLagunaPeripheral

// Property: delegate; attributes: T@"<SCSpectaclesPeripheralDelegate>",W,N,V_delegate
// Property: performer; attributes: T@"<SCPerforming>",&,N,V_performer
// Property: peripheral; attributes: T@"CBPeripheral",&,N,V_peripheral
// Property: RSSI; attributes: T@"NSNumber",&,N,V_RSSI
// Property: messageBuffer; attributes: T@"SCSpectaclesMessageBuffer",&,N,V_messageBuffer
// Property: stream; attributes: T@"<SCSpectaclesCommunicationChannel>",&,N,V_stream
// Property: requests; attributes: T@"NSMutableArray",&,N,V_requests
// Property: previousRequestCount; attributes: Tq,N,V_previousRequestCount
// Property: encryptor; attributes: T@"SCSpectaclesECBPacketEncryptor",&,N,V_encryptor
// Property: encryptionDisabled; attributes: TB,N,V_encryptionDisabled
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesLagunaPeripheral initWithPeripheral:delegate:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106f8e1a0

// -[SCSpectaclesLagunaPeripheral _handleNrfResponseData:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f8e39c

// -[SCSpectaclesLagunaPeripheral _handleEncryptionResponseData:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f8e51c

// -[SCSpectaclesLagunaPeripheral setupEncryptionWithKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f8e7e0

// -[SCSpectaclesLagunaPeripheral sendRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f8ebb0

// -[SCSpectaclesLagunaPeripheral sendEncryptionRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f8eec8

// -[SCSpectaclesLagunaPeripheral openStream]
// Type encoding: v16@0:8
// Implementation: 0x106f8f0a4

// -[SCSpectaclesLagunaPeripheral isReadyToExchangeMessages]
// Type encoding: B16@0:8
// Implementation: 0x106f8f1b0

// -[SCSpectaclesLagunaPeripheral messageBufferReceivedData:messageType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106f8f238

// -[SCSpectaclesLagunaPeripheral channelDidOpen:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f8f35c

// -[SCSpectaclesLagunaPeripheral channel:didReadData:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106f8f488

// -[SCSpectaclesLagunaPeripheral channelDidWriteData:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f8f5e8

// -[SCSpectaclesLagunaPeripheral channel:didError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106f8f5ec

// -[SCSpectaclesLagunaPeripheral channelDidClose:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f8f750

// -[SCSpectaclesLagunaPeripheral channel:didReadRSSI:error:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106f8f754

// -[SCSpectaclesLagunaPeripheral delegate]
// Type encoding: @16@0:8
// Implementation: 0x106f8f8c4

// -[SCSpectaclesLagunaPeripheral setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f8f8dc

// -[SCSpectaclesLagunaPeripheral performer]
// Type encoding: @16@0:8
// Implementation: 0x106f8f8e8

// -[SCSpectaclesLagunaPeripheral setPerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f8f8f0

// -[SCSpectaclesLagunaPeripheral peripheral]
// Type encoding: @16@0:8
// Implementation: 0x106f8f920

// -[SCSpectaclesLagunaPeripheral setPeripheral:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f8f928

// -[SCSpectaclesLagunaPeripheral RSSI]
// Type encoding: @16@0:8
// Implementation: 0x106f8f958

// -[SCSpectaclesLagunaPeripheral setRSSI:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f8f960

// -[SCSpectaclesLagunaPeripheral messageBuffer]
// Type encoding: @16@0:8
// Implementation: 0x106f8f990

// -[SCSpectaclesLagunaPeripheral setMessageBuffer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f8f998

// -[SCSpectaclesLagunaPeripheral stream]
// Type encoding: @16@0:8
// Implementation: 0x106f8f9c8

// -[SCSpectaclesLagunaPeripheral setStream:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f8f9d0

// -[SCSpectaclesLagunaPeripheral requests]
// Type encoding: @16@0:8
// Implementation: 0x106f8fa00

// -[SCSpectaclesLagunaPeripheral setRequests:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f8fa08

// -[SCSpectaclesLagunaPeripheral previousRequestCount]
// Type encoding: q16@0:8
// Implementation: 0x106f8fa38

// -[SCSpectaclesLagunaPeripheral setPreviousRequestCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x106f8fa40

// -[SCSpectaclesLagunaPeripheral encryptor]
// Type encoding: @16@0:8
// Implementation: 0x106f8fa48

// -[SCSpectaclesLagunaPeripheral setEncryptor:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f8fa50

// -[SCSpectaclesLagunaPeripheral encryptionDisabled]
// Type encoding: B16@0:8
// Implementation: 0x106f8fa80

// -[SCSpectaclesLagunaPeripheral setEncryptionDisabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106f8fa88

// -[SCSpectaclesLagunaPeripheral .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106f8fa90

@end
