// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCScopeLifecycleContext
// Superclass: NSObject
// Address: 0x112c6b758

@interface SCScopeLifecycleContext

// Property: availableScope; attributes: T@"SCAvailableScope",&,N,V_availableScope
// Property: operationQueue; attributes: T@"NSOperationQueue",&,N,V_operationQueue
// Property: monitor; attributes: T@"<SCScopeLifecycleMonitor>",&,N,V_monitor
// Property: configProvider; attributes: T@"<SCScopeGraphConfigProvider>",&,N,V_configProvider
// Property: eventSignaller; attributes: T@"<SCScopeGraphApplicationEventSignaller>",&,N,V_eventSignaller
// Property: delayedEntryPointsHandler; attributes: T@"<SCScopeGraphDelayedEntryPointHandling>",&,N,V_delayedEntryPointsHandler

// -[SCScopeLifecycleContext initWithOperationQueue:availableScope:monitor:delayedEntryPointsHandler:configProvider:eventSignaller:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x10007f730

// -[SCScopeLifecycleContext availableScope]
// Type encoding: @16@0:8
// Implementation: 0x10007fa9c

// -[SCScopeLifecycleContext setAvailableScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0ac8b8

// -[SCScopeLifecycleContext operationQueue]
// Type encoding: @16@0:8
// Implementation: 0x100080140

// -[SCScopeLifecycleContext setOperationQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0ac8e8

// -[SCScopeLifecycleContext monitor]
// Type encoding: @16@0:8
// Implementation: 0x1004fb32c

// -[SCScopeLifecycleContext setMonitor:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0ac918

// -[SCScopeLifecycleContext configProvider]
// Type encoding: @16@0:8
// Implementation: 0x100b5858c

// -[SCScopeLifecycleContext setConfigProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0ac948

// -[SCScopeLifecycleContext eventSignaller]
// Type encoding: @16@0:8
// Implementation: 0x10b0ac978

// -[SCScopeLifecycleContext setEventSignaller:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0ac980

// -[SCScopeLifecycleContext delayedEntryPointsHandler]
// Type encoding: @16@0:8
// Implementation: 0x100a1bcd0

// -[SCScopeLifecycleContext setDelayedEntryPointsHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0ac9b0

// -[SCScopeLifecycleContext .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0ac9e0

@end
