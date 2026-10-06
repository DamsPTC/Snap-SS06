// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUploadBandwidthEstimatorRecord
// Superclass: NSObject
// Address: 0x112c71568

@interface SCUploadBandwidthEstimatorRecord

// Property: firstByteSentTime; attributes: Td,N,V_firstByteSentTime
// Property: totalBytesSentInTheSession; attributes: TQ,N,V_totalBytesSentInTheSession

// -[SCUploadBandwidthEstimatorRecord initWithTotalBytesSent:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b25eabc

// -[SCUploadBandwidthEstimatorRecord firstByteSentTime]
// Type encoding: d16@0:8
// Implementation: 0x10b25eb30

// -[SCUploadBandwidthEstimatorRecord setFirstByteSentTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x10b25eb38

// -[SCUploadBandwidthEstimatorRecord totalBytesSentInTheSession]
// Type encoding: Q16@0:8
// Implementation: 0x10b25eb40

// -[SCUploadBandwidthEstimatorRecord setTotalBytesSentInTheSession:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b25eb48

@end
