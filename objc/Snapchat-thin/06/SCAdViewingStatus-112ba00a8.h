// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdViewingStatus
// Superclass: NSObject
// Address: 0x112ba00a8

@interface SCAdViewingStatus

// Property: adType; attributes: Tq,R,N,V_adType
// Property: adKey; attributes: T@"NSString",R,C,N,V_adKey
// Property: adProductType; attributes: TQ,R,N,V_adProductType
// Property: topSnapMedia; attributes: Tq,R,N,V_topSnapMedia
// Property: maxViewedSnapIndex; attributes: Tq,R,N,V_maxViewedSnapIndex
// Property: maxViewedSnapIndexSinceReset; attributes: Tq,R,N,V_maxViewedSnapIndexSinceReset
// Property: viewingStatusCount; attributes: Tq,R,N
// Property: wasShown; attributes: TB,N,V_wasShown
// Property: isUnSkippableAd; attributes: TB,N,V_isUnSkippableAd
// Property: openProfilePage; attributes: TB,N,V_openProfilePage
// Property: openTaggedProfilePage; attributes: TB,N,V_openTaggedProfilePage
// Property: adNotInterested; attributes: TB,N,V_adNotInterested
// Property: openedProfileId; attributes: T@"NSString",C,N,V_openedProfileId
// Property: didExpandAdAtIndex; attributes: T@"NSNumber",R,N,V_didExpandAdAtIndex
// Property: expandButtonDisplaySnapIndex; attributes: T@"NSNumber",&,N,V_expandButtonDisplaySnapIndex
// Property: snapCount; attributes: Tq,R,N
// Property: totalTopSnapsMediaDurationMillis; attributes: Tq,R,N
// Property: totalSwipeUps; attributes: TQ,R,N
// Property: uniqueSwipeUps; attributes: TQ,R,N
// Property: isAudioOn; attributes: TB,R,N
// Property: timeViewedInMillis; attributes: Td,R,N
// Property: exitEvent; attributes: T@"NSString",R,C,N

// -[SCAdViewingStatus initWithAdType:adKey:responseReceiveTimestampInMillis:adProductType:tileWidth:tileHeight:screenWidth:screenHeight:]
// Type encoding: @64@0:8q16@24d32Q40f48f52f56f60
// Implementation: 0x1084a0f2c

// -[SCAdViewingStatus viewingStatusCount]
// Type encoding: q16@0:8
// Implementation: 0x1084a103c

// -[SCAdViewingStatus snapCount]
// Type encoding: q16@0:8
// Implementation: 0x1084a1044

// -[SCAdViewingStatus totalTopSnapsMediaDurationMillis]
// Type encoding: q16@0:8
// Implementation: 0x1084a104c

// -[SCAdViewingStatus totalSwipeUps]
// Type encoding: Q16@0:8
// Implementation: 0x1084a1054

// -[SCAdViewingStatus uniqueSwipeUps]
// Type encoding: Q16@0:8
// Implementation: 0x1084a11fc

// -[SCAdViewingStatus isAudioOn]
// Type encoding: B16@0:8
// Implementation: 0x1084a13ac

// -[SCAdViewingStatus timeViewedInMillis]
// Type encoding: d16@0:8
// Implementation: 0x1084a14ac

// -[SCAdViewingStatus exitEvent]
// Type encoding: @16@0:8
// Implementation: 0x1084a14b4

// -[SCAdViewingStatus addAdSnapInteraction:]
// Type encoding: v24@0:8@16
// Implementation: 0x1084a14fc

// -[SCAdViewingStatus adTypeAtSnapIndex:]
// Type encoding: q24@0:8q16
// Implementation: 0x1084a1564

// -[SCAdViewingStatus adSnapInteractionAtSnapIndex:]
// Type encoding: @24@0:8q16
// Implementation: 0x1084a15cc

// -[SCAdViewingStatus adViewingTrackInfoAtIndex:]
// Type encoding: @24@0:8q16
// Implementation: 0x1084a1620

// -[SCAdViewingStatus currentViewingInteractionForSnapIndex:]
// Type encoding: @24@0:8q16
// Implementation: 0x1084a1674

// -[SCAdViewingStatus adShowAtSnapIndex:onTopSnap:onBottomSnap:currentMediaVolumePercent:isUnSkippableAd:]
// Type encoding: v44@0:8q16B24B28d32B40
// Implementation: 0x1084a16e8

// -[SCAdViewingStatus adHideAtSnapIndex:viewContext:isUnskippableAd:]
// Type encoding: v36@0:8q16@24B32
// Implementation: 0x1084a1960

// -[SCAdViewingStatus adSnapHideAtSnapIndex:onTopSnap:skipEvent:exitEventSwipeInfo:dismissDuration:]
// Type encoding: v52@0:8q16B24@28@36d44
// Implementation: 0x1084a1a60

// -[SCAdViewingStatus swipedFromTopSnap:snapIndex:viewContext:currentMediaVolumePercent:attachmentTriggerType:]
// Type encoding: v52@0:8B16q20@28d36q44
// Implementation: 0x1084a1b2c

// -[SCAdViewingStatus swipeUpToCardAtSnapIndex:attachmentTriggerType:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x1084a1c9c

// -[SCAdViewingStatus onProfileAttachmentTriggeredAtSnapIndex:attachmentTriggerType:attachmentTriggeredTimestampMs:]
// Type encoding: v40@0:8q16q24d32
// Implementation: 0x1084a1d04

// -[SCAdViewingStatus onWebBrowserSessionEvent:collectionItemIndex:snapIndex:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x1084a1e08

// -[SCAdViewingStatus adoptWebViewTrackInfo:collectionItemIndex:snapIndex:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x1084a1eb4

// -[SCAdViewingStatus didReceiveWebViewContext:collectionItemIndex:snapIndex:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x1084a1f88

// -[SCAdViewingStatus setViewContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x1084a2034

// -[SCAdViewingStatus adLongPressedAtSnapIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x1084a2064

// -[SCAdViewingStatus adScreenshotAtSnapIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x1084a20c8

// -[SCAdViewingStatus adBoostAtSnapIndex:wasBoosted:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x1084a212c

// -[SCAdViewingStatus setDidExpandAdAtIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x1084a219c

// -[SCAdViewingStatus resetForIntermediateTrackingForSnapIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x1084a2280

// -[SCAdViewingStatus resetForExitTracking]
// Type encoding: v16@0:8
// Implementation: 0x1084a22e4

// -[SCAdViewingStatus setTopSnapMediaDurationMillis:topSnapReportedViewDurationMillis:snapIndex:]
// Type encoding: v40@0:8q16q24q32
// Implementation: 0x1084a23e4

// -[SCAdViewingStatus setLongformMediaDurationMillis:longformMediaDurationMillis:snapIndex:]
// Type encoding: v40@0:8q16q24q32
// Implementation: 0x1084a246c

// -[SCAdViewingStatus setLoadedOnEntry:loadedOnExit:visiblePageLoadTimeSeconds:snapIndex:collectionItemIndex:initialPageStatusCode:]
// Type encoding: v56@0:8B16B20d24q32@40@48
// Implementation: 0x1084a24f4

// -[SCAdViewingStatus setPixelCookieAvailability:snapIndex:]
// Type encoding: v28@0:8B16q20
// Implementation: 0x1084a25d4

// -[SCAdViewingStatus setAppInActivityTriggeredTimestampMs:snapIndex:]
// Type encoding: v32@0:8d16q24
// Implementation: 0x1084a2648

// -[SCAdViewingStatus setDeepLinkFromCard:deepLinkFallBackToAppStore:deepLinkFallBackToWebview:deepLinkFallBackToDefaultBrowser:deepLinkURI:snapIndex:collectionItemIndex:]
// Type encoding: v56@0:8B16B20B24B28@32q40@48
// Implementation: 0x1084a26c0

// -[SCAdViewingStatus setAppInstallFromSnapIndex:collectionItemIndex:loadedOnEntry:loadedOnExit:visiblePageLoadTimeSeconds:]
// Type encoding: v48@0:8q16@24B32B36d40
// Implementation: 0x1084a27ac

// -[SCAdViewingStatus setShowcase:snapIndex:collectionItemIndex:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x1084a2868

// -[SCAdViewingStatus setSubmittedLead:snapIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1084a2914

// -[SCAdViewingStatus setFormInteraction:snapIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1084a299c

// -[SCAdViewingStatus setDidCall:snapIndex:]
// Type encoding: v28@0:8B16q20
// Implementation: 0x1084a2a24

// -[SCAdViewingStatus setDidMessage:snapIndex:]
// Type encoding: v28@0:8B16q20
// Implementation: 0x1084a2a98

// -[SCAdViewingStatus onAudibilityChange:snapIndex:]
// Type encoding: v32@0:8d16q24
// Implementation: 0x1084a2b0c

// -[SCAdViewingStatus obstructedOnTopSnap:snapIndex:]
// Type encoding: v28@0:8B16q20
// Implementation: 0x1084a2b84

// -[SCAdViewingStatus unobstructedOnTopSnap:currentMediaVolumePercent:snapIndex:]
// Type encoding: v36@0:8B16d20q28
// Implementation: 0x1084a2bf8

// -[SCAdViewingStatus setSurveyAnswer:snapIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1084a2c80

// -[SCAdViewingStatus setAdSurveyResponse:snapIndex:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x1084a2d08

// -[SCAdViewingStatus setStickerMetadataArray:snapIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1084a2d7c

// -[SCAdViewingStatus setStickerInfo:snapIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1084a2e04

// -[SCAdViewingStatus setReminderLocalBannerTapped:]
// Type encoding: v24@0:8q16
// Implementation: 0x1084a2e8c

// -[SCAdViewingStatus setReminderCountdownId:snapIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1084a2ef0

// -[SCAdViewingStatus setReminderScheduled:]
// Type encoding: v24@0:8q16
// Implementation: 0x1084a2f78

// -[SCAdViewingStatus setWakeUpTapWithSource:snapIndex:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x1084a2fdc

// -[SCAdViewingStatus setAdShareOpenedWithSnapIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x1084a3050

// -[SCAdViewingStatus setAdShareSentWithSnapIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x1084a30b4

// -[SCAdViewingStatus setAdSubscribed:snapIndex:]
// Type encoding: v28@0:8B16q20
// Implementation: 0x1084a3118

// -[SCAdViewingStatus setAdSubscribeButtonTappedTimestampMs:snapIndex:]
// Type encoding: v32@0:8d16q24
// Implementation: 0x1084a318c

// -[SCAdViewingStatus setInitialAdSubscribed:snapIndex:]
// Type encoding: v28@0:8B16q20
// Implementation: 0x1084a3204

// -[SCAdViewingStatus setAdFavorited:timestampMs:snapIndex:]
// Type encoding: v36@0:8B16d20q28
// Implementation: 0x1084a3278

// -[SCAdViewingStatus setAdFavorited:snapIndex:]
// Type encoding: v28@0:8B16q20
// Implementation: 0x1084a3300

// -[SCAdViewingStatus setAdFavoriteTapSource:snapIndex:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x1084a3374

// -[SCAdViewingStatus setInitialAdFavorited:snapIndex:]
// Type encoding: v28@0:8B16q20
// Implementation: 0x1084a33e8

// -[SCAdViewingStatus setInitialAdReposted:snapIndex:]
// Type encoding: v28@0:8B16q20
// Implementation: 0x1084a345c

// -[SCAdViewingStatus setAdReposted:timestampMs:snapIndex:]
// Type encoding: v36@0:8B16d20q28
// Implementation: 0x1084a34d0

// -[SCAdViewingStatus setTapToPauseEvent:snapIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1084a3558

// -[SCAdViewingStatus setCanShowMultiSegmentExperience:snapIndex:]
// Type encoding: v28@0:8B16q20
// Implementation: 0x1084a35e0

// -[SCAdViewingStatus setEndCardDisplayed:endCardType:onlyIfUnset:]
// Type encoding: v36@0:8q16q24B32
// Implementation: 0x1084a3654

// -[SCAdViewingStatus setEndCardTapped:snapIndex:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x1084a36d8

// -[SCAdViewingStatus setPollStickerSelectedOptionsIds:snapIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1084a374c

// -[SCAdViewingStatus setPharmaDisclaimerRendered:snapIndex:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x1084a37d4

// -[SCAdViewingStatus setPharmaDisclaimerClicked:snapIndex:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x1084a3848

// -[SCAdViewingStatus setSwipeAttempt:]
// Type encoding: v24@0:8q16
// Implementation: 0x1084a38bc

// -[SCAdViewingStatus setAnySwipeAttempt:]
// Type encoding: v24@0:8q16
// Implementation: 0x1084a3920

// -[SCAdViewingStatus setContextMenuOpenedWithSnapIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x1084a3984

// -[SCAdViewingStatus setTryOnLensId:snapIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1084a39e8

// -[SCAdViewingStatus setTryOnOpenedWithSnapIndex:arExperienceResumed:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x1084a3a70

// -[SCAdViewingStatus setTryOnAttachmentClickedWithSnapIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x1084a3ae0

// -[SCAdViewingStatus appendTryOnLensSessionId:snapIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1084a3b44

// -[SCAdViewingStatus onClickInteraction:snapIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1084a3bcc

// -[SCAdViewingStatus addAttachmentTriggeredTsMsToLastClickInteraction:snapIndex:]
// Type encoding: v32@0:8d16q24
// Implementation: 0x1084a3c54

// -[SCAdViewingStatus addAttachmentFullyVisibleTsMsToLastClickInteraction:snapIndex:]
// Type encoding: v32@0:8d16q24
// Implementation: 0x1084a3ccc

// -[SCAdViewingStatus onValdiAdTrackEvent:snapIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1084a3d44

// -[SCAdViewingStatus getTileWidth]
// Type encoding: f16@0:8
// Implementation: 0x1084a3dcc

// -[SCAdViewingStatus getTileHeight]
// Type encoding: f16@0:8
// Implementation: 0x1084a3e10

// -[SCAdViewingStatus getScreenWidth]
// Type encoding: f16@0:8
// Implementation: 0x1084a3e54

// -[SCAdViewingStatus getScreenHeight]
// Type encoding: f16@0:8
// Implementation: 0x1084a3e5c

// -[SCAdViewingStatus viewContext]
// Type encoding: @16@0:8
// Implementation: 0x1084a3e64

// -[SCAdViewingStatus _setDefaultValue]
// Type encoding: v16@0:8
// Implementation: 0x1084a3f04

// -[SCAdViewingStatus _setViewedSnapIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x1084a3f78

// -[SCAdViewingStatus addAdSnapViewingStatus:]
// Type encoding: v24@0:8@16
// Implementation: 0x1084a3fbc

// -[SCAdViewingStatus setDpaMetadata:snapIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1084a3fc4

// -[SCAdViewingStatus setCustomProductPageEnabled:snapIndex:]
// Type encoding: v28@0:8B16q20
// Implementation: 0x1084a404c

// -[SCAdViewingStatus setSKOverlayTrackInfo:snapIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1084a40c0

// -[SCAdViewingStatus setGestureParameters:snapIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1084a4148

// -[SCAdViewingStatus setCommercePdpViewedWithSnapIndex:collectionItemIndex:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1084a41d0

// -[SCAdViewingStatus adType]
// Type encoding: q16@0:8
// Implementation: 0x1084a4260

// -[SCAdViewingStatus adKey]
// Type encoding: @16@0:8
// Implementation: 0x1084a4268

// -[SCAdViewingStatus adProductType]
// Type encoding: Q16@0:8
// Implementation: 0x1084a4270

// -[SCAdViewingStatus wasShown]
// Type encoding: B16@0:8
// Implementation: 0x1084a4278

// -[SCAdViewingStatus setWasShown:]
// Type encoding: v20@0:8B16
// Implementation: 0x1084a4280

// -[SCAdViewingStatus topSnapMedia]
// Type encoding: q16@0:8
// Implementation: 0x1084a4288

// -[SCAdViewingStatus maxViewedSnapIndex]
// Type encoding: q16@0:8
// Implementation: 0x1084a4290

// -[SCAdViewingStatus maxViewedSnapIndexSinceReset]
// Type encoding: q16@0:8
// Implementation: 0x1084a4298

// -[SCAdViewingStatus isUnSkippableAd]
// Type encoding: B16@0:8
// Implementation: 0x1084a42a0

// -[SCAdViewingStatus setIsUnSkippableAd:]
// Type encoding: v20@0:8B16
// Implementation: 0x1084a42a8

// -[SCAdViewingStatus openProfilePage]
// Type encoding: B16@0:8
// Implementation: 0x1084a42b0

// -[SCAdViewingStatus setOpenProfilePage:]
// Type encoding: v20@0:8B16
// Implementation: 0x1084a42b8

// -[SCAdViewingStatus openTaggedProfilePage]
// Type encoding: B16@0:8
// Implementation: 0x1084a42c0

// -[SCAdViewingStatus setOpenTaggedProfilePage:]
// Type encoding: v20@0:8B16
// Implementation: 0x1084a42c8

// -[SCAdViewingStatus adNotInterested]
// Type encoding: B16@0:8
// Implementation: 0x1084a42d0

// -[SCAdViewingStatus setAdNotInterested:]
// Type encoding: v20@0:8B16
// Implementation: 0x1084a42d8

// -[SCAdViewingStatus didExpandAdAtIndex]
// Type encoding: @16@0:8
// Implementation: 0x1084a42e0

// -[SCAdViewingStatus expandButtonDisplaySnapIndex]
// Type encoding: @16@0:8
// Implementation: 0x1084a42e8

// -[SCAdViewingStatus setExpandButtonDisplaySnapIndex:]
// Type encoding: v24@0:8@16
// Implementation: 0x1084a42f0

// -[SCAdViewingStatus openedProfileId]
// Type encoding: @16@0:8
// Implementation: 0x1084a4320

// -[SCAdViewingStatus setOpenedProfileId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1084a4328

// -[SCAdViewingStatus .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1084a4330

@end
