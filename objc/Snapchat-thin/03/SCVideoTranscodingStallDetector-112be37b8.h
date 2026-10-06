// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVideoTranscodingStallDetector
// Superclass: NSObject
// Address: 0x112be37b8

@interface SCVideoTranscodingStallDetector


// -[SCVideoTranscodingStallDetector initWithStallThreshold:checkInterval:eventBlock:]
// Type encoding: @40@0:8d16d24@?32
// Implementation: 0x1090635e0

// -[SCVideoTranscodingStallDetector _applicationDidEnterBackground:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090636b8

// -[SCVideoTranscodingStallDetector noteDidEnterBackgroundAtTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x1090636dc

// -[SCVideoTranscodingStallDetector dealloc]
// Type encoding: v16@0:8
// Implementation: 0x109063714

// -[SCVideoTranscodingStallDetector start]
// Type encoding: v16@0:8
// Implementation: 0x10906375c

// -[SCVideoTranscodingStallDetector stop]
// Type encoding: v16@0:8
// Implementation: 0x1090638bc

// -[SCVideoTranscodingStallDetector markStage:]
// Type encoding: v24@0:8@16
// Implementation: 0x10906392c

// -[SCVideoTranscodingStallDetector markStage:detail:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10906396c

// -[SCVideoTranscodingStallDetector markStage:detail:atTime:]
// Type encoding: v40@0:8@16@24d32
// Implementation: 0x1090639c8

// -[SCVideoTranscodingStallDetector stalledStageAtTime:stalledSeconds:didEnterBackgroundInGap:]
// Type encoding: @40@0:8d16^d24^B32
// Implementation: 0x109063b1c

// -[SCVideoTranscodingStallDetector checkForStallAtTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x109063bbc

// -[SCVideoTranscodingStallDetector .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109063c9c

@end
