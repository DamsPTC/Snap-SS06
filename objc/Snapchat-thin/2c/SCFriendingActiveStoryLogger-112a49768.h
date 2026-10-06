// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendingActiveStoryLogger
// Superclass: NSObject
// Address: 0x112a49768

@interface SCFriendingActiveStoryLogger


// -[SCFriendingActiveStoryLogger initWithGrapheneRegistry:]
// Type encoding: @24@0:8@16
// Implementation: 0x1055aa8a8

// -[SCFriendingActiveStoryLogger logAddFriendsPageEndEventWithNumberOfSeenIncomingFriends:numberOfSeenIncomingFriendsWithActiveStories:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x1055aa948

// -[SCFriendingActiveStoryLogger logAddFriendsPageEndEventWithNumberOfSeenSuggestions:numberOfSeenSuggestionsWithActiveStories:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x1055aa9fc

// -[SCFriendingActiveStoryLogger addIncomingFriendWithActiveStory:]
// Type encoding: v20@0:8B16
// Implementation: 0x1055aaab0

// -[SCFriendingActiveStoryLogger addSuggestedFriendWithActiveStory:]
// Type encoding: v20@0:8B16
// Implementation: 0x1055aab08

// -[SCFriendingActiveStoryLogger logQueryActiveStoryForIncomingFriendsEnd:numberOfQueriedUserIds:numberOfReturnedUserIds:latency:]
// Type encoding: v44@0:8B16Q20Q28d36
// Implementation: 0x1055aab60

// -[SCFriendingActiveStoryLogger logQueryActiveStoryForSuggestionsEnd:numberOfQueriedUserIds:numberOfReturnedUserIds:latency:]
// Type encoding: v44@0:8B16Q20Q28d36
// Implementation: 0x1055aac90

// -[SCFriendingActiveStoryLogger logIncomingFriendActiveStoryCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1055aadc0

// -[SCFriendingActiveStoryLogger logSuggestedFriendActiveStoryCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1055aae4c

// -[SCFriendingActiveStoryLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1055aaed8

@end
