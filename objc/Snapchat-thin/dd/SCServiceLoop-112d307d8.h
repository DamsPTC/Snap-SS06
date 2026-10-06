// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCServiceLoop
// Superclass: NSObject
// Address: 0x112d307d8

@interface SCServiceLoop


// -[SCServiceLoop init]
// Type encoding: @16@0:8
// Implementation: 0x10bcb15fc

// -[SCServiceLoop resumeService:whenNotified:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10bcb1754

// -[SCServiceLoop invalidateService:]
// Type encoding: v24@0:8@16
// Implementation: 0x10bcb19d0

// -[SCServiceLoop suspendService:]
// Type encoding: v24@0:8@16
// Implementation: 0x10bcb1ab0

// -[SCServiceLoop setWhenNotified:forScheduledService:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10bcb1b94

// -[SCServiceLoop suspendAllServices]
// Type encoding: v16@0:8
// Implementation: 0x10bcb1cc8

// -[SCServiceLoop observeService:queue:changeHandler:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x10bcb1f04

// -[SCServiceLoop performNotifierChanges:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10bcb219c

// -[SCServiceLoop unobserveServiceForObserveContext:fromDealloc:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10bcb225c

// -[SCServiceLoop endCurrentTermAndContinueService:whenNotified:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10bcb25e8

// -[SCServiceLoop _suspendServiceWithUUID:]
// Type encoding: v24@0:8@16
// Implementation: 0x10bcb27f8

// -[SCServiceLoop _performWithStatus:service:observeSet:]
// Type encoding: v40@0:8Q16@24@32
// Implementation: 0x10bcb28f0

// -[SCServiceLoop _scheduleServicesAndNotifyObserversForItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x10bcb2a0c

// -[SCServiceLoop .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10bcb31b4

// +[SCServiceLoop sharedInstance]
// Type encoding: @16@0:8
// Implementation: 0x10bcb157c

@end
