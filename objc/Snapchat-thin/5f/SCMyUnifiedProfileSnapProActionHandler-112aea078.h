// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMyUnifiedProfileSnapProActionHandler
// Superclass: NSObject
// Address: 0x112aea078

@interface SCMyUnifiedProfileSnapProActionHandler

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: presentingViewController; attributes: T@"UIViewController<SCPageNameLogging>",W,N,V_presentingViewController
// Property: containerViewController; attributes: T@"UIViewController<SCPageNameLogging>",?,W,N
// Property: deckContainerFactory; attributes: T@"<SCDeckContainerFactory>",?,W,N

// -[SCMyUnifiedProfileSnapProActionHandler initWithUserSession:navigationDelegate:ourStoriesAttributionManager:myStoriesDataCoordinator:publicStoryStateObserver:snapProProfilesProvider:circumstanceEngine:profileOnboardingScopeExposer:httpMetadataService:httpRequestModifier:storyCardFetcher:profileManagementScopeExposer:storyDraftingDataCoordinator:storiesMediaCoordinator:toggleCollapseEventSubject:storyPlayerCreator:]
// Type encoding: @144@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136
// Implementation: 0x1066167d8

// -[SCMyUnifiedProfileSnapProActionHandler addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x106616b40

// -[SCMyUnifiedProfileSnapProActionHandler removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x106616b48

// -[SCMyUnifiedProfileSnapProActionHandler handleActionWithSender:actionModel:fromSourceView:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x106617cc4

// -[SCMyUnifiedProfileSnapProActionHandler _isCreatePublicProfileTooltipShown]
// Type encoding: B16@0:8
// Implementation: 0x1066181bc

// -[SCMyUnifiedProfileSnapProActionHandler _handlerForBusinessId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10661820c

// -[SCMyUnifiedProfileSnapProActionHandler _storyHandlerForBusinessId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1066183bc

// -[SCMyUnifiedProfileSnapProActionHandler _playManagedStoryForActionDataModel:baseView:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106618598

// -[SCMyUnifiedProfileSnapProActionHandler _playManagedStoryWithUnifiedPlayer:baseView:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10661860c

// -[SCMyUnifiedProfileSnapProActionHandler _playStoryCardWithInsightsLegacy:baseView:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106618b60

// -[SCMyUnifiedProfileSnapProActionHandler _playStoryForActionDataModel:storyManifest:storyCard:businessProfile:baseView:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x106619240

// -[SCMyUnifiedProfileSnapProActionHandler _showManagementPageForBusinessId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106619424

// -[SCMyUnifiedProfileSnapProActionHandler _bestEffortIncrementProfileManagementViews:]
// Type encoding: v24@0:8@16
// Implementation: 0x106619570

// -[SCMyUnifiedProfileSnapProActionHandler _showComposerManagementPageForHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066196f8

// -[SCMyUnifiedProfileSnapProActionHandler _presentOnboardingWithType:actionContext:presentManagementForHandler:]
// Type encoding: v36@0:8i16q20@28
// Implementation: 0x106619854

// -[SCMyUnifiedProfileSnapProActionHandler _presentScheduledSnapActionSheetWithDataModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x106619bc0

// -[SCMyUnifiedProfileSnapProActionHandler _presentRescheduleSnapActionSheetWithDataModel:parentActionSheet:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10661a214

// -[SCMyUnifiedProfileSnapProActionHandler _presentDeleteDraftingSnapPromptWithOnDelete:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10661a878

// -[SCMyUnifiedProfileSnapProActionHandler _presentRescheduleDraftingSnapPromptWithGoLiveTimestamp:onAccept:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10661aabc

// -[SCMyUnifiedProfileSnapProActionHandler storyPlayerWillBeginPresenting]
// Type encoding: v16@0:8
// Implementation: 0x10661adc8

// -[SCMyUnifiedProfileSnapProActionHandler storyPlayerWillBeginDismissing]
// Type encoding: v16@0:8
// Implementation: 0x10661adcc

// -[SCMyUnifiedProfileSnapProActionHandler storyPlayerDidFinishDismissing]
// Type encoding: v16@0:8
// Implementation: 0x10661ae28

// -[SCMyUnifiedProfileSnapProActionHandler impalaProfileDidComplete]
// Type encoding: v16@0:8
// Implementation: 0x10661ae38

// -[SCMyUnifiedProfileSnapProActionHandler impalaProfileNeedsRemoval]
// Type encoding: v16@0:8
// Implementation: 0x10661ae80

// -[SCMyUnifiedProfileSnapProActionHandler impalaProfileDidReloadManagedProfiles]
// Type encoding: v16@0:8
// Implementation: 0x10661af5c

// -[SCMyUnifiedProfileSnapProActionHandler presentingViewController]
// Type encoding: @16@0:8
// Implementation: 0x10661afb8

// -[SCMyUnifiedProfileSnapProActionHandler setPresentingViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x10661afd0

// -[SCMyUnifiedProfileSnapProActionHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10661afdc

// +[SCMyUnifiedProfileSnapProActionHandler announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x106616b34

@end
