// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCShortcutsSessionLoggingServiceImpl
// Superclass: NSObject
// Address: 0x112ac3068

@interface SCShortcutsSessionLoggingServiceImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCShortcutsSessionLoggingServiceImpl initWithUserTrackedLogger:performerProvider:shortcutsDataFetcher:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10607b768

// -[SCShortcutsSessionLoggingServiceImpl didBecomeUsable]
// Type encoding: v16@0:8
// Implementation: 0x10607ba0c

// -[SCShortcutsSessionLoggingServiceImpl didCompleteFirstPaint]
// Type encoding: v16@0:8
// Implementation: 0x10607bb24

// -[SCShortcutsSessionLoggingServiceImpl didReceiveDataModelsWithShortcuts:]
// Type encoding: v24@0:8@16
// Implementation: 0x10607bc3c

// -[SCShortcutsSessionLoggingServiceImpl didReceiveViewModelsWithShortcuts:]
// Type encoding: v24@0:8@16
// Implementation: 0x10607bd80

// -[SCShortcutsSessionLoggingServiceImpl didScroll]
// Type encoding: v16@0:8
// Implementation: 0x10607bec4

// -[SCShortcutsSessionLoggingServiceImpl didTapShortcutPillWithShortcutIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x10607bfb8

// -[SCShortcutsSessionLoggingServiceImpl didReplayBufferedShortcutSelectionWithShortcutIdentifier:durationSec:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x10607c0e4

// -[SCShortcutsSessionLoggingServiceImpl sessionDidBeginWithSessionId:source:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10607c224

// -[SCShortcutsSessionLoggingServiceImpl sessionDidEnd]
// Type encoding: v16@0:8
// Implementation: 0x10607c374

// -[SCShortcutsSessionLoggingServiceImpl recipientSelectionsDidChangeWithDelta:shortcutId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10607c410

// -[SCShortcutsSessionLoggingServiceImpl didReceiveRecipientLoggingData:]
// Type encoding: v24@0:8@16
// Implementation: 0x10607c564

// -[SCShortcutsSessionLoggingServiceImpl _trackTimestamp:event:]
// Type encoding: v32@0:8d16@24
// Implementation: 0x10607c8d0

// -[SCShortcutsSessionLoggingServiceImpl _sessionDidBeginWithSessionId:source:timestamp:]
// Type encoding: v40@0:8@16q24d32
// Implementation: 0x10607c970

// -[SCShortcutsSessionLoggingServiceImpl _setDidScroll]
// Type encoding: v16@0:8
// Implementation: 0x10607c9e8

// -[SCShortcutsSessionLoggingServiceImpl _setSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10607c9fc

// -[SCShortcutsSessionLoggingServiceImpl _resetSession]
// Type encoding: v16@0:8
// Implementation: 0x10607ca44

// -[SCShortcutsSessionLoggingServiceImpl _setSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x10607cb24

// -[SCShortcutsSessionLoggingServiceImpl _didReceiveDataModelsWithShortcuts:timestamp:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x10607cb38

// -[SCShortcutsSessionLoggingServiceImpl _didReceiveViewModelsWithShortcuts:timestamp:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x10607cce8

// -[SCShortcutsSessionLoggingServiceImpl _fetchAvailableShortcuts]
// Type encoding: v16@0:8
// Implementation: 0x10607ce98

// -[SCShortcutsSessionLoggingServiceImpl _fetchAvailableBadgesForSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x10607d370

// -[SCShortcutsSessionLoggingServiceImpl _recordBadgeStateForPlugin:source:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10607d774

// -[SCShortcutsSessionLoggingServiceImpl _recordBadgeState:forShortcutId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10607da14

// -[SCShortcutsSessionLoggingServiceImpl _logShortcutAvailableWithShortcutRecipients:shortcutId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10607dc80

// -[SCShortcutsSessionLoggingServiceImpl _didTapShortcutPillWithShortcutIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x10607df3c

// -[SCShortcutsSessionLoggingServiceImpl _didReplayBufferedShortcutSelectionWithShortcutIdentifier:durationSec:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x10607e008

// -[SCShortcutsSessionLoggingServiceImpl _recipientSelectionsDidChangeWithDelta:shortcutId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10607e09c

// -[SCShortcutsSessionLoggingServiceImpl _sessionDidEndWithTimestamp:]
// Type encoding: v24@0:8d16
// Implementation: 0x10607e2e4

// -[SCShortcutsSessionLoggingServiceImpl _logBlizzardMetrics]
// Type encoding: v16@0:8
// Implementation: 0x10607e360

// -[SCShortcutsSessionLoggingServiceImpl _createPerformerWithPerformerProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x10607e7d4

// -[SCShortcutsSessionLoggingServiceImpl _convertShortcutLoggingSourceToShortcutSource:]
// Type encoding: q24@0:8q16
// Implementation: 0x10607e830

// -[SCShortcutsSessionLoggingServiceImpl _convertListIdToBlizzardShortcutId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10607e83c

// -[SCShortcutsSessionLoggingServiceImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10607e89c

@end
