// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMatchaUserTraceLogger
// Superclass: NSObject
// Address: 0x112ac3ab8

@interface SCMatchaUserTraceLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMatchaUserTraceLogger initWithNotificationCenter:listeners:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1001805a8

// -[SCMatchaUserTraceLogger logUserTraceEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x106082d90

// -[SCMatchaUserTraceLogger logUserTraceScrollingEventWithStartingY:endingY:pageName:]
// Type encoding: v40@0:8d16d24@32
// Implementation: 0x106082eb8

// -[SCMatchaUserTraceLogger _observerBackgrounding]
// Type encoding: v16@0:8
// Implementation: 0x100180654

// -[SCMatchaUserTraceLogger _didEnterBackground:]
// Type encoding: v24@0:8@16
// Implementation: 0x106082f5c

// -[SCMatchaUserTraceLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106082f64

@end
