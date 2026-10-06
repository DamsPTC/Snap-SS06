// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpotlightRepliesRequestSenderImpl
// Superclass: NSObject
// Address: 0x112a826a8

@interface SCSpotlightRepliesRequestSenderImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpotlightRepliesRequestSenderImpl initWithRequestCreator:httpMetadataService:httpRequestModifier:spotlightRepliesDataFetching:mixerEndpointManager:clientInfoProvider:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x1059f6d20

// -[SCSpotlightRepliesRequestSenderImpl fetchRepliesForSnap:identifierOfCompositeStoryId:approvalState:parentCommentId:paginationCursor:snapCreatorUserId:completion:]
// Type encoding: v72@0:8@16@24q32@40@48@56@?64
// Implementation: 0x1059f6f84

// -[SCSpotlightRepliesRequestSenderImpl boostReplyWithReplyId:snapId:compositeStoryId:reactionTypeId:reactOption:completion:]
// Type encoding: v64@0:8@16@24@32Q40q48@?56
// Implementation: 0x1059f72dc

// -[SCSpotlightRepliesRequestSenderImpl fetchUserRepliesWithSnapId:approvalState:paginationToken:completion:]
// Type encoding: v48@0:8@16q24@32@?40
// Implementation: 0x1059f748c

// -[SCSpotlightRepliesRequestSenderImpl postSpotlightReply:identifierOfCompositeStoryId:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1059f77b0

// -[SCSpotlightRepliesRequestSenderImpl updateSpotlightReplyWithReplyId:snapId:identifierOfCompositeStoryId:approvalState:completion:]
// Type encoding: v56@0:8@16@24@32q40@?48
// Implementation: 0x1059f77b4

// -[SCSpotlightRepliesRequestSenderImpl deleteSpotlightUserRepliesWithReplyId:snapId:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1059f7954

// -[SCSpotlightRepliesRequestSenderImpl updateAllSpotlightRepliesInPendingTabWithSnapId:identifierOfCompositeStoryId:approvalState:updateAllTimestamp:completion:]
// Type encoding: v56@0:8@16@24q32d40@?48
// Implementation: 0x1059f7ae4

// -[SCSpotlightRepliesRequestSenderImpl updateRepliesStatusOnAllSpotlightSnapsWithAutoApprovalSettingType:approvalState:updateAllTimestamp:completion:]
// Type encoding: v48@0:8q16q24d32@?40
// Implementation: 0x1059f7c90

// -[SCSpotlightRepliesRequestSenderImpl replyLookupWithReplyIds:snapId:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1059f7e38

// -[SCSpotlightRepliesRequestSenderImpl _postReply:identifierOfCompositeStoryId:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1059f8114

// -[SCSpotlightRepliesRequestSenderImpl _sendRequest:timeoutInSecond:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1059f83d4

// -[SCSpotlightRepliesRequestSenderImpl fetchCommentSanpRepliesWithCompositeStoryId:paginationCursor:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1059f853c

// -[SCSpotlightRepliesRequestSenderImpl hideCommentSnapRepliesWithCompositeStoryId:originalPostCompositeStoryId:snapReplyPosterUserId:currentUserId:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x1059f8ba8

// -[SCSpotlightRepliesRequestSenderImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1059f8ebc

@end
