// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMediaUploadStepMetrics
// Superclass: NSObject
// Address: 0x112b9ea78

@interface SCMediaUploadStepMetrics

// Property: lastStepCompleteTimestamp; attributes: Td,R,N,V_lastStepCompleteTimestamp
// Property: timers; attributes: T@"NSDictionary",R,C,N,V_timers
// Property: lastStep; attributes: TQ,R,N,V_lastStep
// Property: lastStepStatus; attributes: TQ,R,N,V_lastStepStatus
// Property: debugInfo; attributes: T@"NSString",R,C,N,V_debugInfo
// Property: failureReason; attributes: TQ,R,N,V_failureReason

// -[SCMediaUploadStepMetrics initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x10846309c

// -[SCMediaUploadStepMetrics initWithLastStepCompleteTimestamp:timers:lastStep:lastStepStatus:debugInfo:failureReason:]
// Type encoding: @64@0:8d16@24Q32Q40@48Q56
// Implementation: 0x10846319c

// -[SCMediaUploadStepMetrics copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x108463274

// -[SCMediaUploadStepMetrics encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x108463298

// -[SCMediaUploadStepMetrics hash]
// Type encoding: Q16@0:8
// Implementation: 0x108463348

// -[SCMediaUploadStepMetrics isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x1084633ec

// -[SCMediaUploadStepMetrics lastStepCompleteTimestamp]
// Type encoding: d16@0:8
// Implementation: 0x1084634f8

// -[SCMediaUploadStepMetrics timers]
// Type encoding: @16@0:8
// Implementation: 0x108463500

// -[SCMediaUploadStepMetrics lastStep]
// Type encoding: Q16@0:8
// Implementation: 0x108463508

// -[SCMediaUploadStepMetrics lastStepStatus]
// Type encoding: Q16@0:8
// Implementation: 0x108463510

// -[SCMediaUploadStepMetrics debugInfo]
// Type encoding: @16@0:8
// Implementation: 0x108463518

// -[SCMediaUploadStepMetrics failureReason]
// Type encoding: Q16@0:8
// Implementation: 0x108463520

// -[SCMediaUploadStepMetrics .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108463528

@end
