// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdTrackerHelper
// Superclass: NSObject
// Address: 0x112adea48

@interface SCAdTrackerHelper

// Property: delegate; attributes: T@"<SCAdTrackerHelperDelegate>",W,N,V_delegate
// Property: webTrackingHelper; attributes: T@"SCLazy",&,N,V_webTrackingHelper

// -[SCAdTrackerHelper initWithUserSession:viewLocation:snapAdsTracker:adConfigProvider:adConfigProviderV2:adLensCarouselInteractionHistoryTracker:showcaseInteractionHistoryTracker:adUnSkippableAdManager:adPodTrackInfoProvider:userTrackedLogger:userNotTrackedLogger:grapheneRegistry:adLifecycleTracker:adShake2ReportLogger:adReportingInteractionHistoryTracker:adHidingInteractionHistoryTracker:adLifecycleTimestampsTracker:skOverlayLifecycleTracker:appImpressionTracker:webviewMetricsValidator:adBrowserLifecycleService:queuePerformer:canOpenUrlProvider:webBrowsingConfigProvider:]
// Type encoding: @208@0:8@16q24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200
// Implementation: 0x106442460

// -[SCAdTrackerHelper initWithUserSession:viewLocation:adShake2ReportLogger:adUnSkippableAdManager:]
// Type encoding: @48@0:8@16q24@32@40
// Implementation: 0x106442800

// -[SCAdTrackerHelper initWithUserSession:viewLocation:snapAdsTracker:adConfigProvider:adConfigProviderV2:adLensCarouselInteractionHistoryTracker:showcaseInteractionHistoryTracker:adLifecycleTracker:adShake2ReportLogger:interactionHistoryTracker:requestManager:userTrackedLogger:userNotTrackedLogger:grapheneRegistry:adReportingInteractionHistoryTracker:adHidingInteractionHistoryTracker:adUnSkippableAdManager:adPodTrackInfoProvider:adLifecycleTimestampsTracker:skOverlayLifecycleTracker:appImpressionTracker:webviewMetricsValidator:adBrowserLifecycleService:queuePerformer:canOpenUrlProvider:topSnapInteractionInfoStore:webBrowsingConfigProvider:]
// Type encoding: @232@0:8@16q24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224
// Implementation: 0x1064428e8

// -[SCAdTrackerHelper trackLongPressEventwithAdRequestClientId:page:snapIndex:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x106442e5c

// -[SCAdTrackerHelper trackOpenViewLoadedEventWithAdRequestClientId:adMediaTrackingKeys:page:lastInteraction:snapIndex:isUnSkippableAd:adResponse:isTopPanelOpen:isBottomPanelOpen:navigationStyle:lastNavigationEvent:didPageToStoreModal:didReturnFromStoryAdInternalDeeplink:]
// Type encoding: v100@0:8@16@24@32@40q48B56@60B68B72q76@84B92B96
// Implementation: 0x106442eb4

// -[SCAdTrackerHelper _executePendingActionsOnAdShownForAdRequestId:snapIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106443370

// -[SCAdTrackerHelper trackCloseViewEventWithPage:adViewContext:params:adResponse:lastInteraction:snapIndex:adSessionId:dismissDuration:interactionResultType:triggerType:isPresentingOverlayView:option:isOpeningDeepLink:]
// Type encoding: v116@0:8@16@24@32@40@48q56@64d72q80Q88B96@100@108
// Implementation: 0x106443518

// -[SCAdTrackerHelper updateTopSnapViewTimeWithPage:params:adRequestClientId:snapIndex:adResponse:]
// Type encoding: v56@0:8@16@24@32q40@48
// Implementation: 0x1064443dc

// -[SCAdTrackerHelper generateAdTrackInfo:isExitingAd:swipeUpSnapIndex:option:]
// Type encoding: @44@0:8@16B24q28@36
// Implementation: 0x1064446ac

// -[SCAdTrackerHelper _appInstallStatus:appInstallAppId:deepLinkAppId:]
// Type encoding: Q40@0:8q16@24@32
// Implementation: 0x1064450a8

// -[SCAdTrackerHelper _updateSKOverlayTrackInfo:adResponse:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106445128

// -[SCAdTrackerHelper trackNoFill:viewContext:isUnskippableAd:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x106445294

// -[SCAdTrackerHelper onHide:viewContext:isNoFill:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1064453b0

// -[SCAdTrackerHelper _onHide:adViewContext:snapIndex:page:params:fromSwipeUp:isExitingAd:isPresentingOverlayView:dismissDuration:triggerType:option:lastInteraction:]
// Type encoding: v100@0:8@16@24q32@40@48B56B60B64d68Q76@84@92
// Implementation: 0x106445490

// -[SCAdTrackerHelper getAppInstallStatus:]
// Type encoding: Q24@0:8@16
// Implementation: 0x106445814

// -[SCAdTrackerHelper _onTopSnapPresented:adViewContext:snapIndex:page:params:dismissDuration:triggerType:option:]
// Type encoding: v80@0:8@16@24q32@40@48d56Q64@72
// Implementation: 0x106445878

// -[SCAdTrackerHelper updateInteractionHistory:snapIndex:adPanel:adviewContext:dismissDuration:]
// Type encoding: v56@0:8@16q24q32@40d48
// Implementation: 0x106445a10

// -[SCAdTrackerHelper updateInteractionHistory:snapIndex:adPanel:adViewContext:dismissDuration:]
// Type encoding: v56@0:8@16q24q32@40d48
// Implementation: 0x106445a14

// -[SCAdTrackerHelper trackStoryAdView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106445a1c

// -[SCAdTrackerHelper trackPayToPromoteStoryView:viewContext:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106445b18

// -[SCAdTrackerHelper didSwipeUpOnCard:snapIndex:attachmentTriggerType:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x106445c84

// -[SCAdTrackerHelper onProfileAttachmentTriggeredWithAdIdentifier:snapIndex:attachmentTriggerType:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x106445d38

// -[SCAdTrackerHelper setTopSnapViewTimeObstructed:page:adIdentifier:snapIndex:]
// Type encoding: v44@0:8B16@20@28q36
// Implementation: 0x106445dd8

// -[SCAdTrackerHelper onAdScreenshot:snapIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106445dec

// -[SCAdTrackerHelper onAdBoost:snapIndex:wasBoosted:]
// Type encoding: v36@0:8@16q24B32
// Implementation: 0x106445df4

// -[SCAdTrackerHelper onAdToCallSwiped:snapIndex:didCall:]
// Type encoding: v36@0:8@16q24B32
// Implementation: 0x106445dfc

// -[SCAdTrackerHelper onAdToMessage:snapIndex:didMessage:]
// Type encoding: v36@0:8@16q24B32
// Implementation: 0x106445e04

// -[SCAdTrackerHelper onLeadGenerationSubmission:snapIndex:submittedLead:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x106445e0c

// -[SCAdTrackerHelper onLeadGenerationFormInteraction:snapIndex:formInteraction:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x106445e14

// -[SCAdTrackerHelper fireProfileOpenTerminalTrackWithPageId:swipeStartLocation:swipeEndLocation:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106445e1c

// -[SCAdTrackerHelper onBrandNameProfileDisplay:profileId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106445ecc

// -[SCAdTrackerHelper onTaggedProfileDisplay:profileId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106445ed4

// -[SCAdTrackerHelper updateVideoLoadingInfo:loadedOnEntry:loadedOnExit:mediaWaitTimeInSec:]
// Type encoding: v40@0:8@16B24B28d32
// Implementation: 0x106445edc

// -[SCAdTrackerHelper didChangeAudioVolume:adRequestClientId:snapIndex:]
// Type encoding: v40@0:8d16@24q32
// Implementation: 0x106446034

// -[SCAdTrackerHelper webTrackingHelper]
// Type encoding: @16@0:8
// Implementation: 0x10644603c

// -[SCAdTrackerHelper onSurveyLeave:snapIndex:answer:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x106446160

// -[SCAdTrackerHelper onStickersMetadataChange:snapIndex:stickerMetadataArray:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x106446168

// -[SCAdTrackerHelper onAdSurveyResponseChanged:snapIndex:surveyResponse:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x106446170

// -[SCAdTrackerHelper onReminderLocalBannerTapped:snapIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106446178

// -[SCAdTrackerHelper onReminderCountdownIdUpdate:snapIndex:reminderCountdownId:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x106446180

// -[SCAdTrackerHelper onReminderScheduled:snapIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106446188

// -[SCAdTrackerHelper onWakeUpTap:snapIndex:source:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x106446190

// -[SCAdTrackerHelper onAdShareOpen:snapIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106446198

// -[SCAdTrackerHelper onAdShareSend:snapIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1064461a0

// -[SCAdTrackerHelper onAdSubscribed:adIdentifier:snapIndex:]
// Type encoding: v36@0:8B16@20q28
// Implementation: 0x1064461a8

// -[SCAdTrackerHelper onAdSubscribeButtonTapped:timestampMs:snapIndex:]
// Type encoding: v40@0:8@16d24q32
// Implementation: 0x1064461b4

// -[SCAdTrackerHelper setInitialAdSubscribed:adIdentifier:snapIndex:]
// Type encoding: v36@0:8B16@20q28
// Implementation: 0x1064461bc

// -[SCAdTrackerHelper onAdFavorited:timestampMs:source:adIdentifier:snapIndex:]
// Type encoding: v52@0:8B16d20q28@36q44
// Implementation: 0x1064461c8

// -[SCAdTrackerHelper onAdFavoritedUpdate:adIdentifier:snapIndex:]
// Type encoding: v36@0:8B16@20q28
// Implementation: 0x1064461d0

// -[SCAdTrackerHelper onInitialEngagementState:reposted:adIdentifier:snapIndex:]
// Type encoding: v48@0:8@16@24@32q40
// Implementation: 0x1064461d8

// -[SCAdTrackerHelper onAdReposted:timestampMs:adIdentifier:snapIndex:]
// Type encoding: v44@0:8B16d20@28q36
// Implementation: 0x1064461e0

// -[SCAdTrackerHelper setCanShowMultiSegmentExperience:adIdentifier:snapIndex:]
// Type encoding: v36@0:8B16@20q28
// Implementation: 0x1064461e8

// -[SCAdTrackerHelper onEndCardDisplayed:snapIndex:endCardType:overrideExistingValue:]
// Type encoding: v44@0:8@16q24q32B40
// Implementation: 0x10644623c

// -[SCAdTrackerHelper onEndCardTapped:adIdentifier:snapIndex:]
// Type encoding: v40@0:8q16@24q32
// Implementation: 0x106446294

// -[SCAdTrackerHelper onPollEndCardOptionTap:adIdentifier:snapIndex:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x1064462e8

// -[SCAdTrackerHelper onAppInActiveForAdIdentifier:snapIndex:timestampMs:]
// Type encoding: v40@0:8@16q24d32
// Implementation: 0x106446358

// -[SCAdTrackerHelper onUpdateAppInstallStoreKitLoadInfo:snapIndex:loadedOnEntry:loadedOnExit:visiblePageLoadTimeSeconds:collectionItemIndex:]
// Type encoding: v56@0:8@16q24B32B36d40@48
// Implementation: 0x106446360

// -[SCAdTrackerHelper onSwipeAttempt:snapIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106446368

// -[SCAdTrackerHelper onAnySwipeAttempt:snapIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106446370

// -[SCAdTrackerHelper onTryOnTrigger:snapIndex:arExperienceResumed:]
// Type encoding: v36@0:8@16q24B32
// Implementation: 0x106446378

// -[SCAdTrackerHelper onTryOnAdDisplayed:adIdentifier:snapIndex:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x106446380

// -[SCAdTrackerHelper onTryOnAttachmentClicked:snapIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106446388

// -[SCAdTrackerHelper onTryOnLensSessionStarted:adIdentifier:snapIndex:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x106446390

// -[SCAdTrackerHelper onContextMenuOpen:snapIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106446398

// -[SCAdTrackerHelper onAdNotInterested:snapIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1064463a0

// -[SCAdTrackerHelper onDeepLinkSwiped:snapIndex:deepLinkSucceeded:fallbackType:deepLinkUri:collectionItemIndex:]
// Type encoding: v60@0:8@16q24B32q36@44@52
// Implementation: 0x1064463a8

// -[SCAdTrackerHelper onExternalWebViewOpen:snapIndex:collectionItemIndex:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x1064464bc

// -[SCAdTrackerHelper onClickInteraction:adRequestClientId:snapIndex:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x1064464f4

// -[SCAdTrackerHelper addAttachmentTriggeredTsMsToLastClickInteraction:adRequestClientId:snapIndex:]
// Type encoding: v40@0:8d16@24q32
// Implementation: 0x1064464fc

// -[SCAdTrackerHelper addAttachmentFullyVisibleTsMsToLastClickInteraction:adRequestClientId:snapIndex:]
// Type encoding: v40@0:8d16@24q32
// Implementation: 0x106446504

// -[SCAdTrackerHelper onValdiAdTrackEvent:adRequestClientId:snapIndex:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x10644650c

// -[SCAdTrackerHelper updateIndexedStoryWebviewViewed:params:snapIndex:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x106446514

// -[SCAdTrackerHelper onPharmaDisclaimerRendered:adRequestClientId:snapIndex:]
// Type encoding: v40@0:8q16@24q32
// Implementation: 0x106446518

// -[SCAdTrackerHelper onPharmaDisclaimerClicked:adRequestClientId:snapIndex:]
// Type encoding: v40@0:8q16@24q32
// Implementation: 0x106446520

// -[SCAdTrackerHelper _createWebTrackingHelper]
// Type encoding: @16@0:8
// Implementation: 0x106446528

// -[SCAdTrackerHelper _updateTopSnapImageViewed:params:snapIndex:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x106446578

// -[SCAdTrackerHelper _updateTopSnapVideoViewed:params:snapIndex:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x106446630

// -[SCAdTrackerHelper _updateTopSnapWebpageViewed:params:snapIndex:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x106446830

// -[SCAdTrackerHelper _updateComposerDpaMetadataWithPage:adRequestClientId:params:snapIndex:]
// Type encoding: v48@0:8@16@24@32q40
// Implementation: 0x1064468e8

// -[SCAdTrackerHelper updateGestureParameters:snapIndex:gestureParameters:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x106446b18

// -[SCAdTrackerHelper _updateStoreSettingsWithPage:adRequestClientId:params:snapIndex:]
// Type encoding: v48@0:8@16@24@32q40
// Implementation: 0x106446b20

// -[SCAdTrackerHelper _updateDeepLinkSwiped:params:snapIndex:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x106446bf8

// -[SCAdTrackerHelper _updateAppInstallSwiped:params:snapIndex:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x106446e24

// -[SCAdTrackerHelper _updateWebViewViewed:params:snapIndex:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x106446fc4

// -[SCAdTrackerHelper _updateShowcaseViewed:params:snapIndex:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x1064471ec

// -[SCAdTrackerHelper trackWebViewPerformanceMetrics:adId:adProductType:adServeRequestId:serveItemId:page:adRequestClientId:snapIndex:]
// Type encoding: v80@0:8@16@24Q32@40@48@56@64q72
// Implementation: 0x1064472e0

// -[SCAdTrackerHelper onInstantPageUpdateLoadInfo:collectionItemIndex:adIdentifier:snapIndex:]
// Type encoding: v48@0:8@16@24@32q40
// Implementation: 0x1064487b8

// -[SCAdTrackerHelper onInstantPageDismiss:collectionItemIndex:adIdentifier:snapIndex:]
// Type encoding: v44@0:8B16@20@28q36
// Implementation: 0x106448854

// -[SCAdTrackerHelper onWebviewDidTapExbButtonWithCollectionItemIndex:Identifier:snapIndex:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x1064488ec

// -[SCAdTrackerHelper onWebviewDidTapCopyLinkWithCollectionItemIndex:Identifier:snapIndex:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x10644897c

// -[SCAdTrackerHelper _webViewLatencyValue:startTimestamp:]
// Type encoding: @32@0:8q16q24
// Implementation: 0x106448a0c

// -[SCAdTrackerHelper _swipedFromTopSnap:adResponse:snapIndex:adViewContext:adSessionId:page:params:attachmentTriggerType:triggerType:option:lastInteraction:]
// Type encoding: v100@0:8B16@20q28@36@44@52@60q68Q76@84@92
// Implementation: 0x106448a44

// -[SCAdTrackerHelper _updateWindowFocusChange:page:snapIndex:adIdentifier:]
// Type encoding: v44@0:8B16@20q28@36
// Implementation: 0x106448dc8

// -[SCAdTrackerHelper _reportPlaybackStreamingMetrics:adRequestClientId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106448e30

// -[SCAdTrackerHelper _checkAudioMuted]
// Type encoding: v16@0:8
// Implementation: 0x106449160

// -[SCAdTrackerHelper updateAudioVolume:]
// Type encoding: v24@0:8d16
// Implementation: 0x106449244

// -[SCAdTrackerHelper _trackAd:adTrackInfo:triggerType:option:]
// Type encoding: v48@0:8@16@24Q32@40
// Implementation: 0x10644924c

// -[SCAdTrackerHelper onLifecycleEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x106449334

// -[SCAdTrackerHelper _updateIfOnAttachment:]
// Type encoding: v24@0:8@16
// Implementation: 0x106449390

// -[SCAdTrackerHelper onTopSnapPlaybackBegin:snapIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1064493d4

// -[SCAdTrackerHelper onTapToPauseInteraction:adRequestClientId:snapIndex:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x106449434

// -[SCAdTrackerHelper _updateAdLifecycleTimestampsTrackerTimestampsForAdIdentifier:snapIndex:params:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x10644943c

// -[SCAdTrackerHelper adViewingStatusForAdIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x1064494f8

// -[SCAdTrackerHelper logDpaLayerInteractionEventForAdRequestClientId:collectionItems:tileIndex:collectionItemIndex:defaultAttachmentIndex:interactionSource:attachmentTriggered:interactionTimestamp:sourceRelativeLocation:screenRelativeLocation:screenLocation:scrollDepth:scrollOffset:]
// Type encoding: v116@0:8@16@24@32@40@48@56B64@68@76@84@92@100@108
// Implementation: 0x106449500

// -[SCAdTrackerHelper didExpandAdWithClientId:atIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106449700

// -[SCAdTrackerHelper logInteractiveStickerInfoWithAdRequestClientId:snapIndex:stickerInfo:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x106449708

// -[SCAdTrackerHelper _addPendingAdShownActionForAdRequestIdentifier:snapIndex:actionBlock:]
// Type encoding: v40@0:8@16q24@?32
// Implementation: 0x106449898

// -[SCAdTrackerHelper interactionInfosForAdRequestClientId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106449984

// -[SCAdTrackerHelper setWebTrackingHelper:]
// Type encoding: v24@0:8@16
// Implementation: 0x10644998c

// -[SCAdTrackerHelper delegate]
// Type encoding: @16@0:8
// Implementation: 0x1064499bc

// -[SCAdTrackerHelper setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064499d4

// -[SCAdTrackerHelper .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1064499e0

@end
