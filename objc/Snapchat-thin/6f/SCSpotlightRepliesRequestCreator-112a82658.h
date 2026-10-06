// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpotlightRepliesRequestCreator
// Superclass: NSObject
// Address: 0x112a82658

@interface SCSpotlightRepliesRequestCreator


// -[SCSpotlightRepliesRequestCreator initWithClientInfoProvider:userId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1059f5fc0

// -[SCSpotlightRepliesRequestCreator _createRequestMetadata]
// Type encoding: @16@0:8
// Implementation: 0x1059f6064

// -[SCSpotlightRepliesRequestCreator createGetSpotlightRepliesRequestWithSnapId:storyId:approvalState:paginationToken:parentCommentId:snapCreatorUserId:]
// Type encoding: @64@0:8@16@24q32@40@48@56
// Implementation: 0x1059f6128

// -[SCSpotlightRepliesRequestCreator createPostSpotlightReplyRequestWithReply:storyId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1059f62c4

// -[SCSpotlightRepliesRequestCreator createUpdateReplyStateRequestWithReplyId:snapId:storyId:approvalState:]
// Type encoding: @48@0:8@16@24@32q40
// Implementation: 0x1059f637c

// -[SCSpotlightRepliesRequestCreator createDeleteUserRepliesRequestWithReplyId:snapId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1059f653c

// -[SCSpotlightRepliesRequestCreator createUpdateAllRepliesStateRequestWithSnapId:storyId:approvalState:updateAllTimestamp:autoApprovalSettingType:]
// Type encoding: @56@0:8@16@24q32d40q48
// Implementation: 0x1059f66d8

// -[SCSpotlightRepliesRequestCreator createReplyReactRequestWithReactTypeId:replyId:snapId:compositeStoryId:reactOption:]
// Type encoding: @56@0:8Q16@24@32@40q48
// Implementation: 0x1059f67e4

// -[SCSpotlightRepliesRequestCreator createGetUserRepliesRequestWithSnapId:approvalState:paginationCursor:]
// Type encoding: @40@0:8@16q24@32
// Implementation: 0x1059f69fc

// -[SCSpotlightRepliesRequestCreator createReplyLookupRequestWithReplyIds:snapId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1059f6ae8

// -[SCSpotlightRepliesRequestCreator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1059f6cf0

@end
