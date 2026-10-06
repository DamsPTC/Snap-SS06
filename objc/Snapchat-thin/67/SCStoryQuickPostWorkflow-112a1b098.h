// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoryQuickPostWorkflow
// Superclass: NSObject
// Address: 0x112a1b098

@interface SCStoryQuickPostWorkflow

// Property: quickPostWorkFlowDelegate; attributes: T@"<SCStoryQuickPostWorkFlowDelegate>",W,N,V_quickPostWorkFlowDelegate
// Property: quickPostWorkFlowDataSource; attributes: T@"<SCStoryQuickPostWorkFlowDataSource>",W,N,V_quickPostWorkFlowDataSource

// -[SCStoryQuickPostWorkflow initWithUserProfileIdProvider:snapProProfilesProvider:myStoriesDataCoordinator:userStorageServices:featureSettingsService:storyPrivacySettingManager:storyQuickPostScope:previewTooltipsProvider:storyQuickPostViewController:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x10513460c

// -[SCStoryQuickPostWorkflow begin]
// Type encoding: v16@0:8
// Implementation: 0x1051347f8

// -[SCStoryQuickPostWorkflow _subscribeToStoryQuickPostEvent]
// Type encoding: v16@0:8
// Implementation: 0x1051347fc

// -[SCStoryQuickPostWorkflow _prepareSendToStory:fromSource:confidentialFeatureDescription:]
// Type encoding: v36@0:8B16q20@28
// Implementation: 0x105134a60

// -[SCStoryQuickPostWorkflow _checkForConfidentialFeatureWithTryDirectlyPostToMyStory:fromSource:confidentialFeatureDescription:]
// Type encoding: v36@0:8B16q20@28
// Implementation: 0x105134cb8

// -[SCStoryQuickPostWorkflow checkForConfidentialFeatureWithDescription:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105134dcc

// -[SCStoryQuickPostWorkflow _attemptPostDirectlyToMyStory:]
// Type encoding: v24@0:8q16
// Implementation: 0x105134ff0

// -[SCStoryQuickPostWorkflow _showPostStoryPopUpDialog:cancelCompletion:]
// Type encoding: v32@0:8@?16@?24
// Implementation: 0x10513528c

// -[SCStoryQuickPostWorkflow _postStoryActionControllerWithAddAction:handler:]
// Type encoding: @28@0:8B16@?20
// Implementation: 0x1051353f4

// -[SCStoryQuickPostWorkflow _postStoryWarningWithTitle:addAction:cancelAction:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1051354a0

// -[SCStoryQuickPostWorkflow _showOptionsForStoryPost]
// Type encoding: v16@0:8
// Implementation: 0x1051356ec

// -[SCStoryQuickPostWorkflow _presentPostStorySelection]
// Type encoding: v16@0:8
// Implementation: 0x105135820

// -[SCStoryQuickPostWorkflow _postStoryDirectlyOnlyToMyStory]
// Type encoding: v16@0:8
// Implementation: 0x10513587c

// -[SCStoryQuickPostWorkflow _notifyRouteDecision:]
// Type encoding: v24@0:8q16
// Implementation: 0x1051358b4

// -[SCStoryQuickPostWorkflow _postDirectlyToMyStory:withBusinessProfiles:withOurStory:withMobStories:]
// Type encoding: v44@0:8B16@20@28@36
// Implementation: 0x10513592c

// -[SCStoryQuickPostWorkflow _shouldInterceptSendingWithBusinessProfiles:]
// Type encoding: B24@0:8@16
// Implementation: 0x105135a44

// -[SCStoryQuickPostWorkflow _shouldBlockBrandAccountMusicSnapWithBusinessProfiles:]
// Type encoding: B24@0:8@16
// Implementation: 0x105135bcc

// -[SCStoryQuickPostWorkflow _onDidDismissQuickPost]
// Type encoding: v16@0:8
// Implementation: 0x105135cac

// -[SCStoryQuickPostWorkflow _dismissStoryQuickPostView]
// Type encoding: v16@0:8
// Implementation: 0x105135cb0

// -[SCStoryQuickPostWorkflow _incrementSavedStoryEducationCount]
// Type encoding: v16@0:8
// Implementation: 0x105135ce4

// -[SCStoryQuickPostWorkflow _shouldShowEducationDialog]
// Type encoding: B16@0:8
// Implementation: 0x105135d4c

// -[SCStoryQuickPostWorkflow _hasUserConfirmedPreviouslyToPostDirect:]
// Type encoding: B24@0:8@16
// Implementation: 0x105135d90

// -[SCStoryQuickPostWorkflow _getEducationDialogTextWithIsStoryPrivacySettingEveryone:]
// Type encoding: @20@0:8B16
// Implementation: 0x105135da8

// -[SCStoryQuickPostWorkflow quickPostWorkFlowDelegate]
// Type encoding: @16@0:8
// Implementation: 0x105135dd8

// -[SCStoryQuickPostWorkflow setQuickPostWorkFlowDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105135df0

// -[SCStoryQuickPostWorkflow quickPostWorkFlowDataSource]
// Type encoding: @16@0:8
// Implementation: 0x105135dfc

// -[SCStoryQuickPostWorkflow setQuickPostWorkFlowDataSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x105135e14

// -[SCStoryQuickPostWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105135e20

@end
