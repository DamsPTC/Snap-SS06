// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStreamingNeoPlayerLocalBytesCollector
// Superclass: NSObject
// Address: 0x112b6e918

@interface SCStreamingNeoPlayerLocalBytesCollector

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStreamingNeoPlayerLocalBytesCollector initWithExpectedByteCount:maxByteCount:performer:completion:]
// Type encoding: @48@0:8q16q24@32@?40
// Implementation: 0x107aaa3d8

// -[SCStreamingNeoPlayerLocalBytesCollector setRequestHandle:]
// Type encoding: v24@0:8@16
// Implementation: 0x107aaa4bc

// -[SCStreamingNeoPlayerLocalBytesCollector scheduleTimeout:]
// Type encoding: v24@0:8d16
// Implementation: 0x107aaa4ec

// -[SCStreamingNeoPlayerLocalBytesCollector putBytesSlice:]
// Type encoding: v24@0:8@16
// Implementation: 0x107aaa5d8

// -[SCStreamingNeoPlayerLocalBytesCollector setError:message:networkCode:]
// Type encoding: v40@0:8q16@24@32
// Implementation: 0x107aaa72c

// -[SCStreamingNeoPlayerLocalBytesCollector onComplete]
// Type encoding: v16@0:8
// Implementation: 0x107aaa838

// -[SCStreamingNeoPlayerLocalBytesCollector _finish]
// Type encoding: v16@0:8
// Implementation: 0x107aaa914

// -[SCStreamingNeoPlayerLocalBytesCollector .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107aaa9dc

@end
