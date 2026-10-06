// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdInteractionHistoryTracker
// Superclass: NSObject
// Address: 0x112b9fec8

@interface SCAdInteractionHistoryTracker

// Property: adIdentifierToViewngStatusMap; attributes: T@"NSMutableDictionary",&,N,V_adIdentifierToViewngStatusMap
// Property: audioOutputVolume; attributes: Td,N,V_audioOutputVolume
// Property: screenWidth; attributes: Td,N,V_screenWidth
// Property: screenHeight; attributes: Td,N,V_screenHeight

// -[SCAdInteractionHistoryTracker initWithAudioOutputVolume:]
// Type encoding: @24@0:8d16
// Implementation: 0x108498bcc

// -[SCAdInteractionHistoryTracker updateAudioOutputVolume:]
// Type encoding: v24@0:8d16
// Implementation: 0x108498c94

// -[SCAdInteractionHistoryTracker onAdShownInteractionUpdate:snapIndex:isUnskippableAd:isTopPanelOpen:isBottomPanelOpen:adResponseV2:]
// Type encoding: v52@0:8@16q24B32B36B40@44
// Implementation: 0x108498c9c

// -[SCAdInteractionHistoryTracker onVideoViewedInteractionUpdate:snapIndex:adPanel:mediaDurationInMillis:viewedDurationInMillis:]
// Type encoding: v56@0:8@16q24q32q40q48
// Implementation: 0x108498d98

// -[SCAdInteractionHistoryTracker onTopSnapImageViewedInteractionUpdate:snapIndex:mediaDurationInMillis:viewedDurationInMillis:]
// Type encoding: v48@0:8@16q24q32q40
// Implementation: 0x108498e24

// -[SCAdInteractionHistoryTracker onTopSnapWebpageViewedInteractionUpdate:snapIndex:mediaDurationInMillis:viewedDurationInMillis:]
// Type encoding: v48@0:8@16q24q32q40
// Implementation: 0x108498e7c

// -[SCAdInteractionHistoryTracker onDeepLinkedInteractionUpdate:snapIndex:deepLinkFromCard:deepLinkFallBackToAppStore:deepLinkFallBackToWebview:deepLinkFallBackToDefaultBrowser:deepLinkURI:collectionItemIndex:]
// Type encoding: v64@0:8@16q24B32B36B40B44@48@56
// Implementation: 0x108498ed4

// -[SCAdInteractionHistoryTracker onAppInstallInteractionUpdate:snapIndex:loadedOnEntry:loadedOnExit:visiblePageLoadTimeSeconds:collectionItemIndex:]
// Type encoding: v56@0:8@16q24B32B36d40@48
// Implementation: 0x108498f98

// -[SCAdInteractionHistoryTracker onRemoteWebViewInteractionUpdate:snapIndex:loadedOnEntry:loadedOnExit:visiblePageLoadTimeSeconds:collectionItemIndex:viewedDurationInMillis:initialPageLoadStatusCode:]
// Type encoding: v72@0:8@16q24B32B36d40@48q56@64
// Implementation: 0x108499030

// -[SCAdInteractionHistoryTracker onCommercePdpInteractionUpdate:snapIndex:collectionItemIndex:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x1084990e0

// -[SCAdInteractionHistoryTracker onShowcaseInteractionUpdate:snapIndex:collectionItemIndex:showcaseTrackInfo:]
// Type encoding: v48@0:8@16q24@32@40
// Implementation: 0x108499148

// -[SCAdInteractionHistoryTracker onSwipedUpToCardInteractionUpdate:snapIndex:attachmentTriggerType:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x1084991d0

// -[SCAdInteractionHistoryTracker onProfileAttachmentTriggered:snapIndex:attachmentTriggerType:attachmentTriggeredTimestampMs:]
// Type encoding: v48@0:8@16q24q32d40
// Implementation: 0x108499218

// -[SCAdInteractionHistoryTracker onWebViewClosedWithTrackInfo:collectionItemIndex:adIdentifier:snapIndex:]
// Type encoding: v48@0:8@16@24@32q40
// Implementation: 0x108499270

// -[SCAdInteractionHistoryTracker onWebBrowserSessionEvent:collectionItemIndex:adIdentifier:snapIndex:]
// Type encoding: v48@0:8@16@24@32q40
// Implementation: 0x10849930c

// -[SCAdInteractionHistoryTracker didReceiveWebViewContext:collectionItemIndex:adIdentifier:snapIndex:]
// Type encoding: v48@0:8@16@24@32q40
// Implementation: 0x108499394

// -[SCAdInteractionHistoryTracker onScreenshotInteractionUpdate:snapIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10849941c

// -[SCAdInteractionHistoryTracker onBoostInteractionUpdate:snapIndex:wasBoosted:]
// Type encoding: v36@0:8@16q24B32
// Implementation: 0x108499454

// -[SCAdInteractionHistoryTracker onLongPressInteractionUpdate:snapIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10849949c

// -[SCAdInteractionHistoryTracker onTapToPauseInteraction:adRequestClientId:snapIndex:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x1084994d4

// -[SCAdInteractionHistoryTracker onWindowFocusChangedInteractionUpdate:snapIndex:fromPanel:hasFocus:]
// Type encoding: v44@0:8@16q24q32B40
// Implementation: 0x108499544

// -[SCAdInteractionHistoryTracker onAudioChangeInteractionUpdate:snapIndex:audioOutputVolume:]
// Type encoding: v40@0:8@16q24d32
// Implementation: 0x108499550

// -[SCAdInteractionHistoryTracker onAdHiddenInteractionUpdate:snapIndex:adPanel:viewContext:dismissDuration:]
// Type encoding: v56@0:8@16q24q32@40d48
// Implementation: 0x10849959c

// -[SCAdInteractionHistoryTracker onPanelChangedInteractionUpdate:snapIndex:fromPanel:isPixelCookieAvailable:viewContext:attachmentTriggerType:]
// Type encoding: v60@0:8@16q24q32B40@44q52
// Implementation: 0x1084996f0

// -[SCAdInteractionHistoryTracker onAdToCallInteractionUpdate:snapIndex:didCall:]
// Type encoding: v36@0:8@16q24B32
// Implementation: 0x1084997a0

// -[SCAdInteractionHistoryTracker onAdToMessageInteractionUpdate:snapIndex:didMessage:]
// Type encoding: v36@0:8@16q24B32
// Implementation: 0x1084997f0

// -[SCAdInteractionHistoryTracker onLeadGenerationSubmissionUpdate:snapIndex:submittedLead:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x108499840

// -[SCAdInteractionHistoryTracker onLeadGenerationFormInteractionUpdate:snapIndex:formInteraction:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x1084998b0

// -[SCAdInteractionHistoryTracker onGestureParametersUpdate:snapIndex:gestureParameters:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x108499920

// -[SCAdInteractionHistoryTracker adViewingStatusForAdIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x108499990

// -[SCAdInteractionHistoryTracker onBrandNameProfileDisplay:profileId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1084999f0

// -[SCAdInteractionHistoryTracker onTaggedProfileDisplay:profileId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108499a80

// -[SCAdInteractionHistoryTracker onStoreDisplay:snapIndex:customProductPageEnabled:]
// Type encoding: v36@0:8@16q24B32
// Implementation: 0x108499b10

// -[SCAdInteractionHistoryTracker onSurveyAnswerUpdate:snapIndex:answer:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x108499b8c

// -[SCAdInteractionHistoryTracker onStickersStateUpdate:snapIndex:stickerMetadataArray:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x108499bfc

// -[SCAdInteractionHistoryTracker onAdSurveyResponseChanged:snapIndex:surveyResponse:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x108499c6c

// -[SCAdInteractionHistoryTracker onStickerInfoUpdate:snapIndex:stickerInfo:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x108499cbc

// -[SCAdInteractionHistoryTracker onReminderLocalBannerTapped:snapIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x108499d2c

// -[SCAdInteractionHistoryTracker onReminderCountdownIdUpdate:snapIndex:reminderCountdownId:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x108499d6c

// -[SCAdInteractionHistoryTracker onReminderScheduled:snapIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x108499ddc

// -[SCAdInteractionHistoryTracker onWakeUpTap:snapIndex:source:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x108499e1c

// -[SCAdInteractionHistoryTracker onAdShareOpen:snapIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x108499e6c

// -[SCAdInteractionHistoryTracker onAdShareSend:snapIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x108499eac

// -[SCAdInteractionHistoryTracker onAdSubscribed:adIdentifier:snapIndex:]
// Type encoding: v36@0:8B16@20q28
// Implementation: 0x108499eec

// -[SCAdInteractionHistoryTracker onAdSubscribeButtonTapped:timestampMs:snapIndex:]
// Type encoding: v40@0:8@16d24q32
// Implementation: 0x108499f40

// -[SCAdInteractionHistoryTracker setInitialAdSubscribed:adIdentifier:snapIndex:]
// Type encoding: v36@0:8B16@20q28
// Implementation: 0x108499f90

// -[SCAdInteractionHistoryTracker onAdFavorited:timestampMs:source:adIdentifier:snapIndex:]
// Type encoding: v52@0:8B16d20q28@36q44
// Implementation: 0x108499fe4

// -[SCAdInteractionHistoryTracker onAdFavoritedUpdate:adIdentifier:snapIndex:]
// Type encoding: v36@0:8B16@20q28
// Implementation: 0x10849a05c

// -[SCAdInteractionHistoryTracker onAdReposted:timestampMs:adIdentifier:snapIndex:]
// Type encoding: v44@0:8B16d20@28q36
// Implementation: 0x10849a0b0

// -[SCAdInteractionHistoryTracker onInitialEngagementState:reposted:adIdentifier:snapIndex:]
// Type encoding: v48@0:8@16@24@32q40
// Implementation: 0x10849a114

// -[SCAdInteractionHistoryTracker onContextMenuOpen:snapIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10849a1c8

// -[SCAdInteractionHistoryTracker onAppInActivityTriggered:snapIndex:timestampMs:]
// Type encoding: v40@0:8@16q24d32
// Implementation: 0x10849a208

// -[SCAdInteractionHistoryTracker onAdNotInterested:snapIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10849a258

// -[SCAdInteractionHistoryTracker _onLongformVideoViewed:snapIndex:mediaDurationInMillis:viewedDurationInMillis:]
// Type encoding: v48@0:8@16q24q32q40
// Implementation: 0x10849a294

// -[SCAdInteractionHistoryTracker _onTopSnapVideoViewed:snapIndex:mediaDurationInMillis:viewedDurationInMillis:]
// Type encoding: v48@0:8@16q24q32q40
// Implementation: 0x10849a2e4

// -[SCAdInteractionHistoryTracker _onObstructed:snapIndex:fromPanel:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x10849a334

// -[SCAdInteractionHistoryTracker _onUnobstructed:snapIndex:fromPanel:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x10849a380

// -[SCAdInteractionHistoryTracker _onHide:snapIndex:viewContext:isUnskippableAd:]
// Type encoding: v44@0:8@16q24@32B40
// Implementation: 0x10849a3d4

// -[SCAdInteractionHistoryTracker _onSnapHide:snapIndex:skipEvent:exitEventSwipeInfo:adPanel:dismissDuration:]
// Type encoding: v64@0:8@16q24@32@40q48d56
// Implementation: 0x10849a44c

// -[SCAdInteractionHistoryTracker _generateAdViewingStatusFromAdResponseV2:]
// Type encoding: @24@0:8@16
// Implementation: 0x10849a4f0

// -[SCAdInteractionHistoryTracker onComposerDpaDisplay:snapIndex:dpaMetadata:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x10849a904

// -[SCAdInteractionHistoryTracker onSwipeAttempt:snapIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10849a96c

// -[SCAdInteractionHistoryTracker onAnySwipeAttempt:snapIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10849a9a4

// -[SCAdInteractionHistoryTracker onTryOnAdDisplayed:adIdentifier:snapIndex:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x10849a9dc

// -[SCAdInteractionHistoryTracker onTryOnTrigger:snapIndex:arExperienceResumed:]
// Type encoding: v36@0:8@16q24B32
// Implementation: 0x10849aa44

// -[SCAdInteractionHistoryTracker onTryOnAttachmentClicked:snapIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10849aa8c

// -[SCAdInteractionHistoryTracker onTryOnLensSessionStarted:adIdentifier:snapIndex:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x10849aac4

// -[SCAdInteractionHistoryTracker onClickInteraction:adRequestClientId:snapIndex:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x10849ab2c

// -[SCAdInteractionHistoryTracker addAttachmentTriggeredTsMsToLastClickInteraction:adRequestClientId:snapIndex:]
// Type encoding: v40@0:8d16@24q32
// Implementation: 0x10849ab94

// -[SCAdInteractionHistoryTracker addAttachmentFullyVisibleTsMsToLastClickInteraction:adRequestClientId:snapIndex:]
// Type encoding: v40@0:8d16@24q32
// Implementation: 0x10849abdc

// -[SCAdInteractionHistoryTracker didExpandAdWithClientId:atIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10849ac24

// -[SCAdInteractionHistoryTracker onValdiAdTrackEvent:adRequestClientId:snapIndex:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x10849ac5c

// -[SCAdInteractionHistoryTracker onPharmaDisclaimerRendered:adIdentifier:snapIndex:]
// Type encoding: v40@0:8q16@24q32
// Implementation: 0x10849acc4

// -[SCAdInteractionHistoryTracker onPharmaDisclaimerClicked:adIdentifier:snapIndex:]
// Type encoding: v40@0:8q16@24q32
// Implementation: 0x10849ad18

// -[SCAdInteractionHistoryTracker adIdentifierToViewngStatusMap]
// Type encoding: @16@0:8
// Implementation: 0x10849ad6c

// -[SCAdInteractionHistoryTracker setAdIdentifierToViewngStatusMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x10849ad74

// -[SCAdInteractionHistoryTracker audioOutputVolume]
// Type encoding: d16@0:8
// Implementation: 0x10849ada4

// -[SCAdInteractionHistoryTracker setAudioOutputVolume:]
// Type encoding: v24@0:8d16
// Implementation: 0x10849adac

// -[SCAdInteractionHistoryTracker screenWidth]
// Type encoding: d16@0:8
// Implementation: 0x10849adb4

// -[SCAdInteractionHistoryTracker setScreenWidth:]
// Type encoding: v24@0:8d16
// Implementation: 0x10849adbc

// -[SCAdInteractionHistoryTracker screenHeight]
// Type encoding: d16@0:8
// Implementation: 0x10849adc4

// -[SCAdInteractionHistoryTracker setScreenHeight:]
// Type encoding: v24@0:8d16
// Implementation: 0x10849adcc

// -[SCAdInteractionHistoryTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10849add4

@end
