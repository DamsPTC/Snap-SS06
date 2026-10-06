// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSendToWorkflow
// Superclass: NSObject
// Address: 0x112aa0ec8

@interface SCSendToWorkflow

// Property: createdGroupIds; attributes: T@"NSMutableArray",R,C,N,V_createdGroupIds
// Property: sendToDidSend; attributes: TB,R,N,V_sendToDidSend
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSendToWorkflow initWithRouter:messagingExperimentService:circumstanceEngine:userInfoProvider:snapchatterObservableRepository:searchServiceClientFactory:searchClient:sortableSnapchatterObservableRepository:replyRecipientObservableRepository:lastSnapDataCoordinator:selectionGroupObservableRepository:selectionRecipientObservableRepository:selectionStoryObservableRepository:snapchattersDataFetcher:snapchattersDataSearcher:snapchattersDataMutator:snapchattersDisplayMetadataFetcher:customStoriesOnboardingManager:customStoriesDataFetcher:customStoriesDataMutator:blockedSnapchatterFetcher:ourStoriesOnboardingManager:ourStoriesAttributionManager:featureSettingsService:memoriesAutosaveMigrator:snapProUserProfileIdProvider:snapProProfilesProvider:lastInteractionDataService:storiesDataCoordinator:mapPersonLocationsProvider:friendmojiPresenter:imageDownloader:uiContainer:preSelectedItems:previewConfiguration:contentConfiguration:recipientConfiguration:storyConfiguration:shareSheetConfiguration:selectionTracker:contactTracker:currentUserId:logger:delegate:firstSnapSectionProvider:sendToSnapchatterObservableRepository:sectionExtensionsProviderFuture:headerExtensionFuture:groupsDataCreator:userInitiatedPerformer:utilityPerformer:isQualifiedForContactSyncCTA:resourceDownloader:userBlizzardServices:placeTaggingServices:contactPermissionInfoProvider:isLaunchedFromLegacySendTo:sendToTooltipsService:webBrowsingScopeExposer:sendToAttribution:offPlatformShareOnMainCameraPreviewService:enableSelectableContacts:shouldShowEducationPopup:snapSendEvents:valdiRuntimeProvider:cofStore:spotlightRepliesFeatureSettingsManager:spotlightShareUIProvider:userBirthdayProvider:sendToActionSheetScopeExposer:selectionSpotlightStoryObservableRepository:newGroupDelegate:storyPrivacySettingManager:contextExperimentService:sendToExperimentConfiguration:sendToUIConfiguration:sendToMentionsConfiguration:remixConfiguration:recentlyActiveService:offPlatformShareServices:sendToSuggestionsDataService:composerPeopleBridgeFriendServices:composerPeopleBridgeGroupServices:composerNetworkingBridgeServices:composerCoreUIServices:spotlightNavigationService:sendToRankingConfiguration:recentsDebugScopeExposer:storiesBlizzardLogger:contextualSignalsObservable:sendToFeedLogger:createPostScopeExposer:renderingTracker:subscriptionInfoProvider:streakProvider:showSendToTray:sendToSpotlightEligibilityService:sendToSharingConfigurationService:customAppThemeProvider:avatarFactory:fanPassCreatorInfoProvider:spotlightAutoShareService:]
// Type encoding: @812@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248@256@264@272@280@288@296@304@312@320@328@336@344@352@360@368@376@384@392@400@408@416B424@428@436@444@452B460@464@472@480@488B496B500@504@512@520@528@536@544@552@560@568@576@584@592@600@608@616@624@632@640@648@656@664@672@680@688@696@704@712@720@728@736@744@752B760@764@772@780@788@796@804
// Implementation: 0x105e0cce4

// -[SCSendToWorkflow beginWorkflow]
// Type encoding: v16@0:8
// Implementation: 0x105e0e0d4

// -[SCSendToWorkflow _viewController_INTERNAL_ONLY]
// Type encoding: @16@0:8
// Implementation: 0x105e0fc58

// -[SCSendToWorkflow didSendWithSelectedItems:additionalText:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105e0fc80

// -[SCSendToWorkflow didDismissWithSelectedItems:sendToDismissSource:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105e0fdf8

// -[SCSendToWorkflow didStartEditNewGroupWithSelectedItems:source:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105e0fe84

// -[SCSendToWorkflow didStartCreateNewGroupWithSelectedItems:source:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105e0ff0c

// -[SCSendToWorkflow didTapFloatingShareButton]
// Type encoding: v16@0:8
// Implementation: 0x105e10140

// -[SCSendToWorkflow expandSendToTrayIfPossible]
// Type encoding: v16@0:8
// Implementation: 0x105e1016c

// -[SCSendToWorkflow didSelectCustomStoryCreation]
// Type encoding: v16@0:8
// Implementation: 0x105e1018c

// -[SCSendToWorkflow didSelectComeBackLaterToSpotlightStory]
// Type encoding: v16@0:8
// Implementation: 0x105e1019c

// -[SCSendToWorkflow didSelectPrivateStoryFirstTimePostForPublicationId:onAccept:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105e101d8

// -[SCSendToWorkflow didSelectCustomStoryFirstTimePostForCustomStory:onAccept:hasBlockedUsers:]
// Type encoding: v36@0:8@16@?24B32
// Implementation: 0x105e101e8

// -[SCSendToWorkflow didSelectCommunityStoryFirstTimePostForCustomStory:onAccept:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105e101f8

// -[SCSendToWorkflow didSelectOurStoryFirstTimePostWithOnAccept:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105e10208

// -[SCSendToWorkflow didSelectOurStoryAttributionIntroForDisplayName:onAccept:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105e10218

// -[SCSendToWorkflow didSelectSpotlightFirstTimePostV2WithOnAccept:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105e10228

// -[SCSendToWorkflow didSelectSpotlightTermsUpdatedWithOnAccept:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105e10238

// -[SCSendToWorkflow didSelectSpotlightAttributionIntroForDisplayName:onAccept:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105e10248

// -[SCSendToWorkflow didSelectPublicAttributionNuxOnComplete:onDisplayFallback:shownForSpotlight:]
// Type encoding: v36@0:8@?16@?24B32
// Implementation: 0x105e10258

// -[SCSendToWorkflow didSelectSpotlightNuxOnComplete:isFriendsOnlyProfile:onDisplayFallback:]
// Type encoding: v36@0:8@?16B24@?28
// Implementation: 0x105e10388

// -[SCSendToWorkflow didSelectSpotlightToOpenCreatePost:fromEditButton:fromNoAudio:]
// Type encoding: v32@0:8@16B24B28
// Implementation: 0x105e104a4

// -[SCSendToWorkflow _setIsSpotlightPreSelected]
// Type encoding: v16@0:8
// Implementation: 0x105e105a4

// -[SCSendToWorkflow _generateThumbnailsAndBeginCreatePostFlow]
// Type encoding: v16@0:8
// Implementation: 0x105e10720

// -[SCSendToWorkflow _beginCreatePostFlowWithPreviewAssets:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e10b7c

// -[SCSendToWorkflow _placeTagsTracker]
// Type encoding: @16@0:8
// Implementation: 0x105e10f0c

// -[SCSendToWorkflow _createPostSetConfig]
// Type encoding: v16@0:8
// Implementation: 0x105e10fb0

// -[SCSendToWorkflow _resetSpotlightCover]
// Type encoding: v16@0:8
// Implementation: 0x105e11654

// -[SCSendToWorkflow _getCreatePostSoundConfig]
// Type encoding: @16@0:8
// Implementation: 0x105e118a0

// -[SCSendToWorkflow _getCreatePostPaidPartnershipConfig]
// Type encoding: @16@0:8
// Implementation: 0x105e11a50

// -[SCSendToWorkflow didSelectBestOfSpectaclesFirstTimePostWithOnAccept:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105e11c54

// -[SCSendToWorkflow didSelectBusinessProfileForBusinessId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105e11c64

// -[SCSendToWorkflow didSelectSharedStoryWithBlockedSnapchattersInGroup:publicationId:onAccept:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105e11d78

// -[SCSendToWorkflow didSelectSharedStoryToShowTrustAndSafetyPromptWithOnAccept:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105e11d88

// -[SCSendToWorkflow didSelectShareToMyStory]
// Type encoding: v16@0:8
// Implementation: 0x105e11d98

// -[SCSendToWorkflow didSelectCustomTTL:forSelectionStory:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x105e120b0

// -[SCSendToWorkflow didSelectSpotlightSectionToShowBusinessAccountsFromNoAudio:]
// Type encoding: v20@0:8B16
// Implementation: 0x105e122ac

// -[SCSendToWorkflow didSelectSpotlightSectionWithSendToEducation:]
// Type encoding: v24@0:8q16
// Implementation: 0x105e123a8

// -[SCSendToWorkflow didSetMyStoryAudience]
// Type encoding: v16@0:8
// Implementation: 0x105e124b8

// -[SCSendToWorkflow showMusicBlockedForBrandAccountsDialog]
// Type encoding: v16@0:8
// Implementation: 0x105e124ec

// -[SCSendToWorkflow didTapContactWithPhoneNumber:selectionItem:selectionTypeIdentifier:source:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x105e124fc

// -[SCSendToWorkflow didSelectSelectableContactForFirstTimeWithOnAccept:isSnapAnyone:]
// Type encoding: v28@0:8@?16B24
// Implementation: 0x105e12830

// -[SCSendToWorkflow longPressActionHandler:didLongPressForType:identifier:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x105e12844

// -[SCSendToWorkflow didCreateCustomStoryWithPublicationId:displayName:type:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x105e1296c

// -[SCSendToWorkflow didDismissCustomStoryCreation]
// Type encoding: v16@0:8
// Implementation: 0x105e12b28

// -[SCSendToWorkflow didCreateGroupWithGroupId:selectionItems:isExistingGroup:source:]
// Type encoding: v44@0:8@16@24B32@36
// Implementation: 0x105e12b30

// -[SCSendToWorkflow didDismissNewGroupCreation:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e12bb8

// -[SCSendToWorkflow _setSelectedStateForGroupId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e12bf0

// -[SCSendToWorkflow handleShareDestination:standardExternalContentShareScope:]
// Type encoding: B32@0:8q16@24
// Implementation: 0x105e12f10

// -[SCSendToWorkflow shareSheetDismissedWithShareDestination:]
// Type encoding: v24@0:8q16
// Implementation: 0x105e12f18

// -[SCSendToWorkflow setShareDestinationSelectionHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105e12fb8

// -[SCSendToWorkflow onDragSelectionMode:]
// Type encoding: v20@0:8B16
// Implementation: 0x105e12fe8

// -[SCSendToWorkflow _attemptSpotlightSharePromptWithSelectedItems:additionalText:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105e13044

// -[SCSendToWorkflow _attemptGroupchatMentionPromptWithSelectedItems:additionalText:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105e132f8

// -[SCSendToWorkflow _performDidSendWithSelectedItems:additionalText:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105e134d4

// -[SCSendToWorkflow _shouldNavigateToSpotlight:]
// Type encoding: B24@0:8@16
// Implementation: 0x105e136ac

// -[SCSendToWorkflow _isPublicOrMyStoryOrMapOrSharedStory:]
// Type encoding: B24@0:8@16
// Implementation: 0x105e138bc

// -[SCSendToWorkflow _didCompleteQueuedOffPlatformShare:]
// Type encoding: v20@0:8B16
// Implementation: 0x105e1393c

// -[SCSendToWorkflow _didSendWithSelectedItems:additionalText:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105e13bb4

// -[SCSendToWorkflow _persistLastSnapSendFriendRequestAndLogGrapheneMetricsWithSelectedItems:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e13d88

// -[SCSendToWorkflow _updateOffPlatformShareTimestampsWithSelectedItems:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e13df0

// -[SCSendToWorkflow _sendFriendRequestsIfNecessaryToSelected:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e14084

// -[SCSendToWorkflow _didSendWithSelectedItems:additionalText:newlyCreatedCustomStories:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105e145d8

// -[SCSendToWorkflow _didSendWithSelectedItems:selectedPhoneNumbers:additionalText:newlyCreatedCustomStories:selectedTopics:placeTagsMetadata:spotlightDescription:spotlightDescriptionMentions:shouldCreateHighlight:shareAnonymously:selectedSponsor:goLiveTimestamp:toggleValues:spotlightTile:externalDestinations:]
// Type encoding: v132@0:8@16@24@32@40@48@56@64@72B80@84@92@100@108@116@124
// Implementation: 0x105e15774

// -[SCSendToWorkflow _setSelectedStateForGroupId:onNextNewSelectionGroups:nextRecentSelectionGroups:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105e15a40

// -[SCSendToWorkflow _shouldShowSpotlightRepliesToggle]
// Type encoding: B16@0:8
// Implementation: 0x105e15d10

// -[SCSendToWorkflow _shouldPromptScheduleEligibilityWithSelectedItems:]
// Type encoding: B24@0:8@16
// Implementation: 0x105e15d6c

// -[SCSendToWorkflow _selectNewGroupWithGroupId:selectedItems:isExistingGroup:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x105e15e70

// -[SCSendToWorkflow _signedInUserMemberRoleProfile]
// Type encoding: @16@0:8
// Implementation: 0x105e15f20

// -[SCSendToWorkflow didFetchMemberRolesForSpotlightPosting:]
// Type encoding: v24@0:8q16
// Implementation: 0x105e1602c

// -[SCSendToWorkflow webBrowserDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e16068

// -[SCSendToWorkflow didDismissAccountSelectorWithViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e160b0

// -[SCSendToWorkflow _setCreatePostStateForEditButton]
// Type encoding: v16@0:8
// Implementation: 0x105e169c0

// -[SCSendToWorkflow _immediatelyLoadThumbnailIfElligible]
// Type encoding: v16@0:8
// Implementation: 0x105e16a08

// -[SCSendToWorkflow _initSpotlightPosterImage]
// Type encoding: v16@0:8
// Implementation: 0x105e16b34

// -[SCSendToWorkflow _setCreatePostUpdateSelectedContentsInSpotlightSection]
// Type encoding: v16@0:8
// Implementation: 0x105e16e28

// -[SCSendToWorkflow _updateSpotlightSectionOnPosterImageReady]
// Type encoding: v16@0:8
// Implementation: 0x105e170e0

// -[SCSendToWorkflow _setCreatePostUpdateInSpotlightSectionWithInstructionText:hasSpotlightDescriptionText:showAddSoundError:]
// Type encoding: v32@0:8@16B24B28
// Implementation: 0x105e172f0

// -[SCSendToWorkflow _postingHintObservableWithPlaceTagsTracker:hasSpotlightDescriptionText:instructionText:showAddSoundError:]
// Type encoding: @40@0:8@16B24@28B36
// Implementation: 0x105e174b4

// -[SCSendToWorkflow _blockPostingIfNeededWithSelectedUsername:nameToDisplay:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x105e1798c

// -[SCSendToWorkflow _shouldShowAddSoundError]
// Type encoding: B16@0:8
// Implementation: 0x105e17b7c

// -[SCSendToWorkflow _createStoriesExpandedRowsObservable]
// Type encoding: @16@0:8
// Implementation: 0x105e17c04

// -[SCSendToWorkflow _shouldShowAllowSpotlightRemixingToggle]
// Type encoding: B16@0:8
// Implementation: 0x105e17d20

// -[SCSendToWorkflow _shouldEnableAllowSpotlightRemixingToggle]
// Type encoding: B16@0:8
// Implementation: 0x105e17d28

// -[SCSendToWorkflow _updateRemixToggleFeatureSetting]
// Type encoding: v16@0:8
// Implementation: 0x105e17db0

// -[SCSendToWorkflow _isStandardUserOver18]
// Type encoding: B16@0:8
// Implementation: 0x105e17e30

// -[SCSendToWorkflow _isUser16or17]
// Type encoding: B16@0:8
// Implementation: 0x105e17ebc

// -[SCSendToWorkflow _getSaveToProfileDefaultToggleValue]
// Type encoding: B16@0:8
// Implementation: 0x105e17f34

// -[SCSendToWorkflow _createSendToTracker]
// Type encoding: v16@0:8
// Implementation: 0x105e17f6c

// -[SCSendToWorkflow _getCustomStoriesOnboardingPresenter]
// Type encoding: @16@0:8
// Implementation: 0x105e18048

// -[SCSendToWorkflow _launchQueuedExternalDestination:uiContainer:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105e180d0

// -[SCSendToWorkflow _saveMassSnapSuggestion:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e18204

// -[SCSendToWorkflow createPostScope:didCreatePostWithConfig:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105e1857c

// -[SCSendToWorkflow _applyCreatePostConfig:fromDismiss:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105e185e4

// -[SCSendToWorkflow _handleSpotlightPlaceTag:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e18b04

// -[SCSendToWorkflow _musicSpotlightHintForTrackTitle:artistName:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105e18be8

// -[SCSendToWorkflow createPostScope:didSelectMusic:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105e18d38

// -[SCSendToWorkflow createPostScope:didDismissWithConfig:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105e18dd0

// -[SCSendToWorkflow _dismissCreatePostTray]
// Type encoding: v16@0:8
// Implementation: 0x105e18ea0

// -[SCSendToWorkflow dismissTrayViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e18ee8

// -[SCSendToWorkflow didDismissTrayViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e18ef8

// -[SCSendToWorkflow trayDidChangeExpansion:]
// Type encoding: v20@0:8B16
// Implementation: 0x105e18f84

// -[SCSendToWorkflow _syncStorySelectionsFromCreatePostConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e1902c

// -[SCSendToWorkflow _createSpotlightSelectionItem]
// Type encoding: @16@0:8
// Implementation: 0x105e195ec

// -[SCSendToWorkflow createdGroupIds]
// Type encoding: @16@0:8
// Implementation: 0x105e1975c

// -[SCSendToWorkflow sendToDidSend]
// Type encoding: B16@0:8
// Implementation: 0x105e19764

// -[SCSendToWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105e1976c

@end
