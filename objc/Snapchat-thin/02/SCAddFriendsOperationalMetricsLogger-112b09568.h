// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAddFriendsOperationalMetricsLogger
// Superclass: NSObject
// Address: 0x112b09568

@interface SCAddFriendsOperationalMetricsLogger


// -[SCAddFriendsOperationalMetricsLogger initWithSnapchattersLoggingDataObservable:pageEventObservable:additionalPageEventObservable:friendingMetricsLogger:inviteContactSectionLogger:addFriendsPageType:addFriendPageEntryPoint:pageEntryType:inviteFriendsPageSource:contextSource:performerProvider:pageSessionId:snapchattersDataFetcher:]
// Type encoding: @120@0:8@16@24@32@40@48q56q64q72q80Q88@96@104@112
// Implementation: 0x1069a7098

// -[SCAddFriendsOperationalMetricsLogger _observePageEventData:inLifecycle:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1069a729c

// -[SCAddFriendsOperationalMetricsLogger _handleEventData:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069a73d4

// -[SCAddFriendsOperationalMetricsLogger _doInitialization:]
// Type encoding: v20@0:8B16
// Implementation: 0x1069a76c8

// -[SCAddFriendsOperationalMetricsLogger _startOrResumeAddFriendsPageEvent]
// Type encoding: v16@0:8
// Implementation: 0x1069a7824

// -[SCAddFriendsOperationalMetricsLogger _stopAddFriendsPageEvent]
// Type encoding: v16@0:8
// Implementation: 0x1069a787c

// -[SCAddFriendsOperationalMetricsLogger _quitAddFriendsPageEvent:]
// Type encoding: v20@0:8B16
// Implementation: 0x1069a78b8

// -[SCAddFriendsOperationalMetricsLogger _didUpdateQuery]
// Type encoding: v16@0:8
// Implementation: 0x1069a7964

// -[SCAddFriendsOperationalMetricsLogger _incrementSnapcodeCount]
// Type encoding: v16@0:8
// Implementation: 0x1069a7998

// -[SCAddFriendsOperationalMetricsLogger _incrementSMSCount]
// Type encoding: v16@0:8
// Implementation: 0x1069a79cc

// -[SCAddFriendsOperationalMetricsLogger _incrementPullToRefreshCount]
// Type encoding: v16@0:8
// Implementation: 0x1069a7a00

// -[SCAddFriendsOperationalMetricsLogger _incrementViewMoreClickCount]
// Type encoding: v16@0:8
// Implementation: 0x1069a7a34

// -[SCAddFriendsOperationalMetricsLogger _incrementEmailCount]
// Type encoding: v16@0:8
// Implementation: 0x1069a7a68

// -[SCAddFriendsOperationalMetricsLogger _incrementMoreCount]
// Type encoding: v16@0:8
// Implementation: 0x1069a7a9c

// -[SCAddFriendsOperationalMetricsLogger _incrementSnapButtonClickCount]
// Type encoding: v16@0:8
// Implementation: 0x1069a7ad0

// -[SCAddFriendsOperationalMetricsLogger _incrementChatButtonClickCount]
// Type encoding: v16@0:8
// Implementation: 0x1069a7b04

// -[SCAddFriendsOperationalMetricsLogger _reportFriendInviteMetric]
// Type encoding: v16@0:8
// Implementation: 0x1069a7b38

// -[SCAddFriendsOperationalMetricsLogger _updateSectionVisitedCellWithDisplayCell:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069a7b74

// -[SCAddFriendsOperationalMetricsLogger _updateSectionVisitedContactCellWithDisplayCell:contactNonSnapchatter:hasScrolled:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1069a7c9c

// -[SCAddFriendsOperationalMetricsLogger _logContactSeenWithContactNonSnapchatter:index:hasScrolled:]
// Type encoding: v36@0:8@16d24B32
// Implementation: 0x1069a7d1c

// -[SCAddFriendsOperationalMetricsLogger _fetchAndLogFriendsDataInQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069a7e08

// -[SCAddFriendsOperationalMetricsLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1069a7f98

@end
