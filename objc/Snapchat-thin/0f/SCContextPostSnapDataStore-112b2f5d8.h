// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContextPostSnapDataStore
// Superclass: NSObject
// Address: 0x112b2f5d8

@interface SCContextPostSnapDataStore

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCContextPostSnapDataStore initWithDocContext:lastViewedMemoryStore:nglStudySettings:actionsObserver:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106ca40e8

// -[SCContextPostSnapDataStore storeActions:forConversationId:messageId:senderParams:contextSessionId:isFromSendSide:isGroupConversation:shouldAddDwebUpsellPSA:isStory:lensPromptId:shouldAddGameLensCTA:]
// Type encoding: v84@0:8@16@24@32@40@48B56B60B64B68@72B80
// Implementation: 0x106ca42a4

// -[SCContextPostSnapDataStore storeViewedSnapsWithPostSnapActions:messageId:hasPlaces:hasMentions:viewedAtTimestamp:]
// Type encoding: v48@0:8@16@24B32B36d40
// Implementation: 0x106ca5998

// -[SCContextPostSnapDataStore cleanupPostSnapActions:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106ca5c70

// -[SCContextPostSnapDataStore cleanupViewedSnapsWithPostSnapActions:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106ca6218

// -[SCContextPostSnapDataStore _hasTurnBasedPromptLensActionInStoredAction:]
// Type encoding: B24@0:8@16
// Implementation: 0x106ca678c

// -[SCContextPostSnapDataStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106ca6a88

@end
