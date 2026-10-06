// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUnifiedProfileUsageLogger
// Superclass: NSObject
// Address: 0x112b79cc8

@interface SCUnifiedProfileUsageLogger


// -[SCUnifiedProfileUsageLogger initWithProfileType:sourcePageType:pageEntryType:sessionId:grapheneServices:userBlizzardServices:sourceSessionId:userId:snapchatterServices:userInfoServices:isFlatland:backgroundsFeatureStatusProvider:actionmojiId:circumstanceEngine:bitmojiStyle:]
// Type encoding: @132@0:8Q16@24q32@40@48@56@64@72@80@88B96@100@108@116q124
// Implementation: 0x107ce0ca4

// -[SCUnifiedProfileUsageLogger logOpenUnifiedProfile]
// Type encoding: v16@0:8
// Implementation: 0x107ce0f78

// -[SCUnifiedProfileUsageLogger sectionWillAppearWithExtraData:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ce1430

// -[SCUnifiedProfileUsageLogger _sectionWillAppearWithSectionType:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ce1568

// -[SCUnifiedProfileUsageLogger logCloseUnifiedProfile]
// Type encoding: v16@0:8
// Implementation: 0x107ce1570

// -[SCUnifiedProfileUsageLogger logOpenActionMenu:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ce1768

// -[SCUnifiedProfileUsageLogger logCloseActionMenu]
// Type encoding: v16@0:8
// Implementation: 0x107ce186c

// -[SCUnifiedProfileUsageLogger logActionWithActionModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ce18fc

// -[SCUnifiedProfileUsageLogger noteDuplicateViewWillPresentForLeftoverSentinel]
// Type encoding: v16@0:8
// Implementation: 0x107ce1aa4

// -[SCUnifiedProfileUsageLogger logActionWithName:sourcePageType:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x107ce1b38

// -[SCUnifiedProfileUsageLogger _logActionWithNameString:sourcePageType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x107ce1bb8

// -[SCUnifiedProfileUsageLogger _logActionWithName:legacyActionNameString:sourcePageTypeString:]
// Type encoding: v40@0:8q16@24@32
// Implementation: 0x107ce1c38

// -[SCUnifiedProfileUsageLogger _logFriendProfileAction:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ce1eec

// -[SCUnifiedProfileUsageLogger _logFriendProfileUnifiedProfileActionWithActionModel:friendProfileV2Enabled:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107ce1fd8

// -[SCUnifiedProfileUsageLogger _logGroupProfileAction:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ce2128

// -[SCUnifiedProfileUsageLogger _logMyProfileAction:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ce2214

// -[SCUnifiedProfileUsageLogger _logFriendProfileActionMenuAction:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ce2484

// -[SCUnifiedProfileUsageLogger _logGroupProfileActionMenuAction:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ce2548

// -[SCUnifiedProfileUsageLogger logActionMenuActionWithActionModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ce2600

// -[SCUnifiedProfileUsageLogger _makeUnifiedProfilePageViewEventForSnapchatter:]
// Type encoding: @24@0:8@16
// Implementation: 0x107ce26d4

// -[SCUnifiedProfileUsageLogger _retrieveProfileSnapchatter:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107ce2840

// -[SCUnifiedProfileUsageLogger _backgroundLogEventWithFriendshipStatus:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ce2a10

// -[SCUnifiedProfileUsageLogger _backgroundLogEventWithFriendshipStatus:snapchatter:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107ce2cec

// -[SCUnifiedProfileUsageLogger _backgroundIncrementMetricWithFriendshipStatus:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ce2d80

// -[SCUnifiedProfileUsageLogger _backgroundIncrementMetricWithFriendshipStatus:snapchatter:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107ce2f8c

// -[SCUnifiedProfileUsageLogger _getSourcePageType]
// Type encoding: q16@0:8
// Implementation: 0x107ce306c

// -[SCUnifiedProfileUsageLogger _isViewingNonFriendPublicProfileV2ForSnapchatter:]
// Type encoding: B24@0:8@16
// Implementation: 0x107ce30a0

// -[SCUnifiedProfileUsageLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107ce312c

@end
