// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatMessageReleaser
// Superclass: NSObject
// Address: 0x112ae3f98

@interface SCChatMessageReleaser

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCChatMessageReleaser initWithActionHandler:messagingExperimentService:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1065048d4

// -[SCChatMessageReleaser allowMessageReleasing]
// Type encoding: v16@0:8
// Implementation: 0x106504a64

// -[SCChatMessageReleaser blockMessageReleasing]
// Type encoding: v16@0:8
// Implementation: 0x106504b28

// -[SCChatMessageReleaser setChatPageSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x106504b30

// -[SCChatMessageReleaser viewDidSwipeIn]
// Type encoding: v16@0:8
// Implementation: 0x106504b38

// -[SCChatMessageReleaser viewDidSwipeOut]
// Type encoding: v16@0:8
// Implementation: 0x106504b44

// -[SCChatMessageReleaser viewDidFullyDisappear]
// Type encoding: v16@0:8
// Implementation: 0x106504b84

// -[SCChatMessageReleaser viewDidFullyAppear]
// Type encoding: v16@0:8
// Implementation: 0x106504b88

// -[SCChatMessageReleaser viewWillResignActive]
// Type encoding: v16@0:8
// Implementation: 0x106504b94

// -[SCChatMessageReleaser viewDidBecomeActive]
// Type encoding: v16@0:8
// Implementation: 0x106504bbc

// -[SCChatMessageReleaser didConversationViewModelChange:metricsTracker:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106504bc0

// -[SCChatMessageReleaser _shouldViewModelUpdateTriggerRelease:]
// Type encoding: B24@0:8@16
// Implementation: 0x106504c44

// -[SCChatMessageReleaser _didViewModelsChangeForConversation]
// Type encoding: v16@0:8
// Implementation: 0x106504dfc

// -[SCChatMessageReleaser markMessagesAsReadUpToMessageId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106504f00

// -[SCChatMessageReleaser _shouldOpenToFirstUnread]
// Type encoding: B16@0:8
// Implementation: 0x106504fa0

// -[SCChatMessageReleaser _advanceLatestSeenForFeedViewedSnaps]
// Type encoding: v16@0:8
// Implementation: 0x106505020

// -[SCChatMessageReleaser _endCurrentChatSession]
// Type encoding: v16@0:8
// Implementation: 0x10650509c

// -[SCChatMessageReleaser _scheduleReleaseMessageTimerForConversationId:conversationViewModel:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1065051f8

// -[SCChatMessageReleaser _markMessagesAsReadForTimer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065052b0

// -[SCChatMessageReleaser _markMessagesAsReadForConversationId:chatPageSource:conversationViewModel:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x106505394

// -[SCChatMessageReleaser _markMessagesAsReadUpToMessageId:conversationId:chatPageSource:conversationViewModel:]
// Type encoding: v48@0:8@16@24q32@40
// Implementation: 0x106505424

// -[SCChatMessageReleaser _resetStatesIfNecessaryFromBackground:]
// Type encoding: v20@0:8B16
// Implementation: 0x106505518

// -[SCChatMessageReleaser _cancelDelayedMarkMessagesAsRead]
// Type encoding: v16@0:8
// Implementation: 0x1065055a0

// -[SCChatMessageReleaser .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10650569c

@end
