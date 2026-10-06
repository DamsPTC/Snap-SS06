// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFileIOErrorMetric
// Superclass: NSObject
// Address: 0x112d2c098

@interface SCFileIOErrorMetric

// Property: type; attributes: TQ,R,N,V_type
// Property: fileIOCount; attributes: TQ,R,N,V_fileIOCount
// Property: fileIOErrorCount; attributes: TQ,R,N,V_fileIOErrorCount
// Property: fileIOErrorCountByCode; attributes: T@"NSMutableDictionary",R,C,N,V_fileIOErrorCountByCode

// -[SCFileIOErrorMetric initWithFileIOType:fileIOCount:fileIOErrorCount:]
// Type encoding: @40@0:8Q16Q24Q32
// Implementation: 0x10bc7b31c

// -[SCFileIOErrorMetric logFileIOWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x10bc7b3a4

// -[SCFileIOErrorMetric topErrorCodesWithLimit:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10bc7b454

// -[SCFileIOErrorMetric _errorDescription:]
// Type encoding: @24@0:8@16
// Implementation: 0x10bc7b508

// -[SCFileIOErrorMetric compare:]
// Type encoding: q24@0:8@16
// Implementation: 0x10bc7b54c

// -[SCFileIOErrorMetric isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10bc7b5bc

// -[SCFileIOErrorMetric hash]
// Type encoding: Q16@0:8
// Implementation: 0x10bc7b6a4

// -[SCFileIOErrorMetric type]
// Type encoding: Q16@0:8
// Implementation: 0x10bc7b748

// -[SCFileIOErrorMetric fileIOCount]
// Type encoding: Q16@0:8
// Implementation: 0x10bc7b750

// -[SCFileIOErrorMetric fileIOErrorCount]
// Type encoding: Q16@0:8
// Implementation: 0x10bc7b758

// -[SCFileIOErrorMetric fileIOErrorCountByCode]
// Type encoding: @16@0:8
// Implementation: 0x10bc7b760

// -[SCFileIOErrorMetric .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10bc7b768

@end
