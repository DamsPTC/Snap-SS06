// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdViewingSession
// Superclass: NSObject
// Address: 0x112add418

@interface SCAdViewingSession

// Property: currentPage; attributes: T@"SCOperaPage",C,N,V_currentPage
// Property: currentParams; attributes: T@"NSDictionary",C,N
// Property: adDismissTracker; attributes: T@"<SCAdDismissTracking>",R,N
// Property: currentItem; attributes: T@"<SCOperaPlaylistItem>",&,D,N
// Property: playlistItemController; attributes: T@"<SCOperaPlaylistItemController>",W,N,V_playlistItemController
// Property: operaControlling; attributes: T@"<SCOperaControlling>",W,N,V_operaControlling
// Property: operaConfiguration; attributes: T@"SCOperaConfiguration",W,N,V_operaConfiguration
// Property: operaInteractionState; attributes: T@"<SCOperaInteractionStateProviding>",W,N,V_operaInteractionState
// Property: eventAnnouncing; attributes: T@"<SCOperaEventAnnouncing>",&,N,V_eventAnnouncing
// Property: unifiedEventBus; attributes: T@"<SCAdUnifiedEventObservableBus>",&,N,V_unifiedEventBus
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdViewingSession initWithUserSession:adDataSource:analyticsSession:viewLocation:storySessionId:deepLinkId:adTrackerHelper:unskippableAdManager:navigationStyle:adBlizzardLogger:expandStateManager:skAdNetworkMetricsManager:trackMetricsManager:adConfigProvider:adConfigProviderV2:adReportEventTrackerProvider:p2pDataSource:notificationPool:grapheneRegistry:streamingMediaFetcher:userPreferences:notificationManager:adPodManager:adNetwork:appImpressionTracker:circumstanceEngine:adEOVTimerProvider:sessionViewingHistory:audioSession:internalErrorMetricsManager:memoryPressureState:appInstallAdsDisplayedSubject:applicationLifecycleEvents:boostCoordinator:contextExperimentService:skOverlayPreloader:skOverlayLifecycleTracker:adCrashLogger:adBrowserLifecycleService:chromeInteractionSession:sharingSession:skViewThroughImpressionTracker:operaEventStateTracker:dismissTracker:adTrackHandler:applicationPreferences:attachmentPreloader:imageSourceProvider:imageFetchingService:storiesConfigProvider:dpaConfigProvider:playbackAssetRepository:promotedStoryStateProvider:mediaMetricsManager:localNotificationScheduler:]
// Type encoding: @456@0:8@16@24@32q40@48@56@64@72q80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248@256@264@272@280@288@296@304@312@320@328@336@344@352@360@368@376@384@392@400@408@416@424@432@440@448
// Implementation: 0x1063a4c48

// -[SCAdViewingSession dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1063a5bd4

// -[SCAdViewingSession setEventAnnouncing:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063a5c38

// -[SCAdViewingSession setEventSubscriber:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063a604c

// -[SCAdViewingSession setOperaControlling:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063a64f8

// -[SCAdViewingSession setPlaylistItemController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063a65d0

// -[SCAdViewingSession setOperaConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063a66d4

// -[SCAdViewingSession beginObservationWithAdUnifiedEventStreams:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063a673c

// -[SCAdViewingSession _handleLifecycleEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063a6b50

// -[SCAdViewingSession _onAdLifecycleEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063a6c34

// -[SCAdViewingSession _onAdDeeplinkEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063a6d4c

// -[SCAdViewingSession _onAdAppInstallEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063a768c

// -[SCAdViewingSession _onAdAdToMessageEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063a7acc

// -[SCAdViewingSession _handleAttachmentDidAppear:]
// Type encoding: v24@0:8q16
// Implementation: 0x1063a7d1c

// -[SCAdViewingSession _handleAttachmentDidDisappear:collectionItemIndex:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1063a7d34

// -[SCAdViewingSession registeredEventsForOperaSession]
// Type encoding: @16@0:8
// Implementation: 0x1063a7fd4

// -[SCAdViewingSession operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1063a85f8

// -[SCAdViewingSession _verticalEndCardPagePropertiesForItem:dataModel:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1063abda8

// -[SCAdViewingSession extraPropertiesForDataModel:item:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1063ac05c

// -[SCAdViewingSession extraAttachmentPropertiesForDataModel:item:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1063ac6f8

// -[SCAdViewingSession tearDown]
// Type encoding: v16@0:8
// Implementation: 0x1063ac85c

// -[SCAdViewingSession _onStoreViewClosed:page:params:adRequestClientId:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1063ac8ac

// -[SCAdViewingSession _onVideoDidFinishLooping:page:adResponse:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1063ac9a4

// -[SCAdViewingSession _loopStoryIfNeeded:page:adResponse:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1063ac9a8

// -[SCAdViewingSession _loopingBehaviorForAdType:isComposerMedia:]
// Type encoding: q28@0:8q16B24
// Implementation: 0x1063accf4

// -[SCAdViewingSession _playFirstSnapIn:items:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1063acd4c

// -[SCAdViewingSession _logStoryAdViewedIfNeeded:pagedFromItem:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1063acf7c

// -[SCAdViewingSession audioSession:didChangeVolume:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x1063ad0f8

// -[SCAdViewingSession updateViewLocation:]
// Type encoding: v24@0:8q16
// Implementation: 0x1063ad1d8

// -[SCAdViewingSession _closeViewWithItem:adRequestClientId:page:params:lastInteraction:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x1063ad2ec

// -[SCAdViewingSession _triggerAdTrack:option:pageId:collectionItemIndex:deferToDestination:]
// Type encoding: v52@0:8Q16@24@32@40B48
// Implementation: 0x1063ad554

// -[SCAdViewingSession _logCloseViewWithItem:page:params:dismissModelDurationInSec:lastInteraction:deferToDestination:]
// Type encoding: v60@0:8@16@24@32d40@48B56
// Implementation: 0x1063ad6a0

// -[SCAdViewingSession _stopViewingPlaylistItem:adRequestClientId:page:params:lastInteraction:dismissDuration:]
// Type encoding: B64@0:8@16@24@32@40@48d56
// Implementation: 0x1063ad820

// -[SCAdViewingSession _trackAdShowWithItem:adResponse:context:didReturnFromStoryAdInternalDeeplink:]
// Type encoding: v44@0:8@16@24@32B40
// Implementation: 0x1063ae300

// -[SCAdViewingSession _trackBoostStateForItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063ae5e8

// -[SCAdViewingSession _stopTrackBoostState]
// Type encoding: v16@0:8
// Implementation: 0x1063ae844

// -[SCAdViewingSession _userDidBoostAd:]
// Type encoding: v20@0:8B16
// Implementation: 0x1063ae870

// -[SCAdViewingSession _userDidTakeScreenshot]
// Type encoding: v16@0:8
// Implementation: 0x1063ae938

// -[SCAdViewingSession _adMediaTrackingKeysForItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063aea58

// -[SCAdViewingSession _viewDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x1063aec60

// -[SCAdViewingSession _onAppEnterInActiveState]
// Type encoding: v16@0:8
// Implementation: 0x1063aef30

// -[SCAdViewingSession _actionMenuButtonKeys]
// Type encoding: @16@0:8
// Implementation: 0x1063af0d0

// -[SCAdViewingSession _operaConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x1063af154

// -[SCAdViewingSession _updateUnskippableManagerStartViewIfNeccessary:adRequestClientId:adType:page:]
// Type encoding: v48@0:8@16@24Q32@40
// Implementation: 0x1063af1c8

// -[SCAdViewingSession _onStoreViewOpenedWithAdIdentifier:snapIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1063af2c0

// -[SCAdViewingSession _onContextMenuOpenWithAdRequestClientId:snapIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1063af324

// -[SCAdViewingSession _handleStoreViewClosedWithAdIdentifier:pageId:visibleLoadTimeSec:pageLoadedOnExit:pageLoadedOnEntry:collectionItemIndex:]
// Type encoding: v56@0:8@16@24d32B40B44@48
// Implementation: 0x1063af32c

// -[SCAdViewingSession _handleStoreWillOpenWithAdIdentifier:adType:snapIndex:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x1063af614

// -[SCAdViewingSession _handleOpenViewWithParams:page:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1063af710

// -[SCAdViewingSession _handleOpenViewLoadedWithParams:page:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1063afbb0

// -[SCAdViewingSession _handleMediaStartsToDisplayWithOperaPage:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063afd78

// -[SCAdViewingSession _handleVideoPlaybackProgressDidUpdateWithOperaPage:params:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1063afecc

// -[SCAdViewingSession currentPage]
// Type encoding: @16@0:8
// Implementation: 0x1063b0124

// -[SCAdViewingSession setCurrentPage:params:snapIndex:adIdentifier:]
// Type encoding: v48@0:8@16@24q32@40
// Implementation: 0x1063b016c

// -[SCAdViewingSession currentParams]
// Type encoding: @16@0:8
// Implementation: 0x1063b01ec

// -[SCAdViewingSession setCurrentParams:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063b0234

// -[SCAdViewingSession currentItem]
// Type encoding: @16@0:8
// Implementation: 0x1063b0288

// -[SCAdViewingSession setCurrentItem:snapIndex:adIdentifier:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x1063b02d0

// -[SCAdViewingSession adDismissTracker]
// Type encoding: @16@0:8
// Implementation: 0x1063b033c

// -[SCAdViewingSession _guardOnNullAdIdentifierWithS2R:funcName:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1063b0394

// -[SCAdViewingSession _currentItemForEvent:page:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1063b0448

// -[SCAdViewingSession _operaEventsToTrace]
// Type encoding: @16@0:8
// Implementation: 0x1063b053c

// -[SCAdViewingSession _beginOperaEventTraceIfNecessary:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063b0610

// -[SCAdViewingSession _endOperaEventTraceIfNecessary:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063b06e4

// -[SCAdViewingSession playlistItemController]
// Type encoding: @16@0:8
// Implementation: 0x1063b0758

// -[SCAdViewingSession operaControlling]
// Type encoding: @16@0:8
// Implementation: 0x1063b0770

// -[SCAdViewingSession operaConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x1063b0788

// -[SCAdViewingSession operaInteractionState]
// Type encoding: @16@0:8
// Implementation: 0x1063b07a0

// -[SCAdViewingSession setOperaInteractionState:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063b07b8

// -[SCAdViewingSession eventAnnouncing]
// Type encoding: @16@0:8
// Implementation: 0x1063b07c4

// -[SCAdViewingSession unifiedEventBus]
// Type encoding: @16@0:8
// Implementation: 0x1063b07cc

// -[SCAdViewingSession setUnifiedEventBus:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063b07d4

// -[SCAdViewingSession setCurrentPage:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063b0804

// -[SCAdViewingSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1063b080c

// +[SCAdViewingSession _isPageLeftForEvent:]
// Type encoding: B24@0:8@16
// Implementation: 0x1063ad250

@end
