// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCurrentPageEvent
// Superclass: NSObject
// Address: 0x1129df678

@interface SCCurrentPageEvent

// Property: description; attributes: T@"NSString",N,R
// Property: hash; attributes: Tq,N,R

// -[SCCurrentPageEvent description]
// Type encoding: @16@0:8
// Implementation: 0x104898dc4

// -[SCCurrentPageEvent init]
// Type encoding: @16@0:8
// Implementation: 0x104898e3c

// -[SCCurrentPageEvent hash]
// Type encoding: q16@0:8
// Implementation: 0x104898e84

// -[SCCurrentPageEvent isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x1008ce218

// -[SCCurrentPageEvent copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x104899710

// -[SCCurrentPageEvent matchStartPageView:endPageView:startTransition:endTransition:]
// Type encoding: v48@0:8@?16@?24@?32@?40
// Implementation: 0x1000e46e4

// -[SCCurrentPageEvent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1008ee024

// +[SCCurrentPageEvent startPageViewWithNewPageName:prevPageName:startTimestamp:startDate:newPageIsForeground:]
// Type encoding: @52@0:8q16q24d32@40B48
// Implementation: 0x1000bbdc0

// +[SCCurrentPageEvent endPageViewWithNextPageName:finishedPageName:prevPageName:startTimestamp:endTimestamp:featureStack:startDate:elapsedTimeInSec:endDate:finishedPageIsForeground:]
// Type encoding: @92@0:8q16q24q32d40d48@56@64d72@80B88
// Implementation: 0x1008cd968

// +[SCCurrentPageEvent startTransitionFromPageName:toPageName:startTimestamp:startDate:]
// Type encoding: @48@0:8q16q24d32@40
// Implementation: 0x104899714

// +[SCCurrentPageEvent endTransitionFromPageName:toPageName:startTimestamp:endTimestamp:startDate:]
// Type encoding: @56@0:8q16q24d32d40@48
// Implementation: 0x104899808

@end
