// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCustomStoriesOnboardingPresenter
// Superclass: NSObject
// Address: 0x112b93a38

@interface SCCustomStoriesOnboardingPresenter

// Property: presentingViewController; attributes: T@"UIViewController",W,N,V_presentingViewController

// -[SCCustomStoriesOnboardingPresenter initWithCurrentUserId:onboardingManager:snapchattersDataFetcher:blockedSnapchattersFetcher:imageDownloader:storiesBlizzardLogger:circumstanceEngine:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x108051de4

// -[SCCustomStoriesOnboardingPresenter _presentCustomStoryFirstTimePostingAlertWithCustomStory:hasBlockedFriends:onDetails:onCancel:]
// Type encoding: v44@0:8@16B24@?28@?36
// Implementation: 0x108051f60

// -[SCCustomStoriesOnboardingPresenter _showFirstTimePostingCustomStoryAlertWithCreatorDisplayName:customStory:hasBlockedFriends:onDetails:onCancel:]
// Type encoding: v52@0:8@16@24B32@?36@?44
// Implementation: 0x108052204

// -[SCCustomStoriesOnboardingPresenter _showFirstTimePostingPrivateStoryAlertWithOnDetails:onCancel:]
// Type encoding: v32@0:8@?16@?24
// Implementation: 0x108052834

// -[SCCustomStoriesOnboardingPresenter _dismissAlertDialog:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108052d50

// -[SCCustomStoriesOnboardingPresenter showFirstTimePostingForCustomStoryIfNecessary:onDetails:onCancel:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x108052d5c

// -[SCCustomStoriesOnboardingPresenter showTrustAndSafetyPromptForSharedStoryPostingIfNecessaryWithOnAccept:onCancel:onDiscarded:webBrowsingScopeExposer:browserDelegate:]
// Type encoding: v56@0:8@?16@?24@?32@40@48
// Implementation: 0x108052fb0

// -[SCCustomStoriesOnboardingPresenter showBlockedUsersPromptForSharedStoryPostingWithBlockedSnapchatters:publicationId:onAccept:onCancel:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x1080531c4

// -[SCCustomStoriesOnboardingPresenter showFirstTimePostingForCommunityStoryIfNecessary:onAccept:onDetails:onCancel:webBrowsingScopeExposer:browserDelegate:]
// Type encoding: v64@0:8@16@?24@?32@?40@48@56
// Implementation: 0x108053298

// -[SCCustomStoriesOnboardingPresenter presentingViewController]
// Type encoding: @16@0:8
// Implementation: 0x1080534dc

// -[SCCustomStoriesOnboardingPresenter setPresentingViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080534f4

// -[SCCustomStoriesOnboardingPresenter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108053500

@end
