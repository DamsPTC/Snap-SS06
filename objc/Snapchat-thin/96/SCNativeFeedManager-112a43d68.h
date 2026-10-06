// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNativeFeedManager
// Superclass: NSObject
// Address: 0x112a43d68

@interface SCNativeFeedManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNativeFeedManager initWithNativeSession:feedDataUpdateAnnouncer:friendsFeedReadyLogger:ghostToFeedLogger:graphene:friendsFeedGrapheneV2:friendsFeedEntryStore:friendsFeedLoadingStatusStream:userId:crashLogger:notificationPool:messagingExperimentService:networkConnectivityObservable:]
// Type encoding: @120@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112
// Implementation: 0x100605cfc

// -[SCNativeFeedManager _feedManager]
// Type encoding: @16@0:8
// Implementation: 0x10060692c

// -[SCNativeFeedManager _queryFeedParameters]
// Type encoding: @16@0:8
// Implementation: 0x105522fb8

// -[SCNativeFeedManager _loadInitialLocalFeedEntries]
// Type encoding: v16@0:8
// Implementation: 0x1006066e4

// -[SCNativeFeedManager _updateQueryFeedParametersForPaginationUpdate:feedEntries:updateType:fetchContext:]
// Type encoding: v48@0:8@16@24q32@40
// Implementation: 0x10086e6b8

// -[SCNativeFeedManager _queryFeedParametersForSyncPaginationUpdate:feedEntries:fetchContext:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10086e8f4

// -[SCNativeFeedManager _queryFeedParametersForQueryPaginationUpdate:feedEntries:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105523000

// -[SCNativeFeedManager _conversationIdForPaginationUpdate:feedEntries:updateType:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x10086f170

// -[SCNativeFeedManager _reportNonFatalForQueryIfNecessaryForFeedEntries:hasMoreEntries:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1055230b0

// -[SCNativeFeedManager hasMoreFeedEntries]
// Type encoding: B16@0:8
// Implementation: 0x105523150

// -[SCNativeFeedManager hasMoreFeedEntriesObservable]
// Type encoding: @16@0:8
// Implementation: 0x1055231ac

// -[SCNativeFeedManager queryFeedParameters]
// Type encoding: @16@0:8
// Implementation: 0x1055231d4

// -[SCNativeFeedManager feedDataUpdatePublisher]
// Type encoding: @16@0:8
// Implementation: 0x1055231d8

// -[SCNativeFeedManager enterFeed:]
// Type encoding: v24@0:8@16
// Implementation: 0x105523200

// -[SCNativeFeedManager exitFeed:]
// Type encoding: v24@0:8@16
// Implementation: 0x105523298

// -[SCNativeFeedManager retryMultiRecipientFeedEntry:]
// Type encoding: v24@0:8@16
// Implementation: 0x10552332c

// -[SCNativeFeedManager cancelSendForConversationIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055233c0

// -[SCNativeFeedManager fetchSaveableSentSnapMessageIdForConversationId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1055235a4

// -[SCNativeFeedManager updateAppStateChange:]
// Type encoding: v20@0:8B16
// Implementation: 0x100608ac4

// -[SCNativeFeedManager updateLoadingStatus:triggerType:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x100609890

// -[SCNativeFeedManager updateFriendsFeedForFetchContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x10060de60

// -[SCNativeFeedManager _paginateFeedForFetchContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x105523740

// -[SCNativeFeedManager paginateFeedForFetchContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x105523808

// -[SCNativeFeedManager consecutivePaginationFailures]
// Type encoding: Q16@0:8
// Implementation: 0x105523964

// -[SCNativeFeedManager _incrementConsecutivePaginationFailures:]
// Type encoding: v20@0:8B16
// Implementation: 0x1006066a0

// -[SCNativeFeedManager configureForWarmStart]
// Type encoding: v16@0:8
// Implementation: 0x105523998

// -[SCNativeFeedManager fetchAndSyncFeedWithConversationIds:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1055239a4

// -[SCNativeFeedManager _fetchAndSyncFeedWithConversationIdsSuccessCallbackWithFeedEntries:]
// Type encoding: v24@0:8@16
// Implementation: 0x105523c00

// -[SCNativeFeedManager _toastArroyoError:updateType:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x105523c78

// -[SCNativeFeedManager _submitNotificationWithPresenter:]
// Type encoding: v24@0:8@16
// Implementation: 0x105523c7c

// -[SCNativeFeedManager didUpdateFeedEntries:multiRecipientFeedEntries:deletedFeedEntries:multiRecipientFeedEntriesDeleted:updateMetadata:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x100637980

// -[SCNativeFeedManager _didFetchFeedUpdateFeedEntries:multiRecipientFeedEntries:updateMetadata:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1006b11fc

// -[SCNativeFeedManager _didQueryFeedUpdateFeedEntries:multiRecipientFeedEntries:updateMetadata:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105523d44

// -[SCNativeFeedManager _didSyncFeedUpdateFeedEntries:multiRecipientFeedEntries:deletedFeedEntries:multiRecipientFeedEntriesDeleted:updateMetadata:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x10086ddf8

// -[SCNativeFeedManager _didPrefetchFeedUpdateFeedEntries:updateMetadata:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100637c98

// -[SCNativeFeedManager didFeedRequestError:status:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x105523e70

// -[SCNativeFeedManager _didFetchFeedRequestError:status:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x105524020

// -[SCNativeFeedManager _didQueryFeedRequestError:status:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1055240d8

// -[SCNativeFeedManager _didSyncFeedRequestError:fetchContext:status:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x105524120

// -[SCNativeFeedManager _logInitialFetchMetricWithCurrentTime:success:feedEntriesCount:]
// Type encoding: v36@0:8d16B24q28
// Implementation: 0x105524344

// -[SCNativeFeedManager updatePinnedStatusWithPinned:conversationId:completion:]
// Type encoding: v36@0:8B16@20@?28
// Implementation: 0x105524440

// -[SCNativeFeedManager fetchExpiredStreakFeedEntriesWithLimit:minStreakCount:minExpirationTimeMs:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1055245fc

// -[SCNativeFeedManager fetchFeedEntriesForUsers:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10552479c

// -[SCNativeFeedManager _networkConnectivityDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x100606650

// -[SCNativeFeedManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105524950

@end
