// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCServiceLoop
// Superclass: NSObject
// Address: 0xad8780

@interface SCServiceLoop


// -[SCServiceLoop init]
// Type encoding: @16@0:8
// Implementation: 0x451318

// -[SCServiceLoop resumeService:whenNotified:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x451470

// -[SCServiceLoop invalidateService:]
// Type encoding: v24@0:8@16
// Implementation: 0x4516ec

// -[SCServiceLoop suspendService:]
// Type encoding: v24@0:8@16
// Implementation: 0x4517cc

// -[SCServiceLoop setWhenNotified:forScheduledService:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x4518b0

// -[SCServiceLoop suspendAllServices]
// Type encoding: v16@0:8
// Implementation: 0x4519e4

// -[SCServiceLoop observeService:queue:changeHandler:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x451c20

// -[SCServiceLoop performNotifierChanges:]
// Type encoding: v24@0:8@?16
// Implementation: 0x451eb8

// -[SCServiceLoop unobserveServiceForObserveContext:fromDealloc:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x451f78

// -[SCServiceLoop endCurrentTermAndContinueService:whenNotified:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x452320

// -[SCServiceLoop _suspendServiceWithUUID:]
// Type encoding: v24@0:8@16
// Implementation: 0x452530

// -[SCServiceLoop _performWithStatus:service:observeSet:]
// Type encoding: v40@0:8Q16@24@32
// Implementation: 0x452628

// -[SCServiceLoop _scheduleServicesAndNotifyObserversForItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x452744

// -[SCServiceLoop .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x452f74

// +[SCServiceLoop sharedInstance]
// Type encoding: @16@0:8
// Implementation: 0x451298

@end
