// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: BTLogger
// Superclass: NSObject
// Address: 0x112ac6cb8

@interface BTLogger

// Property: logBlock; attributes: T@?,C,N,V_logBlock
// Property: level; attributes: TQ,N,V_level

// -[BTLogger init]
// Type encoding: @16@0:8
// Implementation: 0x1060f415c

// -[BTLogger log:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060f419c

// -[BTLogger critical:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060f41cc

// -[BTLogger error:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060f41fc

// -[BTLogger warning:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060f422c

// -[BTLogger info:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060f425c

// -[BTLogger debug:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060f428c

// -[BTLogger logLevel:format:arguments:]
// Type encoding: v40@0:8Q16@24*32
// Implementation: 0x1060f42bc

// -[BTLogger level]
// Type encoding: Q16@0:8
// Implementation: 0x1060f43ec

// -[BTLogger setLevel:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1060f43f4

// -[BTLogger logBlock]
// Type encoding: @?16@0:8
// Implementation: 0x1060f43fc

// -[BTLogger setLogBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1060f4404

// -[BTLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1060f440c

// +[BTLogger sharedLogger]
// Type encoding: @16@0:8
// Implementation: 0x1060f40ac

// +[BTLogger levelString:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1060f43c8

@end
