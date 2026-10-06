// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectrumEventList
// Superclass: NSObject
// Address: 0x112b11f88

@interface SCSpectrumEventList

// Property: mutableEvents; attributes: T@"NSMutableArray",&,N,V_mutableEvents
// Property: count; attributes: TQ,R,N
// Property: allEvents; attributes: T@"NSArray",R,N
// Property: spectrumFrameStart; attributes: T@"SCSpectrumFrameStart",&,N,V_spectrumFrameStart

// -[SCSpectrumEventList initWithEvents:]
// Type encoding: @24@0:8@16
// Implementation: 0x100322f2c

// -[SCSpectrumEventList addEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1005565e4

// -[SCSpectrumEventList getEvents:]
// Type encoding: @24@0:8Q16
// Implementation: 0x100557cac

// -[SCSpectrumEventList removeEarliestEvents:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x106adad7c

// -[SCSpectrumEventList count]
// Type encoding: Q16@0:8
// Implementation: 0x100557d10

// -[SCSpectrumEventList allEvents]
// Type encoding: @16@0:8
// Implementation: 0x100557ca4

// -[SCSpectrumEventList spectrumFrameStart]
// Type encoding: @16@0:8
// Implementation: 0x1005561a8

// -[SCSpectrumEventList setSpectrumFrameStart:]
// Type encoding: v24@0:8@16
// Implementation: 0x1005565b4

// -[SCSpectrumEventList mutableEvents]
// Type encoding: @16@0:8
// Implementation: 0x100556634

// -[SCSpectrumEventList setMutableEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x106adadf8

// -[SCSpectrumEventList .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x100367ce0

@end
