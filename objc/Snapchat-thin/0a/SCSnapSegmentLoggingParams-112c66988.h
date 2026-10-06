// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapSegmentLoggingParams
// Superclass: NSObject
// Address: 0x112c66988

@interface SCSnapSegmentLoggingParams

// Property: segmentIndex; attributes: Tq,R,N,V_segmentIndex
// Property: trimmedLocation; attributes: Tq,R,N,V_trimmedLocation
// Property: trimmedTimeSec; attributes: Td,R,N,V_trimmedTimeSec
// Property: commonLoggingParams; attributes: T@"SCSnapCommonLoggingParams",R,C,N,V_commonLoggingParams
// Property: mediaSource; attributes: Tq,R,N,V_mediaSource

// -[SCSnapSegmentLoggingParams initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b085c80

// -[SCSnapSegmentLoggingParams initWithSegmentIndex:trimmedLocation:trimmedTimeSec:commonLoggingParams:mediaSource:]
// Type encoding: @56@0:8q16q24d32@40q48
// Implementation: 0x10b085d58

// -[SCSnapSegmentLoggingParams copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b085e04

// -[SCSnapSegmentLoggingParams encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b085e28

// -[SCSnapSegmentLoggingParams hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b085ec4

// -[SCSnapSegmentLoggingParams isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b085f68

// -[SCSnapSegmentLoggingParams segmentIndex]
// Type encoding: q16@0:8
// Implementation: 0x10b08605c

// -[SCSnapSegmentLoggingParams trimmedLocation]
// Type encoding: q16@0:8
// Implementation: 0x10b086064

// -[SCSnapSegmentLoggingParams trimmedTimeSec]
// Type encoding: d16@0:8
// Implementation: 0x10b08606c

// -[SCSnapSegmentLoggingParams commonLoggingParams]
// Type encoding: @16@0:8
// Implementation: 0x10b086074

// -[SCSnapSegmentLoggingParams mediaSource]
// Type encoding: q16@0:8
// Implementation: 0x10b08607c

// -[SCSnapSegmentLoggingParams .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b086084

@end
