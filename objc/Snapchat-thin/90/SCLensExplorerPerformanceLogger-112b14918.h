// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensExplorerPerformanceLogger
// Superclass: NSObject
// Address: 0x112b14918

@interface SCLensExplorerPerformanceLogger

// Property: timeTracker; attributes: T@"<SCLensExplorerPerformanceTimeTracking>",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensExplorerPerformanceLogger initWithPerformer:graphene:timeTracker:logger:networkConnectivityMonitor:productMode:]
// Type encoding: @64@0:8@16@24@32@40@48q56
// Implementation: 0x106b02440

// -[SCLensExplorerPerformanceLogger timeTracker]
// Type encoding: @16@0:8
// Implementation: 0x106b02598

// -[SCLensExplorerPerformanceLogger logLensExplorerAppearenceWithEntryPoint:viewType:contentSource:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x106b025c0

// -[SCLensExplorerPerformanceLogger logPreviewLoadingWithType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106b0295c

// -[SCLensExplorerPerformanceLogger logLensExplorerLensAppearenceWithEntryPoint:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106b02bb0

// -[SCLensExplorerPerformanceLogger logLensExplorerFeedLoadingFailedWithEntryPoint:viewType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106b02e04

// -[SCLensExplorerPerformanceLogger logFailedToHandleInteractionForItemWithLoggingData:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b03050

// -[SCLensExplorerPerformanceLogger logFailedToHandleDisappearForItemWithLoggingData:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b03158

// -[SCLensExplorerPerformanceLogger _pageViewTypeFromLensExplorerPageViewType:]
// Type encoding: q24@0:8q16
// Implementation: 0x106b03260

// -[SCLensExplorerPerformanceLogger _stringValueForLensExplorerPageViewType:]
// Type encoding: @24@0:8q16
// Implementation: 0x106b0326c

// -[SCLensExplorerPerformanceLogger _canLogAppearenceWithEntryPoint:viewType:]
// Type encoding: B32@0:8@16q24
// Implementation: 0x106b03288

// -[SCLensExplorerPerformanceLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106b032b0

@end
