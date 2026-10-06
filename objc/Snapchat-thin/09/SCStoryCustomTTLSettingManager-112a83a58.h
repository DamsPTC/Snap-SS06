// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoryCustomTTLSettingManager
// Superclass: NSObject
// Address: 0x112a83a58

@interface SCStoryCustomTTLSettingManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoryCustomTTLSettingManager initWithCircumstanceEngine:]
// Type encoding: @24@0:8@16
// Implementation: 0x105a1dec4

// -[SCStoryCustomTTLSettingManager customTTLForType:]
// Type encoding: q24@0:8Q16
// Implementation: 0x105a1dfdc

// -[SCStoryCustomTTLSettingManager setCustomTTL:forType:]
// Type encoding: v32@0:8q16Q24
// Implementation: 0x105a1e044

// -[SCStoryCustomTTLSettingManager customTTLForCustomStoryPublicationId:]
// Type encoding: q24@0:8@16
// Implementation: 0x105a1e0e0

// -[SCStoryCustomTTLSettingManager setCustomTTL:forCustomStoryPublicationId:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x105a1e170

// -[SCStoryCustomTTLSettingManager customTTLForBusinessStory:]
// Type encoding: q24@0:8@16
// Implementation: 0x105a1e240

// -[SCStoryCustomTTLSettingManager setCustomTTL:forBusinessStory:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x105a1e2d0

// -[SCStoryCustomTTLSettingManager updateTimestampFor:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105a1e3ac

// -[SCStoryCustomTTLSettingManager updateTimestampForCustomStoryPublicationId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a1e3e8

// -[SCStoryCustomTTLSettingManager updateTimestampForBusinessStoryId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a1e45c

// -[SCStoryCustomTTLSettingManager _saveTTLAndTimeForType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105a1e4d0

// -[SCStoryCustomTTLSettingManager _saveTTLAndTimeForPublicationId]
// Type encoding: v16@0:8
// Implementation: 0x105a1e534

// -[SCStoryCustomTTLSettingManager _saveTTLAndTimeforBusinessStory]
// Type encoding: v16@0:8
// Implementation: 0x105a1e574

// -[SCStoryCustomTTLSettingManager _loadCustomTTLs]
// Type encoding: v16@0:8
// Implementation: 0x105a1e5b0

// -[SCStoryCustomTTLSettingManager _resetIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x105a1e82c

// -[SCStoryCustomTTLSettingManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105a1ebb8

@end
