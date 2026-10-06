// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOurChatActionHandler
// Superclass: NSObject
// Address: 0x112a08d58

@interface SCOurChatActionHandler

// Property: presentingViewController; attributes: T@"UIViewController<SCPageNameLogging>",W,N,VpresentingViewController
// Property: containerViewController; attributes: T@"UIViewController<SCPageNameLogging>",?,W,N,VcontainerViewController
// Property: deckContainerFactory; attributes: T@"<SCDeckContainerFactory>",?,W,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCOurChatActionHandler initWithChatCustomizationHubScopeExposer:chatCustomizationHubScopeServices:conversationIdResolver:participantInfo:plusServices:nativeSessionManager:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x104f24748

// -[SCOurChatActionHandler handleActionWithSender:actionModel:fromSourceView:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x104f2489c

// -[SCOurChatActionHandler _handleGroupStoryConsentToggle:sourceView:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x104f24a18

// -[SCOurChatActionHandler _updateGroupStoryConsent:conversationId:revertToggle:]
// Type encoding: v36@0:8B16@20@?28
// Implementation: 0x104f24e0c

// -[SCOurChatActionHandler _handleTapWithEntryFeature:]
// Type encoding: B20@0:8i16
// Implementation: 0x104f24f7c

// -[SCOurChatActionHandler _logTapWithEntryFeature:]
// Type encoding: v20@0:8i16
// Implementation: 0x104f25178

// -[SCOurChatActionHandler getTraitCollectionFetcher]
// Type encoding: @?16@0:8
// Implementation: 0x104f25304

// -[SCOurChatActionHandler _presentChatCustomizationHubForConversationId:entryFeature:]
// Type encoding: v28@0:8@16i24
// Implementation: 0x104f253fc

// -[SCOurChatActionHandler willDisplayChatCustomizationHubScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f254e4

// -[SCOurChatActionHandler didRequestDismissal:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f254e8

// -[SCOurChatActionHandler didDismissChatCustomizationHubScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f25594

// -[SCOurChatActionHandler presentingViewController]
// Type encoding: @16@0:8
// Implementation: 0x104f255dc

// -[SCOurChatActionHandler setPresentingViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f255f4

// -[SCOurChatActionHandler containerViewController]
// Type encoding: @16@0:8
// Implementation: 0x104f25600

// -[SCOurChatActionHandler setContainerViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f25618

// -[SCOurChatActionHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104f25624

@end
