// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCScopeGraph
// Superclass: NSObject
// Address: 0x112c6ae48

@interface SCScopeGraph

// Property: scopes; attributes: T@"<SCAccessibleScope>",R,N,V_scopes
// Property: lifecycleContext; attributes: T@"SCScopeLifecycleContext",R,N
// Property: appEventSignaller; attributes: T@"<SCScopeGraphApplicationEventSignaller>",R,N

// -[SCScopeGraph initWithLifecycleContext:]
// Type encoding: @24@0:8@16
// Implementation: 0x10007f9fc

// -[SCScopeGraph setRootScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0a6b7c

// -[SCScopeGraph lifecycleContext]
// Type encoding: @16@0:8
// Implementation: 0x100080a90

// -[SCScopeGraph setScopeGraphMetricsReporter:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0a6b80

// -[SCScopeGraph setScopeGraphMemoryUsageMetricsReporter:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0a6bd0

// -[SCScopeGraph setScopeGraphExceptionReporter:]
// Type encoding: v24@0:8@16
// Implementation: 0x100a0ae84

// -[SCScopeGraph setScopeGraphPerformanceMetricsReporter:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0a6c20

// -[SCScopeGraph setStartupInfoService:]
// Type encoding: v24@0:8@16
// Implementation: 0x100a14618

// -[SCScopeGraph appEventSignaller]
// Type encoding: @16@0:8
// Implementation: 0x10b0a6c70

// -[SCScopeGraph didAccessValue:scopeClass:]
// Type encoding: v32@0:8@16#24
// Implementation: 0x1004fb2cc

// -[SCScopeGraph scopes]
// Type encoding: @16@0:8
// Implementation: 0x10b0a6c78

// -[SCScopeGraph .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0a6c80

// +[SCScopeGraph shared]
// Type encoding: @16@0:8
// Implementation: 0x100a0ae20

// +[SCScopeGraph sharedWithExternalMonitor:scopeGraphAppStartupViolationMonitor:delayedEntryPointsHandler:operationQueue:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10007efd4

// +[SCScopeGraph scopes]
// Type encoding: @16@0:8
// Implementation: 0x10b0a6cb0

@end
