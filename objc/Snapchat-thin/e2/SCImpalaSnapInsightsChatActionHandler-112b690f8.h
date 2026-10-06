// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImpalaSnapInsightsChatActionHandler
// Superclass: NSObject
// Address: 0x112b690f8

@interface SCImpalaSnapInsightsChatActionHandler

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCImpalaSnapInsightsChatActionHandler initWithUserSession:chatPresenter:conversationManager:arroyoConversationDataUpdateAnnouncer:conversationIdResolver:viewController:friendsFeedEntryStore:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x1079ef860

// -[SCImpalaSnapInsightsChatActionHandler openChatWithUserId:conversationId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1079ef9cc

// -[SCImpalaSnapInsightsChatActionHandler sendScreenCaptureNotificationWithUserId:conversationId:type:]
// Type encoding: v36@0:8@16@24i32
// Implementation: 0x1079efad4

// -[SCImpalaSnapInsightsChatActionHandler observeConversationUpdatesByCompositeIdsWithCompositeConversationIds:callback:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x1079efd68

// -[SCImpalaSnapInsightsChatActionHandler _initialFeedEntriesObserverWithCurrentUUID:compositeConversationIds:callback:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x1079f06d0

// -[SCImpalaSnapInsightsChatActionHandler _fetchChatConversationWithConversationId:currentUserUUID:feedEntries:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1079f0a1c

// -[SCImpalaSnapInsightsChatActionHandler _fetchChatMessageFromConversationWithCurrentUserUUID:lastEventUpdateTimestamp:displayTimestamp:chatInitiatorId:]
// Type encoding: @48@0:8@16d24d32@40
// Implementation: 0x1079f0cd4

// -[SCImpalaSnapInsightsChatActionHandler pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x1079f0da0

// -[SCImpalaSnapInsightsChatActionHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1079f0dac

@end
