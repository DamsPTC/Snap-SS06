// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPublicProfileManagementActionHandler
// Superclass: NSObject
// Address: 0x112b00968

@interface SCPublicProfileManagementActionHandler

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPublicProfileManagementActionHandler initWithScopeLauncher:viewController:shareScopeExposer:linkGenerationService:chatCameraScopeExposer:userSession:publicProfileManagementScopeDelegate:profilesProvider:addToStoryCameraScopeLauncher:addToStoryCameraScopeBuilder:directorModeScopeExposer:directorModeScopeServices:memoriesQuickPostScopeExposer:qrCodeCardScopeExposer:notificationPool:userTrackedLogger:creatorSubscriptionOnboardingScopeFactoryServices:spotlightThumbnailEditLauncher:]
// Type encoding: @160@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152
// Implementation: 0x106823094

// -[SCPublicProfileManagementActionHandler editSpotlightThumbnailWithHighlightId:encodedStoryDoc:coverSnapId:onCoverPicked:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x106823498

// -[SCPublicProfileManagementActionHandler editSpotlightThumbnailFromStoryCardWithHighlightId:encodedMixerStory:coverSnapId:onCoverPicked:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x106823534

// -[SCPublicProfileManagementActionHandler presentPublicProfilePreviewWithEncodedBusinessProfile:showHighlightCta:onCreateHighlight:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1068235d0

// -[SCPublicProfileManagementActionHandler presentProfileExternalSheetWithUsername:userId:shareSource:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106823784

// -[SCPublicProfileManagementActionHandler presentQRCodeSharePageWithUsername:]
// Type encoding: v24@0:8@16
// Implementation: 0x10682393c

// -[SCPublicProfileManagementActionHandler _generateAddFriendLinkAndCopyToClipboard:]
// Type encoding: v24@0:8@16
// Implementation: 0x106823b38

// -[SCPublicProfileManagementActionHandler createSpotlightWithBusinessProfileId:title:logo:isHost:]
// Type encoding: v44@0:8@16@24@32B40
// Implementation: 0x106823cf4

// -[SCPublicProfileManagementActionHandler _presentDirectorMode:]
// Type encoding: v24@0:8@16
// Implementation: 0x106823d64

// -[SCPublicProfileManagementActionHandler _externalShareTextConfiguration:]
// Type encoding: @24@0:8@16
// Implementation: 0x106823e20

// -[SCPublicProfileManagementActionHandler addSnapToBusinessStoryWithBusinessProfileId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106823f74

// -[SCPublicProfileManagementActionHandler addSnapToFriendStory]
// Type encoding: v16@0:8
// Implementation: 0x10682414c

// -[SCPublicProfileManagementActionHandler _launchCameraWithReplyConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068242d8

// -[SCPublicProfileManagementActionHandler observeBusinessProfileWithBusinessProfileId:isPlaceholderProfile:onUpdated:cancel:]
// Type encoding: v44@0:8@16B24@?28@?36
// Implementation: 0x106824370

// -[SCPublicProfileManagementActionHandler reloadManagedBusinessProfilesWithOnComplete:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106824758

// -[SCPublicProfileManagementActionHandler unifiedPublicProfilesPresenterScopeDidComplete]
// Type encoding: v16@0:8
// Implementation: 0x1068248c0

// -[SCPublicProfileManagementActionHandler presentingViewControllerForUnifiedPublicProfilesPresenterScope]
// Type encoding: @16@0:8
// Implementation: 0x1068248f8

// -[SCPublicProfileManagementActionHandler swipeInteractionPresenter:didStartPresentingWithSwipeDirection:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106824910

// -[SCPublicProfileManagementActionHandler swipeInteractionPresenterDidFinishDismissing:]
// Type encoding: v24@0:8@16
// Implementation: 0x106824914

// -[SCPublicProfileManagementActionHandler swipeInteractionPresenter:swipeEnabledWithDirection:]
// Type encoding: B32@0:8@16q24
// Implementation: 0x10682494c

// -[SCPublicProfileManagementActionHandler handleShareDestination:standardExternalContentShareScope:]
// Type encoding: B32@0:8q16@24
// Implementation: 0x106824954

// -[SCPublicProfileManagementActionHandler shareSheetDismissedWithShareDestination:]
// Type encoding: v24@0:8q16
// Implementation: 0x10682495c

// -[SCPublicProfileManagementActionHandler dismissCameraScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068249a4

// -[SCPublicProfileManagementActionHandler captureWorkflowDidDismissWithDidSendSnap:]
// Type encoding: v20@0:8B16
// Implementation: 0x106824a18

// -[SCPublicProfileManagementActionHandler directorModeScopeDidComplete]
// Type encoding: v16@0:8
// Implementation: 0x106824a1c

// -[SCPublicProfileManagementActionHandler memoriesQuickPostDidFinishWithDidSend:]
// Type encoding: v20@0:8B16
// Implementation: 0x106824a98

// -[SCPublicProfileManagementActionHandler startCameraWorkflow]
// Type encoding: v16@0:8
// Implementation: 0x106824ae0

// -[SCPublicProfileManagementActionHandler presentCreatorSubscriptionOnboarding]
// Type encoding: v16@0:8
// Implementation: 0x106824be8

// -[SCPublicProfileManagementActionHandler shouldRetainInstanceWhenMarshalling]
// Type encoding: B16@0:8
// Implementation: 0x106824d08

// -[SCPublicProfileManagementActionHandler pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x106824d10

// -[SCPublicProfileManagementActionHandler qrCodeCardPageDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x106824d1c

// -[SCPublicProfileManagementActionHandler didDismissCreatorSubscriptionOnboardingScope]
// Type encoding: v16@0:8
// Implementation: 0x106824d64

// -[SCPublicProfileManagementActionHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106824d68

@end
