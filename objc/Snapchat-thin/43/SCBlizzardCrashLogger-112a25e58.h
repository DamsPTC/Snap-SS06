// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBlizzardCrashLogger
// Superclass: NSObject
// Address: 0x112a25e58

@interface SCBlizzardCrashLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBlizzardCrashLogger initWithLastPageView:blizzardLogger:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1001c8438

// -[SCBlizzardCrashLogger reportCrashEventWithAppVersion:isCrashLoop:applicationState:crashCategory:crashId:]
// Type encoding: v52@0:8@16B24q28q36@44
// Implementation: 0x1001f44f8

// -[SCBlizzardCrashLogger _crashEventWithAppVersion:isCrashLoop:applicationState:crashCategory:crashId:]
// Type encoding: @52@0:8@16B24q28q36@44
// Implementation: 0x1001f45b8

// -[SCBlizzardCrashLogger reportLowMemoryWarningEventWithTopViewController:applicationState:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1052664c8

// -[SCBlizzardCrashLogger _blizzardEventEnumForApplicationState:]
// Type encoding: q24@0:8q16
// Implementation: 0x100212f54

// -[SCBlizzardCrashLogger _crashTypeToCategory:]
// Type encoding: q24@0:8q16
// Implementation: 0x10020c050

// -[SCBlizzardCrashLogger _mebibytesFromBytes:]
// Type encoding: d24@0:8Q16
// Implementation: 0x1001f9110

// -[SCBlizzardCrashLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1052665d8

@end
