// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBrightnessSettleDetector
// Superclass: NSObject
// Address: 0x112be2f98

@interface SCBrightnessSettleDetector

// Property: settled; attributes: TB,V_settled
// Property: framesSeen; attributes: Tq,N,V_framesSeen
// Property: emaPrimed; attributes: TB,N,V_emaPrimed
// Property: ema; attributes: Td,N,V_ema
// Property: ring; attributes: T@"NSMutableArray",&,N,V_ring
// Property: ringIndex; attributes: TQ,N,V_ringIndex
// Property: ringCount; attributes: TQ,N,V_ringCount

// -[SCBrightnessSettleDetector init]
// Type encoding: @16@0:8
// Implementation: 0x109053968

// -[SCBrightnessSettleDetector reset]
// Type encoding: v16@0:8
// Implementation: 0x109053a08

// -[SCBrightnessSettleDetector observeEV:]
// Type encoding: B24@0:8d16
// Implementation: 0x109053ab0

// -[SCBrightnessSettleDetector settled]
// Type encoding: B16@0:8
// Implementation: 0x109053d4c

// -[SCBrightnessSettleDetector setSettled:]
// Type encoding: v20@0:8B16
// Implementation: 0x109053d58

// -[SCBrightnessSettleDetector framesSeen]
// Type encoding: q16@0:8
// Implementation: 0x109053d60

// -[SCBrightnessSettleDetector setFramesSeen:]
// Type encoding: v24@0:8q16
// Implementation: 0x109053d68

// -[SCBrightnessSettleDetector emaPrimed]
// Type encoding: B16@0:8
// Implementation: 0x109053d70

// -[SCBrightnessSettleDetector setEmaPrimed:]
// Type encoding: v20@0:8B16
// Implementation: 0x109053d78

// -[SCBrightnessSettleDetector ema]
// Type encoding: d16@0:8
// Implementation: 0x109053d80

// -[SCBrightnessSettleDetector setEma:]
// Type encoding: v24@0:8d16
// Implementation: 0x109053d88

// -[SCBrightnessSettleDetector ring]
// Type encoding: @16@0:8
// Implementation: 0x109053d90

// -[SCBrightnessSettleDetector setRing:]
// Type encoding: v24@0:8@16
// Implementation: 0x109053d98

// -[SCBrightnessSettleDetector ringIndex]
// Type encoding: Q16@0:8
// Implementation: 0x109053dc8

// -[SCBrightnessSettleDetector setRingIndex:]
// Type encoding: v24@0:8Q16
// Implementation: 0x109053dd0

// -[SCBrightnessSettleDetector ringCount]
// Type encoding: Q16@0:8
// Implementation: 0x109053dd8

// -[SCBrightnessSettleDetector setRingCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x109053de0

// -[SCBrightnessSettleDetector .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109053de8

@end
