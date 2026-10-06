// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesPairingScanner
// Superclass: NSObject
// Address: 0x112b44d48

@interface SCSpectaclesPairingScanner

// Property: centralManager; attributes: T@"SCSpectaclesCBCentralManager",&,N,V_centralManager
// Property: performer; attributes: T@"<SCPerforming>",&,N,V_performer
// Property: seenPeripherals; attributes: T@"NSMutableDictionary",&,N,V_seenPeripherals
// Property: peripheralsToIgnore; attributes: T@"NSMutableSet",&,N,V_peripheralsToIgnore
// Property: state; attributes: Tq,N,V_state
// Property: delegate; attributes: T@"<SCSpectaclesPairingScannerDelegate>",W,N,V_delegate
// Property: shouldFilterRSSI; attributes: TB,N,V_shouldFilterRSSI
// Property: candidatePeripheral; attributes: T@"CBPeripheral",&,N,V_candidatePeripheral
// Property: recognizedAdvertisementCode; attributes: T@"NSData",&,N,V_recognizedAdvertisementCode
// Property: advertisementCodes; attributes: T@"NSArray",C,N,V_advertisementCodes
// Property: restrictRSSIForFactory; attributes: TB,N,V_restrictRSSIForFactory
// Property: requiredPeripheralName; attributes: T@"NSString",C,N,V_requiredPeripheralName
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesPairingScanner initWithCentralManager:performer:delegate:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106ef11b4

// -[SCSpectaclesPairingScanner dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106ef12f0

// -[SCSpectaclesPairingScanner startSearchForNewDevices:]
// Type encoding: v20@0:8B16
// Implementation: 0x106ef1324

// -[SCSpectaclesPairingScanner cancelSearchForNewDevices]
// Type encoding: v16@0:8
// Implementation: 0x106ef136c

// -[SCSpectaclesPairingScanner finishSearchForNewDevices]
// Type encoding: v16@0:8
// Implementation: 0x106ef1410

// -[SCSpectaclesPairingScanner _transitionToState:]
// Type encoding: v24@0:8q16
// Implementation: 0x106ef144c

// -[SCSpectaclesPairingScanner _handlePeripheralDiscovery:advertisementData:RSSI:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106ef17d8

// -[SCSpectaclesPairingScanner shouldConnectToPeripheral:advertisement:RSSI:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x106ef1844

// -[SCSpectaclesPairingScanner _logAdvertisement:advertisementData:RSSI:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106ef1bf4

// -[SCSpectaclesPairingScanner _minimumRSSI]
// Type encoding: q16@0:8
// Implementation: 0x106ef1da0

// -[SCSpectaclesPairingScanner centralManagerDidUpdateState:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ef1e54

// -[SCSpectaclesPairingScanner centralManager:didDiscoverPeripheral:advertisementData:RSSI:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106ef1f88

// -[SCSpectaclesPairingScanner centralManager:didConnectPeripheral:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106ef21f8

// -[SCSpectaclesPairingScanner centralManager:didDisconnectPeripheral:error:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106ef23b4

// -[SCSpectaclesPairingScanner advertisementCodes]
// Type encoding: @16@0:8
// Implementation: 0x106ef25bc

// -[SCSpectaclesPairingScanner setAdvertisementCodes:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ef25c4

// -[SCSpectaclesPairingScanner restrictRSSIForFactory]
// Type encoding: B16@0:8
// Implementation: 0x106ef25cc

// -[SCSpectaclesPairingScanner setRestrictRSSIForFactory:]
// Type encoding: v20@0:8B16
// Implementation: 0x106ef25d4

// -[SCSpectaclesPairingScanner requiredPeripheralName]
// Type encoding: @16@0:8
// Implementation: 0x106ef25dc

// -[SCSpectaclesPairingScanner setRequiredPeripheralName:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ef25e4

// -[SCSpectaclesPairingScanner centralManager]
// Type encoding: @16@0:8
// Implementation: 0x106ef25ec

// -[SCSpectaclesPairingScanner setCentralManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ef25f4

// -[SCSpectaclesPairingScanner performer]
// Type encoding: @16@0:8
// Implementation: 0x106ef2624

// -[SCSpectaclesPairingScanner setPerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ef262c

// -[SCSpectaclesPairingScanner seenPeripherals]
// Type encoding: @16@0:8
// Implementation: 0x106ef265c

// -[SCSpectaclesPairingScanner setSeenPeripherals:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ef2664

// -[SCSpectaclesPairingScanner peripheralsToIgnore]
// Type encoding: @16@0:8
// Implementation: 0x106ef2694

// -[SCSpectaclesPairingScanner setPeripheralsToIgnore:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ef269c

// -[SCSpectaclesPairingScanner state]
// Type encoding: q16@0:8
// Implementation: 0x106ef26cc

// -[SCSpectaclesPairingScanner setState:]
// Type encoding: v24@0:8q16
// Implementation: 0x106ef26d4

// -[SCSpectaclesPairingScanner delegate]
// Type encoding: @16@0:8
// Implementation: 0x106ef26dc

// -[SCSpectaclesPairingScanner setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ef26f4

// -[SCSpectaclesPairingScanner shouldFilterRSSI]
// Type encoding: B16@0:8
// Implementation: 0x106ef2700

// -[SCSpectaclesPairingScanner setShouldFilterRSSI:]
// Type encoding: v20@0:8B16
// Implementation: 0x106ef2708

// -[SCSpectaclesPairingScanner candidatePeripheral]
// Type encoding: @16@0:8
// Implementation: 0x106ef2710

// -[SCSpectaclesPairingScanner setCandidatePeripheral:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ef2718

// -[SCSpectaclesPairingScanner recognizedAdvertisementCode]
// Type encoding: @16@0:8
// Implementation: 0x106ef2748

// -[SCSpectaclesPairingScanner setRecognizedAdvertisementCode:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ef2750

// -[SCSpectaclesPairingScanner .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106ef2780

// +[SCSpectaclesPairingScanner shouldConsiderAdvertisement:RSSI:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106ef1de4

@end
