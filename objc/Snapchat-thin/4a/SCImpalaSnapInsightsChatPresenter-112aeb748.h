// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImpalaSnapInsightsChatPresenter
// Superclass: NSObject
// Address: 0x112aeb748

@interface SCImpalaSnapInsightsChatPresenter

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCImpalaSnapInsightsChatPresenter initWithUserSession:messageActionHandler:lazyUserSnapPrivacyProvider:lazySnapchattersDataFetcher:conversationIdResolver:pageLauncher:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x10665f120

// -[SCImpalaSnapInsightsChatPresenter presentChatForUserId:conversationId:presentingViewController:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10665f26c

// -[SCImpalaSnapInsightsChatPresenter _fetchSnapchatterAndPresentChatForUserId:legacyConversationId:presentingViewController:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10665f3e4

// -[SCImpalaSnapInsightsChatPresenter _presentChatForUserId:snapchatter:legacyConversationId:presentingViewController:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10665f5b4

// -[SCImpalaSnapInsightsChatPresenter _syncConversation:userId:snapchatter:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10665f73c

// -[SCImpalaSnapInsightsChatPresenter _presentChatViewControllerForLegacyConversationId:userId:snapchatter:presentingViewController:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10665f9b4

// -[SCImpalaSnapInsightsChatPresenter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10665fb2c

@end
