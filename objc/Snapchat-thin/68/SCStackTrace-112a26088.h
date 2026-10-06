// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStackTrace
// Superclass: NSObject
// Address: 0x112a26088

@interface SCStackTrace

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStackTrace init]
// Type encoding: @16@0:8
// Implementation: 0x10526845c

// -[SCStackTrace stackTracesWithBinaryImageInfoIncludingAllThreads:orderThreadsByCpuUsage:]
// Type encoding: @24@0:8B16B20
// Implementation: 0x1052684c4

// -[SCStackTrace binaryImagesInfoWithImageNames:]
// Type encoding: @24@0:8@16
// Implementation: 0x105268a14

// -[SCStackTrace _getBinaryImageAtIndex:]
// Type encoding: @20@0:8i16
// Implementation: 0x105268b78

// -[SCStackTrace _getBinaryImagesMap]
// Type encoding: @16@0:8
// Implementation: 0x105268ea0

// -[SCStackTrace _uuidCstringtoString:]
// Type encoding: @24@0:8r*16
// Implementation: 0x1052692bc

// -[SCStackTrace _toCompactUUID:]
// Type encoding: @24@0:8@16
// Implementation: 0x105269448

// -[SCStackTrace _cpuArchForMajor:minorCode:]
// Type encoding: @24@0:8i16i20
// Implementation: 0x1052694a0

// -[SCStackTrace .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105269574

@end
