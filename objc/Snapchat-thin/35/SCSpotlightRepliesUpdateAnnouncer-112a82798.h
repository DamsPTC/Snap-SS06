// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpotlightRepliesUpdateAnnouncer
// Superclass: NSObject
// Address: 0x112a82798

@interface SCSpotlightRepliesUpdateAnnouncer

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpotlightRepliesUpdateAnnouncer addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059f90ec

// -[SCSpotlightRepliesUpdateAnnouncer removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059f90f4

// -[SCSpotlightRepliesUpdateAnnouncer init]
// Type encoding: @16@0:8
// Implementation: 0x1059f90fc

// -[SCSpotlightRepliesUpdateAnnouncer announceRepliesStatusUpdateWithReplyId:snapId:toApprovalState:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x1059f9160

// -[SCSpotlightRepliesUpdateAnnouncer announceRepliesReactionUpdate]
// Type encoding: v16@0:8
// Implementation: 0x1059f9314

// -[SCSpotlightRepliesUpdateAnnouncer announceRepliesAdditionToDataStoreUpdate]
// Type encoding: v16@0:8
// Implementation: 0x1059f9370

// -[SCSpotlightRepliesUpdateAnnouncer announceRepliesDeletionFromDataStoreUpdate]
// Type encoding: v16@0:8
// Implementation: 0x1059f93cc

// -[SCSpotlightRepliesUpdateAnnouncer announceRepliesPostingStateUpdate]
// Type encoding: v16@0:8
// Implementation: 0x1059f9428

// -[SCSpotlightRepliesUpdateAnnouncer announceRepliesThreadedRepliesFetchStateUpdateWithCommentId:threadedRepliesFetchState:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1059f9484

// -[SCSpotlightRepliesUpdateAnnouncer announceRepliesAutoApprovalSettingUpdate]
// Type encoding: v16@0:8
// Implementation: 0x1059f960c

// -[SCSpotlightRepliesUpdateAnnouncer announceRepliesPresentViewControllerOverRepliesTrayWithEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059f9668

// -[SCSpotlightRepliesUpdateAnnouncer announceRepliesDidDismissPresentedViewControllerWithEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059f96d4

// -[SCSpotlightRepliesUpdateAnnouncer announceRepliesDidTapReplyToCommentWithSpotlightReply:interactionContext:parentCommentRequestId:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x1059f9740

// -[SCSpotlightRepliesUpdateAnnouncer announceRepliesHighlightPrependedComments]
// Type encoding: v16@0:8
// Implementation: 0x1059f98f4

// -[SCSpotlightRepliesUpdateAnnouncer announceRepliesCancelHighlightPrependedComments]
// Type encoding: v16@0:8
// Implementation: 0x1059f9950

// -[SCSpotlightRepliesUpdateAnnouncer announceRepliesDidTapShowMoreCell]
// Type encoding: v16@0:8
// Implementation: 0x1059f99ac

// -[SCSpotlightRepliesUpdateAnnouncer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1059f9a08

// +[SCSpotlightRepliesUpdateAnnouncer announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1059f90e0

@end
