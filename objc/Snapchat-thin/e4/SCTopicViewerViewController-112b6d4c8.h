// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTopicViewerViewController
// Superclass: UIViewController
// Address: 0x112b6d4c8

@interface SCTopicViewerViewController

// Property: delegate; attributes: T@"<SCTopicViewerViewControllerDelegate>",W,N,V_delegate
// Property: headerAccessoryButtonProvider; attributes: T@"<SCTopicViewerHeaderAccessoryButtonProviding>",&,N,V_headerAccessoryButtonProvider
// Property: imageDownloader; attributes: T@"SCLazy",&,N,V_imageDownloader
// Property: bitmojiAvatarProvider; attributes: T@"SCLazy",&,N,V_bitmojiAvatarProvider
// Property: complianceEngine; attributes: T@"SCComplianceEngine",&,N,V_complianceEngine
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: PPVNavigationLogger; attributes: T@"<SCNavigationLogging>",?,&,N

// -[SCTopicViewerViewController initWithTopic:topicStoryType:displayName:thumbnailCoordinator:topicOperaPresenter:topicReportManager:topicShareManager:topicPageRequester:additionalTopicsRequester:ourStoriesOnboardingManager:isCameosEnabled:cameraPresenter:sourcePageSessionId:sourcePageType:blizzardLogger:headerSectionProvider:thirdPartyAppId:webBrowsingScopeExposer:shouldAllowAddToTopic:joinTopicChatEnabled:imageProvider:additionalTopicsToLoad:operaShowUseSound:soundReportManager:ctaProvider:storiesExperimentServices:soundTopicPageImprovementsEnabled:soundTopicHeaderStylingEnabled:topicPageNewSnapGridEnabled:]
// Type encoding: @224@0:8@16q24@32@40@48@56@64@72@80@88B96@100@108q116@124@132@140@148B156B160@164@172@180@188@196@204B212B216B220
// Implementation: 0x107a6f418

// -[SCTopicViewerViewController _defaultCTAButtonActionModelForAddToTopic]
// Type encoding: @16@0:8
// Implementation: 0x107a6fb08

// -[SCTopicViewerViewController _moreButtonActionModelForAddToTopic]
// Type encoding: @16@0:8
// Implementation: 0x107a6fb54

// -[SCTopicViewerViewController loadView]
// Type encoding: v16@0:8
// Implementation: 0x107a6fba0

// -[SCTopicViewerViewController _handleHeaderAccessoryButtonTap]
// Type encoding: v16@0:8
// Implementation: 0x107a70084

// -[SCTopicViewerViewController viewDidLoad]
// Type encoding: v16@0:8
// Implementation: 0x107a700d4

// -[SCTopicViewerViewController _setupSections]
// Type encoding: v16@0:8
// Implementation: 0x107a70344

// -[SCTopicViewerViewController _reloadSectionsConfigurations]
// Type encoding: v16@0:8
// Implementation: 0x107a70614

// -[SCTopicViewerViewController _generateSnapsSectionWithDataProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a707a8

// -[SCTopicViewerViewController _createSupplementaryViewProviderForDataProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a7098c

// -[SCTopicViewerViewController _shouldHideSnapGridHeaderRow]
// Type encoding: B16@0:8
// Implementation: 0x107a70bb8

// -[SCTopicViewerViewController _fetchMoreTopics]
// Type encoding: v16@0:8
// Implementation: 0x107a70c14

// -[SCTopicViewerViewController _fetchMoreTopicsForDataProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a70d14

// -[SCTopicViewerViewController _handleFetchCompletionWithProvider:topicStories:streamToken:hasMoreData:success:submissionCount:conversationId:]
// Type encoding: v64@0:8@16@24@32B40B44@48@56
// Implementation: 0x107a7107c

// -[SCTopicViewerViewController viewWillEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x107a711e0

// -[SCTopicViewerViewController viewWillEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x107a71210

// -[SCTopicViewerViewController viewWillAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x107a71218

// -[SCTopicViewerViewController viewDidDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x107a71280

// -[SCTopicViewerViewController _updateViewWithDataProvider:topicStories:streamToken:hasMoreData:submissionCount:fetchFailed:]
// Type encoding: v56@0:8@16@24@32B40@44B52
// Implementation: 0x107a712d4

// -[SCTopicViewerViewController _updateViewInPerformerWithDataProvider:topicStories:streamToken:hasMoreData:submissionCount:fetchFailed:]
// Type encoding: v56@0:8@16@24@32B40@44B52
// Implementation: 0x107a71490

// -[SCTopicViewerViewController _removeNonPrimaryTopicSnapsSectionWithProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a71878

// -[SCTopicViewerViewController _removeSectionConfigWithProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a7193c

// -[SCTopicViewerViewController _getAbsolutePositionForSection:position:]
// Type encoding: q32@0:8q16q24
// Implementation: 0x107a71ab4

// -[SCTopicViewerViewController presentSnapActionMenuForStory:position:section:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x107a71b64

// -[SCTopicViewerViewController dismissSnapActionMenu]
// Type encoding: v16@0:8
// Implementation: 0x107a71b74

// -[SCTopicViewerViewController selectMusicTrack]
// Type encoding: v16@0:8
// Implementation: 0x107a71b78

// -[SCTopicViewerViewController dismissTopicViewer]
// Type encoding: v16@0:8
// Implementation: 0x107a71c04

// -[SCTopicViewerViewController dismissTopicViewerWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107a71c0c

// -[SCTopicViewerViewController _prepareCameraWorkflow]
// Type encoding: v16@0:8
// Implementation: 0x107a71cf8

// -[SCTopicViewerViewController addToTopic]
// Type encoding: v16@0:8
// Implementation: 0x107a71e00

// -[SCTopicViewerViewController joinTopicChat]
// Type encoding: v16@0:8
// Implementation: 0x107a71e94

// -[SCTopicViewerViewController showThirdPartyAppProductPageForAppId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a71f78

// -[SCTopicViewerViewController _presentStoreKitViewControllerForAppId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a720b4

// -[SCTopicViewerViewController _avatarViewModelWithBitmojiId:avatarId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107a722f4

// -[SCTopicViewerViewController productViewControllerDidFinish:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a72494

// -[SCTopicViewerViewController _startCameraWorkflow]
// Type encoding: v16@0:8
// Implementation: 0x107a724a4

// -[SCTopicViewerViewController _launchCameraWorkflowPresenter]
// Type encoding: v16@0:8
// Implementation: 0x107a724a8

// -[SCTopicViewerViewController showMoreActionMenu]
// Type encoding: v16@0:8
// Implementation: 0x107a724bc

// -[SCTopicViewerViewController _presentActionMenu]
// Type encoding: v16@0:8
// Implementation: 0x107a724c0

// -[SCTopicViewerViewController _presentSnapActionMenuForStory:section:position:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x107a726cc

// -[SCTopicViewerViewController showShareMenuForStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a727e8

// -[SCTopicViewerViewController _showShareMenuForStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a728f0

// -[SCTopicViewerViewController showReportSoundMenu]
// Type encoding: v16@0:8
// Implementation: 0x107a729b4

// -[SCTopicViewerViewController _showReportSoundMenu]
// Type encoding: v16@0:8
// Implementation: 0x107a72a84

// -[SCTopicViewerViewController showReportMenuForStory:position:section:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x107a72b38

// -[SCTopicViewerViewController _showReportMenuForStory:position:section:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x107a72c58

// -[SCTopicViewerViewController _dismissSnapActionMenu]
// Type encoding: v16@0:8
// Implementation: 0x107a72e00

// -[SCTopicViewerViewController _dismissSnapActionMenuWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107a72e08

// -[SCTopicViewerViewController dismissActionMenu]
// Type encoding: v16@0:8
// Implementation: 0x107a72e20

// -[SCTopicViewerViewController _dismissActionMenuWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107a72e28

// -[SCTopicViewerViewController playTopicSnapAtPosition:section:baseView:]
// Type encoding: v40@0:8q16q24@32
// Implementation: 0x107a72e40

// -[SCTopicViewerViewController _updateOperaPresenterWithUseSoundBlock]
// Type encoding: v16@0:8
// Implementation: 0x107a73134

// -[SCTopicViewerViewController _isSoundTopic]
// Type encoding: B16@0:8
// Implementation: 0x107a7320c

// -[SCTopicViewerViewController _broadcastViewLocation]
// Type encoding: q16@0:8
// Implementation: 0x107a73228

// -[SCTopicViewerViewController pageViewName]
// Type encoding: q16@0:8
// Implementation: 0x107a7324c

// -[SCTopicViewerViewController _cellIsCompletelyVisibleInCollectionView:atIndexPath:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107a73254

// -[SCTopicViewerViewController willDismissOperaForTopicStoryId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a73348

// -[SCTopicViewerViewController _indexPathForSnapWithTopicStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a733ec

// -[SCTopicViewerViewController baseViewForTopicStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a7358c

// -[SCTopicViewerViewController didBeginPlayingStoryId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a73610

// -[SCTopicViewerViewController unifiedActionMenuPresenterDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a73718

// -[SCTopicViewerViewController didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107a73758

// -[SCTopicViewerViewController defaultProjectNameV2]
// Type encoding: @16@0:8
// Implementation: 0x107a73964

// -[SCTopicViewerViewController _resetMetricsSession]
// Type encoding: v16@0:8
// Implementation: 0x107a73970

// -[SCTopicViewerViewController _resetMetricsSessionInPerformer]
// Type encoding: v16@0:8
// Implementation: 0x107a73a4c

// -[SCTopicViewerViewController _getSnapsDataProviderForIndexPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a73b20

// -[SCTopicViewerViewController _logImpressionForAllVisibleCells]
// Type encoding: v16@0:8
// Implementation: 0x107a73bac

// -[SCTopicViewerViewController _logImpressionInPerformerForIndexPaths:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a73ce8

// -[SCTopicViewerViewController _logPageEntryWithEntryType:]
// Type encoding: v24@0:8q16
// Implementation: 0x107a73de0

// -[SCTopicViewerViewController _logPageEntryInPerformerWithEntryType:]
// Type encoding: v24@0:8q16
// Implementation: 0x107a73ed4

// -[SCTopicViewerViewController _logPageExitWithExitType:]
// Type encoding: v24@0:8q16
// Implementation: 0x107a73f78

// -[SCTopicViewerViewController _logPageExitInPerformerWithExitType:]
// Type encoding: v24@0:8q16
// Implementation: 0x107a7406c

// -[SCTopicViewerViewController _itemLogParametersForTopicStory:position:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x107a7421c

// -[SCTopicViewerViewController _logImpressionForIndexPath:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a742d0

// -[SCTopicViewerViewController _logActionForTopicStory:actionType:position:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x107a744ac

// -[SCTopicViewerViewController _getExtraLoggingParamsFromHeaderProvider]
// Type encoding: @16@0:8
// Implementation: 0x107a74598

// -[SCTopicViewerViewController scrollViewDidScroll:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a745e8

// -[SCTopicViewerViewController _fetchMoreIfNearBottom:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a745fc

// -[SCTopicViewerViewController _fetchMoreForProviderAtIndexPath:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a747e8

// -[SCTopicViewerViewController collectionView:willDisplayCell:forItemAtIndexPath:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107a748bc

// -[SCTopicViewerViewController _fetchMoreForVisiblePlaceholdersIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x107a748dc

// -[SCTopicViewerViewController collectionView:prefetchItemsAtIndexPaths:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107a74a40

// -[SCTopicViewerViewController cardTransitionShouldBeginWithView:touchLocation:]
// Type encoding: B40@0:8@16{CGPoint=dd}24
// Implementation: 0x107a74dd4

// -[SCTopicViewerViewController cardToExpandTransition]
// Type encoding: @16@0:8
// Implementation: 0x107a74e80

// -[SCTopicViewerViewController cardTransitionWillBeginWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a74e84

// -[SCTopicViewerViewController cardTransitionEndedWithView:transitionType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x107a74ef4

// -[SCTopicViewerViewController setNeedsStatusBarAppearanceUpdate]
// Type encoding: v16@0:8
// Implementation: 0x107a74f7c

// -[SCTopicViewerViewController preferredStatusBarStyle]
// Type encoding: q16@0:8
// Implementation: 0x107a7502c

// -[SCTopicViewerViewController prefersStatusBarHidden]
// Type encoding: B16@0:8
// Implementation: 0x107a75034

// -[SCTopicViewerViewController webBrowserDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a7503c

// -[SCTopicViewerViewController viewControllerPrefersSelfDismiss]
// Type encoding: B16@0:8
// Implementation: 0x107a75094

// -[SCTopicViewerViewController viewControllerDismissSelf:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107a7509c

// -[SCTopicViewerViewController _getTotalNumSnaps]
// Type encoding: @16@0:8
// Implementation: 0x107a750a0

// -[SCTopicViewerViewController sectionBasedCollectionViewUpdaterWillUpdateCollectionView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a7514c

// -[SCTopicViewerViewController sectionBasedCollectionViewUpdater:didUpdateSectionsWithAnimationFinished:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107a75150

// -[SCTopicViewerViewController sectionBasedCollectionViewUpdater:didUpdateLayoutWithAnimationFinished:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107a751d8

// -[SCTopicViewerViewController sectionBasedCollectionViewUpdater:didSetUpSections:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107a751dc

// -[SCTopicViewerViewController sectionBasedCollectionViewUpdater:didTearDownSections:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107a751e0

// -[SCTopicViewerViewController sectionInsetsForSectionBasedCollectionViewUpdater:]
// Type encoding: {UIEdgeInsets=dddd}24@0:8@16
// Implementation: 0x107a751e4

// -[SCTopicViewerViewController presentingViewControllerForSectionBasedCollectionViewUpdater:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a751f8

// -[SCTopicViewerViewController delegate]
// Type encoding: @16@0:8
// Implementation: 0x107a751fc

// -[SCTopicViewerViewController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a7521c

// -[SCTopicViewerViewController headerAccessoryButtonProvider]
// Type encoding: @16@0:8
// Implementation: 0x107a75230

// -[SCTopicViewerViewController setHeaderAccessoryButtonProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a75240

// -[SCTopicViewerViewController imageDownloader]
// Type encoding: @16@0:8
// Implementation: 0x107a75280

// -[SCTopicViewerViewController setImageDownloader:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a75290

// -[SCTopicViewerViewController bitmojiAvatarProvider]
// Type encoding: @16@0:8
// Implementation: 0x107a752d0

// -[SCTopicViewerViewController setBitmojiAvatarProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a752e0

// -[SCTopicViewerViewController complianceEngine]
// Type encoding: @16@0:8
// Implementation: 0x107a75320

// -[SCTopicViewerViewController setComplianceEngine:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a75330

// -[SCTopicViewerViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107a75370

@end
