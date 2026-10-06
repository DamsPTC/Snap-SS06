// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesBLEChannel
// Superclass: NSObject
// Address: 0x112b4d948

@interface SCSpectaclesBLEChannel

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delegate; attributes: T@"<SCSpectaclesCommunicationChannelDelegate>",W,N,V_delegate
// Property: isOpen; attributes: TB,R,N
// Property: RSSI; attributes: T@"NSNumber",?,R,N

// -[SCSpectaclesBLEChannel initWithPeripheral:serviceUUID:txCharacteristicUUID:rxCharacteristicUUID:enableBLEImprovements:logger:delegate:]
// Type encoding: @68@0:8@16@24@32@40B48@52@60
// Implementation: 0x106f9d4ac

// -[SCSpectaclesBLEChannel dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106f9d63c

// -[SCSpectaclesBLEChannel isOpen]
// Type encoding: B16@0:8
// Implementation: 0x106f9d680

// -[SCSpectaclesBLEChannel open]
// Type encoding: v16@0:8
// Implementation: 0x106f9d6b4

// -[SCSpectaclesBLEChannel writeData:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f9d744

// -[SCSpectaclesBLEChannel close]
// Type encoding: v16@0:8
// Implementation: 0x106f9d7d0

// -[SCSpectaclesBLEChannel _writeNextPacket]
// Type encoding: v16@0:8
// Implementation: 0x106f9d830

// -[SCSpectaclesBLEChannel _sendGenericError]
// Type encoding: v16@0:8
// Implementation: 0x106f9db00

// -[SCSpectaclesBLEChannel peripheral:didDiscoverServices:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106f9db74

// -[SCSpectaclesBLEChannel peripheral:didDiscoverCharacteristicsForService:error:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106f9dd70

// -[SCSpectaclesBLEChannel peripheral:didUpdateValueForCharacteristic:error:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106f9df94

// -[SCSpectaclesBLEChannel peripheral:didWriteValueForCharacteristic:error:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106f9e070

// -[SCSpectaclesBLEChannel peripheral:didReadRSSI:error:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106f9e168

// -[SCSpectaclesBLEChannel delegate]
// Type encoding: @16@0:8
// Implementation: 0x106f9e204

// -[SCSpectaclesBLEChannel setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f9e21c

// -[SCSpectaclesBLEChannel .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106f9e228

@end
