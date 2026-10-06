// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCompositeAdDataSource
// Superclass: NSObject
// Address: 0x112add9b8

@interface SCCompositeAdDataSource

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: isPresentingAdReportingView; attributes: TB,R,N
// Property: isPresentingPharmaDisclaimer; attributes: TB,R,N
// Property: uiContainer; attributes: T@"<SCUIContainer>",R,N

// -[SCCompositeAdDataSource initWithDependencies:groupAdDataSource:adConfigProviderV2:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1063bee3c

// -[SCCompositeAdDataSource _setupPromotedStoryAdDataSourceIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063bf238

// -[SCCompositeAdDataSource _setupUserStoriesAdDataSourceIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063bf2f4

// -[SCCompositeAdDataSource _setupContentInterstitialAdDataSourceIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063bf3bc

// -[SCCompositeAdDataSource _setupPublisherAdDataSourceIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063bf484

// -[SCCompositeAdDataSource _setupLongformShowAdDataSourceIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063bf5a4

// -[SCCompositeAdDataSource _setupPublicStoriesAdDataSourceIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063bf688

// -[SCCompositeAdDataSource _setupLongformSpotlightAdDataSourceIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063bf7a8

// -[SCCompositeAdDataSource updateDataSourceForItemGroup:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063bf870

// -[SCCompositeAdDataSource updateEntryInteractionType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1063bfc9c

// -[SCCompositeAdDataSource setPlaylistItemController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063bfd00

// -[SCCompositeAdDataSource setOperaControlling:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063bfecc

// -[SCCompositeAdDataSource operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1063c00ec

// -[SCCompositeAdDataSource setOperaConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063c03f8

// -[SCCompositeAdDataSource beginObservationWithAdUnifiedEventStreams:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063c05b8

// -[SCCompositeAdDataSource didTapLoadingErrorCta:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063c071c

// -[SCCompositeAdDataSource updateViewLocation:]
// Type encoding: v24@0:8q16
// Implementation: 0x1063c0724

// -[SCCompositeAdDataSource _dataSourceForItemId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063c0918

// -[SCCompositeAdDataSource _dataSourceForGroupId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063c0b7c

// -[SCCompositeAdDataSource _adTrackHandlerForItemId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063c0cd8

// -[SCCompositeAdDataSource _registeredEventsForOperaSession]
// Type encoding: @16@0:8
// Implementation: 0x1063c0f64

// -[SCCompositeAdDataSource dataModelForGroup:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063c1020

// -[SCCompositeAdDataSource dataModelFor:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063c10b0

// -[SCCompositeAdDataSource canResolvePlaylistItemGroupDataModel:]
// Type encoding: B24@0:8@16
// Implementation: 0x1063c1140

// -[SCCompositeAdDataSource playlistItemGroupModelForDataModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063c1278

// -[SCCompositeAdDataSource needToPrepareMediaBeforeDisplay]
// Type encoding: B16@0:8
// Implementation: 0x1063c1410

// -[SCCompositeAdDataSource resetInsertionData]
// Type encoding: v16@0:8
// Implementation: 0x1063c1418

// -[SCCompositeAdDataSource resetInsertionState]
// Type encoding: v16@0:8
// Implementation: 0x1063c16a8

// -[SCCompositeAdDataSource teardown]
// Type encoding: v16@0:8
// Implementation: 0x1063c1938

// -[SCCompositeAdDataSource resolvePlaylistItemGroupWithMutator:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063c1b6c

// -[SCCompositeAdDataSource postResolvePlaylistItemGroupWithResolver:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063c1c00

// -[SCCompositeAdDataSource loadMediaForPlaylistItemGroup:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063c1ca8

// -[SCCompositeAdDataSource pageDataForDataModel:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1063c1d24

// -[SCCompositeAdDataSource _updatedPageDataWithData:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063c1f10

// -[SCCompositeAdDataSource _pageDataWithSortedOperaLayers:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063c2020

// -[SCCompositeAdDataSource setAdPageRegistry:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063c2100

// -[SCCompositeAdDataSource removeMediaForItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063c2130

// -[SCCompositeAdDataSource prepareMediaForItem:startWaitingForDownloadCallback:completion:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x1063c21ac

// -[SCCompositeAdDataSource startViewingPlaylistItemGroup:previousItemGroup:currentItem:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1063c23b0

// -[SCCompositeAdDataSource startViewingPlaylistItem:page:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1063c2440

// -[SCCompositeAdDataSource stopViewingPlaylistItemId:isViewingLongform:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1063c24ac

// -[SCCompositeAdDataSource stopViewingPlaylistItemGroupId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063c2508

// -[SCCompositeAdDataSource stopViewingOptOutInterstitialForPlaylistItemGroup:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063c2558

// -[SCCompositeAdDataSource startViewingPlaylistChapterId:currentItem:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1063c2560

// -[SCCompositeAdDataSource adSnapIndexForItem:]
// Type encoding: q24@0:8@16
// Implementation: 0x1063c2568

// -[SCCompositeAdDataSource adPositionForItem:]
// Type encoding: q24@0:8@16
// Implementation: 0x1063c25ec

// -[SCCompositeAdDataSource adInsertPositionForItem:]
// Type encoding: q24@0:8@16
// Implementation: 0x1063c2670

// -[SCCompositeAdDataSource snapIndexPosForItem:]
// Type encoding: q24@0:8@16
// Implementation: 0x1063c26f4

// -[SCCompositeAdDataSource adRequestClientIdForItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063c2778

// -[SCCompositeAdDataSource adResponseForItemId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063c2804

// -[SCCompositeAdDataSource adResponseForAdRequestClientId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063c2874

// -[SCCompositeAdDataSource adViewContextForItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063c2a8c

// -[SCCompositeAdDataSource skippedAdItemIdsAroundItem:pageLeft:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x1063c2b18

// -[SCCompositeAdDataSource adViewContextForSkippedItemId:aroundItem:pageLeft:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x1063c2b20

// -[SCCompositeAdDataSource logAdSkipWithAdItemId:aroundItem:pageLeft:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1063c2b28

// -[SCCompositeAdDataSource isNofillAdItemId:]
// Type encoding: B24@0:8@16
// Implementation: 0x1063c2b30

// -[SCCompositeAdDataSource isNofillUnskippableAdItemId:]
// Type encoding: B24@0:8@16
// Implementation: 0x1063c2b98

// -[SCCompositeAdDataSource hasEndCardForAdIdentifier:]
// Type encoding: B24@0:8@16
// Implementation: 0x1063c2c00

// -[SCCompositeAdDataSource insertEndCardForPrimaryGroupId:]
// Type encoding: B24@0:8@16
// Implementation: 0x1063c2c80

// -[SCCompositeAdDataSource skippedAdGroupIdsAroundGroup:pagedLeft:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x1063c2d50

// -[SCCompositeAdDataSource adRequestClientIdForGroupId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063c2d58

// -[SCCompositeAdDataSource adResponseForGroupId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063c2d60

// -[SCCompositeAdDataSource adViewContextForSkippedGroupId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063c2d68

// -[SCCompositeAdDataSource logAdSkipWithAdGroupId:aroundGroup:pagedLeft:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1063c2d70

// -[SCCompositeAdDataSource isNofillAdGroupId:]
// Type encoding: B24@0:8@16
// Implementation: 0x1063c2d78

// -[SCCompositeAdDataSource totalTopSnapsMediaDurationInSecForAdGroup:]
// Type encoding: d24@0:8@16
// Implementation: 0x1063c2d80

// -[SCCompositeAdDataSource adSessionId]
// Type encoding: @16@0:8
// Implementation: 0x1063c2d88

// -[SCCompositeAdDataSource totalAdCountForItem:]
// Type encoding: q24@0:8@16
// Implementation: 0x1063c2db4

// -[SCCompositeAdDataSource adProductTypeForItem:]
// Type encoding: Q24@0:8@16
// Implementation: 0x1063c2e38

// -[SCCompositeAdDataSource isDynamicInsertionEligibleForItem:]
// Type encoding: B24@0:8@16
// Implementation: 0x1063c2ec0

// -[SCCompositeAdDataSource editionEntrySnapIndexForItem:]
// Type encoding: q24@0:8@16
// Implementation: 0x1063c2f48

// -[SCCompositeAdDataSource hideAdWithItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063c2fa8

// -[SCCompositeAdDataSource setAdPlaybackConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063c3028

// -[SCCompositeAdDataSource adPlaybackConfig]
// Type encoding: @16@0:8
// Implementation: 0x1063c3030

// -[SCCompositeAdDataSource operaMediaBundleProvider]
// Type encoding: @16@0:8
// Implementation: 0x1063c3038

// -[SCCompositeAdDataSource canProvideMediaBundleForPlaylistItem:]
// Type encoding: B24@0:8@16
// Implementation: 0x1063c3074

// -[SCCompositeAdDataSource mediaBundleFromPlaylistItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063c311c

// -[SCCompositeAdDataSource adMetadataForPageId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063c3268

// -[SCCompositeAdDataSource adMetadataForItemId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063c32ec

// -[SCCompositeAdDataSource enumerateAdMetadataFromCurrentPage:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1063c3370

// -[SCCompositeAdDataSource preparedMediaForPageId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063c35d8

// -[SCCompositeAdDataSource adMediaManagerForPageId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063c36f8

// -[SCCompositeAdDataSource isPageCurrent:]
// Type encoding: B24@0:8@16
// Implementation: 0x1063c3768

// -[SCCompositeAdDataSource _adMetadataForItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063c3814

// -[SCCompositeAdDataSource itemIdForPageId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063c3ab0

// -[SCCompositeAdDataSource composerCtaContainerViewModelForPageId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063c3b30

// -[SCCompositeAdDataSource uiContainer]
// Type encoding: @16@0:8
// Implementation: 0x1063c3c68

// -[SCCompositeAdDataSource uiContainerWithDidPresentBlock:didDismissBlock:]
// Type encoding: @32@0:8@?16@?24
// Implementation: 0x1063c3c74

// -[SCCompositeAdDataSource uiContainerWithDidPresentBlock:didDismissBlock:shouldHandleModalPresentation:]
// Type encoding: @36@0:8@?16@?24B32
// Implementation: 0x1063c3c7c

// -[SCCompositeAdDataSource _topmostOperaPresentedViewController]
// Type encoding: @16@0:8
// Implementation: 0x1063c3e08

// -[SCCompositeAdDataSource plainOverlayUIContainer]
// Type encoding: @16@0:8
// Implementation: 0x1063c3ec8

// -[SCCompositeAdDataSource didPresentCustomOverlay]
// Type encoding: v16@0:8
// Implementation: 0x1063c4304

// -[SCCompositeAdDataSource didDismissCustomOverlay]
// Type encoding: v16@0:8
// Implementation: 0x1063c4348

// -[SCCompositeAdDataSource operaPresentingViewController]
// Type encoding: @16@0:8
// Implementation: 0x1063c438c

// -[SCCompositeAdDataSource operaNavigationStyle]
// Type encoding: q16@0:8
// Implementation: 0x1063c4390

// -[SCCompositeAdDataSource presentAttachmentWithAdType:collectionItemUrl:itemIndex:defaultAttachmentIndex:error:]
// Type encoding: B56@0:8q16@24@32@40^@48
// Implementation: 0x1063c43e8

// -[SCCompositeAdDataSource setLastInteractionV2WithTriggerType:touchPoint:collectionItemIndex:defaultAttachmentIndex:error:]
// Type encoding: B56@0:8q16@24@32@40^@48
// Implementation: 0x1063c4770

// -[SCCompositeAdDataSource setLastInteractionV2WithInteractionType:touchPoint:error:]
// Type encoding: B40@0:8q16@24^@32
// Implementation: 0x1063c4890

// -[SCCompositeAdDataSource isPresentingAdReportingView]
// Type encoding: B16@0:8
// Implementation: 0x1063c4bf0

// -[SCCompositeAdDataSource isAdHiddenWithAdRequestClientId:]
// Type encoding: B24@0:8@16
// Implementation: 0x1063c4bf8

// -[SCCompositeAdDataSource _handleAdReportEventV2:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063c4c0c

// -[SCCompositeAdDataSource _handleAdReportEventPresented]
// Type encoding: v16@0:8
// Implementation: 0x1063c4d68

// -[SCCompositeAdDataSource _handleAdReportEventDismissed]
// Type encoding: v16@0:8
// Implementation: 0x1063c4db8

// -[SCCompositeAdDataSource _handleHideAdDismissedWithAdHidden:pageId:adIdentifier:]
// Type encoding: v36@0:8B16@20@28
// Implementation: 0x1063c4e04

// -[SCCompositeAdDataSource isPresentingPharmaDisclaimer]
// Type encoding: B16@0:8
// Implementation: 0x1063c4f44

// -[SCCompositeAdDataSource setPresentingPharmaDisclaimer:]
// Type encoding: v20@0:8B16
// Implementation: 0x1063c4f4c

// -[SCCompositeAdDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1063c4f54

@end
