// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCThreadCaptureOption
// Superclass: NSObject
// Address: 0x1129c36a0

@interface SCThreadCaptureOption

// Property: description; attributes: T@"NSString",N,R
// Property: hash; attributes: Tq,N,R

// -[SCThreadCaptureOption description]
// Type encoding: @16@0:8
// Implementation: 0x1044da6ec

// -[SCThreadCaptureOption init]
// Type encoding: @16@0:8
// Implementation: 0x1044da718

// -[SCThreadCaptureOption hash]
// Type encoding: q16@0:8
// Implementation: 0x1044da760

// -[SCThreadCaptureOption isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x1044dabb0

// -[SCThreadCaptureOption copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x1044dac30

// -[SCThreadCaptureOption matchCurrentThread:allThreads:mainThread:composer:cpp:]
// Type encoding: v56@0:8@?16@?24@?32@?40@?48
// Implementation: 0x1044dae50

// -[SCThreadCaptureOption .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1044daf84

// +[SCThreadCaptureOption currentThread]
// Type encoding: @16@0:8
// Implementation: 0x1044dac4c

// +[SCThreadCaptureOption allThreadsWithOrderByCpuUsage:]
// Type encoding: @20@0:8B16
// Implementation: 0x1044dac68

// +[SCThreadCaptureOption mainThread]
// Type encoding: @16@0:8
// Implementation: 0x1044dac80

// +[SCThreadCaptureOption composerWithProvidedStacktrace:jsModuleHashMap:isANR:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x1044dac98

// +[SCThreadCaptureOption cppWithProvidedStacktrace:]
// Type encoding: @24@0:8@16
// Implementation: 0x1044dad1c

@end
