// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensCacheClearTracker
// Superclass: NSObject
// Address: 0x112c6e228

@interface SCLensCacheClearTracker


// -[SCLensCacheClearTracker initWithPreferencesStorage:currentDateProvider:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b0e2774

// -[SCLensCacheClearTracker initWithPreferencesStorage:currentDateProvider:cooldownTimeInterval:]
// Type encoding: @40@0:8@16@24d32
// Implementation: 0x100ba47dc

// -[SCLensCacheClearTracker trackLensCacheClearEvent]
// Type encoding: v16@0:8
// Implementation: 0x10b0e2780

// -[SCLensCacheClearTracker wasLensCacheRecentlyCleared]
// Type encoding: B16@0:8
// Implementation: 0x10b0e280c

// -[SCLensCacheClearTracker resetLensCacheClearTracker]
// Type encoding: v16@0:8
// Implementation: 0x10b0e28dc

// -[SCLensCacheClearTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0e2940

@end
