// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCalendarPagePresenterImpl
// Superclass: NSObject
// Address: 0x1128ac628

@interface SCCalendarPagePresenterImpl

// Property: presentedViewController; attributes: T@"UIViewController",N,R

// -[SCCalendarPagePresenterImpl presentedViewController]
// Type encoding: @16@0:8
// Implementation: 0x102f3cf28

// -[SCCalendarPagePresenterImpl initWithCreationPageProvider:detailPageProvider:listPageProvider:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x102f3d07c

// -[SCCalendarPagePresenterImpl presentCalendarCreationPageWithConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x102f3e338

// -[SCCalendarPagePresenterImpl presentCalendarDetailPageWithConfig:participants:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x102f3e394

// -[SCCalendarPagePresenterImpl presentCalendarDetailPageWithEventId:source:uiContainer:dismissalCallback:]
// Type encoding: v48@0:8@16q24@32@?40
// Implementation: 0x102f3f9e4

// -[SCCalendarPagePresenterImpl presentCalendarListPageWithConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x102f3fc6c

// -[SCCalendarPagePresenterImpl presentCalendarListPageWithSource:uiContainer:dismissalCallback:]
// Type encoding: v40@0:8q16@24@?32
// Implementation: 0x102f40714

// -[SCCalendarPagePresenterImpl dismissPageWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x102f40b3c

// -[SCCalendarPagePresenterImpl requestAnimatedDismiss]
// Type encoding: v16@0:8
// Implementation: 0x102f40eac

// -[SCCalendarPagePresenterImpl init]
// Type encoding: @16@0:8
// Implementation: 0x102f40f78

// -[SCCalendarPagePresenterImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x102f40fd4

@end
