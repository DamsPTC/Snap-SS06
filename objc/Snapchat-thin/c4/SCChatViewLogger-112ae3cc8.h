// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatViewLogger
// Superclass: NSObject
// Address: 0x112ae3cc8

@interface SCChatViewLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCChatViewLogger initWithPageViewName:chatLogger:friendsFeedDataCoordinator:currentPageTracker:userTraceLogger:]
// Type encoding: @56@0:8q16@24@32@40@48
// Implementation: 0x1064f7eb0

// -[SCChatViewLogger setNewUnreadChatViewed:snapViewed:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x1064f7fc8

// -[SCChatViewLogger setChatExitEvent:]
// Type encoding: v24@0:8q16
// Implementation: 0x1064f7fd0

// -[SCChatViewLogger getChatExitEvent]
// Type encoding: q16@0:8
// Implementation: 0x1064f7fdc

// -[SCChatViewLogger setChatHeaderSubtextsAvailable:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064f7fe8

// -[SCChatViewLogger setChatHeaderSubtextsRendered:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064f8018

// -[SCChatViewLogger setStoryViewType:]
// Type encoding: v24@0:8q16
// Implementation: 0x1064f8048

// -[SCChatViewLogger setChatPageSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x1064f8050

// -[SCChatViewLogger setChatEntryEvent:]
// Type encoding: v24@0:8q16
// Implementation: 0x1064f8058

// -[SCChatViewLogger didConversationViewModelChange:metricsTracker:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1064f8060

// -[SCChatViewLogger viewDidSwipeOut]
// Type encoding: v16@0:8
// Implementation: 0x1064f80b8

// -[SCChatViewLogger viewDidSwipeIn]
// Type encoding: v16@0:8
// Implementation: 0x1064f80bc

// -[SCChatViewLogger viewWillResignActive]
// Type encoding: v16@0:8
// Implementation: 0x1064f80c0

// -[SCChatViewLogger viewDidBecomeActive]
// Type encoding: v16@0:8
// Implementation: 0x1064f80c4

// -[SCChatViewLogger profileOverlayDidDisappear]
// Type encoding: v16@0:8
// Implementation: 0x1064f80c8

// -[SCChatViewLogger viewDidAppearAtPercentage:]
// Type encoding: v24@0:8d16
// Implementation: 0x1064f80cc

// -[SCChatViewLogger onEnterChatView]
// Type encoding: v16@0:8
// Implementation: 0x1064f8114

// -[SCChatViewLogger onExitChatView]
// Type encoding: v16@0:8
// Implementation: 0x1064f821c

// -[SCChatViewLogger _updateCellState]
// Type encoding: v16@0:8
// Implementation: 0x1064f8520

// -[SCChatViewLogger _logSCAChatCreate]
// Type encoding: v16@0:8
// Implementation: 0x1064f8790

// -[SCChatViewLogger _didSwipeToEnter]
// Type encoding: B16@0:8
// Implementation: 0x1064f8a18

// -[SCChatViewLogger _logChatHeaderMetricsWithCorrespondentId:isGroupConversation:conversationId:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x1064f8a2c

// -[SCChatViewLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1064f8b5c

@end
