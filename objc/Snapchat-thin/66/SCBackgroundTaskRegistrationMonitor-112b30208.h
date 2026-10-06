// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBackgroundTaskRegistrationMonitor
// Superclass: NSObject
// Address: 0x112b30208

@interface SCBackgroundTaskRegistrationMonitor

// Property: dispatchTime; attributes: TQ,N,V_dispatchTime
// Property: semaphore; attributes: T@"NSObject<OS_dispatch_semaphore>",&,N,V_semaphore

// -[SCBackgroundTaskRegistrationMonitor initWithTimeout:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106cbe794

// -[SCBackgroundTaskRegistrationMonitor waitForBackgroundTaskRegistration]
// Type encoding: B16@0:8
// Implementation: 0x106cbe7fc

// -[SCBackgroundTaskRegistrationMonitor signalBackgroundTaskRegistrationComplete]
// Type encoding: v16@0:8
// Implementation: 0x106cbe820

// -[SCBackgroundTaskRegistrationMonitor dispatchTime]
// Type encoding: Q16@0:8
// Implementation: 0x106cbe828

// -[SCBackgroundTaskRegistrationMonitor setDispatchTime:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106cbe830

// -[SCBackgroundTaskRegistrationMonitor semaphore]
// Type encoding: @16@0:8
// Implementation: 0x106cbe838

// -[SCBackgroundTaskRegistrationMonitor setSemaphore:]
// Type encoding: v24@0:8@16
// Implementation: 0x106cbe840

// -[SCBackgroundTaskRegistrationMonitor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106cbe870

@end
