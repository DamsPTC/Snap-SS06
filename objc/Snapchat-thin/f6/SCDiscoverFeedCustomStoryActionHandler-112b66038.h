// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverFeedCustomStoryActionHandler
// Superclass: NSObject
// Address: 0x112b66038

@interface SCDiscoverFeedCustomStoryActionHandler

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: presentingViewController; attributes: T@"UIViewController<SCPageNameLogging>",W,N,V_presentingViewController
// Property: containerViewController; attributes: T@"UIViewController<SCPageNameLogging>",?,W,N
// Property: deckContainerFactory; attributes: T@"<SCDeckContainerFactory>",?,W,N

// -[SCDiscoverFeedCustomStoryActionHandler initWithLazyDiscoverFeedEventsLogger:lazyDiscoverFeedDataFetcher:lazyDiscoverFeedDataMutator:lazyDiscoverFeedInteractionHistoryManager:customStoryMenuScopeExposer:chatCameraScopeExposer:chatCameraScopeServices:customStoryMenuScopeServices:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x10798ee8c

// -[SCDiscoverFeedCustomStoryActionHandler handleActionWithSender:actionModel:fromSourceView:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x10798f04c

// -[SCDiscoverFeedCustomStoryActionHandler _presentCustomStoryMenuWithDataModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x10798f128

// -[SCDiscoverFeedCustomStoryActionHandler didCompleteCustomStoryMenuScope]
// Type encoding: v16@0:8
// Implementation: 0x10798f310

// -[SCDiscoverFeedCustomStoryActionHandler didSelectAddToStoryWithPublicationId:storyType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10798f358

// -[SCDiscoverFeedCustomStoryActionHandler didRemoveCustomStoryWithPublicationId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10798f604

// -[SCDiscoverFeedCustomStoryActionHandler dismissCameraScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x10798f804

// -[SCDiscoverFeedCustomStoryActionHandler presentingViewController]
// Type encoding: @16@0:8
// Implementation: 0x10798f84c

// -[SCDiscoverFeedCustomStoryActionHandler setPresentingViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x10798f864

// -[SCDiscoverFeedCustomStoryActionHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10798f870

// +[SCDiscoverFeedCustomStoryActionHandler announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x10798ee80

@end
