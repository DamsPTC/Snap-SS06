// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSessionPauseResumeEvent
// Superclass: NSObject
// Address: 0x112997cd8

@interface SCSessionPauseResumeEvent

// Property: type; attributes: T@"SCSessionEventType",N,R,Vtype
// Property: pauseReason; attributes: T@"SCSessionPauseReason",N,R,VpauseReason
// Property: hash; attributes: Tq,N,R
// Property: description; attributes: T@"NSString",N,R

// -[SCSessionPauseResumeEvent type]
// Type encoding: @16@0:8
// Implementation: 0x104304e94

// -[SCSessionPauseResumeEvent pauseReason]
// Type encoding: @16@0:8
// Implementation: 0x104304ea4

// -[SCSessionPauseResumeEvent initWithType:pauseReason:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104304f18

// -[SCSessionPauseResumeEvent hash]
// Type encoding: q16@0:8
// Implementation: 0x104304f90

// -[SCSessionPauseResumeEvent isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x104305014

// -[SCSessionPauseResumeEvent copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x104305838

// -[SCSessionPauseResumeEvent encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x104305094

// -[SCSessionPauseResumeEvent initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x104305380

// -[SCSessionPauseResumeEvent description]
// Type encoding: @16@0:8
// Implementation: 0x1043053a8

// -[SCSessionPauseResumeEvent init]
// Type encoding: @16@0:8
// Implementation: 0x1043053cc

// -[SCSessionPauseResumeEvent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104305448

@end
