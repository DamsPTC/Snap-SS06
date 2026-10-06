// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNProfilingTraceEvent
// Superclass: NSObject
// Address: 0x112c2bdd8

@interface SCNProfilingTraceEvent

// Property: type; attributes: Tq,R,N,V_type
// Property: name; attributes: T@"NSString",R,N,V_name
// Property: startUs; attributes: Tq,R,N,V_startUs
// Property: endUs; attributes: Tq,R,N,V_endUs
// Property: threadId; attributes: Tq,R,N,V_threadId

// -[SCNProfilingTraceEvent initWithType:name:startUs:endUs:threadId:]
// Type encoding: @56@0:8q16@24q32q40q48
// Implementation: 0x10af8a5bc

// -[SCNProfilingTraceEvent type]
// Type encoding: q16@0:8
// Implementation: 0x10af8a68c

// -[SCNProfilingTraceEvent name]
// Type encoding: @16@0:8
// Implementation: 0x10af8a694

// -[SCNProfilingTraceEvent startUs]
// Type encoding: q16@0:8
// Implementation: 0x10af8a69c

// -[SCNProfilingTraceEvent endUs]
// Type encoding: q16@0:8
// Implementation: 0x10af8a6a4

// -[SCNProfilingTraceEvent threadId]
// Type encoding: q16@0:8
// Implementation: 0x10af8a6ac

// -[SCNProfilingTraceEvent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10af8a6b4

@end
