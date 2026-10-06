// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFileIOErrorMetric
// Superclass: NSObject
// Address: 0xad4ef0

@interface SCFileIOErrorMetric

// Property: type; attributes: TQ,R,N,V_type
// Property: fileIOCount; attributes: TQ,R,N,V_fileIOCount
// Property: fileIOErrorCount; attributes: TQ,R,N,V_fileIOErrorCount
// Property: fileIOErrorCountByCode; attributes: T@"NSMutableDictionary",R,C,N,V_fileIOErrorCountByCode

// -[SCFileIOErrorMetric initWithFileIOType:fileIOCount:fileIOErrorCount:]
// Type encoding: @40@0:8Q16Q24Q32
// Implementation: 0x440220

// -[SCFileIOErrorMetric logFileIOWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x4402a8

// -[SCFileIOErrorMetric topErrorCodesWithLimit:]
// Type encoding: @24@0:8Q16
// Implementation: 0x440358

// -[SCFileIOErrorMetric _errorDescription:]
// Type encoding: @24@0:8@16
// Implementation: 0x44040c

// -[SCFileIOErrorMetric compare:]
// Type encoding: q24@0:8@16
// Implementation: 0x440450

// -[SCFileIOErrorMetric isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x4404c0

// -[SCFileIOErrorMetric hash]
// Type encoding: Q16@0:8
// Implementation: 0x4405a8

// -[SCFileIOErrorMetric type]
// Type encoding: Q16@0:8
// Implementation: 0x44064c

// -[SCFileIOErrorMetric fileIOCount]
// Type encoding: Q16@0:8
// Implementation: 0x440654

// -[SCFileIOErrorMetric fileIOErrorCount]
// Type encoding: Q16@0:8
// Implementation: 0x44065c

// -[SCFileIOErrorMetric fileIOErrorCountByCode]
// Type encoding: @16@0:8
// Implementation: 0x440664

// -[SCFileIOErrorMetric .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x44066c

@end
