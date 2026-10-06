// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCurrentPageTrackerImplementation
// Superclass: NSObject
// Address: 0x112ba8a78

@interface SCCurrentPageTrackerImplementation

// Property: currentPageEvent; attributes: T@"SCObservable",R,N

// -[SCCurrentPageTrackerImplementation initWithTimeProvider:stopwatch:applicationStateProvider:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1000bbb40

// -[SCCurrentPageTrackerImplementation currentPageEvent]
// Type encoding: @16@0:8
// Implementation: 0x1000bfa54

// -[SCCurrentPageTrackerImplementation startPage:]
// Type encoding: v24@0:8q16
// Implementation: 0x1008ccf04

// -[SCCurrentPageTrackerImplementation beginSubscriptionWith:willResignActiveObservable:didEnterBackgroundObservable:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1000bc67c

// -[SCCurrentPageTrackerImplementation _getFeatureStackFromViewControllerHierarchy]
// Type encoding: @16@0:8
// Implementation: 0x1008cd2a8

// -[SCCurrentPageTrackerImplementation startPageWithoutTriggeringLegacyPageView:]
// Type encoding: v24@0:8q16
// Implementation: 0x1008ccf08

// -[SCCurrentPageTrackerImplementation startTransitionFromPage:toPage:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x1085a7a08

// -[SCCurrentPageTrackerImplementation currentPage]
// Type encoding: q16@0:8
// Implementation: 0x1085a7d90

// -[SCCurrentPageTrackerImplementation getUnsafeCurrentPageName]
// Type encoding: q16@0:8
// Implementation: 0x1085a7d98

// -[SCCurrentPageTrackerImplementation getUnsafePreviousPageName]
// Type encoding: q16@0:8
// Implementation: 0x1085a7da0

// -[SCCurrentPageTrackerImplementation applicationWillResignActive]
// Type encoding: v16@0:8
// Implementation: 0x1085a7da8

// -[SCCurrentPageTrackerImplementation applicationDidBecomeActive]
// Type encoding: v16@0:8
// Implementation: 0x1085a7de8

// -[SCCurrentPageTrackerImplementation applicationDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x1085a7e3c

// -[SCCurrentPageTrackerImplementation _isAppInForeground:]
// Type encoding: B24@0:8q16
// Implementation: 0x1008cf618

// -[SCCurrentPageTrackerImplementation .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1085a7e74

// +[SCCurrentPageTrackerImplementation resetStopwatch]
// Type encoding: v16@0:8
// Implementation: 0x1085a784c

@end
