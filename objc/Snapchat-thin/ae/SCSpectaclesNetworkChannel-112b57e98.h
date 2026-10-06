// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesNetworkChannel
// Superclass: NSObject
// Address: 0x112b57e98

@interface SCSpectaclesNetworkChannel

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delegate; attributes: T@"<SCSpectaclesCommunicationChannelDelegate>",W,N,V_delegate
// Property: isOpen; attributes: TB,R,N
// Property: RSSI; attributes: T@"NSNumber",?,R,N

// -[SCSpectaclesNetworkChannel initWithUrl:wifiSSID:interpretNilSSIDAsUnknown:delegate:]
// Type encoding: @44@0:8@16@24B32@36
// Implementation: 0x106fcb908

// -[SCSpectaclesNetworkChannel dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106fcb9e0

// -[SCSpectaclesNetworkChannel isOpen]
// Type encoding: B16@0:8
// Implementation: 0x106fcba24

// -[SCSpectaclesNetworkChannel open]
// Type encoding: v16@0:8
// Implementation: 0x106fcba64

// -[SCSpectaclesNetworkChannel writeData:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fcbae0

// -[SCSpectaclesNetworkChannel close]
// Type encoding: v16@0:8
// Implementation: 0x106fcbb4c

// -[SCSpectaclesNetworkChannel channelDidOpen:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fcbb8c

// -[SCSpectaclesNetworkChannel channel:didReadData:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106fcbc1c

// -[SCSpectaclesNetworkChannel channelDidWriteData:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fcbcb0

// -[SCSpectaclesNetworkChannel channel:didError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106fcbd38

// -[SCSpectaclesNetworkChannel channelDidClose:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fcbdf8

// -[SCSpectaclesNetworkChannel _setupDataChannel]
// Type encoding: v16@0:8
// Implementation: 0x106fcbe84

// -[SCSpectaclesNetworkChannel _cleanupDataChannel]
// Type encoding: v16@0:8
// Implementation: 0x106fcbfc4

// -[SCSpectaclesNetworkChannel delegate]
// Type encoding: @16@0:8
// Implementation: 0x106fcbffc

// -[SCSpectaclesNetworkChannel setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fcc014

// -[SCSpectaclesNetworkChannel .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106fcc020

@end
