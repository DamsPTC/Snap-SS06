// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDefaultLogoutInterceptorCoolDownService
// Superclass: NSObject
// Address: 0x112a93a98

@interface SCDefaultLogoutInterceptorCoolDownService

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDefaultLogoutInterceptorCoolDownService initWithFeatureSettingsService:maxPrompts:firstCoolDownCount:subsequentCoolDownCount:maxPromptsCoolDownCount:]
// Type encoding: @56@0:8@16Q24Q32Q40Q48
// Implementation: 0x105c542f8

// -[SCDefaultLogoutInterceptorCoolDownService coolDown]
// Type encoding: B16@0:8
// Implementation: 0x105c54394

// -[SCDefaultLogoutInterceptorCoolDownService _reset:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105c5444c

// -[SCDefaultLogoutInterceptorCoolDownService _isCoolingDown:]
// Type encoding: B24@0:8q16
// Implementation: 0x105c544b4

// -[SCDefaultLogoutInterceptorCoolDownService _fixNegativeCountIfNeeded:]
// Type encoding: v24@0:8q16
// Implementation: 0x105c544e0

// -[SCDefaultLogoutInterceptorCoolDownService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105c544ec

@end
