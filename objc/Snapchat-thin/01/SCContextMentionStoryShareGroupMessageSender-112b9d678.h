// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContextMentionStoryShareGroupMessageSender
// Superclass: NSObject
// Address: 0x112b9d678

@interface SCContextMentionStoryShareGroupMessageSender

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCContextMentionStoryShareGroupMessageSender initWithUserTaggingStoryShareMessageSender:userSession:customStoriesDataFetcher:conversationDestinationParser:storyShareSender:snapchatterFetcher:groupsDataCreator:groupsDataFetcher:contextExperimentService:circumstanceEngine:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64@72@80@88
// Implementation: 0x108433050

// -[SCContextMentionStoryShareGroupMessageSender notifyTaggedUserWithStoryType:mediaType:storyIdToStorySnapId:notifiedUserIds:businessId:storyTypeVariant:]
// Type encoding: v60@0:8Q16q24@32@40@48i56
// Implementation: 0x108433310

// -[SCContextMentionStoryShareGroupMessageSender _attemptToCreateGroupChatForMentionedFriends:mediaType:notifiedUserIds:completion:]
// Type encoding: v48@0:8@16q24@32@?40
// Implementation: 0x1084334ec

// -[SCContextMentionStoryShareGroupMessageSender _notifyGroupChatAndIndividualFriendsForCustomStory:nonMutualFriendUserIds:storyIdToStorySnapId:mediaType:sendIndividuallyBlock:]
// Type encoding: v56@0:8@16@24@32q40@?48
// Implementation: 0x108433bcc

// -[SCContextMentionStoryShareGroupMessageSender _sendGroupchatNotificationToStory:mentionedFriends:nonMutualFriendUserIds:mediaType:completion:]
// Type encoding: v56@0:8@16@24@32q40@?48
// Implementation: 0x108434278

// -[SCContextMentionStoryShareGroupMessageSender .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108434530

@end
