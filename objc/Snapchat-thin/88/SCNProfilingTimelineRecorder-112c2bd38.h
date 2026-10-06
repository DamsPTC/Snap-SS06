// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNProfilingTimelineRecorder
// Superclass: NSObject
// Address: 0x112c2bd38

@interface SCNProfilingTimelineRecorder

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNProfilingTimelineRecorder initWithCpp:]
// Type encoding: @24@0:8r^v16
// Implementation: 0x10af89ae8

// -[SCNProfilingTimelineRecorder .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10af89cf8

// -[SCNProfilingTimelineRecorder .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10af89d54

// +[SCNProfilingTimelineRecorder recordStart:row:label:]
// Type encoding: q40@0:8q16q24@32
// Implementation: 0x10af89b68

// +[SCNProfilingTimelineRecorder recordEnd:label:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10af89bf8

// +[SCNProfilingTimelineRecorder recordInstant:row:label:]
// Type encoding: v40@0:8q16q24@32
// Implementation: 0x10af89c7c

@end
