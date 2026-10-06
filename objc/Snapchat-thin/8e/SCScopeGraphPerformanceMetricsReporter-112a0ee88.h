// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCScopeGraphPerformanceMetricsReporter
// Superclass: NSObject
// Address: 0x112a0ee88

@interface SCScopeGraphPerformanceMetricsReporter


// -[SCScopeGraphPerformanceMetricsReporter initWithPerfLogger:lifecycleAndEntryPointLoggingEnabled:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x104fce794

// -[SCScopeGraphPerformanceMetricsReporter reportLifecycleBeginStart:timestamp:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x104fce818

// -[SCScopeGraphPerformanceMetricsReporter reportLifecycleBeginEnd:timestamp:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x104fce940

// -[SCScopeGraphPerformanceMetricsReporter reportEntryPointBeginStart:ofType:inLifecycle:timestamp:]
// Type encoding: v48@0:8@16@24@32d40
// Implementation: 0x104fcea68

// -[SCScopeGraphPerformanceMetricsReporter reportEntryPointBeginEnd:ofType:inLifecycle:timestamp:]
// Type encoding: v48@0:8@16@24@32d40
// Implementation: 0x104fcebb8

// -[SCScopeGraphPerformanceMetricsReporter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104fced08

@end
