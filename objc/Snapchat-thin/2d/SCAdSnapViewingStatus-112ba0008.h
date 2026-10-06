// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdSnapViewingStatus
// Superclass: NSObject
// Address: 0x112ba0008

@interface SCAdSnapViewingStatus

// Property: currentTopSnapStartTimestamp; attributes: Td,N,V_currentTopSnapStartTimestamp
// Property: audioQuadrantStateForCurrentSession; attributes: T@"NSMutableArray",&,N,V_audioQuadrantStateForCurrentSession
// Property: adKey; attributes: T@"NSString",R,C,N
// Property: adType; attributes: Tq,R,N
// Property: snapIndex; attributes: Tq,R,N
// Property: skipEvent; attributes: T@"NSString",R,C,N
// Property: exitEventSwipeInfo; attributes: T@"SCAdExitEventSwipeInfo",R,N
// Property: swipeCount; attributes: TQ,R,N
// Property: isAudioOn; attributes: TB,R,N
// Property: audioQuadrantStates; attributes: T@"NSArray",R,C,N
// Property: maxMediaVolumeForMediaPlayback; attributes: T@"NSArray",R,C,N
// Property: topSnapMediaDurationMillis; attributes: Tq,R,N
// Property: topSnapTimeViewedMillis; attributes: Tq,R,N
// Property: topSnapCappedMaxViewDurationMillis; attributes: Tq,R,N
// Property: topSnapUnCappedMaxViewDurationMillis; attributes: Tq,R,N
// Property: topSnapReportedMaxViewDurationMillis; attributes: Tq,R,N
// Property: longformMaxViewedDurationInMillis; attributes: Td,R,N
// Property: longformMediaDurationMillis; attributes: Tq,R,N
// Property: longformReportedMaxViewDurationMillis; attributes: Tq,R,N
// Property: preferredWidthDp; attributes: T@"NSNumber",R,N,V_preferredWidthDp
// Property: preferredHeightDp; attributes: T@"NSNumber",R,N,V_preferredHeightDp
// Property: preferredImageSizeDp; attributes: T@"NSNumber",R,N,V_preferredImageSizeDp
// Property: webViewTrackInfo; attributes: T@"SCAdWebViewTrackInfo",R,N
// Property: loadedOnEntry; attributes: TB,R,N
// Property: loadedOnExit; attributes: TB,R,N
// Property: visiblePageLoadTimeSeconds; attributes: Td,R,N
// Property: deepLinkFromCardCount; attributes: Tq,R,N
// Property: deepLinkFallBackToWebview; attributes: TB,R,N
// Property: deepLinkFallBackToAppStoreCount; attributes: Tq,R,N
// Property: deepLinkFallBackToDefaultBrowser; attributes: TB,R,N
// Property: deepLinkURI; attributes: T@"NSString",R,C,N
// Property: didCall; attributes: TB,R,N
// Property: didMessage; attributes: TB,R,N
// Property: submittedLead; attributes: T@"SCAdLeadGenerationTrackSubmittedLead",R,N
// Property: formInteraction; attributes: T@"NSData",R,C,N
// Property: collectionItemInteractions; attributes: T@"NSArray",R,C,N
// Property: totalCollectionItemInteractions; attributes: T@"NSArray",R,C,N
// Property: deltaInMillis; attributes: Tq,R,N
// Property: adFirstRenderTimestamp; attributes: Td,R,N
// Property: wasBoosted; attributes: TB,R,N
// Property: dpaMetadata; attributes: T@"SCAdComposerDpaMetadata",R,N
// Property: gestureParameters; attributes: T@"SCAdSnapViewLogDetailedGestureParameters",R,N
// Property: appInActivityTriggeredTimestampMsArray; attributes: T@"NSArray",R,C,N
// Property: customProductPageEnabled; attributes: TB,R,N
// Property: surveyAnswer; attributes: T@"SCAdSurveyAnswerValue",R,N
// Property: stickerInfo; attributes: T@"SCAdStickerInfoTrackInfo",R,N
// Property: stickerMetadataArray; attributes: T@"NSArray",R,C,N
// Property: adSurveyResponse; attributes: Tq,R,N
// Property: reminderLocalBannerTapCount; attributes: TQ,R,N
// Property: reminderCountdownId; attributes: T@"NSString",R,C,N
// Property: reminderScheduledCount; attributes: TQ,R,N
// Property: wakeUpUiTapsFromTopsnap; attributes: TQ,R,N
// Property: wakeUpUiTapsFromCard; attributes: TQ,R,N
// Property: adShareOpen; attributes: TB,R,N
// Property: adShareSend; attributes: TB,R,N
// Property: adSubscribed; attributes: TB,R,N
// Property: adSubscribeButtonTappedTimestampMsArray; attributes: T@"NSArray",R,C,N
// Property: initialAdSubscribed; attributes: TB,R,N
// Property: adFavorited; attributes: TB,R,N
// Property: adFavoriteButtonTappedTimestampMsArray; attributes: T@"NSArray",R,C,N
// Property: adFavoriteTapSource; attributes: Tq,R,N
// Property: initialAdFavorited; attributes: T@"NSNumber",R,N
// Property: initialAdReposted; attributes: T@"NSNumber",R,N
// Property: adReposted; attributes: T@"NSNumber",R,N
// Property: adRepostButtonTappedTimestampMsArray; attributes: T@"NSArray",R,C,N
// Property: endCardInteractionInfo; attributes: T@"SCAdEndCardInteractionInfo",R,N,V_endCardInteractionInfo
// Property: swipeUpAttempts; attributes: TQ,R,N,V_swipeUpAttempts
// Property: allSwipeAttempts; attributes: TQ,R,N,V_allSwipeAttempts
// Property: contextMenuOpen; attributes: TB,R,N
// Property: skOverlayTrackInfo; attributes: T@"SCAdSKOverlayTrackInfo",R,N
// Property: arShoppingExperienceTrack; attributes: T@"SCAdArShoppingExperienceTrack",R,N
// Property: pollStickerTrackInfo; attributes: T@"SCAdPollStickerTrackInfo",R,N
// Property: clickInteractionsArray; attributes: T@"NSArray",R,C,N
// Property: tapToPauseInteractionsArray; attributes: T@"NSArray",R,C,N
// Property: didExpandAdAtIndex; attributes: T@"NSNumber",&,N,V_didExpandAdAtIndex
// Property: canShowMultiSegmentExperience; attributes: TB,R,N
// Property: valdiAdTrackEventWrappers; attributes: T@"NSArray",R,C,N
// Property: pharmaTrackInfo; attributes: T@"SCAdPharmaTrackInfo",R,N

// -[SCAdSnapViewingStatus initWithAdType:adKey:snapIndex:topSnapMediaDurationInMillis:responseReceiveTimeInMillis:longformMediaDurationInMillis:preferredWidthDp:preferredHeightDp:preferredImageSizeDp:]
// Type encoding: @88@0:8q16@24q32q40d48q56@64@72@80
// Implementation: 0x10849c460

// -[SCAdSnapViewingStatus updateWithTopSnapMediaDurationInMillis:longformMediaDurationInMillis:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x10849c604

// -[SCAdSnapViewingStatus deltaInMillis]
// Type encoding: q16@0:8
// Implementation: 0x10849c628

// -[SCAdSnapViewingStatus adFirstRenderTimestamp]
// Type encoding: d16@0:8
// Implementation: 0x10849c630

// -[SCAdSnapViewingStatus snapIndex]
// Type encoding: q16@0:8
// Implementation: 0x10849c638

// -[SCAdSnapViewingStatus adKey]
// Type encoding: @16@0:8
// Implementation: 0x10849c640

// -[SCAdSnapViewingStatus adType]
// Type encoding: q16@0:8
// Implementation: 0x10849c668

// -[SCAdSnapViewingStatus skipEvent]
// Type encoding: @16@0:8
// Implementation: 0x10849c670

// -[SCAdSnapViewingStatus exitEventSwipeInfo]
// Type encoding: @16@0:8
// Implementation: 0x10849c698

// -[SCAdSnapViewingStatus swipeCount]
// Type encoding: Q16@0:8
// Implementation: 0x10849c6c0

// -[SCAdSnapViewingStatus isAudioOn]
// Type encoding: B16@0:8
// Implementation: 0x10849c6c8

// -[SCAdSnapViewingStatus audioQuadrantStates]
// Type encoding: @16@0:8
// Implementation: 0x10849c7c8

// -[SCAdSnapViewingStatus maxMediaVolumeForMediaPlayback]
// Type encoding: @16@0:8
// Implementation: 0x10849c7e0

// -[SCAdSnapViewingStatus topSnapMediaDurationMillis]
// Type encoding: q16@0:8
// Implementation: 0x10849c808

// -[SCAdSnapViewingStatus topSnapTimeViewedMillis]
// Type encoding: q16@0:8
// Implementation: 0x10849c810

// -[SCAdSnapViewingStatus topSnapCappedMaxViewDurationMillis]
// Type encoding: q16@0:8
// Implementation: 0x10849c828

// -[SCAdSnapViewingStatus topSnapUnCappedMaxViewDurationMillis]
// Type encoding: q16@0:8
// Implementation: 0x10849c830

// -[SCAdSnapViewingStatus topSnapReportedMaxViewDurationMillis]
// Type encoding: q16@0:8
// Implementation: 0x10849c838

// -[SCAdSnapViewingStatus longformMaxViewedDurationInMillis]
// Type encoding: d16@0:8
// Implementation: 0x10849c840

// -[SCAdSnapViewingStatus longformMediaDurationMillis]
// Type encoding: q16@0:8
// Implementation: 0x10849c848

// -[SCAdSnapViewingStatus longformReportedMaxViewDurationMillis]
// Type encoding: q16@0:8
// Implementation: 0x10849c850

// -[SCAdSnapViewingStatus adoptWebViewTrackInfo:collectionItemIndex:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10849c858

// -[SCAdSnapViewingStatus webViewTrackInfo]
// Type encoding: @16@0:8
// Implementation: 0x10849c8d0

// -[SCAdSnapViewingStatus loadedOnEntry]
// Type encoding: B16@0:8
// Implementation: 0x10849c8d8

// -[SCAdSnapViewingStatus loadedOnExit]
// Type encoding: B16@0:8
// Implementation: 0x10849c8e0

// -[SCAdSnapViewingStatus visiblePageLoadTimeSeconds]
// Type encoding: d16@0:8
// Implementation: 0x10849c8e8

// -[SCAdSnapViewingStatus deepLinkFromCardCount]
// Type encoding: q16@0:8
// Implementation: 0x10849c8f0

// -[SCAdSnapViewingStatus deepLinkFallBackToWebview]
// Type encoding: B16@0:8
// Implementation: 0x10849c8f8

// -[SCAdSnapViewingStatus deepLinkFallBackToDefaultBrowser]
// Type encoding: B16@0:8
// Implementation: 0x10849c900

// -[SCAdSnapViewingStatus deepLinkFallBackToAppStoreCount]
// Type encoding: q16@0:8
// Implementation: 0x10849c908

// -[SCAdSnapViewingStatus deepLinkURI]
// Type encoding: @16@0:8
// Implementation: 0x10849c910

// -[SCAdSnapViewingStatus collectionItemInteractions]
// Type encoding: @16@0:8
// Implementation: 0x10849c938

// -[SCAdSnapViewingStatus totalCollectionItemInteractions]
// Type encoding: @16@0:8
// Implementation: 0x10849c940

// -[SCAdSnapViewingStatus _itemInteractionsWithInteractions:]
// Type encoding: @24@0:8@16
// Implementation: 0x10849c948

// -[SCAdSnapViewingStatus _updateInteractionRecordWithWebViewInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x10849cad0

// -[SCAdSnapViewingStatus wasBoosted]
// Type encoding: B16@0:8
// Implementation: 0x10849cc7c

// -[SCAdSnapViewingStatus didCall]
// Type encoding: B16@0:8
// Implementation: 0x10849cc84

// -[SCAdSnapViewingStatus didMessage]
// Type encoding: B16@0:8
// Implementation: 0x10849cc8c

// -[SCAdSnapViewingStatus arShoppingExperienceTrack]
// Type encoding: @16@0:8
// Implementation: 0x10849cc94

// -[SCAdSnapViewingStatus adShowOnTopSnap:onBottomSnap:currentMediaVolumePercent:]
// Type encoding: v32@0:8B16B20d24
// Implementation: 0x10849cd40

// -[SCAdSnapViewingStatus adHideWithSkipEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10849cdc8

// -[SCAdSnapViewingStatus adSnapHideOnTopSnap:skipEvent:exitEventSwipeInfo:dismissDuration:]
// Type encoding: v44@0:8B16@20@28d36
// Implementation: 0x10849cdf8

// -[SCAdSnapViewingStatus swipedFromTopSnap:exitEvent:currentMediaVolumePercent:]
// Type encoding: v36@0:8B16@20d28
// Implementation: 0x10849ce84

// -[SCAdSnapViewingStatus didReceiveWebViewContext:collectionItemIndex:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10849cf20

// -[SCAdSnapViewingStatus onWebBrowserSessionEvent:collectionItemIndex:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10849cf98

// -[SCAdSnapViewingStatus onAudibilityChange:]
// Type encoding: v24@0:8d16
// Implementation: 0x10849d010

// -[SCAdSnapViewingStatus obstructedOnTopSnap:]
// Type encoding: v20@0:8B16
// Implementation: 0x10849d0fc

// -[SCAdSnapViewingStatus unobstructedOnTopSnap:currentMediaVolumePercent:]
// Type encoding: v28@0:8B16d20
// Implementation: 0x10849d10c

// -[SCAdSnapViewingStatus adLongPressed]
// Type encoding: v16@0:8
// Implementation: 0x10849d11c

// -[SCAdSnapViewingStatus adScreenshotTaken]
// Type encoding: v16@0:8
// Implementation: 0x10849d120

// -[SCAdSnapViewingStatus adBoosted:]
// Type encoding: v20@0:8B16
// Implementation: 0x10849d124

// -[SCAdSnapViewingStatus resetForIntermediateTracking]
// Type encoding: v16@0:8
// Implementation: 0x10849d12c

// -[SCAdSnapViewingStatus resetForExitTracking]
// Type encoding: v16@0:8
// Implementation: 0x10849d16c

// -[SCAdSnapViewingStatus skOverlayTrackInfo]
// Type encoding: @16@0:8
// Implementation: 0x10849d170

// -[SCAdSnapViewingStatus customProductPageEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10849d198

// -[SCAdSnapViewingStatus setTopSnapMediaDurationMillis:topSnapReportedViewDurationMillis:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x10849d1a0

// -[SCAdSnapViewingStatus swipeUpToCard]
// Type encoding: v16@0:8
// Implementation: 0x10849d1c0

// -[SCAdSnapViewingStatus swipeUpAttempt]
// Type encoding: v16@0:8
// Implementation: 0x10849d1d0

// -[SCAdSnapViewingStatus anySwipeAttempt]
// Type encoding: v16@0:8
// Implementation: 0x10849d1e0

// -[SCAdSnapViewingStatus dpaMetadata]
// Type encoding: @16@0:8
// Implementation: 0x10849d1f0

// -[SCAdSnapViewingStatus setDpaMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x10849d218

// -[SCAdSnapViewingStatus setSKOverlayTrackInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x10849d248

// -[SCAdSnapViewingStatus setCustomProductPageEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10849d2a0

// -[SCAdSnapViewingStatus gestureParameters]
// Type encoding: @16@0:8
// Implementation: 0x10849d2a8

// -[SCAdSnapViewingStatus setGestureParameters:]
// Type encoding: v24@0:8@16
// Implementation: 0x10849d2d0

// -[SCAdSnapViewingStatus setLongformMediaDurationMillis:longformMediaDurationMillis:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x10849d300

// -[SCAdSnapViewingStatus setLoadedOnEntry:loadedOnExit:visiblePageLoadTimeSeconds:collectionItemIndex:initialPageStatusCode:]
// Type encoding: v48@0:8B16B20d24@32@40
// Implementation: 0x10849d320

// -[SCAdSnapViewingStatus setPixelCookieAvailability:]
// Type encoding: v20@0:8B16
// Implementation: 0x10849d45c

// -[SCAdSnapViewingStatus setDeepLinkFromCard:deepLinkFallBackToAppStore:deepLinkFallBackToWebview:deepLinkFallBackToDefaultBrowser:deepLinkURI:collectionItemIndex:]
// Type encoding: v48@0:8B16B20B24B28@32@40
// Implementation: 0x10849d464

// -[SCAdSnapViewingStatus setAppInstallWithCollectionItemIndex:loadedOnEntry:loadedOnExit:visiblePageLoadTimeSeconds:]
// Type encoding: v40@0:8@16B24B28d32
// Implementation: 0x10849d5a8

// -[SCAdSnapViewingStatus setShowcase:collectionItemIndex:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10849d68c

// -[SCAdSnapViewingStatus setCommercePdpViewedWithSnapIndex:collectionItemIndex:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10849d75c

// -[SCAdSnapViewingStatus setDidCall:]
// Type encoding: v20@0:8B16
// Implementation: 0x10849d81c

// -[SCAdSnapViewingStatus setDidMessage:]
// Type encoding: v20@0:8B16
// Implementation: 0x10849d82c

// -[SCAdSnapViewingStatus submittedLead]
// Type encoding: @16@0:8
// Implementation: 0x10849d834

// -[SCAdSnapViewingStatus setSubmittedLead:]
// Type encoding: v24@0:8@16
// Implementation: 0x10849d85c

// -[SCAdSnapViewingStatus formInteraction]
// Type encoding: @16@0:8
// Implementation: 0x10849d8a0

// -[SCAdSnapViewingStatus setFormInteraction:]
// Type encoding: v24@0:8@16
// Implementation: 0x10849d8c8

// -[SCAdSnapViewingStatus surveyAnswer]
// Type encoding: @16@0:8
// Implementation: 0x10849d90c

// -[SCAdSnapViewingStatus setSurveyAnswer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10849d934

// -[SCAdSnapViewingStatus adSurveyResponse]
// Type encoding: q16@0:8
// Implementation: 0x10849d964

// -[SCAdSnapViewingStatus setAdSurveyResponse:]
// Type encoding: v24@0:8q16
// Implementation: 0x10849d96c

// -[SCAdSnapViewingStatus stickerMetadataArray]
// Type encoding: @16@0:8
// Implementation: 0x10849d974

// -[SCAdSnapViewingStatus setStickerInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x10849d99c

// -[SCAdSnapViewingStatus stickerInfo]
// Type encoding: @16@0:8
// Implementation: 0x10849d9cc

// -[SCAdSnapViewingStatus setStickerMetadataArray:]
// Type encoding: v24@0:8@16
// Implementation: 0x10849d9f4

// -[SCAdSnapViewingStatus reminderLocalBannerTapCount]
// Type encoding: Q16@0:8
// Implementation: 0x10849da24

// -[SCAdSnapViewingStatus setReminderLocalBannerTapped]
// Type encoding: v16@0:8
// Implementation: 0x10849da2c

// -[SCAdSnapViewingStatus reminderCountdownId]
// Type encoding: @16@0:8
// Implementation: 0x10849da3c

// -[SCAdSnapViewingStatus setReminderCountdownId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10849da64

// -[SCAdSnapViewingStatus reminderScheduledCount]
// Type encoding: Q16@0:8
// Implementation: 0x10849da94

// -[SCAdSnapViewingStatus setReminderScheduled]
// Type encoding: v16@0:8
// Implementation: 0x10849da9c

// -[SCAdSnapViewingStatus setWakeUpTapWithSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x10849daac

// -[SCAdSnapViewingStatus setPharmaDisclaimerRendered:]
// Type encoding: v24@0:8q16
// Implementation: 0x10849dad4

// -[SCAdSnapViewingStatus setPharmaDisclaimerClicked:]
// Type encoding: v24@0:8q16
// Implementation: 0x10849daf0

// -[SCAdSnapViewingStatus pharmaTrackInfo]
// Type encoding: @16@0:8
// Implementation: 0x10849db0c

// -[SCAdSnapViewingStatus wakeUpUiTapsFromTopsnap]
// Type encoding: Q16@0:8
// Implementation: 0x10849dc3c

// -[SCAdSnapViewingStatus wakeUpUiTapsFromCard]
// Type encoding: Q16@0:8
// Implementation: 0x10849dc44

// -[SCAdSnapViewingStatus setAdShareOpen]
// Type encoding: v16@0:8
// Implementation: 0x10849dc4c

// -[SCAdSnapViewingStatus setAdShareSend]
// Type encoding: v16@0:8
// Implementation: 0x10849dc58

// -[SCAdSnapViewingStatus adShareOpen]
// Type encoding: B16@0:8
// Implementation: 0x10849dc64

// -[SCAdSnapViewingStatus adShareSend]
// Type encoding: B16@0:8
// Implementation: 0x10849dc6c

// -[SCAdSnapViewingStatus setAppInActivityTriggeredTimestampMs:]
// Type encoding: v24@0:8d16
// Implementation: 0x10849dc74

// -[SCAdSnapViewingStatus appInActivityTriggeredTimestampMsArray]
// Type encoding: @16@0:8
// Implementation: 0x10849dcb8

// -[SCAdSnapViewingStatus setAdSubscribed:]
// Type encoding: v20@0:8B16
// Implementation: 0x10849dce0

// -[SCAdSnapViewingStatus setAdSubscribeButtonTappedTimestampMs:]
// Type encoding: v24@0:8d16
// Implementation: 0x10849dce8

// -[SCAdSnapViewingStatus setInitialAdSubscribed:]
// Type encoding: v20@0:8B16
// Implementation: 0x10849dd2c

// -[SCAdSnapViewingStatus adSubscribed]
// Type encoding: B16@0:8
// Implementation: 0x10849dd34

// -[SCAdSnapViewingStatus adSubscribeButtonTappedTimestampMsArray]
// Type encoding: @16@0:8
// Implementation: 0x10849dd3c

// -[SCAdSnapViewingStatus setAdFavorited:timestampMs:]
// Type encoding: v28@0:8B16d20
// Implementation: 0x10849dd64

// -[SCAdSnapViewingStatus setAdFavorited:]
// Type encoding: v20@0:8B16
// Implementation: 0x10849ddac

// -[SCAdSnapViewingStatus setAdFavoriteTapSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x10849ddb4

// -[SCAdSnapViewingStatus setInitialAdFavorited:]
// Type encoding: v20@0:8B16
// Implementation: 0x10849ddbc

// -[SCAdSnapViewingStatus setInitialAdReposted:]
// Type encoding: v20@0:8B16
// Implementation: 0x10849de04

// -[SCAdSnapViewingStatus initialAdFavorited]
// Type encoding: @16@0:8
// Implementation: 0x10849de4c

// -[SCAdSnapViewingStatus initialAdReposted]
// Type encoding: @16@0:8
// Implementation: 0x10849de74

// -[SCAdSnapViewingStatus setAdReposted:timestampMs:]
// Type encoding: v28@0:8B16d20
// Implementation: 0x10849de9c

// -[SCAdSnapViewingStatus adReposted]
// Type encoding: @16@0:8
// Implementation: 0x10849df14

// -[SCAdSnapViewingStatus adRepostButtonTappedTimestampMsArray]
// Type encoding: @16@0:8
// Implementation: 0x10849df3c

// -[SCAdSnapViewingStatus adFavoriteTapSource]
// Type encoding: q16@0:8
// Implementation: 0x10849df64

// -[SCAdSnapViewingStatus setTapToPauseEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10849df6c

// -[SCAdSnapViewingStatus tapToPauseInteractionsArray]
// Type encoding: @16@0:8
// Implementation: 0x10849df74

// -[SCAdSnapViewingStatus setCanShowMultiSegmentExperience:]
// Type encoding: v20@0:8B16
// Implementation: 0x10849df8c

// -[SCAdSnapViewingStatus setEndCardDisplayed:onlyIfUnset:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x10849df94

// -[SCAdSnapViewingStatus setEndCardTapped:]
// Type encoding: v24@0:8q16
// Implementation: 0x10849e038

// -[SCAdSnapViewingStatus setPollStickerSelectedOptionIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x10849e11c

// -[SCAdSnapViewingStatus pollStickerTrackInfo]
// Type encoding: @16@0:8
// Implementation: 0x10849e14c

// -[SCAdSnapViewingStatus adFavorited]
// Type encoding: B16@0:8
// Implementation: 0x10849e1e4

// -[SCAdSnapViewingStatus canShowMultiSegmentExperience]
// Type encoding: B16@0:8
// Implementation: 0x10849e1ec

// -[SCAdSnapViewingStatus adFavoriteButtonTappedTimestampMsArray]
// Type encoding: @16@0:8
// Implementation: 0x10849e1f4

// -[SCAdSnapViewingStatus initialAdSubscribed]
// Type encoding: B16@0:8
// Implementation: 0x10849e21c

// -[SCAdSnapViewingStatus setContextMenuOpen]
// Type encoding: v16@0:8
// Implementation: 0x10849e224

// -[SCAdSnapViewingStatus contextMenuOpen]
// Type encoding: B16@0:8
// Implementation: 0x10849e230

// -[SCAdSnapViewingStatus setTryOnLensId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10849e238

// -[SCAdSnapViewingStatus setTryOnOpenedWithARExperienceResumed:]
// Type encoding: v20@0:8B16
// Implementation: 0x10849e268

// -[SCAdSnapViewingStatus setTryOnAttachmentClicked]
// Type encoding: v16@0:8
// Implementation: 0x10849e2bc

// -[SCAdSnapViewingStatus appendTryOnLensSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10849e2c8

// -[SCAdSnapViewingStatus onClickInteraction:]
// Type encoding: v24@0:8@16
// Implementation: 0x10849e2d0

// -[SCAdSnapViewingStatus addAttachmentTriggeredTsMsToLastClickInteraction:]
// Type encoding: v24@0:8d16
// Implementation: 0x10849e32c

// -[SCAdSnapViewingStatus addAttachmentFullyVisibleTsMsToLastClickInteraction:]
// Type encoding: v24@0:8d16
// Implementation: 0x10849e408

// -[SCAdSnapViewingStatus clickInteractionsArray]
// Type encoding: @16@0:8
// Implementation: 0x10849e4e4

// -[SCAdSnapViewingStatus onValdiAdTrackEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10849e50c

// -[SCAdSnapViewingStatus valdiAdTrackEventWrappers]
// Type encoding: @16@0:8
// Implementation: 0x10849e514

// -[SCAdSnapViewingStatus _resetArExperienceViewTime]
// Type encoding: v16@0:8
// Implementation: 0x10849e51c

// -[SCAdSnapViewingStatus _setDefaultValue]
// Type encoding: v16@0:8
// Implementation: 0x10849e560

// -[SCAdSnapViewingStatus _startTopSnapTimer:]
// Type encoding: v24@0:8d16
// Implementation: 0x10849e8ac

// -[SCAdSnapViewingStatus _stopTopSnapTimer]
// Type encoding: v16@0:8
// Implementation: 0x10849e994

// -[SCAdSnapViewingStatus getNextQuadrantIndexForTimestamp:]
// Type encoding: q24@0:8q16
// Implementation: 0x10849ea5c

// -[SCAdSnapViewingStatus getTopSnapViewTimeMillis]
// Type encoding: q16@0:8
// Implementation: 0x10849eaa4

// -[SCAdSnapViewingStatus currentTimeInMillis]
// Type encoding: d16@0:8
// Implementation: 0x10849ead0

// -[SCAdSnapViewingStatus _updateMediaVolumePercent:]
// Type encoding: v24@0:8d16
// Implementation: 0x10849eadc

// -[SCAdSnapViewingStatus _getNextPlaybackIndexForPercent:]
// Type encoding: i24@0:8d16
// Implementation: 0x10849ebf4

// -[SCAdSnapViewingStatus _updateVolume:forIndex:]
// Type encoding: v32@0:8d16Q24
// Implementation: 0x10849ec5c

// -[SCAdSnapViewingStatus _webViewViewingStatus:]
// Type encoding: @24@0:8@16
// Implementation: 0x10849ed08

// -[SCAdSnapViewingStatus swipeUpAttempts]
// Type encoding: Q16@0:8
// Implementation: 0x10849eda4

// -[SCAdSnapViewingStatus allSwipeAttempts]
// Type encoding: Q16@0:8
// Implementation: 0x10849edac

// -[SCAdSnapViewingStatus preferredWidthDp]
// Type encoding: @16@0:8
// Implementation: 0x10849edb4

// -[SCAdSnapViewingStatus preferredHeightDp]
// Type encoding: @16@0:8
// Implementation: 0x10849edbc

// -[SCAdSnapViewingStatus preferredImageSizeDp]
// Type encoding: @16@0:8
// Implementation: 0x10849edc4

// -[SCAdSnapViewingStatus didExpandAdAtIndex]
// Type encoding: @16@0:8
// Implementation: 0x10849edcc

// -[SCAdSnapViewingStatus setDidExpandAdAtIndex:]
// Type encoding: v24@0:8@16
// Implementation: 0x10849edd4

// -[SCAdSnapViewingStatus endCardInteractionInfo]
// Type encoding: @16@0:8
// Implementation: 0x10849ee04

// -[SCAdSnapViewingStatus currentTopSnapStartTimestamp]
// Type encoding: d16@0:8
// Implementation: 0x10849ee0c

// -[SCAdSnapViewingStatus setCurrentTopSnapStartTimestamp:]
// Type encoding: v24@0:8d16
// Implementation: 0x10849ee14

// -[SCAdSnapViewingStatus audioQuadrantStateForCurrentSession]
// Type encoding: @16@0:8
// Implementation: 0x10849ee1c

// -[SCAdSnapViewingStatus setAudioQuadrantStateForCurrentSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x10849ee24

// -[SCAdSnapViewingStatus .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10849ee54

@end
