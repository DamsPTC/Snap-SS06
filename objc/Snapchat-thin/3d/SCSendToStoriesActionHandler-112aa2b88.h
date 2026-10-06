// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSendToStoriesActionHandler
// Superclass: NSObject
// Address: 0x112aa2b88

@interface SCSendToStoriesActionHandler

// Property: uiContainer; attributes: T@"<SCUIContainer>",&,N,V_uiContainer
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSendToStoriesActionHandler initWithSendToTracker:customStoriesOnboardingManager:customStoriesDataFetcher:customStoriesDataMutator:blockedSnapchatterFetcher:ourStoriesOnboardingManager:ourStoriesAttributionManager:valdiRuntimeProvider:snapProProfilesProvider:snapProUserProfileIdProvider:storyConfiguration:circumstanceEngine:currentUserId:delegate:storyPrivacySettingManager:preSelectedItems:sendToExperimentConfiguration:subscriptionInfoProvider:]
// Type encoding: @160@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152
// Implementation: 0x105e5c590

// -[SCSendToStoriesActionHandler _observeManagedProfiles:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e5c958

// -[SCSendToStoriesActionHandler _onSnapProProfilesUpdated:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e5caa4

// -[SCSendToStoriesActionHandler _observeSendToEventsIfRequiredWithPreSelectedItems:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e5cc48

// -[SCSendToStoriesActionHandler _onSendToEvent:spotlightSelectionItem:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105e5cef8

// -[SCSendToStoriesActionHandler _onSendToViewDidLoadWithSpotlightSelectionItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e5d044

// -[SCSendToStoriesActionHandler dealloc]
// Type encoding: v16@0:8
// Implementation: 0x105e5d14c

// -[SCSendToStoriesActionHandler handleActionWithSender:actionModel:fromSourceView:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x105e5d194

// -[SCSendToStoriesActionHandler _handleSpotlightTryAgain]
// Type encoding: v16@0:8
// Implementation: 0x105e5d344

// -[SCSendToStoriesActionHandler _handleSelectStoryWithActionModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e5d370

// -[SCSendToStoriesActionHandler _selectPrivateStoryWithSelectionActionModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e5d610

// -[SCSendToStoriesActionHandler _handleAcceptPrivateStoryOnboardingWithSelectionActionModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e5d858

// -[SCSendToStoriesActionHandler _selectCommunityStoryWithSelectionActionModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e5d8c0

// -[SCSendToStoriesActionHandler _showCommunityStoryFirstTimePostWithSelectionActionModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e5d96c

// -[SCSendToStoriesActionHandler _showCommunityStoryFirstTimePostWithSelectionActionModel:customStory:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105e5dbb8

// -[SCSendToStoriesActionHandler _handleAcceptCommunityStoryOnboardingWithSelectionActionModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e5dcf0

// -[SCSendToStoriesActionHandler _selectSharedStoryWithSelectionActionModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e5dd58

// -[SCSendToStoriesActionHandler _showPromptForSharedStoryWithSelectionActionModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e5dde8

// -[SCSendToStoriesActionHandler _handleBlockedUsersOnSharedStoryWithSelectionActionModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e5df88

// -[SCSendToStoriesActionHandler _showSharedStoryWithSelectionActionModel:publicationId:blockedSnapchattersInGroup:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105e5e1b0

// -[SCSendToStoriesActionHandler _selectCustomStoryWithSelectionActionModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e5e484

// -[SCSendToStoriesActionHandler _showCustomStoryFirstTimePostWithSelectionActionModel:hasblockedUser:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105e5e660

// -[SCSendToStoriesActionHandler _showCustomStoryFirstTimePostWithSelectionActionModel:hasBlockedUsers:customStory:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x105e5e8cc

// -[SCSendToStoriesActionHandler _handleAcceptCustomStoryOnboardingWithSelectionActionModel:hasBlockedUsers:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105e5ea80

// -[SCSendToStoriesActionHandler _selectOurStoryWithSelectionActionModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e5eb10

// -[SCSendToStoriesActionHandler _onAcceptOurStoryFirstTimePostWithSelectionActionModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e5ecac

// -[SCSendToStoriesActionHandler _showOurStoryAttributionIntroWithSelectionActionModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e5ed14

// -[SCSendToStoriesActionHandler _showOurStoryFallbackAttributionIntroWithSelectionActionModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e5ef14

// -[SCSendToStoriesActionHandler _onAcceptOurStoryAttributionIntroWithSelectionActionModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e5f160

// -[SCSendToStoriesActionHandler _createPostEditButtonSelectionActionModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e5f1c8

// -[SCSendToStoriesActionHandler _selectSpotlightWithSelectionActionModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e5f61c

// -[SCSendToStoriesActionHandler _spotlightEducationType]
// Type encoding: q16@0:8
// Implementation: 0x105e5fbdc

// -[SCSendToStoriesActionHandler _showSpotlightIntroWithSelectionActionModel:isFriendsOnlyProfile:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105e5fc50

// -[SCSendToStoriesActionHandler _showSpotlightFallbackAttributionIntroWithSelectionActionModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e5fe54

// -[SCSendToStoriesActionHandler _onAcceptSpotlightAttributionIntroWithSelectionActionModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e600a0

// -[SCSendToStoriesActionHandler _selectBusinessStoryWithSelectionActionModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e60108

// -[SCSendToStoriesActionHandler _selectFanPassStoryWithSelectionActionModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e60384

// -[SCSendToStoriesActionHandler _shouldShowAddSoundError]
// Type encoding: B16@0:8
// Implementation: 0x105e60600

// -[SCSendToStoriesActionHandler _spotlightSelectionWithActionModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e60660

// -[SCSendToStoriesActionHandler _selectWithSelectionActionModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e60794

// -[SCSendToStoriesActionHandler _disableMyStoryAndMyPublicStoryPostingWithSelectionActionModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e60938

// -[SCSendToStoriesActionHandler _unselectItemWithSelectionTypeIdentifier:currentSelectionItemUpdate:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105e60ca0

// -[SCSendToStoriesActionHandler _unselectItemWithSelectionItemRecipientId:currentSelectionItemUpdate:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105e60eb0

// -[SCSendToStoriesActionHandler _unselectStoriesExcludingRecipientId:currentSelectionItemUpdate:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105e610c8

// -[SCSendToStoriesActionHandler _handleSelectCustomTTLWithActionModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e612ec

// -[SCSendToStoriesActionHandler uiContainer]
// Type encoding: @16@0:8
// Implementation: 0x105e61500

// -[SCSendToStoriesActionHandler setUiContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e61508

// -[SCSendToStoriesActionHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105e61538

@end
