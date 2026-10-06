// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpotlightRepliesDataStore
// Superclass: NSObject
// Address: 0x112a825b8

@interface SCSpotlightRepliesDataStore

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpotlightRepliesDataStore initWithUserId:spotlightRepliesUpdateAnnouncer:storiesConfigProvider:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1059f01ec

// -[SCSpotlightRepliesDataStore snapRepliesDataProvider]
// Type encoding: @16@0:8
// Implementation: 0x1059f03d8

// -[SCSpotlightRepliesDataStore spotlightReplyWithReplyId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1059f0400

// -[SCSpotlightRepliesDataStore _threadedRepliesBelowTopLevelCommentWithReplyId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1059f059c

// -[SCSpotlightRepliesDataStore hiddenThreadedRepliesWithParentCommentId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1059f0614

// -[SCSpotlightRepliesDataStore threadedRepliesFetchStatusWithParentCommentId:]
// Type encoding: Q24@0:8@16
// Implementation: 0x1059f075c

// -[SCSpotlightRepliesDataStore paginationCursorWithParentCommentId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1059f07e4

// -[SCSpotlightRepliesDataStore firstPendingRepliesFetchTime]
// Type encoding: d16@0:8
// Implementation: 0x1059f085c

// -[SCSpotlightRepliesDataStore fetchRepliesForPendingRepliesTab]
// Type encoding: @16@0:8
// Implementation: 0x1059f0864

// -[SCSpotlightRepliesDataStore fetchRepliesForLiveRepliesTab]
// Type encoding: @16@0:8
// Implementation: 0x1059f0980

// -[SCSpotlightRepliesDataStore fetchSpotlightSnapReplies]
// Type encoding: @16@0:8
// Implementation: 0x1059f0c88

// -[SCSpotlightRepliesDataStore fetchTopReply]
// Type encoding: @16@0:8
// Implementation: 0x1059f0d90

// -[SCSpotlightRepliesDataStore repliesCountWithFetchType:]
// Type encoding: Q24@0:8q16
// Implementation: 0x1059f0ecc

// -[SCSpotlightRepliesDataStore visibleRepliesCountInViewerExperience]
// Type encoding: Q16@0:8
// Implementation: 0x1059f1028

// -[SCSpotlightRepliesDataStore paginationTokenForFetchType:]
// Type encoding: @24@0:8q16
// Implementation: 0x1059f1070

// -[SCSpotlightRepliesDataStore _reactReply:reactionTypeId:reactOption:isCommentAdmin:]
// Type encoding: v44@0:8@16Q24q32B40
// Implementation: 0x1059f11d4

// -[SCSpotlightRepliesDataStore _addRepliesToDataStore:position:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1059f1440

// -[SCSpotlightRepliesDataStore _dedupSpotlightSnapRepliesWithCompositeId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1059f14f4

// -[SCSpotlightRepliesDataStore _addSnapRepliesToDataStore:position:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1059f15e0

// -[SCSpotlightRepliesDataStore _removeSnapRepliesFromDataStore:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059f18ec

// -[SCSpotlightRepliesDataStore _appendThreadedReplies:afterParentCommentId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1059f1950

// -[SCSpotlightRepliesDataStore _dedupSpotlightRepliesWithReplyId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1059f1b24

// -[SCSpotlightRepliesDataStore _indexOfReplyWithReplyId:]
// Type encoding: Q24@0:8@16
// Implementation: 0x1059f1b4c

// -[SCSpotlightRepliesDataStore _rejectRepliesFromDataStore:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059f1c24

// -[SCSpotlightRepliesDataStore _hasThreadedRepliesForSpotlightReply:]
// Type encoding: B24@0:8@16
// Implementation: 0x1059f1dd8

// -[SCSpotlightRepliesDataStore _deleteReplyFromDataStore:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059f1f64

// -[SCSpotlightRepliesDataStore _moveRepliesInDataStore:toApprovalState:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1059f241c

// -[SCSpotlightRepliesDataStore _updateReply:postingState:serverGeneratedReplyId:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x1059f2810

// -[SCSpotlightRepliesDataStore _scFetchExactRepliesFromDataStoreForReplies:]
// Type encoding: @24@0:8@16
// Implementation: 0x1059f2978

// -[SCSpotlightRepliesDataStore hideThreadedRepliesUnderParentComment:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059f2b38

// -[SCSpotlightRepliesDataStore setThreadedRepliesFetchStatusWithParentCommentId:threadedRepliesFetchStatus:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1059f2c44

// -[SCSpotlightRepliesDataStore setPaginationCursorForParentCommentId:paginationCursor:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1059f2cd4

// -[SCSpotlightRepliesDataStore reactReply:reactionTypeId:reactOption:isCommentAdmin:]
// Type encoding: v44@0:8@16Q24q32B40
// Implementation: 0x1059f2d50

// -[SCSpotlightRepliesDataStore addReplies:position:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1059f2e80

// -[SCSpotlightRepliesDataStore appendThreadedReplies:afterParentCommentId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1059f2f98

// -[SCSpotlightRepliesDataStore addPaginationToken:forApprovalState:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1059f30cc

// -[SCSpotlightRepliesDataStore paginationCursorForSnapReplies]
// Type encoding: @16@0:8
// Implementation: 0x1059f31e4

// -[SCSpotlightRepliesDataStore updateSnapRepliesPaginationCursor:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059f3220

// -[SCSpotlightRepliesDataStore moveReplies:toApprovalState:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1059f3260

// -[SCSpotlightRepliesDataStore updateReply:postingState:serverGeneratedReplyId:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x1059f3378

// -[SCSpotlightRepliesDataStore rejectReplies:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059f34c0

// -[SCSpotlightRepliesDataStore deleteReply:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059f35cc

// -[SCSpotlightRepliesDataStore allFetchedThreadedRepliesUnderParentCommentId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1059f36d8

// -[SCSpotlightRepliesDataStore deleteCommentsFromUserID:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059f38c8

// -[SCSpotlightRepliesDataStore addSpotlightSnapReplies:position:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1059f3a78

// -[SCSpotlightRepliesDataStore removeSpotlightSnapReplies:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059f3b90

// -[SCSpotlightRepliesDataStore _decrementThreadedReplyCountWithReplyId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059f3c9c

// -[SCSpotlightRepliesDataStore _hideThreadedRepliesUnderParentComment:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059f3e04

// -[SCSpotlightRepliesDataStore _createPredicateFromFetchType:fromCurrentUserOnly:]
// Type encoding: @28@0:8q16B24
// Implementation: 0x1059f407c

// -[SCSpotlightRepliesDataStore _fetchRepliesWithFetchType:]
// Type encoding: @24@0:8q16
// Implementation: 0x1059f42b4

// -[SCSpotlightRepliesDataStore _fetchCurrentUserRepliesWithFetchType:]
// Type encoding: @24@0:8q16
// Implementation: 0x1059f4308

// -[SCSpotlightRepliesDataStore _addPaginationToken:forApprovalState:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1059f4528

// -[SCSpotlightRepliesDataStore _isReplyInPendingTab:]
// Type encoding: B24@0:8@16
// Implementation: 0x1059f45cc

// -[SCSpotlightRepliesDataStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1059f4644

@end
