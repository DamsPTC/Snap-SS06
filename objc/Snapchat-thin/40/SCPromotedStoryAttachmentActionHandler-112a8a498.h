// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPromotedStoryAttachmentActionHandler
// Superclass: NSObject
// Address: 0x112a8a498

@interface SCPromotedStoryAttachmentActionHandler

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: presentingViewController; attributes: T@"UIViewController<SCPageNameLogging>",W,N,V_presentingViewController
// Property: containerViewController; attributes: T@"UIViewController<SCPageNameLogging>",?,W,N
// Property: deckContainerFactory; attributes: T@"<SCDeckContainerFactory>",?,W,N

// -[SCPromotedStoryAttachmentActionHandler initWithAttachmentScopeExposer:attachmentScopeServices:discoverFeedDataFetcher:promotedStoryLogger:adConfigProvider:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x105ac4240

// -[SCPromotedStoryAttachmentActionHandler handleActionWithSender:actionModel:fromSourceView:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x105ac43b4

// -[SCPromotedStoryAttachmentActionHandler _exposePromotedStoryAttachmentWithStory:sectionKey:loggingMetadata:interactionType:]
// Type encoding: v48@0:8@16@24@32q40
// Implementation: 0x105ac47a0

// -[SCPromotedStoryAttachmentActionHandler _createUiContainer]
// Type encoding: @16@0:8
// Implementation: 0x105ac4930

// -[SCPromotedStoryAttachmentActionHandler _logTileCtaTapped:sectionKey:loggingMetadata:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105ac49f0

// -[SCPromotedStoryAttachmentActionHandler promotedTileAttachmentScopeDidFinish]
// Type encoding: v16@0:8
// Implementation: 0x105ac4b74

// -[SCPromotedStoryAttachmentActionHandler presentingViewController]
// Type encoding: @16@0:8
// Implementation: 0x105ac4b94

// -[SCPromotedStoryAttachmentActionHandler setPresentingViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ac4bac

// -[SCPromotedStoryAttachmentActionHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105ac4bb8

@end
