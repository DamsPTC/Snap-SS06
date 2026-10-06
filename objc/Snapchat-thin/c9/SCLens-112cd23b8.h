// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLens
// Superclass: NSObject
// Address: 0x112cd23b8

@interface SCLens

// Property: isFetched; attributes: TB,R,N
// Property: isContentPathCached; attributes: TB,R,N
// Property: isMetadataFetched; attributes: TB,R,N
// Property: isBundleFetched; attributes: TB,R,N
// Property: contentPath; attributes: T@"NSString",R,N
// Property: shouldForceReload; attributes: TB,N
// Property: isDummyLens; attributes: TB,R,N
// Property: isOriginalLens; attributes: TB,R,N
// Property: isVideoChatOriginalLens; attributes: TB,R,N
// Property: isPreviewOriginalLens; attributes: TB,R,N
// Property: isAnyOriginalLens; attributes: TB,R,N
// Property: isReplyWithLensOriginalLens; attributes: TB,R,N
// Property: isFeedLens; attributes: TB,R,N
// Property: isEmptyStateFeedLens; attributes: TB,R,N
// Property: isDualCameraModeLens; attributes: TB,R,N
// Property: isLoadingPlaceholderLens; attributes: TB,R,N
// Property: isRemixLens; attributes: TB,R,N
// Property: isFavoritesOnboardingLens; attributes: TB,R,N
// Property: isUtilityLens; attributes: TB,R,N
// Property: isLoadingSpinnerLens; attributes: TB,R,N
// Property: isFavorite; attributes: TB,R,N
// Property: featureType; attributes: Tq,R,N
// Property: isConnectedLens; attributes: TB,R,N
// Property: isConnectedVideoLens; attributes: TB,R,N
// Property: is3DBitmojiVideoChatLens; attributes: TB,R,N
// Property: requiresRemoteService; attributes: TB,R,N
// Property: requiresLensCoreTracking; attributes: TB,R,N
// Property: supportsDepth; attributes: TB,R,N
// Property: isVoiceMLLens; attributes: TB,R,N
// Property: isShoppingLens; attributes: TB,R,N
// Property: isPostCaptureDynamicLens; attributes: TB,R,N
// Property: isPostCaptureAnimatedLens; attributes: TB,R,N
// Property: isPostCaptureRequiresTouchSupportLens; attributes: TB,R,N
// Property: isWorldLensInPostCapture; attributes: TB,R,N
// Property: isWatermarkLens; attributes: TB,R,N
// Property: isGenerativeAiLens; attributes: TB,R,N
// Property: usesDualCamera; attributes: TB,R,N
// Property: overridesCaptureButton; attributes: TB,R,N
// Property: usesPickerTextureProvider; attributes: TB,R,N
// Property: requiresBitmoji; attributes: TB,R,N
// Property: requiresFriendmoji; attributes: TB,R,N
// Property: canAppearInLensCarousel; attributes: TB,R,N
// Property: supportsCloudStorage; attributes: TB,R,N
// Property: usesLeaderboardModule; attributes: TB,R,N
// Property: usesImageQnA; attributes: TB,R,N
// Property: isWebLens; attributes: TB,R,N
// Property: isSpectaclesRT; attributes: TB,R,N
// Property: publicApiUserDataAccessLevel; attributes: Tq,R,N
// Property: requiresMySelfie; attributes: TB,R,N
// Property: twoPersonsAILens; attributes: TB,R,N
// Property: usesContentReadiness; attributes: TB,R,N
// Property: requiresGeodata; attributes: TB,R,N
// Property: requiresPostCaptureContinuousRendering; attributes: TB,R,N
// Property: needsDisclaimer; attributes: TB,R,N
// Property: usesInLensCapture; attributes: TB,R,N
// Property: shouldShowStudioDebugUI; attributes: TB,R,N
// Property: isFetchable; attributes: TB,R,N
// Property: isUnavailable; attributes: TB,R,N
// Property: isPublicPromptLens; attributes: TB,R,N
// Property: usesThirdPartyRemoteApis; attributes: TB,R,N
// Property: isTurnByTurnPromptLens; attributes: TB,R,N
// Property: isTurnBasedV2Lens; attributes: TB,R,N
// Property: lensId; attributes: T@"NSString",R,C,N,V_lensId
// Property: name; attributes: T@"NSString",R,C,N,V_name
// Property: code; attributes: T@"NSString",R,C,N,V_code
// Property: hintId; attributes: T@"NSString",R,C,N,V_hintId
// Property: hintTranslations; attributes: T@"NSDictionary",R,C,N,V_hintTranslations
// Property: iconURL; attributes: T@"NSString",R,C,N,V_iconURL
// Property: bitmojiComicId; attributes: T@"NSString",R,C,N,V_bitmojiComicId
// Property: resourceContainer; attributes: T@"SCLensResourceContainer",R,C,N,V_resourceContainer
// Property: expirationDate; attributes: T@"NSDate",R,C,N,V_expirationDate
// Property: type; attributes: Tq,R,N,V_type
// Property: section; attributes: Tq,R,N,V_section
// Property: categories; attributes: T@"NSArray",R,C,N,V_categories
// Property: isFeatured; attributes: TB,R,N,V_isFeatured
// Property: isSponsored; attributes: TB,R,N,V_isSponsored
// Property: sponsoredSlug; attributes: T@"SCLensSponsoredSlug",R,C,N,V_sponsoredSlug
// Property: sponsoredType; attributes: Tq,R,N,V_sponsoredType
// Property: scheduleIntervals; attributes: T@"NSArray",R,C,N,V_scheduleIntervals
// Property: isDemo; attributes: TB,R,N,V_isDemo
// Property: demoStartDate; attributes: T@"NSDate",R,C,N,V_demoStartDate
// Property: absoluteCarouselPosition; attributes: Tq,R,N,V_absoluteCarouselPosition
// Property: unlockableTrackInfo; attributes: T@"SCUnlockableTrackInfo",R,C,N,V_unlockableTrackInfo
// Property: manifest; attributes: T@"NSArray",R,C,N,V_manifest
// Property: apiLevel; attributes: TQ,R,N,V_apiLevel
// Property: isStudioPreview; attributes: TB,R,N,V_isStudioPreview
// Property: activationCameraPosition; attributes: Tq,R,N,V_activationCameraPosition
// Property: encryptedGeoData; attributes: T@"NSString",R,C,N,V_encryptedGeoData
// Property: unlockCompanionBackReferenceId; attributes: T@"NSString",R,C,N,V_unlockCompanionBackReferenceId
// Property: cameraContexts; attributes: T@"NSSet",R,C,N,V_cameraContexts
// Property: applicableContexts; attributes: T@"NSSet",R,C,N,V_applicableContexts
// Property: hasContextCards; attributes: TB,R,N,V_hasContextCards
// Property: onDemandTemplateId; attributes: T@"NSString",R,C,N,V_onDemandTemplateId
// Property: unlockablesAttachment; attributes: T@"SCUnlockablesAttachment",R,C,N,V_unlockablesAttachment
// Property: isRanked; attributes: TB,R,N,V_isRanked
// Property: priority; attributes: Tq,R,N,V_priority
// Property: lensDescriptors; attributes: T@"NSArray",R,C,N,V_lensDescriptors
// Property: communityLensData; attributes: T@"SCCommunityLensData",R,C,N,V_communityLensData
// Property: snappablesReplyType; attributes: Tq,R,N,V_snappablesReplyType
// Property: snappablesTaglineKey; attributes: T@"NSString",R,C,N,V_snappablesTaglineKey
// Property: snappablesPlayButtonGradientHexCodeColors; attributes: T@"NSArray",R,C,N,V_snappablesPlayButtonGradientHexCodeColors
// Property: isLeftCarousel; attributes: TB,R,N,V_isLeftCarousel
// Property: contextHint; attributes: T@"NSString",R,C,N,V_contextHint
// Property: isCommunity; attributes: TB,R,N,V_isCommunity
// Property: checksum; attributes: T@"NSData",R,C,N,V_checksum
// Property: namespaceId; attributes: T@"NSString",R,C,N,V_namespaceId
// Property: lensCollectionId; attributes: T@"NSString",R,C,N,V_lensCollectionId
// Property: carouselGroup; attributes: T@"SCUnlockablesCarouselGroup",R,C,N,V_carouselGroup
// Property: carouselGlobalScoreList; attributes: T@"NSArray",R,C,N,V_carouselGlobalScoreList
// Property: unlockableSnapInfo; attributes: T@"NSString",R,C,N,V_unlockableSnapInfo
// Property: connectedLensInfo; attributes: T@"SCConnectedLensInfo",R,C,N,V_connectedLensInfo
// Property: musicTrackMetadata; attributes: T@"NSArray",R,C,N,V_musicTrackMetadata
// Property: shoppingLensMetadata; attributes: T@"NSData",R,C,N,V_shoppingLensMetadata
// Property: remoteApiInfo; attributes: T@"SCRemoteApiInfo",R,C,N,V_remoteApiInfo
// Property: customizationInfo; attributes: T@"SCLensCustomizationMetadata",R,C,N,V_customizationInfo
// Property: adRenderDataBytes; attributes: T@"NSData",R,C,N,V_adRenderDataBytes
// Property: prefetchContexts; attributes: T@"NSSet",R,C,N,V_prefetchContexts
// Property: targetingCampaignId; attributes: T@"NSString",R,C,N,V_targetingCampaignId
// Property: lensExtensions; attributes: T@"NSDictionary",R,C,N,V_lensExtensions
// Property: isSnapchatPlusExclusive; attributes: TB,R,N,V_isSnapchatPlusExclusive
// Property: lensPreview; attributes: T@"SCLensPreview",R,C,N,V_lensPreview
// Property: primaryCategory; attributes: T@"NSString",R,C,N,V_primaryCategory
// Property: lensMiscData; attributes: T@"SCLensMiscData",R,C,N,V_lensMiscData
// Property: lensPlusTierConfig; attributes: T@"SCLensPlusTierConfig",R,C,N,V_lensPlusTierConfig

// -[SCLens isNewUserWelcomeLensWithLensUser:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b732bfc

// -[SCLens shouldPrefetchForInactiveLensUserWithLensUser:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b732c54

// -[SCLens contentIconKey]
// Type encoding: @16@0:8
// Implementation: 0x100801b3c

// -[SCLens isPublicPromptLens]
// Type encoding: B16@0:8
// Implementation: 0x10b732044

// -[SCLens isTurnByTurnPromptLens]
// Type encoding: B16@0:8
// Implementation: 0x10b732120

// -[SCLens isTurnBasedV2Lens]
// Type encoding: B16@0:8
// Implementation: 0x10b7321fc

// -[SCLens usesThirdPartyRemoteApis]
// Type encoding: B16@0:8
// Implementation: 0x10b7322d8

// -[SCLens isGeoLens]
// Type encoding: B16@0:8
// Implementation: 0x10b731ff4

// -[SCLens isUnavailable]
// Type encoding: B16@0:8
// Implementation: 0x100801f04

// -[SCLens isFetchable]
// Type encoding: B16@0:8
// Implementation: 0x10b731f7c

// -[SCLens lensExplorerCategoryId]
// Type encoding: @16@0:8
// Implementation: 0x10b731d98

// -[SCLens lensSourcePageSessionId]
// Type encoding: @16@0:8
// Implementation: 0x10b731e3c

// -[SCLens pickedLensSource]
// Type encoding: q16@0:8
// Implementation: 0x10b731ee0

// -[SCLens isConnectedLens]
// Type encoding: B16@0:8
// Implementation: 0x10b730eb0

// -[SCLens isConnectedVideoLens]
// Type encoding: B16@0:8
// Implementation: 0x10b730f18

// -[SCLens isSpectaclesRT]
// Type encoding: B16@0:8
// Implementation: 0x10b731058

// -[SCLens is3DBitmojiVideoChatLens]
// Type encoding: B16@0:8
// Implementation: 0x100801d20

// -[SCLens requiresRemoteService]
// Type encoding: B16@0:8
// Implementation: 0x10b7310a0

// -[SCLens requiresLensCoreTracking]
// Type encoding: B16@0:8
// Implementation: 0x10b73110c

// -[SCLens supportsDepth]
// Type encoding: B16@0:8
// Implementation: 0x10b731124

// -[SCLens isVoiceMLLens]
// Type encoding: B16@0:8
// Implementation: 0x10b73118c

// -[SCLens isShoppingLens]
// Type encoding: B16@0:8
// Implementation: 0x10b7311f4

// -[SCLens isPostCaptureDynamicLens]
// Type encoding: B16@0:8
// Implementation: 0x10b73125c

// -[SCLens isPostCaptureRequiresTouchSupportLens]
// Type encoding: B16@0:8
// Implementation: 0x10b7312c4

// -[SCLens isPostCaptureAnimatedLens]
// Type encoding: B16@0:8
// Implementation: 0x10b73132c

// -[SCLens isWorldLensInPostCapture]
// Type encoding: B16@0:8
// Implementation: 0x10b731394

// -[SCLens isWatermarkLens]
// Type encoding: B16@0:8
// Implementation: 0x10b731438

// -[SCLens isGenerativeAiLens]
// Type encoding: B16@0:8
// Implementation: 0x10b7314a0

// -[SCLens usesDualCamera]
// Type encoding: B16@0:8
// Implementation: 0x10b731508

// -[SCLens overridesCaptureButton]
// Type encoding: B16@0:8
// Implementation: 0x10b731570

// -[SCLens usesPickerTextureProvider]
// Type encoding: B16@0:8
// Implementation: 0x10b7315d8

// -[SCLens usesLeaderboardModule]
// Type encoding: B16@0:8
// Implementation: 0x10b731640

// -[SCLens usesImageQnA]
// Type encoding: B16@0:8
// Implementation: 0x10b7316a8

// -[SCLens requiresBitmoji]
// Type encoding: B16@0:8
// Implementation: 0x10b731710

// -[SCLens requiresFriendmoji]
// Type encoding: B16@0:8
// Implementation: 0x10b731778

// -[SCLens canAppearInLensCarousel]
// Type encoding: B16@0:8
// Implementation: 0x10b7317e0

// -[SCLens supportsCloudStorage]
// Type encoding: B16@0:8
// Implementation: 0x10b7318e4

// -[SCLens isWebLens]
// Type encoding: B16@0:8
// Implementation: 0x10b73194c

// -[SCLens publicApiUserDataAccessLevel]
// Type encoding: q16@0:8
// Implementation: 0x10b7319b4

// -[SCLens requiresMySelfie]
// Type encoding: B16@0:8
// Implementation: 0x10b731a10

// -[SCLens twoPersonsAILens]
// Type encoding: B16@0:8
// Implementation: 0x10b731a78

// -[SCLens usesContentReadiness]
// Type encoding: B16@0:8
// Implementation: 0x10b731ae0

// -[SCLens requiresGeodata]
// Type encoding: B16@0:8
// Implementation: 0x10b731b48

// -[SCLens requiresPostCaptureContinuousRendering]
// Type encoding: B16@0:8
// Implementation: 0x10b731bb0

// -[SCLens offscreenSyncModeEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10b731be8

// -[SCLens needsDisclaimer]
// Type encoding: B16@0:8
// Implementation: 0x10b731c50

// -[SCLens usesInLensCapture]
// Type encoding: B16@0:8
// Implementation: 0x10b731c94

// -[SCLens shouldShowStudioDebugUI]
// Type encoding: B16@0:8
// Implementation: 0x10b731cfc

// -[SCLens _suppressesStudioDebugUI]
// Type encoding: B16@0:8
// Implementation: 0x10b731d2c

// -[SCLens lensByApplyingUITestStubOverrides:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b730954

// -[SCLens featureType]
// Type encoding: q16@0:8
// Implementation: 0x10b7308a4

// -[SCLens isFavorite]
// Type encoding: B16@0:8
// Implementation: 0x10b730888

// -[SCLens isDummyLens]
// Type encoding: B16@0:8
// Implementation: 0x100801d78

// -[SCLens isOriginalLens]
// Type encoding: B16@0:8
// Implementation: 0x100801c68

// -[SCLens isVideoChatOriginalLens]
// Type encoding: B16@0:8
// Implementation: 0x100801cc4

// -[SCLens isPreviewOriginalLens]
// Type encoding: B16@0:8
// Implementation: 0x10b7304b4

// -[SCLens isAnyOriginalLens]
// Type encoding: B16@0:8
// Implementation: 0x10b730500

// -[SCLens isReplyWithLensOriginalLens]
// Type encoding: B16@0:8
// Implementation: 0x10b73054c

// -[SCLens isFeedLens]
// Type encoding: B16@0:8
// Implementation: 0x10b730590

// -[SCLens isEmptyStateFeedLens]
// Type encoding: B16@0:8
// Implementation: 0x10b7305dc

// -[SCLens isDualCameraModeLens]
// Type encoding: B16@0:8
// Implementation: 0x10b730620

// -[SCLens isLoadingPlaceholderLens]
// Type encoding: B16@0:8
// Implementation: 0x10b73066c

// -[SCLens isLoadingSpinnerLens]
// Type encoding: B16@0:8
// Implementation: 0x10b7306b0

// -[SCLens isRemixLens]
// Type encoding: B16@0:8
// Implementation: 0x10b7306fc

// -[SCLens isFavoritesOnboardingLens]
// Type encoding: B16@0:8
// Implementation: 0x10b730740

// -[SCLens isUtilityLens]
// Type encoding: B16@0:8
// Implementation: 0x10b730784

// -[SCLens setShouldForceReload:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b728d40

// -[SCLens shouldForceReload]
// Type encoding: B16@0:8
// Implementation: 0x10b728dbc

// -[SCLens isBundleFetched]
// Type encoding: B16@0:8
// Implementation: 0x10b727e94

// -[SCLens isFetched]
// Type encoding: B16@0:8
// Implementation: 0x10b727eec

// -[SCLens isContentPathCached]
// Type encoding: B16@0:8
// Implementation: 0x10b727f34

// -[SCLens isMetadataFetched]
// Type encoding: B16@0:8
// Implementation: 0x10b727f68

// -[SCLens areAllRequiredAssetsFetched]
// Type encoding: B16@0:8
// Implementation: 0x10b728048

// -[SCLens areExternalDataFetched]
// Type encoding: B16@0:8
// Implementation: 0x10b728298

// -[SCLens contentPath]
// Type encoding: @16@0:8
// Implementation: 0x10b72837c

// -[SCLens _contentPath]
// Type encoding: @16@0:8
// Implementation: 0x10b7284e8

// -[SCLens _contentCacheKeysArray]
// Type encoding: @16@0:8
// Implementation: 0x10b728690

// -[SCLens contentCacheKey]
// Type encoding: @16@0:8
// Implementation: 0x10b72882c

// -[SCLens backfilledWithUnlockInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b0b61e4

// -[SCLens extraLensPushedDate]
// Type encoding: @16@0:8
// Implementation: 0x108c9f89c

// -[SCLens sponsoredUnlockableType]
// Type encoding: q16@0:8
// Implementation: 0x10844c5fc

// -[SCLens sponsoredLensAdId]
// Type encoding: @16@0:8
// Implementation: 0x10844c61c

// -[SCLens adjustDevicePositionWithCameraAPI:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105ff5f1c

// -[SCLens lensByUpdatingSearchPageSessionId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105e8e7fc

// -[SCLens isFromMixer]
// Type encoding: B16@0:8
// Implementation: 0x103f7c4b0

// -[SCLens getSponsoredLensExtension]
// Type encoding: @16@0:8
// Implementation: 0x103e19704

// -[SCLens initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b7ab54c

// -[SCLens initWithLensId:name:code:hintId:hintTranslations:iconURL:bitmojiComicId:resourceContainer:expirationDate:type:section:categories:isFeatured:isSponsored:sponsoredSlug:sponsoredType:scheduleIntervals:isDemo:demoStartDate:absoluteCarouselPosition:unlockableTrackInfo:manifest:apiLevel:isStudioPreview:activationCameraPosition:encryptedGeoData:unlockCompanionBackReferenceId:cameraContexts:applicableContexts:hasContextCards:onDemandTemplateId:unlockablesAttachment:isRanked:priority:lensDescriptors:communityLensData:snappablesReplyType:snappablesTaglineKey:snappablesPlayButtonGradientHexCodeColors:isLeftCarousel:contextHint:isCommunity:checksum:namespaceId:lensCollectionId:carouselGroup:carouselGlobalScoreList:unlockableSnapInfo:connectedLensInfo:musicTrackMetadata:shoppingLensMetadata:remoteApiInfo:customizationInfo:adRenderDataBytes:prefetchContexts:targetingCampaignId:lensExtensions:isSnapchatPlusExclusive:lensPreview:primaryCategory:lensMiscData:lensPlusTierConfig:]
// Type encoding: @476@0:8@16@24@32@40@48@56@64@72@80q88q96@104B112B116@120q128@136B144@148q156@164@172Q180B188q192@200@208@216@224B232@236@244B252q256@264@272q280@288@296B304@308B316@320@328@336@344@352@360@368@376@384@392@400@408@416@424@432B440@444@452@460@468
// Implementation: 0x100800e00

// -[SCLens copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b7abe08

// -[SCLens encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7abe2c

// -[SCLens hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b7ac33c

// -[SCLens isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b7ac628

// -[SCLens lensId]
// Type encoding: @16@0:8
// Implementation: 0x100801c60

// -[SCLens name]
// Type encoding: @16@0:8
// Implementation: 0x10b7acbe8

// -[SCLens code]
// Type encoding: @16@0:8
// Implementation: 0x100801b34

// -[SCLens hintId]
// Type encoding: @16@0:8
// Implementation: 0x10b7acbf0

// -[SCLens hintTranslations]
// Type encoding: @16@0:8
// Implementation: 0x10b7acbf8

// -[SCLens iconURL]
// Type encoding: @16@0:8
// Implementation: 0x100801b2c

// -[SCLens bitmojiComicId]
// Type encoding: @16@0:8
// Implementation: 0x10b7acc00

// -[SCLens resourceContainer]
// Type encoding: @16@0:8
// Implementation: 0x1008028b8

// -[SCLens expirationDate]
// Type encoding: @16@0:8
// Implementation: 0x10b7acc08

// -[SCLens type]
// Type encoding: q16@0:8
// Implementation: 0x100801d70

// -[SCLens section]
// Type encoding: q16@0:8
// Implementation: 0x10b7acc10

// -[SCLens categories]
// Type encoding: @16@0:8
// Implementation: 0x10b7acc18

// -[SCLens isFeatured]
// Type encoding: B16@0:8
// Implementation: 0x10b7acc20

// -[SCLens isSponsored]
// Type encoding: B16@0:8
// Implementation: 0x10b7acc28

// -[SCLens sponsoredSlug]
// Type encoding: @16@0:8
// Implementation: 0x10b7acc30

// -[SCLens sponsoredType]
// Type encoding: q16@0:8
// Implementation: 0x10b7acc38

// -[SCLens scheduleIntervals]
// Type encoding: @16@0:8
// Implementation: 0x10b7acc40

// -[SCLens isDemo]
// Type encoding: B16@0:8
// Implementation: 0x10b7acc48

// -[SCLens demoStartDate]
// Type encoding: @16@0:8
// Implementation: 0x10b7acc50

// -[SCLens absoluteCarouselPosition]
// Type encoding: q16@0:8
// Implementation: 0x10b7acc58

// -[SCLens unlockableTrackInfo]
// Type encoding: @16@0:8
// Implementation: 0x10b7acc60

// -[SCLens manifest]
// Type encoding: @16@0:8
// Implementation: 0x10b7acc68

// -[SCLens apiLevel]
// Type encoding: Q16@0:8
// Implementation: 0x10b7acc70

// -[SCLens isStudioPreview]
// Type encoding: B16@0:8
// Implementation: 0x10b7acc78

// -[SCLens activationCameraPosition]
// Type encoding: q16@0:8
// Implementation: 0x10b7acc80

// -[SCLens encryptedGeoData]
// Type encoding: @16@0:8
// Implementation: 0x10b7acc88

// -[SCLens unlockCompanionBackReferenceId]
// Type encoding: @16@0:8
// Implementation: 0x10b7acc90

// -[SCLens cameraContexts]
// Type encoding: @16@0:8
// Implementation: 0x100c400dc

// -[SCLens applicableContexts]
// Type encoding: @16@0:8
// Implementation: 0x100c3f0cc

// -[SCLens hasContextCards]
// Type encoding: B16@0:8
// Implementation: 0x10b7acc98

// -[SCLens onDemandTemplateId]
// Type encoding: @16@0:8
// Implementation: 0x10b7acca0

// -[SCLens unlockablesAttachment]
// Type encoding: @16@0:8
// Implementation: 0x10b7acca8

// -[SCLens isRanked]
// Type encoding: B16@0:8
// Implementation: 0x10b7accb0

// -[SCLens priority]
// Type encoding: q16@0:8
// Implementation: 0x10b7accb8

// -[SCLens lensDescriptors]
// Type encoding: @16@0:8
// Implementation: 0x10b7accc0

// -[SCLens communityLensData]
// Type encoding: @16@0:8
// Implementation: 0x10b7accc8

// -[SCLens snappablesReplyType]
// Type encoding: q16@0:8
// Implementation: 0x10b7accd0

// -[SCLens snappablesTaglineKey]
// Type encoding: @16@0:8
// Implementation: 0x10b7accd8

// -[SCLens snappablesPlayButtonGradientHexCodeColors]
// Type encoding: @16@0:8
// Implementation: 0x10b7acce0

// -[SCLens isLeftCarousel]
// Type encoding: B16@0:8
// Implementation: 0x10b7acce8

// -[SCLens contextHint]
// Type encoding: @16@0:8
// Implementation: 0x10b7accf0

// -[SCLens isCommunity]
// Type encoding: B16@0:8
// Implementation: 0x10b7accf8

// -[SCLens checksum]
// Type encoding: @16@0:8
// Implementation: 0x10b7acd00

// -[SCLens namespaceId]
// Type encoding: @16@0:8
// Implementation: 0x100801d68

// -[SCLens lensCollectionId]
// Type encoding: @16@0:8
// Implementation: 0x10b7acd08

// -[SCLens carouselGroup]
// Type encoding: @16@0:8
// Implementation: 0x10b7acd10

// -[SCLens carouselGlobalScoreList]
// Type encoding: @16@0:8
// Implementation: 0x10b7acd18

// -[SCLens unlockableSnapInfo]
// Type encoding: @16@0:8
// Implementation: 0x10b7acd20

// -[SCLens connectedLensInfo]
// Type encoding: @16@0:8
// Implementation: 0x10b7acd28

// -[SCLens musicTrackMetadata]
// Type encoding: @16@0:8
// Implementation: 0x10b7acd30

// -[SCLens shoppingLensMetadata]
// Type encoding: @16@0:8
// Implementation: 0x10b7acd38

// -[SCLens remoteApiInfo]
// Type encoding: @16@0:8
// Implementation: 0x10b7acd40

// -[SCLens customizationInfo]
// Type encoding: @16@0:8
// Implementation: 0x10b7acd48

// -[SCLens adRenderDataBytes]
// Type encoding: @16@0:8
// Implementation: 0x10b7acd50

// -[SCLens prefetchContexts]
// Type encoding: @16@0:8
// Implementation: 0x10b7acd58

// -[SCLens targetingCampaignId]
// Type encoding: @16@0:8
// Implementation: 0x10b7acd60

// -[SCLens lensExtensions]
// Type encoding: @16@0:8
// Implementation: 0x10b7acd68

// -[SCLens isSnapchatPlusExclusive]
// Type encoding: B16@0:8
// Implementation: 0x10b7acd70

// -[SCLens lensPreview]
// Type encoding: @16@0:8
// Implementation: 0x10b7acd78

// -[SCLens primaryCategory]
// Type encoding: @16@0:8
// Implementation: 0x10b7acd80

// -[SCLens lensMiscData]
// Type encoding: @16@0:8
// Implementation: 0x10b7acd88

// -[SCLens lensPlusTierConfig]
// Type encoding: @16@0:8
// Implementation: 0x10b7acd90

// -[SCLens .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b7acd98

// +[SCLens placeholderUnlockedLensWithLensId:iconUrl:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b7327a8

// +[SCLens placeholderUnlockedLensWithLensId:iconUrl:lensName:creatorName:rankingId:rankingData:isSnapchatPlusExclusive:lensExtensions:]
// Type encoding: @76@0:8@16@24@32@40@48@56B64@68
// Implementation: 0x10b7329d4

// +[SCLens lensIdsStringFromLensArray:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b7308bc

// +[SCLens isFeedLensId:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b7307a0

// +[SCLens isDualCameraModeLensId:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b730858

// +[SCLens isDummyLensId:type:]
// Type encoding: B32@0:8@16q24
// Implementation: 0x100801ddc

// +[SCLens isOriginalLensId:]
// Type encoding: B24@0:8@16
// Implementation: 0x100801cb4

// +[SCLens isLoadingSpinnerLensId:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b730868

// +[SCLens isVideoChatOriginalLensId:]
// Type encoding: B24@0:8@16
// Implementation: 0x100801d10

// +[SCLens isPreviewOriginalLensId:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b730878

// +[SCLens isAnyOriginalLensId:]
// Type encoding: B24@0:8@16
// Implementation: 0x100801e98

// +[SCLens _isDummyLensType:]
// Type encoding: B24@0:8q16
// Implementation: 0x100801e88

// +[SCLens cacheContentPath:forLens:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b728380

// +[SCLens externalDataFetchedForLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b72844c

// +[SCLens cacheRequiredAssetPath:forLensAsset:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b728924

// +[SCLens _cacheKeyForLensAsset:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b728a00

// +[SCLens requiredAssetsPathsWithAssets:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b728ad0

// +[SCLens resetContentPathCache]
// Type encoding: v16@0:8
// Implementation: 0x10b728ca4

// +[SCLens resetRequiredAssetCache]
// Type encoding: v16@0:8
// Implementation: 0x10b728cd8

// +[SCLens resetExternalDataCache]
// Type encoding: v16@0:8
// Implementation: 0x10b728d0c

// +[SCLens initialize]
// Type encoding: v16@0:8
// Implementation: 0x100800d28

// +[SCLens studioLensMetadataFromContentPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c9f69c

// +[SCLens lensSourceFromApplicableContext:]
// Type encoding: q24@0:8@16
// Implementation: 0x10844c3d0

// +[SCLens lensTypeFromLensType:]
// Type encoding: q24@0:8q16
// Implementation: 0x10844c5d8

@end
