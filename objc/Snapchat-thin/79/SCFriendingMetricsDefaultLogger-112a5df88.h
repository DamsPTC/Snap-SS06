// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendingMetricsDefaultLogger
// Superclass: NSObject
// Address: 0x112a5df88

@interface SCFriendingMetricsDefaultLogger


// -[SCFriendingMetricsDefaultLogger initWithUserTrackedLogger:grapheneRegistry:preferences:badgeLogger:appStartExperimentReader:performer:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x105721410

// -[SCFriendingMetricsDefaultLogger logViewPage:fromEntryType:sourcePage:pageSessionId:isFromAppForeground:]
// Type encoding: v52@0:8q16q24@32@40B48
// Implementation: 0x105721580

// -[SCFriendingMetricsDefaultLogger pausePage:]
// Type encoding: v24@0:8q16
// Implementation: 0x105721908

// -[SCFriendingMetricsDefaultLogger resumePage:]
// Type encoding: v24@0:8q16
// Implementation: 0x105721a0c

// -[SCFriendingMetricsDefaultLogger logExitPage:entryPoint:isFromAppBackground:]
// Type encoding: v36@0:8q16q24B32
// Implementation: 0x105721b10

// -[SCFriendingMetricsDefaultLogger incrementSnapcodeCount]
// Type encoding: v16@0:8
// Implementation: 0x105721c2c

// -[SCFriendingMetricsDefaultLogger incrementSMSCount]
// Type encoding: v16@0:8
// Implementation: 0x105721d00

// -[SCFriendingMetricsDefaultLogger incrementPullToRefreshCount]
// Type encoding: v16@0:8
// Implementation: 0x105721dd4

// -[SCFriendingMetricsDefaultLogger incrementViewMoreClickCount]
// Type encoding: v16@0:8
// Implementation: 0x105721ea8

// -[SCFriendingMetricsDefaultLogger incrementEmailCount]
// Type encoding: v16@0:8
// Implementation: 0x105721f7c

// -[SCFriendingMetricsDefaultLogger incrementMoreCount]
// Type encoding: v16@0:8
// Implementation: 0x105722050

// -[SCFriendingMetricsDefaultLogger incrementSnapButtonClickCount]
// Type encoding: v16@0:8
// Implementation: 0x105722124

// -[SCFriendingMetricsDefaultLogger incrementChatButtonClickCount]
// Type encoding: v16@0:8
// Implementation: 0x1057221f8

// -[SCFriendingMetricsDefaultLogger didUpdateQuery]
// Type encoding: v16@0:8
// Implementation: 0x1057222cc

// -[SCFriendingMetricsDefaultLogger inviteToSnapchatClicked:]
// Type encoding: v24@0:8q16
// Implementation: 0x1057223a0

// -[SCFriendingMetricsDefaultLogger updateSectionVisitedCellWithSectionType:index:currentTime:isUnviewed:]
// Type encoding: v44@0:8@16q24d32B40
// Implementation: 0x105722408

// -[SCFriendingMetricsDefaultLogger markSeenPinnedAddedMeFriendWithUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105722548

// -[SCFriendingMetricsDefaultLogger _markSeenPinnedAddedMeFriendWithUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105722660

// -[SCFriendingMetricsDefaultLogger _incrementSnapcodeCountInPerformer]
// Type encoding: v16@0:8
// Implementation: 0x1057226c0

// -[SCFriendingMetricsDefaultLogger _incrementSMSCountInPerformer]
// Type encoding: v16@0:8
// Implementation: 0x1057226fc

// -[SCFriendingMetricsDefaultLogger _incrementViewMoreClickCountInPerformer]
// Type encoding: v16@0:8
// Implementation: 0x105722738

// -[SCFriendingMetricsDefaultLogger _incrementPullToRefreshCountInPerformer]
// Type encoding: v16@0:8
// Implementation: 0x105722774

// -[SCFriendingMetricsDefaultLogger _incrementEmailCountInPerformer]
// Type encoding: v16@0:8
// Implementation: 0x1057227b0

// -[SCFriendingMetricsDefaultLogger _incrementMoreCountInPerformer]
// Type encoding: v16@0:8
// Implementation: 0x1057227ec

// -[SCFriendingMetricsDefaultLogger _incrementSnapButtonClickCountInPerformer]
// Type encoding: v16@0:8
// Implementation: 0x105722828

// -[SCFriendingMetricsDefaultLogger _incrementChatButtonClickCountInPerformer]
// Type encoding: v16@0:8
// Implementation: 0x105722864

// -[SCFriendingMetricsDefaultLogger _didUpdateQueryInPerformer]
// Type encoding: v16@0:8
// Implementation: 0x1057228a0

// -[SCFriendingMetricsDefaultLogger _logIncomingFriendsCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x1057228dc

// -[SCFriendingMetricsDefaultLogger _logSuggestedFriendsCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x1057228ec

// -[SCFriendingMetricsDefaultLogger _updateSectionVisitedCellWithSectionType:index:currentTime:isUnviewed:]
// Type encoding: v44@0:8@16q24d32B40
// Implementation: 0x1057228fc

// -[SCFriendingMetricsDefaultLogger logIncomingFriendsCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x105722c38

// -[SCFriendingMetricsDefaultLogger logSuggestedFriendsCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x105722d24

// -[SCFriendingMetricsDefaultLogger _createOrReuseViewPageRecord:fromEntryType:sourcePage:entryTime:pageSessionId:isFromAppForeground:]
// Type encoding: v60@0:8q16q24@32d40@48B56
// Implementation: 0x105722e10

// -[SCFriendingMetricsDefaultLogger _pausePage:pauseTime:]
// Type encoding: v32@0:8q16d24
// Implementation: 0x105723008

// -[SCFriendingMetricsDefaultLogger _resumePage:resumeTime:]
// Type encoding: v32@0:8q16d24
// Implementation: 0x1057230a4

// -[SCFriendingMetricsDefaultLogger _logExitPage:entryPoint:quitTime:isFromAppBackground:]
// Type encoding: v44@0:8q16q24d32B40
// Implementation: 0x105723138

// -[SCFriendingMetricsDefaultLogger _uploadViewPageRecord:]
// Type encoding: v24@0:8@16
// Implementation: 0x10572330c

// -[SCFriendingMetricsDefaultLogger _logGraphenePageView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10572347c

// -[SCFriendingMetricsDefaultLogger _uploadViewExit:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057235f4

// -[SCFriendingMetricsDefaultLogger _logGraphenePageExit:]
// Type encoding: v24@0:8@16
// Implementation: 0x105723720

// -[SCFriendingMetricsDefaultLogger _uploadAddFriendPageEndEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057239e8

// -[SCFriendingMetricsDefaultLogger _populateViewedCount:to:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105723c58

// -[SCFriendingMetricsDefaultLogger _hasNotSeenSuggestedFriends:]
// Type encoding: B24@0:8@16
// Implementation: 0x105723f10

// -[SCFriendingMetricsDefaultLogger _pupulateViewedSections:to:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105723f80

// -[SCFriendingMetricsDefaultLogger _convertSectionName:]
// Type encoding: @24@0:8@16
// Implementation: 0x1057241d8

// -[SCFriendingMetricsDefaultLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105724378

@end
