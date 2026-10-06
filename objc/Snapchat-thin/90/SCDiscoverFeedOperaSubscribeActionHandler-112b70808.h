// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverFeedOperaSubscribeActionHandler
// Superclass: NSObject
// Address: 0x112b70808

@interface SCDiscoverFeedOperaSubscribeActionHandler

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: presentingViewController; attributes: T@"UIViewController<SCPageNameLogging>",W,N,V_presentingViewController
// Property: containerViewController; attributes: T@"UIViewController<SCPageNameLogging>",?,W,N
// Property: deckContainerFactory; attributes: T@"<SCDeckContainerFactory>",?,W,N

// -[SCDiscoverFeedOperaSubscribeActionHandler addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107af6940

// -[SCDiscoverFeedOperaSubscribeActionHandler removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107af6948

// -[SCDiscoverFeedOperaSubscribeActionHandler initWithSnapchattersDataTracker:creatorSettingsFetcher:creatorSettingsMutator:snapchattersDataFetcher:snapchattersDataMutator:snapchattersSynchronousDataFetcher:discoverFeedDataSource:discoverFeedDataMutator:discoverFeedEventsController:discoverFeedInteractionHistoryManager:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64@72@80@88
// Implementation: 0x107af6950

// -[SCDiscoverFeedOperaSubscribeActionHandler handleActionWithSender:actionModel:fromSourceView:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x107af6bc0

// -[SCDiscoverFeedOperaSubscribeActionHandler _setSubscribeStateForStory:subscribeState:feedType:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x107af6e5c

// -[SCDiscoverFeedOperaSubscribeActionHandler _updateCheetahStoriesInDataStore:]
// Type encoding: v24@0:8@16
// Implementation: 0x107af73ec

// -[SCDiscoverFeedOperaSubscribeActionHandler subscribeToCheetahStory:successCompletion:failureCompletion:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x107af743c

// -[SCDiscoverFeedOperaSubscribeActionHandler unsubscribeToCheetahStory:successCompletion:failureCompletion:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x107af7450

// -[SCDiscoverFeedOperaSubscribeActionHandler _subscribeToStory:shouldSubscribe:interactionContext:successCompletion:failureCompletion:]
// Type encoding: v52@0:8@16B24q28@?36@?44
// Implementation: 0x107af7464

// -[SCDiscoverFeedOperaSubscribeActionHandler subscribeToPublisher:successCompletion:failureCompletion:]
// Type encoding: v40@0:8q16@?24@?32
// Implementation: 0x107af7588

// -[SCDiscoverFeedOperaSubscribeActionHandler unsubscribeToPublisher:successCompletion:failureCompletion:]
// Type encoding: v40@0:8q16@?24@?32
// Implementation: 0x107af7598

// -[SCDiscoverFeedOperaSubscribeActionHandler subscribeToPublicUser:successCompletion:failureCompletion:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x107af75a8

// -[SCDiscoverFeedOperaSubscribeActionHandler unsubscribeToPublicUser:successCompletion:failureCompletion:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x107af75b8

// -[SCDiscoverFeedOperaSubscribeActionHandler subscribeToPublicUserStory:successCompletion:failureCompletion:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x107af75c8

// -[SCDiscoverFeedOperaSubscribeActionHandler unsubscribeToPublicUserStory:successCompletion:failureCompletion:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x107af75d8

// -[SCDiscoverFeedOperaSubscribeActionHandler _sendCheetahSubscribeRequestForPublisher:shouldSubscribe:successCompletion:failureCompletion:]
// Type encoding: v44@0:8q16B24@?28@?36
// Implementation: 0x107af75e8

// -[SCDiscoverFeedOperaSubscribeActionHandler _updateSubscribeStateForPublicUser:shouldSubscribe:successCompletion:failureCompletion:]
// Type encoding: v44@0:8@16B24@?28@?36
// Implementation: 0x107af77c8

// -[SCDiscoverFeedOperaSubscribeActionHandler _updateSubscribeStateForPublicUserStory:shouldSubscribe:successCompletion:failureCompletion:]
// Type encoding: v44@0:8@16B24@?28@?36
// Implementation: 0x107af7b6c

// -[SCDiscoverFeedOperaSubscribeActionHandler _updateSubscribeStateForSnapchatter:shouldSubscribe:successCompletion:failureCompletion:]
// Type encoding: v44@0:8@16B24@?28@?36
// Implementation: 0x107af7f1c

// -[SCDiscoverFeedOperaSubscribeActionHandler _handleSubscribeResponseShouldSubscribe:success:successCompletion:failureCompletion:]
// Type encoding: v40@0:8B16B20@?24@?32
// Implementation: 0x107af8298

// -[SCDiscoverFeedOperaSubscribeActionHandler _didBlockFriend:]
// Type encoding: v24@0:8@16
// Implementation: 0x107af8348

// -[SCDiscoverFeedOperaSubscribeActionHandler didStartSnapchattersUpdateDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x107af8490

// -[SCDiscoverFeedOperaSubscribeActionHandler didEndSnapchattersUpdateDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x107af8494

// -[SCDiscoverFeedOperaSubscribeActionHandler presentingViewController]
// Type encoding: @16@0:8
// Implementation: 0x107af8624

// -[SCDiscoverFeedOperaSubscribeActionHandler setPresentingViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x107af863c

// -[SCDiscoverFeedOperaSubscribeActionHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107af8648

// +[SCDiscoverFeedOperaSubscribeActionHandler announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x107af6934

@end
