// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendsFeedShortcutsLogger
// Superclass: NSObject
// Address: 0x112a6b458

@interface SCFriendsFeedShortcutsLogger


// -[SCFriendsFeedShortcutsLogger initWithUserTrackedLogger:performerProvider:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1057ce0e0

// -[SCFriendsFeedShortcutsLogger sessionDidBeginWithSessionId:shortcutType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1057ce1bc

// -[SCFriendsFeedShortcutsLogger sessionDidEndWithExitEvent:nextPage:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1057ce2ec

// -[SCFriendsFeedShortcutsLogger logShortcutInventoryCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1057ce394

// -[SCFriendsFeedShortcutsLogger logShortcutCellsRendered:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1057ce480

// -[SCFriendsFeedShortcutsLogger logConversationSyncLatency:success:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x1057ce56c

// -[SCFriendsFeedShortcutsLogger logRenderLatencyStartTimestamp:]
// Type encoding: v24@0:8d16
// Implementation: 0x1057ce66c

// -[SCFriendsFeedShortcutsLogger logRenderLatencyEndTimestamp:]
// Type encoding: v24@0:8d16
// Implementation: 0x1057ce758

// -[SCFriendsFeedShortcutsLogger logBatchCameraButtonClick]
// Type encoding: v16@0:8
// Implementation: 0x1057ce844

// -[SCFriendsFeedShortcutsLogger _createPerformerWithPerformerProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x1057ce918

// -[SCFriendsFeedShortcutsLogger _setSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057ce974

// -[SCFriendsFeedShortcutsLogger _sessionDidEndWithExitEvent:nextPage:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1057ce9a4

// -[SCFriendsFeedShortcutsLogger _logBlizzardMetric]
// Type encoding: v16@0:8
// Implementation: 0x1057ce9f4

// -[SCFriendsFeedShortcutsLogger _resetSession]
// Type encoding: v16@0:8
// Implementation: 0x1057ceadc

// -[SCFriendsFeedShortcutsLogger _setDidClickBatchCameraButton]
// Type encoding: v16@0:8
// Implementation: 0x1057ceb30

// -[SCFriendsFeedShortcutsLogger _setConversationSyncLatency:success:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x1057ceb3c

// -[SCFriendsFeedShortcutsLogger _setRenderLatencyStartTimestamp:]
// Type encoding: v24@0:8d16
// Implementation: 0x1057ceb48

// -[SCFriendsFeedShortcutsLogger _setRenderLatencyEndTimestamp:]
// Type encoding: v24@0:8d16
// Implementation: 0x1057ceb50

// -[SCFriendsFeedShortcutsLogger _setRecipientsRendered:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1057ceb58

// -[SCFriendsFeedShortcutsLogger _setRecipientsInventory:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1057ceb60

// -[SCFriendsFeedShortcutsLogger _setShortcutType:]
// Type encoding: v24@0:8q16
// Implementation: 0x1057ceb68

// -[SCFriendsFeedShortcutsLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1057ceb70

@end
