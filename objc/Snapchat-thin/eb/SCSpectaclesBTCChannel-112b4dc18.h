// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesBTCChannel
// Superclass: NSObject
// Address: 0x112b4dc18

@interface SCSpectaclesBTCChannel

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delegate; attributes: T@"<SCSpectaclesCommunicationChannelDelegate>",W,N,V_delegate
// Property: isOpen; attributes: TB,R,N
// Property: RSSI; attributes: T@"NSNumber",?,R,N

// -[SCSpectaclesBTCChannel initWithAccessory:delegate:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106fa08f8

// -[SCSpectaclesBTCChannel dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106fa0a74

// -[SCSpectaclesBTCChannel isOpen]
// Type encoding: B16@0:8
// Implementation: 0x106fa0abc

// -[SCSpectaclesBTCChannel open]
// Type encoding: v16@0:8
// Implementation: 0x106fa0ac4

// -[SCSpectaclesBTCChannel writeData:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fa0acc

// -[SCSpectaclesBTCChannel close]
// Type encoding: v16@0:8
// Implementation: 0x106fa0ad4

// -[SCSpectaclesBTCChannel channelDidOpen:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fa0adc

// -[SCSpectaclesBTCChannel channel:didReadData:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106fa0b10

// -[SCSpectaclesBTCChannel channelDidWriteData:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fa0b64

// -[SCSpectaclesBTCChannel channel:didError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106fa0b98

// -[SCSpectaclesBTCChannel channelDidClose:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fa0bec

// -[SCSpectaclesBTCChannel delegate]
// Type encoding: @16@0:8
// Implementation: 0x106fa0c20

// -[SCSpectaclesBTCChannel setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fa0c38

// -[SCSpectaclesBTCChannel .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106fa0c44

@end
