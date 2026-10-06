// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGrapheneLogItem
// Superclass: NSObject
// Address: 0x112a2a5e8

@interface SCGrapheneLogItem

// Property: uniqueId; attributes: T@"NSString",R,N,V_uniqueId
// Property: startTimestamp; attributes: Td,R,N,V_startTimestamp
// Property: metric; attributes: T@"<SCGrapheneMetric>",&,N,V_metric

// -[SCGrapheneLogItem initWithStartTimestamp:grapheneMetric:]
// Type encoding: @32@0:8d16@24
// Implementation: 0x105310060

// -[SCGrapheneLogItem uniqueId]
// Type encoding: @16@0:8
// Implementation: 0x1053100e4

// -[SCGrapheneLogItem startTimestamp]
// Type encoding: d16@0:8
// Implementation: 0x1053100ec

// -[SCGrapheneLogItem metric]
// Type encoding: @16@0:8
// Implementation: 0x1053100f4

// -[SCGrapheneLogItem setMetric:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053100fc

// -[SCGrapheneLogItem .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10531012c

@end
