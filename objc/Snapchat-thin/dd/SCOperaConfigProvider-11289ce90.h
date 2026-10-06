// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaConfigProvider
// Superclass: NSObject
// Address: 0x11289ce90

@interface SCOperaConfigProvider

// Property: enableMediaDurationLoadInMediaResolver; attributes: TB,N,R
// Property: normalizeMediaSizeInMediaResolver; attributes: TB,N,R
// Property: enablePagePropertiesCleanupOnSSPTeardown; attributes: TB,N,R
// Property: playbackOnBeginTransitionEnabled; attributes: TB,N,R
// Property: enableEarlyPlaybackInSSP; attributes: TB,N,R
// Property: attributeLoopStallsEnabled; attributes: TB,N,R
// Property: sspAutoLoopDelayEnabled; attributes: TB,N,R
// Property: enableMediaPositionFix; attributes: TB,N,R
// Property: operaViewLongPressGestureEnabled; attributes: TB,N,R
// Property: dismissGestureConfig; attributes: T@"SCOperaSessionDismissGestureConfig",N,R
// Property: enablePageLoadingStateFix; attributes: TB,N,R
// Property: mediaResolverAdsFetchOption; attributes: TQ,N,R
// Property: enablesInnerScrollSupportForNewScrollView; attributes: TB,N,R
// Property: disableTapsWhilePanningInOperaScrollView; attributes: TB,N,R
// Property: pageabilityOverwriteOnLoadingPage; attributes: T@"SCOperaPageabilityOverwriteOnLoadingPage",N,R
// Property: adVariantsAllowlist; attributes: T@"NSSet",N,R
// Property: enableCustomizableSwipeDirectionResolution; attributes: TB,N,R
// Property: extraAngleToDetectSwipeToAttachmentOnAds; attributes: Tq,N,R
// Property: enableRetryOnMediaErrorsInSSP; attributes: TB,N,R
// Property: videoPlayerPreloadStrategy; attributes: T@"SCOperaVideoPlayerPreloadStrategy",N,R
// Property: sspUseLazyVideoPool; attributes: TB,N,R
// Property: playbackFrameRateTrackerEnabled; attributes: TB,N,R
// Property: timeThresholdForAPICallsToAssertMs; attributes: TQ,N,R
// Property: timeThresholdForAPICallsToLogMs; attributes: TQ,N,R
// Property: shouldIgnoreLoadingStateChangeForPageToLayersResolution; attributes: TB,N,R
// Property: useMediaBundleResolution; attributes: TB,N,R
// Property: useDownloadedSharingURL; attributes: TB,N,R
// Property: useScrollViewOffsetForPages; attributes: TB,N,R
// Property: enableCornerRadiusOnContainerView; attributes: TB,N,R
// Property: makeRequestsWithUserVisiblePriority; attributes: TB,N,R
// Property: resolverItemHandleCacheLimit; attributes: Ti,N,R
// Property: publishPlaylistItemId; attributes: TB,N,R
// Property: stickySlotsUnifiedConfig; attributes: T@"SCStickySlotsUnifiedConfig",N,R
// Property: enableNewPITNReport; attributes: TB,N,R
// Property: doNotRestoreNativeVolume; attributes: TB,N,R
// Property: enableNewPITNDecouplingFromMediaDisplay; attributes: TB,N,R
// Property: disablePauseUponSeekingForNeoplayer; attributes: TB,N,R
// Property: neoPlayerFirstFrameRevealHandoffEnabled; attributes: TB,N,R
// Property: enableNewPITNMimickingOldAbandoned; attributes: TB,N,R
// Property: enableAdVideoPauseOnScrollForVOpera; attributes: TB,N,R
// Property: gapBetweenGroupsForVerticalNavigation; attributes: Tq,N,R
// Property: exposeContextScopeOffMainThread; attributes: TB,N,R
// Property: adsLoadingStateFixEnabled; attributes: TB,N,R
// Property: publicStoriesAdInsertionRetryEnabled; attributes: TB,N,R
// Property: shouldScaleMediaProperly; attributes: TB,N,R
// Property: shouldIgnoreDefaultFastStartStrategyForVerticalNavigation; attributes: TB,N,R
// Property: videoContentPauseFixEnabled; attributes: TB,N,R
// Property: viewModelsRemovalFixEnabled; attributes: TB,N,R
// Property: enableLoadStateLoggingOnPageOpen; attributes: TB,N,R
// Property: enableFixForOvercountedPITNAbandonInSSP; attributes: TB,N,R
// Property: itemLoadStateFallbackEnabled; attributes: TB,N,R
// Property: backdropBlurFixEnabled; attributes: TB,N,R
// Property: enableRetryOnAssetRepoErrorInMediaResolver; attributes: TB,N,R
// Property: enableDoubleResolutionProtectionInMediaResolver; attributes: TB,N,R
// Property: disableDeferredUpdateOfPageVCs; attributes: TB,N,R
// Property: eventAnnouncerV2Enabled; attributes: TB,N,R
// Property: sceneDelegateStatusBarEnabled; attributes: TB,N,R
// Property: offsetBasedVideoPausingFixEnabled; attributes: TB,N,R
// Property: disablePageBottomSafeAreaHeightForIpad; attributes: TB,N,R
// Property: adsDismissGestureConfig; attributes: T@"SCOperaSessionDismissGestureConfig",N,R
// Property: organicDismissGestureConfig; attributes: T@"SCOperaSessionDismissGestureConfig",N,R
// Property: enableNonBlockingLoadinglayer; attributes: TB,N,R
// Property: dismissalAnimationDurationMs; attributes: Tq,N,R
// Property: adsDismissalAnimationDurationMs; attributes: Tq,N,R
// Property: ignoreAdInsertionAfterMovingPlaylistGroup; attributes: TB,N,R
// Property: enableACFReloadConfigOnConnectivityChange; attributes: TB,N,R
// Property: networkSnapshotLoggingForStallsEnabled; attributes: TB,N,R
// Property: networkSnapshotLoggingForStallsThresholdMs; attributes: Tq,N,R
// Property: networkSnapshotLoggingForIntentToNextEnabled; attributes: TB,N,R
// Property: networkSnapshotLoggingForIntentToNextThresholdMs; attributes: Tq,N,R
// Property: enableAVPlayerAutoWaitToMinimizeStall; attributes: TB,N,R
// Property: validateDraggingParamsAssertEnabled; attributes: TB,N,R
// Property: enablePauseControllerInOperaVC; attributes: TB,N,R
// Property: enablePauseControllerInMixedFeed; attributes: TB,N,R
// Property: enabledMixedFeedResumeStateFix; attributes: TB,N,R
// Property: presentedViewControllerMonitorTimerIntervalMs; attributes: Tq,N,R
// Property: resetRecycledLayerTransformEnabled; attributes: TB,N,R
// Property: cgRectIntegralEnabled; attributes: TB,N,R
// Property: playbackOnBeginTransitionEnabledForAds; attributes: TB,N,R
// Property: tapBackGradientViewEnabled; attributes: TB,N,R
// Property: optimizeHorizontalPageTransitions; attributes: TB,N,R
// Property: flickerFixSspAutoAdvance; attributes: TB,N,R
// Property: sspCheckAdBreaksOnExternalSeekEnabled; attributes: TB,N,R
// Property: enableCameraLifecycleCallbacks; attributes: TB,N,R
// Property: getViewSource; attributes: Tq,N,R
// Property: prefetchPluginConfig; attributes: T@"SCOperaPlaylistPrefetchPluginConfig",N,R
// Property: bsrThresholdMs; attributes: Tq,N,R
// Property: ambientAudioBehaviorForAllNonSpotlight; attributes: TB,N,R
// Property: hideBlurEffectAnimationDurationMs; attributes: Tq,N,R
// Property: sspUseImageContentControllerCallbacks; attributes: TB,N,R
// Property: snapbackZoomingDurationMs; attributes: Tq,N,R
// Property: pauseMusicOnMuteSwiftOverride; attributes: TB,N,R
// Property: viewIfLoadedFixEnabled; attributes: TB,N,R
// Property: sspWatchTimeFixEnabled; attributes: TB,N,R
// Property: disableDeckDismissalFix; attributes: TB,N,R
// Property: acf2DPrefetchPrioritizeCurrentStoryEnabled; attributes: TB,N,R
// Property: sspEnableMediaIsBeingPreparedForDisplay; attributes: TB,N,R
// Property: treatCarPlayAsHeadphones; attributes: TB,N,R
// Property: sspEnableAudioRateEnabled; attributes: TB,N,R
// Property: sspDisablePlayerPreparationOnViewUpdate; attributes: TB,N,R
// Property: sspPlayOnWillAppearEnabled; attributes: TB,N,R
// Property: ignorePagePreloadDistance; attributes: TB,N,R
// Property: audioContinuityEnabled; attributes: TB,N,R
// Property: resumeMusicButKeepMuteSwitchOverride; attributes: TB,N,R
// Property: cleanupDistantPagePropertiesEnabled; attributes: TB,N,R
// Property: batchPreloadUpdateAcrossGroupsEnabled; attributes: TB,N,R
// Property: preserveActivelyViewedGroupOnRefreshEnabled; attributes: TB,N,R
// Property: dedupStableConnectionRebuildsEnabled; attributes: TB,N,R
// Property: operaPlayerViewPrerollEnabled; attributes: TB,N,R
// Property: sspMuteVolumeCacheFixEnabled; attributes: TB,N,R
// Property: fullPageGesturesEnabled; attributes: TB,N,R
// Property: sspAnnounceAutoAdvanceBeforeFinishLooping; attributes: TB,N,R
// Property: emitWillPerformAutoAdvance; attributes: TB,N,R
// Property: contextTappableOverlayFrameFixEnabled; attributes: TB,N,R
// Property: contextTappableOverlayFrameFixDeferredEnabled; attributes: TB,N,R
// Property: sspPagePausedOnExternalPauseEnabled; attributes: TB,N,R
// Property: emitOSPOnCloseView; attributes: TB,N,R
// Property: flushPendingPlaybackErrorEnabled; attributes: TB,N,R
// Property: attributePlaybackErrorToErroringPage; attributes: TB,N,R
// Property: enableKeyboardResize; attributes: TB,N,R
// Property: presentationFramebufferSnapshotEnabled; attributes: TB,N,R
// Property: thumbnailPrelayoutAnimatedOnlyEnabled; attributes: TB,N,R
// Property: operaPresentationAnimationConfig; attributes: T@"SCOperaPresentationDataModel",N,R
// Property: playlistFetcherMaxRetryCount; attributes: Tq,N,R
// Property: playlistFetcherRetryDelayMs; attributes: Tq,N,R
// Property: playlistFetcherFailureRecoveryEnabled; attributes: TB,N,R
// Property: mediaPrepStickyFailureEnabled; attributes: TB,N,R
// Property: mediaPrepRecoverableErrorRetryCount; attributes: Tq,N,R
// Property: coalescePreloadRebuildEnabled; attributes: TB,N,R
// Property: coalescePreloadRebuildSameTurnEnabled; attributes: TB,N,R
// Property: enableFlexibleOperaViewer; attributes: TB,N,R
// Property: fixMediaViewFrameEnabled; attributes: TB,N,R
// Property: fixLeftTapGradientOnActionBarTapEnabled; attributes: TB,N,R

// -[SCOperaConfigProvider initWithSessionContext:presentingConfig:circumstanceEngine:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x102cacfbc

// -[SCOperaConfigProvider initWithSessionContext:presentingConfig:asyncQueueProvider:circumstanceEngine:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x102cad34c

// -[SCOperaConfigProvider enableMediaDurationLoadInMediaResolver]
// Type encoding: B16@0:8
// Implementation: 0x102cad3c4

// -[SCOperaConfigProvider normalizeMediaSizeInMediaResolver]
// Type encoding: B16@0:8
// Implementation: 0x102cad568

// -[SCOperaConfigProvider enablePagePropertiesCleanupOnSSPTeardown]
// Type encoding: B16@0:8
// Implementation: 0x102cad664

// -[SCOperaConfigProvider playbackOnBeginTransitionEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102cad760

// -[SCOperaConfigProvider enableEarlyPlaybackInSSP]
// Type encoding: B16@0:8
// Implementation: 0x102cad85c

// -[SCOperaConfigProvider attributeLoopStallsEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102cad958

// -[SCOperaConfigProvider sspAutoLoopDelayEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102cada54

// -[SCOperaConfigProvider enableMediaPositionFix]
// Type encoding: B16@0:8
// Implementation: 0x102cadb50

// -[SCOperaConfigProvider operaViewLongPressGestureEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102cadc4c

// -[SCOperaConfigProvider dismissGestureConfig]
// Type encoding: @16@0:8
// Implementation: 0x102cadd60

// -[SCOperaConfigProvider enablePageLoadingStateFix]
// Type encoding: B16@0:8
// Implementation: 0x102cae000

// -[SCOperaConfigProvider mediaResolverAdsFetchOption]
// Type encoding: Q16@0:8
// Implementation: 0x102cae0fc

// -[SCOperaConfigProvider enablesInnerScrollSupportForNewScrollView]
// Type encoding: B16@0:8
// Implementation: 0x102cae2a8

// -[SCOperaConfigProvider disableTapsWhilePanningInOperaScrollView]
// Type encoding: B16@0:8
// Implementation: 0x102cae3a4

// -[SCOperaConfigProvider pageabilityOverwriteOnLoadingPage]
// Type encoding: @16@0:8
// Implementation: 0x102cae4a0

// -[SCOperaConfigProvider adVariantsAllowlist]
// Type encoding: @16@0:8
// Implementation: 0x102cae4dc

// -[SCOperaConfigProvider enableCustomizableSwipeDirectionResolution]
// Type encoding: B16@0:8
// Implementation: 0x102cae78c

// -[SCOperaConfigProvider extraAngleToDetectSwipeToAttachmentOnAds]
// Type encoding: q16@0:8
// Implementation: 0x102cae888

// -[SCOperaConfigProvider enableRetryOnMediaErrorsInSSP]
// Type encoding: B16@0:8
// Implementation: 0x102cae984

// -[SCOperaConfigProvider videoPlayerPreloadStrategy]
// Type encoding: @16@0:8
// Implementation: 0x102caec30

// -[SCOperaConfigProvider sspUseLazyVideoPool]
// Type encoding: B16@0:8
// Implementation: 0x102caef68

// -[SCOperaConfigProvider playbackFrameRateTrackerEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102caf064

// -[SCOperaConfigProvider timeThresholdForAPICallsToAssertMs]
// Type encoding: Q16@0:8
// Implementation: 0x102caf160

// -[SCOperaConfigProvider timeThresholdForAPICallsToLogMs]
// Type encoding: Q16@0:8
// Implementation: 0x102caf264

// -[SCOperaConfigProvider shouldIgnoreLoadingStateChangeForPageToLayersResolution]
// Type encoding: B16@0:8
// Implementation: 0x102caf368

// -[SCOperaConfigProvider useMediaBundleResolution]
// Type encoding: B16@0:8
// Implementation: 0x102caf464

// -[SCOperaConfigProvider useDownloadedSharingURL]
// Type encoding: B16@0:8
// Implementation: 0x102caf560

// -[SCOperaConfigProvider useScrollViewOffsetForPages]
// Type encoding: B16@0:8
// Implementation: 0x102caf65c

// -[SCOperaConfigProvider enableCornerRadiusOnContainerView]
// Type encoding: B16@0:8
// Implementation: 0x102caf758

// -[SCOperaConfigProvider makeRequestsWithUserVisiblePriority]
// Type encoding: B16@0:8
// Implementation: 0x102caf854

// -[SCOperaConfigProvider resolverItemHandleCacheLimit]
// Type encoding: i16@0:8
// Implementation: 0x102caf950

// -[SCOperaConfigProvider publishPlaylistItemId]
// Type encoding: B16@0:8
// Implementation: 0x102cafa4c

// -[SCOperaConfigProvider stickySlotsUnifiedConfig]
// Type encoding: @16@0:8
// Implementation: 0x102cafb48

// -[SCOperaConfigProvider enableNewPITNReport]
// Type encoding: B16@0:8
// Implementation: 0x102cafcf4

// -[SCOperaConfigProvider doNotRestoreNativeVolume]
// Type encoding: B16@0:8
// Implementation: 0x102cafdf0

// -[SCOperaConfigProvider enableNewPITNDecouplingFromMediaDisplay]
// Type encoding: B16@0:8
// Implementation: 0x102cafeec

// -[SCOperaConfigProvider disablePauseUponSeekingForNeoplayer]
// Type encoding: B16@0:8
// Implementation: 0x102caffe8

// -[SCOperaConfigProvider neoPlayerFirstFrameRevealHandoffEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102cb00e4

// -[SCOperaConfigProvider enableNewPITNMimickingOldAbandoned]
// Type encoding: B16@0:8
// Implementation: 0x102cb01e0

// -[SCOperaConfigProvider enableAdVideoPauseOnScrollForVOpera]
// Type encoding: B16@0:8
// Implementation: 0x102cb02dc

// -[SCOperaConfigProvider gapBetweenGroupsForVerticalNavigation]
// Type encoding: q16@0:8
// Implementation: 0x102cb0458

// -[SCOperaConfigProvider exposeContextScopeOffMainThread]
// Type encoding: B16@0:8
// Implementation: 0x102cb0554

// -[SCOperaConfigProvider adsLoadingStateFixEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102cb0650

// -[SCOperaConfigProvider publicStoriesAdInsertionRetryEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102cb074c

// -[SCOperaConfigProvider shouldScaleMediaProperly]
// Type encoding: B16@0:8
// Implementation: 0x102cb0848

// -[SCOperaConfigProvider shouldIgnoreDefaultFastStartStrategyForVerticalNavigation]
// Type encoding: B16@0:8
// Implementation: 0x102cb0944

// -[SCOperaConfigProvider videoContentPauseFixEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102cb0a40

// -[SCOperaConfigProvider viewModelsRemovalFixEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102cb0b3c

// -[SCOperaConfigProvider enableLoadStateLoggingOnPageOpen]
// Type encoding: B16@0:8
// Implementation: 0x102cb0c38

// -[SCOperaConfigProvider enableFixForOvercountedPITNAbandonInSSP]
// Type encoding: B16@0:8
// Implementation: 0x102cb0d34

// -[SCOperaConfigProvider itemLoadStateFallbackEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102cb0e30

// -[SCOperaConfigProvider backdropBlurFixEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102cb0f2c

// -[SCOperaConfigProvider enableRetryOnAssetRepoErrorInMediaResolver]
// Type encoding: B16@0:8
// Implementation: 0x102cb1028

// -[SCOperaConfigProvider enableDoubleResolutionProtectionInMediaResolver]
// Type encoding: B16@0:8
// Implementation: 0x102cb1124

// -[SCOperaConfigProvider disableDeferredUpdateOfPageVCs]
// Type encoding: B16@0:8
// Implementation: 0x102cb1220

// -[SCOperaConfigProvider eventAnnouncerV2Enabled]
// Type encoding: B16@0:8
// Implementation: 0x102cb131c

// -[SCOperaConfigProvider sceneDelegateStatusBarEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102cb13f0

// -[SCOperaConfigProvider offsetBasedVideoPausingFixEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102cb14ec

// -[SCOperaConfigProvider disablePageBottomSafeAreaHeightForIpad]
// Type encoding: B16@0:8
// Implementation: 0x102cb15e8

// -[SCOperaConfigProvider adsDismissGestureConfig]
// Type encoding: @16@0:8
// Implementation: 0x102cb16e4

// -[SCOperaConfigProvider organicDismissGestureConfig]
// Type encoding: @16@0:8
// Implementation: 0x102cb1890

// -[SCOperaConfigProvider enableNonBlockingLoadinglayer]
// Type encoding: B16@0:8
// Implementation: 0x102cb1a3c

// -[SCOperaConfigProvider dismissalAnimationDurationMs]
// Type encoding: q16@0:8
// Implementation: 0x102cb1b38

// -[SCOperaConfigProvider adsDismissalAnimationDurationMs]
// Type encoding: q16@0:8
// Implementation: 0x102cb1c34

// -[SCOperaConfigProvider ignoreAdInsertionAfterMovingPlaylistGroup]
// Type encoding: B16@0:8
// Implementation: 0x102cb1d30

// -[SCOperaConfigProvider enableACFReloadConfigOnConnectivityChange]
// Type encoding: B16@0:8
// Implementation: 0x102cb1e2c

// -[SCOperaConfigProvider networkSnapshotLoggingForStallsEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102cb1f28

// -[SCOperaConfigProvider networkSnapshotLoggingForStallsThresholdMs]
// Type encoding: q16@0:8
// Implementation: 0x102cb2024

// -[SCOperaConfigProvider networkSnapshotLoggingForIntentToNextEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102cb2120

// -[SCOperaConfigProvider networkSnapshotLoggingForIntentToNextThresholdMs]
// Type encoding: q16@0:8
// Implementation: 0x102cb221c

// -[SCOperaConfigProvider enableAVPlayerAutoWaitToMinimizeStall]
// Type encoding: B16@0:8
// Implementation: 0x102cb2318

// -[SCOperaConfigProvider validateDraggingParamsAssertEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102cb2414

// -[SCOperaConfigProvider enablePauseControllerInOperaVC]
// Type encoding: B16@0:8
// Implementation: 0x102cb2510

// -[SCOperaConfigProvider enablePauseControllerInMixedFeed]
// Type encoding: B16@0:8
// Implementation: 0x102cb260c

// -[SCOperaConfigProvider enabledMixedFeedResumeStateFix]
// Type encoding: B16@0:8
// Implementation: 0x102cb2708

// -[SCOperaConfigProvider presentedViewControllerMonitorTimerIntervalMs]
// Type encoding: q16@0:8
// Implementation: 0x102cb2804

// -[SCOperaConfigProvider resetRecycledLayerTransformEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102cb2900

// -[SCOperaConfigProvider cgRectIntegralEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102cb29fc

// -[SCOperaConfigProvider playbackOnBeginTransitionEnabledForAds]
// Type encoding: B16@0:8
// Implementation: 0x102cb2af8

// -[SCOperaConfigProvider tapBackGradientViewEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102cb2bf4

// -[SCOperaConfigProvider optimizeHorizontalPageTransitions]
// Type encoding: B16@0:8
// Implementation: 0x102cb2cf0

// -[SCOperaConfigProvider flickerFixSspAutoAdvance]
// Type encoding: B16@0:8
// Implementation: 0x102cb2dec

// -[SCOperaConfigProvider sspCheckAdBreaksOnExternalSeekEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102cb2ee8

// -[SCOperaConfigProvider enableCameraLifecycleCallbacks]
// Type encoding: B16@0:8
// Implementation: 0x102cb2fe4

// -[SCOperaConfigProvider getViewSource]
// Type encoding: q16@0:8
// Implementation: 0x102cb30e0

// -[SCOperaConfigProvider boolValueForConfigKeySync:defaultValue:featureProvidedSignals:]
// Type encoding: B36@0:8@16B24@28
// Implementation: 0x102cb310c

// -[SCOperaConfigProvider floatValueForConfigKeySync:defaultValue:featureProvidedSignals:]
// Type encoding: f36@0:8@16f24@28
// Implementation: 0x102cb3250

// -[SCOperaConfigProvider intValueForConfigKeySync:defaultValue:featureProvidedSignals:]
// Type encoding: i36@0:8@16i24@28
// Implementation: 0x102cb32e8

// -[SCOperaConfigProvider longValueForConfigKeySync:defaultValue:featureProvidedSignals:]
// Type encoding: q40@0:8@16q24@32
// Implementation: 0x102cb3424

// -[SCOperaConfigProvider stringValueForConfigKeySync:defaultValue:featureProvidedSignals:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x102cb34b8

// -[SCOperaConfigProvider stringArrayValueForConfigKeySync:defaultValue:featureProvidedSignals:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x102cb3678

// -[SCOperaConfigProvider manualExposureValueForConfigKeySync:featureProvidedSignals:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x102cb3748

// -[SCOperaConfigProvider protoValueForConfigKeySync:defaultValue:featureProvidedSignals:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x102cb37d0

// -[SCOperaConfigProvider prefetchPluginConfig]
// Type encoding: @16@0:8
// Implementation: 0x102cb3880

// -[SCOperaConfigProvider bsrThresholdMs]
// Type encoding: q16@0:8
// Implementation: 0x102cb3a00

// -[SCOperaConfigProvider ambientAudioBehaviorForAllNonSpotlight]
// Type encoding: B16@0:8
// Implementation: 0x102cb3afc

// -[SCOperaConfigProvider hideBlurEffectAnimationDurationMs]
// Type encoding: q16@0:8
// Implementation: 0x102cb3bf8

// -[SCOperaConfigProvider sspUseImageContentControllerCallbacks]
// Type encoding: B16@0:8
// Implementation: 0x102cb3cf4

// -[SCOperaConfigProvider snapbackZoomingDurationMs]
// Type encoding: q16@0:8
// Implementation: 0x102cb3df0

// -[SCOperaConfigProvider pauseMusicOnMuteSwiftOverride]
// Type encoding: B16@0:8
// Implementation: 0x102cb3eec

// -[SCOperaConfigProvider viewIfLoadedFixEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102cb3fe8

// -[SCOperaConfigProvider sspWatchTimeFixEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102cb40e4

// -[SCOperaConfigProvider disableDeckDismissalFix]
// Type encoding: B16@0:8
// Implementation: 0x102cb41e0

// -[SCOperaConfigProvider acf2DPrefetchPrioritizeCurrentStoryEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102cb42dc

// -[SCOperaConfigProvider sspEnableMediaIsBeingPreparedForDisplay]
// Type encoding: B16@0:8
// Implementation: 0x102cb43d8

// -[SCOperaConfigProvider treatCarPlayAsHeadphones]
// Type encoding: B16@0:8
// Implementation: 0x102cb44d4

// -[SCOperaConfigProvider sspEnableAudioRateEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102cb45d0

// -[SCOperaConfigProvider sspDisablePlayerPreparationOnViewUpdate]
// Type encoding: B16@0:8
// Implementation: 0x102cb46cc

// -[SCOperaConfigProvider sspPlayOnWillAppearEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102cb47c8

// -[SCOperaConfigProvider ignorePagePreloadDistance]
// Type encoding: B16@0:8
// Implementation: 0x102cb48c4

// -[SCOperaConfigProvider audioContinuityEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102cb49c0

// -[SCOperaConfigProvider resumeMusicButKeepMuteSwitchOverride]
// Type encoding: B16@0:8
// Implementation: 0x102cb4abc

// -[SCOperaConfigProvider cleanupDistantPagePropertiesEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102cb4bb8

// -[SCOperaConfigProvider batchPreloadUpdateAcrossGroupsEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102cb4cb4

// -[SCOperaConfigProvider preserveActivelyViewedGroupOnRefreshEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102cb4db0

// -[SCOperaConfigProvider dedupStableConnectionRebuildsEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102cb4eac

// -[SCOperaConfigProvider operaPlayerViewPrerollEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102cb4fa8

// -[SCOperaConfigProvider sspMuteVolumeCacheFixEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102cb50a4

// -[SCOperaConfigProvider fullPageGesturesEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102cb51a0

// -[SCOperaConfigProvider sspAnnounceAutoAdvanceBeforeFinishLooping]
// Type encoding: B16@0:8
// Implementation: 0x102cb529c

// -[SCOperaConfigProvider emitWillPerformAutoAdvance]
// Type encoding: B16@0:8
// Implementation: 0x102cb5398

// -[SCOperaConfigProvider contextTappableOverlayFrameFixEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102cb5494

// -[SCOperaConfigProvider contextTappableOverlayFrameFixDeferredEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102cb5590

// -[SCOperaConfigProvider sspPagePausedOnExternalPauseEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102cb568c

// -[SCOperaConfigProvider emitOSPOnCloseView]
// Type encoding: B16@0:8
// Implementation: 0x102cb5788

// -[SCOperaConfigProvider flushPendingPlaybackErrorEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102cb5884

// -[SCOperaConfigProvider attributePlaybackErrorToErroringPage]
// Type encoding: B16@0:8
// Implementation: 0x102cb5980

// -[SCOperaConfigProvider enableKeyboardResize]
// Type encoding: B16@0:8
// Implementation: 0x102cb5a7c

// -[SCOperaConfigProvider presentationFramebufferSnapshotEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102cb5b78

// -[SCOperaConfigProvider thumbnailPrelayoutAnimatedOnlyEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102cb5c74

// -[SCOperaConfigProvider operaPresentationAnimationConfig]
// Type encoding: @16@0:8
// Implementation: 0x102cb5d70

// -[SCOperaConfigProvider playlistFetcherMaxRetryCount]
// Type encoding: q16@0:8
// Implementation: 0x102cb5f14

// -[SCOperaConfigProvider playlistFetcherRetryDelayMs]
// Type encoding: q16@0:8
// Implementation: 0x102cb6010

// -[SCOperaConfigProvider playlistFetcherFailureRecoveryEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102cb610c

// -[SCOperaConfigProvider mediaPrepStickyFailureEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102cb6208

// -[SCOperaConfigProvider mediaPrepRecoverableErrorRetryCount]
// Type encoding: q16@0:8
// Implementation: 0x102cb6304

// -[SCOperaConfigProvider coalescePreloadRebuildEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102cb6400

// -[SCOperaConfigProvider coalescePreloadRebuildSameTurnEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102cb64fc

// -[SCOperaConfigProvider enableFlexibleOperaViewer]
// Type encoding: B16@0:8
// Implementation: 0x102cb65f8

// -[SCOperaConfigProvider fixMediaViewFrameEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102cb66f4

// -[SCOperaConfigProvider fixLeftTapGradientOnActionBarTapEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102cb67f0

// -[SCOperaConfigProvider init]
// Type encoding: @16@0:8
// Implementation: 0x102cb697c

// -[SCOperaConfigProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x102cb69dc

@end
