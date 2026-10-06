// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdWebviewPerformanceMetricsTracker
// Superclass: NSObject
// Address: 0x112add738

@interface SCAdWebviewPerformanceMetricsTracker

// Property: adCreationLifecyleTimestampsBuilder; attributes: T@"SCAdCreationLifecyleTimestampsBuilder",R,N,V_adCreationLifecyleTimestampsBuilder
// Property: adWebviewPerformanceMetricsObservable; attributes: T@"SCObservable",R,N

// -[SCAdWebviewPerformanceMetricsTracker initWithAdLifecycleTimestampsTracker:adWatermarkEventsTracker:timeProvider:performer:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1063bbd50

// -[SCAdWebviewPerformanceMetricsTracker begin]
// Type encoding: v16@0:8
// Implementation: 0x1063bbebc

// -[SCAdWebviewPerformanceMetricsTracker adWebviewPerformanceMetricsObservable]
// Type encoding: @16@0:8
// Implementation: 0x1063bc108

// -[SCAdWebviewPerformanceMetricsTracker _recoverEarlyPipelineTimestamps]
// Type encoding: v16@0:8
// Implementation: 0x1063bc130

// -[SCAdWebviewPerformanceMetricsTracker _onNextAdWebviewLifecycleEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063bc258

// -[SCAdWebviewPerformanceMetricsTracker _onNextAdCreationLifecyleEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063bc3cc

// -[SCAdWebviewPerformanceMetricsTracker _buildAdCreationLifecyleTimestamps:currentTs:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x1063bc4fc

// -[SCAdWebviewPerformanceMetricsTracker _resetIterationState]
// Type encoding: v16@0:8
// Implementation: 0x1063bcacc

// -[SCAdWebviewPerformanceMetricsTracker _onMetricsComplete:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063bcb44

// -[SCAdWebviewPerformanceMetricsTracker adCreationLifecyleTimestampsBuilder]
// Type encoding: @16@0:8
// Implementation: 0x1063bd05c

// -[SCAdWebviewPerformanceMetricsTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1063bd064

@end
