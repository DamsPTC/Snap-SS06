// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUserTaggingStoryShareMessageSender
// Superclass: NSObject
// Address: 0x112b079e8

@interface SCUserTaggingStoryShareMessageSender

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUserTaggingStoryShareMessageSender initWithUserSession:customStoriesDataFetcher:conversationDestinationParser:storyShareSender:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10696dc5c

// -[SCUserTaggingStoryShareMessageSender notifyTaggedUserWithStoryType:mediaType:storyIdToStorySnapId:notifiedUserIds:businessId:storyTypeVariant:]
// Type encoding: v60@0:8Q16q24@32@40@48i56
// Implementation: 0x10696ddb4

// -[SCUserTaggingStoryShareMessageSender _notifyMyStoryTaggedUserWithMediaType:storyIdToStorySnapId:notifiedUserIds:]
// Type encoding: v40@0:8q16@24@32
// Implementation: 0x10696e058

// -[SCUserTaggingStoryShareMessageSender _notifyPublicStoryTaggedUserWithMediaType:storyIdToStorySnapId:notifiedUserIds:businessId:storyTypeVariant:]
// Type encoding: v52@0:8q16@24@32@40i48
// Implementation: 0x10696e134

// -[SCUserTaggingStoryShareMessageSender _notifyCustomStoryTaggedUserWithMediaType:storySnapId:storyId:notifiedUserIds:]
// Type encoding: v48@0:8q16@24@32@40
// Implementation: 0x10696e21c

// -[SCUserTaggingStoryShareMessageSender _scheduleMessageWithCustomStoryMetadata:storySnapId:mediaType:mentionedUserIds:performer:]
// Type encoding: v56@0:8@16@24q32@40@48
// Implementation: 0x10696e418

// -[SCUserTaggingStoryShareMessageSender .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10696e54c

@end
