// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNativeCommunityFeedManager
// Superclass: NSObject
// Address: 0x112a43d18

@interface SCNativeCommunityFeedManager

// Property: updateObservable; attributes: T@"SCObservable",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNativeCommunityFeedManager initWithNativeSession:feedDataUpdateAnnouncer:notificationPool:messagingExperimentService:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x100607ab8

// -[SCNativeCommunityFeedManager hasMoreFeedEntries]
// Type encoding: B16@0:8
// Implementation: 0x105522414

// -[SCNativeCommunityFeedManager hasMoreFeedEntriesObservable]
// Type encoding: @16@0:8
// Implementation: 0x105522448

// -[SCNativeCommunityFeedManager maybeSyncFeedLite:userInCommunities:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x105522470

// -[SCNativeCommunityFeedManager exitFeed:]
// Type encoding: v24@0:8@16
// Implementation: 0x10552254c

// -[SCNativeCommunityFeedManager enterFeed:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055225e0

// -[SCNativeCommunityFeedManager retryMultiRecipientFeedEntry:]
// Type encoding: v24@0:8@16
// Implementation: 0x105522690

// -[SCNativeCommunityFeedManager cancelSendForConversationIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x105522724

// -[SCNativeCommunityFeedManager fetchSaveableSentSnapMessageIdForConversationId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105522908

// -[SCNativeCommunityFeedManager updateObservable]
// Type encoding: @16@0:8
// Implementation: 0x105522aa4

// -[SCNativeCommunityFeedManager loadingStatusStreaming]
// Type encoding: @16@0:8
// Implementation: 0x105522acc

// -[SCNativeCommunityFeedManager queryFeedAutoPaginated:]
// Type encoding: v20@0:8B16
// Implementation: 0x105522af4

// -[SCNativeCommunityFeedManager didUpdateFeedEntries:multiRecipientFeedEntries:deletedFeedEntries:multiRecipientFeedEntriesDeleted:updateMetadata:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x105522b88

// -[SCNativeCommunityFeedManager didFeedRequestError:status:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x105522d54

// -[SCNativeCommunityFeedManager _feedManager]
// Type encoding: @16@0:8
// Implementation: 0x105522dd4

// -[SCNativeCommunityFeedManager _submitNotificationWithPresenter:]
// Type encoding: v24@0:8@16
// Implementation: 0x105522e14

// -[SCNativeCommunityFeedManager _toastError:updateType:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x105522edc

// -[SCNativeCommunityFeedManager _setQueryFeedAutoPaginatedRequestedInFlight:]
// Type encoding: v20@0:8B16
// Implementation: 0x105522ee0

// -[SCNativeCommunityFeedManager _setQueryFeedAutoPaginatedRequestedInFlight:hasMoreEntries:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x105522f10

// -[SCNativeCommunityFeedManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105522f50

@end
