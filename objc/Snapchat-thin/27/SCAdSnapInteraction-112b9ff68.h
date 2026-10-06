// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdSnapInteraction
// Superclass: NSObject
// Address: 0x112b9ff68

@interface SCAdSnapInteraction

// Property: adProductType; attributes: TQ,R,N,V_adProductType
// Property: timeSinceAdRenderMillis; attributes: Tq,R,N
// Property: firstReactionTimeMillis; attributes: Tq,R,N
// Property: wasFullyVisible; attributes: TB,R,N
// Property: topSnapTotalViewTimeInMillis; attributes: Td,R,N
// Property: topSnapTotalAudibleViewTimeInMillis; attributes: Td,R,N
// Property: topSnapMaxUnobstructedAudibleViewTimeInMillis; attributes: Td,R,N
// Property: topSnapTotalUnobstructedAudibleViewTimeInMillis; attributes: Td,R,N
// Property: topSnapMaxUnobstructedViewTimeInMillis; attributes: Td,R,N
// Property: topSnapTotalUnobstructedViewTimeInMillis; attributes: Td,R,N
// Property: topSnapUncappedMaxUnobstructedViewTimeInMillis; attributes: Td,R,N
// Property: topSnapUncappedTotalUnobstructedAudibleViewTimeInMillis; attributes: Td,R,N
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
// Property: preferredWidthDp; attributes: T@"NSNumber",R,N
// Property: preferredHeightDp; attributes: T@"NSNumber",R,N
// Property: preferredImageSizeDp; attributes: T@"NSNumber",R,N
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
// Property: endCardInteractionInfo; attributes: T@"SCAdEndCardInteractionInfo",R,N
// Property: swipeUpAttempts; attributes: TQ,R,N
// Property: allSwipeAttempts; attributes: TQ,R,N
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

// -[SCAdSnapInteraction initWithAdType:adProductType:adKey:snapIndex:topSnapMediaDurationMillis:responseReceiveTimeInMillis:longformMediaDurationMillis:preferredWidthDp:preferredHeightDp:preferredImageSizeDp:]
// Type encoding: @96@0:8q16Q24@32q40q48d56q64@72@80@88
// Implementation: 0x10849b304

// -[SCAdSnapInteraction timeSinceAdRenderMillis]
// Type encoding: q16@0:8
// Implementation: 0x10849b448

// -[SCAdSnapInteraction deltaInMillis]
// Type encoding: q16@0:8
// Implementation: 0x10849b48c

// -[SCAdSnapInteraction adFirstRenderTimestamp]
// Type encoding: d16@0:8
// Implementation: 0x10849b494

// -[SCAdSnapInteraction snapIndex]
// Type encoding: q16@0:8
// Implementation: 0x10849b49c

// -[SCAdSnapInteraction adKey]
// Type encoding: @16@0:8
// Implementation: 0x10849b4a4

// -[SCAdSnapInteraction adType]
// Type encoding: q16@0:8
// Implementation: 0x10849b4ac

// -[SCAdSnapInteraction skipEvent]
// Type encoding: @16@0:8
// Implementation: 0x10849b4b4

// -[SCAdSnapInteraction exitEventSwipeInfo]
// Type encoding: @16@0:8
// Implementation: 0x10849b4bc

// -[SCAdSnapInteraction swipeCount]
// Type encoding: Q16@0:8
// Implementation: 0x10849b4c4

// -[SCAdSnapInteraction isAudioOn]
// Type encoding: B16@0:8
// Implementation: 0x10849b4cc

// -[SCAdSnapInteraction audioQuadrantStates]
// Type encoding: @16@0:8
// Implementation: 0x10849b4d4

// -[SCAdSnapInteraction maxMediaVolumeForMediaPlayback]
// Type encoding: @16@0:8
// Implementation: 0x10849b4dc

// -[SCAdSnapInteraction topSnapMediaDurationMillis]
// Type encoding: q16@0:8
// Implementation: 0x10849b4e4

// -[SCAdSnapInteraction topSnapTimeViewedMillis]
// Type encoding: q16@0:8
// Implementation: 0x10849b4ec

// -[SCAdSnapInteraction topSnapCappedMaxViewDurationMillis]
// Type encoding: q16@0:8
// Implementation: 0x10849b4f4

// -[SCAdSnapInteraction topSnapUnCappedMaxViewDurationMillis]
// Type encoding: q16@0:8
// Implementation: 0x10849b4fc

// -[SCAdSnapInteraction topSnapReportedMaxViewDurationMillis]
// Type encoding: q16@0:8
// Implementation: 0x10849b504

// -[SCAdSnapInteraction longformMaxViewedDurationInMillis]
// Type encoding: d16@0:8
// Implementation: 0x10849b50c

// -[SCAdSnapInteraction longformMediaDurationMillis]
// Type encoding: q16@0:8
// Implementation: 0x10849b514

// -[SCAdSnapInteraction longformReportedMaxViewDurationMillis]
// Type encoding: q16@0:8
// Implementation: 0x10849b51c

// -[SCAdSnapInteraction loadedOnEntry]
// Type encoding: B16@0:8
// Implementation: 0x10849b524

// -[SCAdSnapInteraction loadedOnExit]
// Type encoding: B16@0:8
// Implementation: 0x10849b52c

// -[SCAdSnapInteraction preferredWidthDp]
// Type encoding: @16@0:8
// Implementation: 0x10849b534

// -[SCAdSnapInteraction preferredHeightDp]
// Type encoding: @16@0:8
// Implementation: 0x10849b53c

// -[SCAdSnapInteraction preferredImageSizeDp]
// Type encoding: @16@0:8
// Implementation: 0x10849b544

// -[SCAdSnapInteraction webViewTrackInfo]
// Type encoding: @16@0:8
// Implementation: 0x10849b54c

// -[SCAdSnapInteraction visiblePageLoadTimeSeconds]
// Type encoding: d16@0:8
// Implementation: 0x10849b554

// -[SCAdSnapInteraction deepLinkFromCardCount]
// Type encoding: q16@0:8
// Implementation: 0x10849b55c

// -[SCAdSnapInteraction deepLinkFallBackToWebview]
// Type encoding: B16@0:8
// Implementation: 0x10849b564

// -[SCAdSnapInteraction deepLinkFallBackToAppStoreCount]
// Type encoding: q16@0:8
// Implementation: 0x10849b56c

// -[SCAdSnapInteraction deepLinkFallBackToDefaultBrowser]
// Type encoding: B16@0:8
// Implementation: 0x10849b574

// -[SCAdSnapInteraction deepLinkURI]
// Type encoding: @16@0:8
// Implementation: 0x10849b57c

// -[SCAdSnapInteraction collectionItemInteractions]
// Type encoding: @16@0:8
// Implementation: 0x10849b584

// -[SCAdSnapInteraction totalCollectionItemInteractions]
// Type encoding: @16@0:8
// Implementation: 0x10849b58c

// -[SCAdSnapInteraction wasBoosted]
// Type encoding: B16@0:8
// Implementation: 0x10849b594

// -[SCAdSnapInteraction didCall]
// Type encoding: B16@0:8
// Implementation: 0x10849b59c

// -[SCAdSnapInteraction didMessage]
// Type encoding: B16@0:8
// Implementation: 0x10849b5a4

// -[SCAdSnapInteraction submittedLead]
// Type encoding: @16@0:8
// Implementation: 0x10849b5ac

// -[SCAdSnapInteraction formInteraction]
// Type encoding: @16@0:8
// Implementation: 0x10849b5b4

// -[SCAdSnapInteraction dpaMetadata]
// Type encoding: @16@0:8
// Implementation: 0x10849b5bc

// -[SCAdSnapInteraction customProductPageEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10849b5c4

// -[SCAdSnapInteraction gestureParameters]
// Type encoding: @16@0:8
// Implementation: 0x10849b5cc

// -[SCAdSnapInteraction surveyAnswer]
// Type encoding: @16@0:8
// Implementation: 0x10849b5d4

// -[SCAdSnapInteraction stickerInfo]
// Type encoding: @16@0:8
// Implementation: 0x10849b5dc

// -[SCAdSnapInteraction skOverlayTrackInfo]
// Type encoding: @16@0:8
// Implementation: 0x10849b5e4

// -[SCAdSnapInteraction stickerMetadataArray]
// Type encoding: @16@0:8
// Implementation: 0x10849b5ec

// -[SCAdSnapInteraction adSurveyResponse]
// Type encoding: q16@0:8
// Implementation: 0x10849b5f4

// -[SCAdSnapInteraction reminderLocalBannerTapCount]
// Type encoding: Q16@0:8
// Implementation: 0x10849b5fc

// -[SCAdSnapInteraction reminderCountdownId]
// Type encoding: @16@0:8
// Implementation: 0x10849b604

// -[SCAdSnapInteraction reminderScheduledCount]
// Type encoding: Q16@0:8
// Implementation: 0x10849b60c

// -[SCAdSnapInteraction adShareOpen]
// Type encoding: B16@0:8
// Implementation: 0x10849b614

// -[SCAdSnapInteraction adShareSend]
// Type encoding: B16@0:8
// Implementation: 0x10849b61c

// -[SCAdSnapInteraction didExpandAdAtIndex]
// Type encoding: @16@0:8
// Implementation: 0x10849b624

// -[SCAdSnapInteraction appInActivityTriggeredTimestampMsArray]
// Type encoding: @16@0:8
// Implementation: 0x10849b62c

// -[SCAdSnapInteraction adSubscribed]
// Type encoding: B16@0:8
// Implementation: 0x10849b634

// -[SCAdSnapInteraction adSubscribeButtonTappedTimestampMsArray]
// Type encoding: @16@0:8
// Implementation: 0x10849b63c

// -[SCAdSnapInteraction initialAdSubscribed]
// Type encoding: B16@0:8
// Implementation: 0x10849b644

// -[SCAdSnapInteraction adFavorited]
// Type encoding: B16@0:8
// Implementation: 0x10849b64c

// -[SCAdSnapInteraction adFavoriteButtonTappedTimestampMsArray]
// Type encoding: @16@0:8
// Implementation: 0x10849b654

// -[SCAdSnapInteraction adFavoriteTapSource]
// Type encoding: q16@0:8
// Implementation: 0x10849b65c

// -[SCAdSnapInteraction initialAdFavorited]
// Type encoding: @16@0:8
// Implementation: 0x10849b664

// -[SCAdSnapInteraction initialAdReposted]
// Type encoding: @16@0:8
// Implementation: 0x10849b66c

// -[SCAdSnapInteraction adReposted]
// Type encoding: @16@0:8
// Implementation: 0x10849b674

// -[SCAdSnapInteraction adRepostButtonTappedTimestampMsArray]
// Type encoding: @16@0:8
// Implementation: 0x10849b67c

// -[SCAdSnapInteraction endCardInteractionInfo]
// Type encoding: @16@0:8
// Implementation: 0x10849b684

// -[SCAdSnapInteraction canShowMultiSegmentExperience]
// Type encoding: B16@0:8
// Implementation: 0x10849b68c

// -[SCAdSnapInteraction contextMenuOpen]
// Type encoding: B16@0:8
// Implementation: 0x10849b694

// -[SCAdSnapInteraction arShoppingExperienceTrack]
// Type encoding: @16@0:8
// Implementation: 0x10849b69c

// -[SCAdSnapInteraction pollStickerTrackInfo]
// Type encoding: @16@0:8
// Implementation: 0x10849b6a4

// -[SCAdSnapInteraction firstReactionTimeMillis]
// Type encoding: q16@0:8
// Implementation: 0x10849b6ac

// -[SCAdSnapInteraction wasFullyVisible]
// Type encoding: B16@0:8
// Implementation: 0x10849b6b4

// -[SCAdSnapInteraction topSnapTotalViewTimeInMillis]
// Type encoding: d16@0:8
// Implementation: 0x10849b6bc

// -[SCAdSnapInteraction topSnapTotalAudibleViewTimeInMillis]
// Type encoding: d16@0:8
// Implementation: 0x10849b6c4

// -[SCAdSnapInteraction topSnapMaxUnobstructedAudibleViewTimeInMillis]
// Type encoding: d16@0:8
// Implementation: 0x10849b6cc

// -[SCAdSnapInteraction topSnapTotalUnobstructedAudibleViewTimeInMillis]
// Type encoding: d16@0:8
// Implementation: 0x10849b6d4

// -[SCAdSnapInteraction topSnapMaxUnobstructedViewTimeInMillis]
// Type encoding: d16@0:8
// Implementation: 0x10849b6dc

// -[SCAdSnapInteraction topSnapTotalUnobstructedViewTimeInMillis]
// Type encoding: d16@0:8
// Implementation: 0x10849b6e4

// -[SCAdSnapInteraction topSnapUncappedMaxUnobstructedViewTimeInMillis]
// Type encoding: d16@0:8
// Implementation: 0x10849b6ec

// -[SCAdSnapInteraction topSnapUncappedTotalUnobstructedAudibleViewTimeInMillis]
// Type encoding: d16@0:8
// Implementation: 0x10849b6f4

// -[SCAdSnapInteraction adShowOnTopSnap:onBottomSnap:currentMediaVolumePercent:]
// Type encoding: v32@0:8B16B20d24
// Implementation: 0x10849b6fc

// -[SCAdSnapInteraction adHideWithSkipEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10849b74c

// -[SCAdSnapInteraction adSnapHideOnTopSnap:skipEvent:exitEventSwipeInfo:dismissDuration:]
// Type encoding: v44@0:8B16@20@28d36
// Implementation: 0x10849b79c

// -[SCAdSnapInteraction swipedFromTopSnap:exitEvent:currentMediaVolumePercent:]
// Type encoding: v36@0:8B16@20d28
// Implementation: 0x10849b830

// -[SCAdSnapInteraction onAudibilityChange:]
// Type encoding: v24@0:8d16
// Implementation: 0x10849b8a0

// -[SCAdSnapInteraction obstructedOnTopSnap:]
// Type encoding: v20@0:8B16
// Implementation: 0x10849b8d8

// -[SCAdSnapInteraction unobstructedOnTopSnap:currentMediaVolumePercent:]
// Type encoding: v28@0:8B16d20
// Implementation: 0x10849b908

// -[SCAdSnapInteraction adLongPressed]
// Type encoding: v16@0:8
// Implementation: 0x10849b948

// -[SCAdSnapInteraction adScreenshotTaken]
// Type encoding: v16@0:8
// Implementation: 0x10849b970

// -[SCAdSnapInteraction adBoosted:]
// Type encoding: v20@0:8B16
// Implementation: 0x10849b998

// -[SCAdSnapInteraction swipeUpToCard]
// Type encoding: v16@0:8
// Implementation: 0x10849b9c8

// -[SCAdSnapInteraction swipeUpAttempt]
// Type encoding: v16@0:8
// Implementation: 0x10849b9f0

// -[SCAdSnapInteraction swipeUpAttempts]
// Type encoding: Q16@0:8
// Implementation: 0x10849b9f8

// -[SCAdSnapInteraction anySwipeAttempt]
// Type encoding: v16@0:8
// Implementation: 0x10849ba00

// -[SCAdSnapInteraction allSwipeAttempts]
// Type encoding: Q16@0:8
// Implementation: 0x10849ba08

// -[SCAdSnapInteraction onWebBrowserSessionEvent:collectionItemIndex:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10849ba10

// -[SCAdSnapInteraction adoptWebViewTrackInfo:collectionItemIndex:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10849ba7c

// -[SCAdSnapInteraction didReceiveWebViewContext:collectionItemIndex:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10849ba84

// -[SCAdSnapInteraction resetForIntermediateTracking]
// Type encoding: v16@0:8
// Implementation: 0x10849baf0

// -[SCAdSnapInteraction resetForExitTracking]
// Type encoding: v16@0:8
// Implementation: 0x10849bb18

// -[SCAdSnapInteraction setTopSnapMediaDurationMillis:topSnapReportedViewDurationMillis:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x10849bb40

// -[SCAdSnapInteraction setLongformMediaDurationMillis:longformMediaDurationMillis:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x10849bb80

// -[SCAdSnapInteraction setLoadedOnEntry:loadedOnExit:visiblePageLoadTimeSeconds:collectionItemIndex:initialPageStatusCode:]
// Type encoding: v48@0:8B16B20d24@32@40
// Implementation: 0x10849bb88

// -[SCAdSnapInteraction setPixelCookieAvailability:]
// Type encoding: v20@0:8B16
// Implementation: 0x10849bb90

// -[SCAdSnapInteraction setDeepLinkFromCard:deepLinkFallBackToAppStore:deepLinkFallBackToWebview:deepLinkFallBackToDefaultBrowser:deepLinkURI:collectionItemIndex:]
// Type encoding: v48@0:8B16B20B24B28@32@40
// Implementation: 0x10849bb98

// -[SCAdSnapInteraction setAppInstallWithCollectionItemIndex:loadedOnEntry:loadedOnExit:visiblePageLoadTimeSeconds:]
// Type encoding: v40@0:8@16B24B28d32
// Implementation: 0x10849bba0

// -[SCAdSnapInteraction setShowcase:collectionItemIndex:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10849bba8

// -[SCAdSnapInteraction setDidCall:]
// Type encoding: v20@0:8B16
// Implementation: 0x10849bbb0

// -[SCAdSnapInteraction setDidMessage:]
// Type encoding: v20@0:8B16
// Implementation: 0x10849bbb8

// -[SCAdSnapInteraction setSubmittedLead:]
// Type encoding: v24@0:8@16
// Implementation: 0x10849bbc0

// -[SCAdSnapInteraction setFormInteraction:]
// Type encoding: v24@0:8@16
// Implementation: 0x10849bbc8

// -[SCAdSnapInteraction setDpaMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x10849bbd0

// -[SCAdSnapInteraction setCustomProductPageEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10849bbd8

// -[SCAdSnapInteraction setGestureParameters:]
// Type encoding: v24@0:8@16
// Implementation: 0x10849bbe0

// -[SCAdSnapInteraction setSurveyAnswer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10849bbe8

// -[SCAdSnapInteraction setAdSurveyResponse:]
// Type encoding: v24@0:8q16
// Implementation: 0x10849bbf0

// -[SCAdSnapInteraction setStickerMetadataArray:]
// Type encoding: v24@0:8@16
// Implementation: 0x10849bbf8

// -[SCAdSnapInteraction setStickerInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x10849bc00

// -[SCAdSnapInteraction setReminderLocalBannerTapped]
// Type encoding: v16@0:8
// Implementation: 0x10849bc08

// -[SCAdSnapInteraction setReminderCountdownId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10849bc10

// -[SCAdSnapInteraction setReminderScheduled]
// Type encoding: v16@0:8
// Implementation: 0x10849bc18

// -[SCAdSnapInteraction setWakeUpTapWithSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x10849bc20

// -[SCAdSnapInteraction wakeUpUiTapsFromTopsnap]
// Type encoding: Q16@0:8
// Implementation: 0x10849bc28

// -[SCAdSnapInteraction wakeUpUiTapsFromCard]
// Type encoding: Q16@0:8
// Implementation: 0x10849bc30

// -[SCAdSnapInteraction setSKOverlayTrackInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x10849bc38

// -[SCAdSnapInteraction setAdShareOpen]
// Type encoding: v16@0:8
// Implementation: 0x10849bc40

// -[SCAdSnapInteraction setAdShareSend]
// Type encoding: v16@0:8
// Implementation: 0x10849bc48

// -[SCAdSnapInteraction setAppInActivityTriggeredTimestampMs:]
// Type encoding: v24@0:8d16
// Implementation: 0x10849bc50

// -[SCAdSnapInteraction setAdSubscribed:]
// Type encoding: v20@0:8B16
// Implementation: 0x10849bc58

// -[SCAdSnapInteraction setAdSubscribeButtonTappedTimestampMs:]
// Type encoding: v24@0:8d16
// Implementation: 0x10849bc60

// -[SCAdSnapInteraction setInitialAdSubscribed:]
// Type encoding: v20@0:8B16
// Implementation: 0x10849bc68

// -[SCAdSnapInteraction setAdFavorited:timestampMs:]
// Type encoding: v28@0:8B16d20
// Implementation: 0x10849bc70

// -[SCAdSnapInteraction setAdFavorited:]
// Type encoding: v20@0:8B16
// Implementation: 0x10849bc78

// -[SCAdSnapInteraction setAdFavoriteTapSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x10849bc80

// -[SCAdSnapInteraction setInitialAdFavorited:]
// Type encoding: v20@0:8B16
// Implementation: 0x10849bc88

// -[SCAdSnapInteraction setInitialAdReposted:]
// Type encoding: v20@0:8B16
// Implementation: 0x10849bc90

// -[SCAdSnapInteraction setAdReposted:timestampMs:]
// Type encoding: v28@0:8B16d20
// Implementation: 0x10849bc98

// -[SCAdSnapInteraction setTapToPauseEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10849bca0

// -[SCAdSnapInteraction setCanShowMultiSegmentExperience:]
// Type encoding: v20@0:8B16
// Implementation: 0x10849bca8

// -[SCAdSnapInteraction setEndCardDisplayed:onlyIfUnset:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x10849bcb0

// -[SCAdSnapInteraction setEndCardTapped:]
// Type encoding: v24@0:8q16
// Implementation: 0x10849bcb8

// -[SCAdSnapInteraction setPollStickerSelectedOptionIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x10849bcc0

// -[SCAdSnapInteraction setPharmaDisclaimerRendered:]
// Type encoding: v24@0:8q16
// Implementation: 0x10849bcc8

// -[SCAdSnapInteraction setPharmaDisclaimerClicked:]
// Type encoding: v24@0:8q16
// Implementation: 0x10849bcd0

// -[SCAdSnapInteraction setContextMenuOpen]
// Type encoding: v16@0:8
// Implementation: 0x10849bcd8

// -[SCAdSnapInteraction setTryOnOpenedWithARExperienceResumed:]
// Type encoding: v20@0:8B16
// Implementation: 0x10849bce0

// -[SCAdSnapInteraction setTryOnLensId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10849bce8

// -[SCAdSnapInteraction setTryOnAttachmentClicked]
// Type encoding: v16@0:8
// Implementation: 0x10849bcf0

// -[SCAdSnapInteraction appendTryOnLensSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10849bcf8

// -[SCAdSnapInteraction setCommercePdpViewedWithSnapIndex:collectionItemIndex:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10849bd00

// -[SCAdSnapInteraction onClickInteraction:]
// Type encoding: v24@0:8@16
// Implementation: 0x10849bd08

// -[SCAdSnapInteraction addAttachmentTriggeredTsMsToLastClickInteraction:]
// Type encoding: v24@0:8d16
// Implementation: 0x10849bd10

// -[SCAdSnapInteraction addAttachmentFullyVisibleTsMsToLastClickInteraction:]
// Type encoding: v24@0:8d16
// Implementation: 0x10849bd18

// -[SCAdSnapInteraction clickInteractionsArray]
// Type encoding: @16@0:8
// Implementation: 0x10849bd20

// -[SCAdSnapInteraction tapToPauseInteractionsArray]
// Type encoding: @16@0:8
// Implementation: 0x10849bd28

// -[SCAdSnapInteraction onValdiAdTrackEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10849bd30

// -[SCAdSnapInteraction valdiAdTrackEventWrappers]
// Type encoding: @16@0:8
// Implementation: 0x10849bd38

// -[SCAdSnapInteraction pharmaTrackInfo]
// Type encoding: @16@0:8
// Implementation: 0x10849bd40

// -[SCAdSnapInteraction adProductType]
// Type encoding: Q16@0:8
// Implementation: 0x10849bd48

// -[SCAdSnapInteraction setDidExpandAdAtIndex:]
// Type encoding: v24@0:8@16
// Implementation: 0x10849bd50

// -[SCAdSnapInteraction .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10849bd80

@end
