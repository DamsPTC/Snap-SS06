// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapFriendFocusViewLogger
// Superclass: NSObject
// Address: 0x112aabfa8

@interface SCMapFriendFocusViewLogger

// Property: traySessionID; attributes: TQ,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMapFriendFocusViewLogger initWithBlizzardLogger:mapLoggingSessionInfoProvider:personLocationProvider:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105f1b734

// -[SCMapFriendFocusViewLogger traySessionID]
// Type encoding: Q16@0:8
// Implementation: 0x105f1b85c

// -[SCMapFriendFocusViewLogger logMapFriendFocusViewOpen:userIDs:targetBestFriendCount:targetFriendWithStoryCount:numFriendStoryAvailable:type:zoomLevel:directionsWalkEta:directionsDriveEta:source:sourceSessionId:]
// Type encoding: v104@0:8Q16@24Q32Q40Q48Q56d64Q72Q80Q88Q96
// Implementation: 0x105f1b864

// -[SCMapFriendFocusViewLogger logMapFriendFocusViewClose:viewTimeSec:]
// Type encoding: v32@0:8Q16d24
// Implementation: 0x105f1bb5c

// -[SCMapFriendFocusViewLogger logMapFriendFocusViewAction:subAction:targetGhostUserIds:isBestFriend:numFriendStoryAvailable:type:section:isClustered:]
// Type encoding: v72@0:8Q16Q24@32B40Q44Q52Q60B68
// Implementation: 0x105f1bc18

// -[SCMapFriendFocusViewLogger logReactionWithFriendID:isBestFriend:numFriendStoryAvailable:reactionIndex:reactionName:isBitmojiReaction:isClustered:]
// Type encoding: v60@0:8@16B24Q28Q36@44B52B56
// Implementation: 0x105f1bde4

// -[SCMapFriendFocusViewLogger logReactionSent]
// Type encoding: v16@0:8
// Implementation: 0x105f1c004

// -[SCMapFriendFocusViewLogger logReactionBannerTapped]
// Type encoding: v16@0:8
// Implementation: 0x105f1c010

// -[SCMapFriendFocusViewLogger logReactionBannerUndo]
// Type encoding: v16@0:8
// Implementation: 0x105f1c07c

// -[SCMapFriendFocusViewLogger logEmojiPickerLaunched]
// Type encoding: v16@0:8
// Implementation: 0x105f1c0e8

// -[SCMapFriendFocusViewLogger logEmojiPickerSelection]
// Type encoding: v16@0:8
// Implementation: 0x105f1c0f4

// -[SCMapFriendFocusViewLogger logMapSnapshotTapWithTargetGhostUserIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f1c100

// -[SCMapFriendFocusViewLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f1c1f0

@end
