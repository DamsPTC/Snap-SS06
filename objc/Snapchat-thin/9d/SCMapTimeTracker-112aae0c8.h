// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapTimeTracker
// Superclass: NSObject
// Address: 0x112aae0c8

@interface SCMapTimeTracker


// -[SCMapTimeTracker initWithApplicationLifecycleEvents:timeProvider:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105f4f078

// -[SCMapTimeTracker startMeasuringIfNotStarted]
// Type encoding: v16@0:8
// Implementation: 0x105f4f324

// -[SCMapTimeTracker cancelMeasuringIfStarted]
// Type encoding: v16@0:8
// Implementation: 0x105f4f37c

// -[SCMapTimeTracker endMeasuringIfStarted]
// Type encoding: @16@0:8
// Implementation: 0x105f4f3ac

// -[SCMapTimeTracker _onDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x105f4f460

// -[SCMapTimeTracker _onWillEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x105f4f50c

// -[SCMapTimeTracker _durationInForegroundFrom:to:]
// Type encoding: d32@0:8@16@24
// Implementation: 0x105f4f5b0

// -[SCMapTimeTracker _removeAllButLastIntervalIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x105f4f750

// -[SCMapTimeTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f4f79c

@end
