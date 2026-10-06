// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAddFriendsQuickAddLoggerImpl
// Superclass: NSObject
// Address: 0x112a704f8

@interface SCAddFriendsQuickAddLoggerImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAddFriendsQuickAddLoggerImpl initWithSnapchatterDataTracker:snapchattersDataMutator:placement:addFriendsGrapheneLogger:quickAddGrapheneLogger:userSegmentsProvider:suggestionsSeenRequestSender:pinningMetadataRepository:reliablePinningGrapheneLogger:excludingPinnedSuggestions:pageSessionId:incomingFriendsImpressionCountMutator:]
// Type encoding: @108@0:8@16@24q32@40@48@56@64@72@80B88@92@100
// Implementation: 0x10582a318

// -[SCAddFriendsQuickAddLoggerImpl cleanupAndFinishLogging]
// Type encoding: v16@0:8
// Implementation: 0x10582a8f4

// -[SCAddFriendsQuickAddLoggerImpl _performCleanupResources]
// Type encoding: v16@0:8
// Implementation: 0x10582a9a4

// -[SCAddFriendsQuickAddLoggerImpl logSeenAndAddedSuggestedSnapchattersWithShouldUpdateViewedState:]
// Type encoding: v20@0:8B16
// Implementation: 0x10582a9e8

// -[SCAddFriendsQuickAddLoggerImpl markIncomingSnapchatterAsSeen:]
// Type encoding: v24@0:8@16
// Implementation: 0x10582aa98

// -[SCAddFriendsQuickAddLoggerImpl markSuggestedSnapchatterAsSeen:index:isRecentlyActive:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10582abe0

// -[SCAddFriendsQuickAddLoggerImpl _updateSeenSuggestedSnapchatter:index:impressionStartTime:isRecentlyActive:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10582ad84

// -[SCAddFriendsQuickAddLoggerImpl _updateSeenAddedMeSnapchatter:impressionStartTime:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10582af50

// -[SCAddFriendsQuickAddLoggerImpl _updateWithAddedSnapchatterIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x10582b060

// -[SCAddFriendsQuickAddLoggerImpl _updateWithRemovedSnapchatterIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x10582b184

// -[SCAddFriendsQuickAddLoggerImpl _logSeenAndAddedSuggestedSnapchattersWithDate:shouldUpdateViewedState:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10582b27c

// -[SCAddFriendsQuickAddLoggerImpl _updateIsViewedStateOfSeenAddedMeSnapchatterIdToSnapchatters:seenSuggestedSnapchatterIdToSnapchatters:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10582b5a4

// -[SCAddFriendsQuickAddLoggerImpl _incrementImpressionCountOfSnapchatters:pinningMetadataRepository:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10582b6a4

// -[SCAddFriendsQuickAddLoggerImpl _logImpressionToGrapheneWithSeenSuggestedSnapchatters:addedSuggestedSnapchatters:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10582b810

// -[SCAddFriendsQuickAddLoggerImpl _generateImpressionId]
// Type encoding: v16@0:8
// Implementation: 0x10582ba50

// -[SCAddFriendsQuickAddLoggerImpl _generateImpressionTimeMs]
// Type encoding: q16@0:8
// Implementation: 0x10582ba9c

// -[SCAddFriendsQuickAddLoggerImpl didStartSnapchattersUpdateDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x10582bb10

// -[SCAddFriendsQuickAddLoggerImpl didEndSnapchattersUpdateDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x10582be10

// -[SCAddFriendsQuickAddLoggerImpl _didReceiveTopSuggestions:]
// Type encoding: v24@0:8@16
// Implementation: 0x10582c304

// -[SCAddFriendsQuickAddLoggerImpl _didReceiveRecentlyJoiners:]
// Type encoding: v24@0:8@16
// Implementation: 0x10582c334

// -[SCAddFriendsQuickAddLoggerImpl _logReliablePinningMetricsWithSeenSuggestedSnapchatters:addedSuggestedSnapchatters:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10582c364

// -[SCAddFriendsQuickAddLoggerImpl _pinnedSuggestionsUserIds]
// Type encoding: @16@0:8
// Implementation: 0x10582c614

// -[SCAddFriendsQuickAddLoggerImpl _logImpressionCountIncrementResult:]
// Type encoding: v20@0:8B16
// Implementation: 0x10582c6b4

// -[SCAddFriendsQuickAddLoggerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10582c6bc

@end
