// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapchattersUpdateDataRequest
// Superclass: NSObject
// Address: 0x112c82ea8

@interface SCSnapchattersUpdateDataRequest


// -[SCSnapchattersUpdateDataRequest asAdd]
// Type encoding: @16@0:8
// Implementation: 0x10901a714

// -[SCSnapchattersUpdateDataRequest asMultiAdd]
// Type encoding: @16@0:8
// Implementation: 0x10901a910

// -[SCSnapchattersUpdateDataRequest asDelete]
// Type encoding: @16@0:8
// Implementation: 0x10901aa68

// -[SCSnapchattersUpdateDataRequest asIgnore]
// Type encoding: @16@0:8
// Implementation: 0x10901ac20

// -[SCSnapchattersUpdateDataRequest asBlock]
// Type encoding: @16@0:8
// Implementation: 0x10901ad78

// -[SCSnapchattersUpdateDataRequest asUnblock]
// Type encoding: @16@0:8
// Implementation: 0x10901aef0

// -[SCSnapchattersUpdateDataRequest asSetDisplay]
// Type encoding: @16@0:8
// Implementation: 0x10901b030

// -[SCSnapchattersUpdateDataRequest asSetPostSendEmoji]
// Type encoding: @16@0:8
// Implementation: 0x10901b18c

// -[SCSnapchattersUpdateDataRequest asSetStoryPrivacy]
// Type encoding: @16@0:8
// Implementation: 0x10901b2e8

// -[SCSnapchattersUpdateDataRequest asUserId]
// Type encoding: @16@0:8
// Implementation: 0x10901b42c

// -[SCSnapchattersUpdateDataRequest matchAddDeleteBlockWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10901b724

// -[SCSnapchattersUpdateDataRequest matchAddDeleteBlockUnblockWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10901b858

// -[SCSnapchattersUpdateDataRequest copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b64cc7c

// -[SCSnapchattersUpdateDataRequest hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b64cca0

// -[SCSnapchattersUpdateDataRequest internalInit]
// Type encoding: @16@0:8
// Implementation: 0x10b64ce58

// -[SCSnapchattersUpdateDataRequest isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b64ce9c

// -[SCSnapchattersUpdateDataRequest matchAdd:multiAdd:delete:ignore:block:unblock:setDisplay:setStoryPrivacy:setPostSendEmoji:]
// Type encoding: v88@0:8@?16@?24@?32@?40@?48@?56@?64@?72@?80
// Implementation: 0x10b64d1c4

// -[SCSnapchattersUpdateDataRequest .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b64d408

// +[SCSnapchattersUpdateDataRequest initWithSCCAddFriendRequest:placement:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x108f40d74

// +[SCSnapchattersUpdateDataRequest addSourceTypeForAddSource:]
// Type encoding: q24@0:8@16
// Implementation: 0x108f40fdc

// +[SCSnapchattersUpdateDataRequest addWithSnapchatter:addSource:placement:cellIndex:snapId:compositeStoryId:placementInfo:selectedShortcutId:sectionName:pageSessionId:]
// Type encoding: @96@0:8@16q24q32q40@48@56@64@72@80@88
// Implementation: 0x10b64c5b8

// +[SCSnapchattersUpdateDataRequest blockWithSnapchatter:blockReasonId:pageSessionId:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10b64c75c

// +[SCSnapchattersUpdateDataRequest deleteWithAFriend:deleteSource:snapId:compositeStoryId:placementInfo:pageSessionId:]
// Type encoding: @64@0:8@16q24@32@40@48@56
// Implementation: 0x10b64c828

// +[SCSnapchattersUpdateDataRequest ignoreWithIncomingFriend:pageSessionId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b64c958

// +[SCSnapchattersUpdateDataRequest multiAddWithAddFriendDataRequests:placement:isRegistration:]
// Type encoding: @36@0:8@16q24B32
// Implementation: 0x10b64c9f0

// +[SCSnapchattersUpdateDataRequest setDisplayWithSnapchatter:displayName:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b64ca74

// +[SCSnapchattersUpdateDataRequest setPostSendEmojiWithSnapchatter:postSendEmoji:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b64cb0c

// +[SCSnapchattersUpdateDataRequest setStoryPrivacyWithUserIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b64cba4

// +[SCSnapchattersUpdateDataRequest unblockWithBlockedSnapchatter:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b64cc10

@end
