// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNotifExtConversationBadgeUpdater
// Superclass: NSObject
// Address: 0x1000d4f48

@interface SCNotifExtConversationBadgeUpdater

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNotifExtConversationBadgeUpdater initWithProcessingScope:messagingContentTracker:arroyoConfig:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10003bafc

// -[SCNotifExtConversationBadgeUpdater initWithMainConvoFetcher:convoNotInMainRepository:messagingContentTracker:clientPayloadOptional:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10003bc58

// -[SCNotifExtConversationBadgeUpdater badgeCountProviderType]
// Type encoding: @16@0:8
// Implementation: 0x10003bd54

// -[SCNotifExtConversationBadgeUpdater provideBadgeCount:incomingNotification:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10003bddc

// -[SCNotifExtConversationBadgeUpdater _messageIsUnread:]
// Type encoding: B24@0:8@16
// Implementation: 0x10003c06c

// -[SCNotifExtConversationBadgeUpdater .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10003c17c

@end
