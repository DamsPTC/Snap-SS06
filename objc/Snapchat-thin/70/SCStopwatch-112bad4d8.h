// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStopwatch
// Superclass: NSObject
// Address: 0x112bad4d8

@interface SCStopwatch

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStopwatch initWithTimeProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x1000bb654

// -[SCStopwatch init]
// Type encoding: @16@0:8
// Implementation: 0x1000bb60c

// -[SCStopwatch startWithTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x1008cd950

// -[SCStopwatch pauseWithTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x108b8ee14

// -[SCStopwatch resetAndStartWithTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x108b8ee38

// -[SCStopwatch start]
// Type encoding: v16@0:8
// Implementation: 0x1008cd928

// -[SCStopwatch pause]
// Type encoding: v16@0:8
// Implementation: 0x108b8ee6c

// -[SCStopwatch isRunning]
// Type encoding: B16@0:8
// Implementation: 0x108b8ee94

// -[SCStopwatch accumulatedTime]
// Type encoding: d16@0:8
// Implementation: 0x1008cd8ac

// -[SCStopwatch reset]
// Type encoding: v16@0:8
// Implementation: 0x1008cd914

// -[SCStopwatch resetAndStart]
// Type encoding: v16@0:8
// Implementation: 0x1008cd8f0

// -[SCStopwatch deductTimeInterval:]
// Type encoding: v24@0:8d16
// Implementation: 0x108b8ee9c

// -[SCStopwatch .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108b8eeac

@end
