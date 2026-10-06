// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFrameRateMonitor
// Superclass: NSObject
// Address: 0x112be7db8

@interface SCFrameRateMonitor

// Property: frameInfoObservable; attributes: T@"SCObservable",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFrameRateMonitor initWithAppStartExperimentReader:crashServices:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1000ad88c

// -[SCFrameRateMonitor frameInfoObservable]
// Type encoding: @16@0:8
// Implementation: 0x1000b627c

// -[SCFrameRateMonitor badFrameRateStatsTracker]
// Type encoding: @16@0:8
// Implementation: 0x1000b61ec

// -[SCFrameRateMonitor applicationWillResignActive]
// Type encoding: v16@0:8
// Implementation: 0x1091299c4

// -[SCFrameRateMonitor applicationDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x1091299d0

// -[SCFrameRateMonitor dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1091299d4

// -[SCFrameRateMonitor applicationWillEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x109129a18

// -[SCFrameRateMonitor applicationDidBecomeActive]
// Type encoding: v16@0:8
// Implementation: 0x100c74b14

// -[SCFrameRateMonitor _resumeDisplayLink]
// Type encoding: v16@0:8
// Implementation: 0x1000b4cb0

// -[SCFrameRateMonitor _invalidateDisplayLink]
// Type encoding: v16@0:8
// Implementation: 0x109129a1c

// -[SCFrameRateMonitor _pauseDisplayLink]
// Type encoding: v16@0:8
// Implementation: 0x109129a48

// -[SCFrameRateMonitor _didDisplayLinkFired:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c7aca8

// -[SCFrameRateMonitor averageFrameRateInTheLastSecondsWithSeconds:]
// Type encoding: d24@0:8d16
// Implementation: 0x109129ac8

// -[SCFrameRateMonitor _syncFrameRatesWithinStartTime:endTime:]
// Type encoding: @32@0:8d16d24
// Implementation: 0x109129c90

// -[SCFrameRateMonitor _notifyListeners:]
// Type encoding: v24@0:8@16
// Implementation: 0x1000b60f4

// -[SCFrameRateMonitor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109129fdc

@end
