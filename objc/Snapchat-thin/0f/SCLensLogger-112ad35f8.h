// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensLogger
// Superclass: NSObject
// Address: 0x112ad35f8

@interface SCLensLogger

// Property: lensSessionId; attributes: T@"NSString",C,N,V_lensSessionId
// Property: startViewingTime; attributes: T@"SCTimestamp",&,N,V_startViewingTime
// Property: startViewingCpuTime; attributes: Td,N,V_startViewingCpuTime
// Property: currentInactiveTime; attributes: Td,N,V_currentInactiveTime
// Property: totalInactiveTime; attributes: Td,N,V_totalInactiveTime
// Property: cameraStartViewingTime; attributes: Td,N,V_cameraStartViewingTime
// Property: startRecordingTime; attributes: T@"SCTimestamp",&,N,V_startRecordingTime
// Property: endRecordingTime; attributes: T@"SCTimestamp",&,N,V_endRecordingTime
// Property: spinStartTime; attributes: Td,N,V_spinStartTime
// Property: currentViewingLens; attributes: T@"SCLens",&,V_currentViewingLens
// Property: currentApplyContext; attributes: T@"<SCLensApplyContext>",&,V_currentApplyContext
// Property: prevViewingLens; attributes: T@"SCLens",&,N,V_prevViewingLens
// Property: currentSpinningLens; attributes: T@"SCLens",&,V_currentSpinningLens
// Property: withAttachmentOpen; attributes: TB,N,V_withAttachmentOpen
// Property: lensCount; attributes: TQ,N,V_lensCount
// Property: currentLensIndex; attributes: Tq,N,V_currentLensIndex
// Property: startViewingTimeLensOption; attributes: Td,N,V_startViewingTimeLensOption
// Property: lensOptionCount; attributes: TQ,N,V_lensOptionCount
// Property: currentLensOptionIndex; attributes: Tq,N,V_currentLensOptionIndex
// Property: lensOptionSwipeCount; attributes: Tq,N,V_lensOptionSwipeCount
// Property: triggerFiredForCurrentLens; attributes: T@"NSMutableDictionary",&,N,V_triggerFiredForCurrentLens
// Property: frontCameraMaxFacesCount; attributes: TQ,N,V_frontCameraMaxFacesCount
// Property: backCameraMaxFacesCount; attributes: TQ,N,V_backCameraMaxFacesCount
// Property: frontCameraSnapFacesCount; attributes: TQ,N,V_frontCameraSnapFacesCount
// Property: backCameraSnapFacesCount; attributes: TQ,N,V_backCameraSnapFacesCount
// Property: firstFaceRenderTimestampSec; attributes: Td,N,V_firstFaceRenderTimestampSec
// Property: firstTriggerTimestampSec; attributes: Td,N,V_firstTriggerTimestampSec
// Property: swipeFunnel; attributes: T@"NSDictionary",&,V_swipeFunnel
// Property: swipeFunnelId; attributes: T@"NSString",&,V_swipeFunnelId
// Property: lensSwipesObservable; attributes: T@"SCObservable",R,N,V_lensSwipesSubject
// Property: arBarTabSessionId; attributes: T@"NSString",R,N
// Property: arBarTabCategoryId; attributes: T@"NSString",R,N
// Property: lensSwipeId; attributes: T@"NSString",R,N
// Property: unlockableLensTracker; attributes: T@"<SCUnlockableLensTracking>",R,N
// Property: isLensSessionPaused; attributes: TB,R,N
// Property: lensSource; attributes: Tq,R,N
// Property: lensThumbnailLogger; attributes: T@"<SCLensThumbnailCompoundLogging>",R,N,V_lensThumbnailLogger
// Property: frontCameraActive; attributes: TB,N,V_frontCameraActive
// Property: snapSource; attributes: Tq,N,V_snapSource
// Property: gamePlayInfo; attributes: T@"SCAGamePlayInfo",&,N
// Property: mediaType; attributes: Tq,N,V_mediaType
// Property: productMediaType; attributes: Tq,N,V_productMediaType
// Property: isRedirectToStore; attributes: TB,N,V_isRedirectToStore
// Property: isRedirectToWebview; attributes: TB,N,V_isRedirectToWebview
// Property: isMultiURL; attributes: TB,N,V_isMultiURL
// Property: currentLensOptionId; attributes: T@"NSString",&,N,V_currentLensOptionId
// Property: currentLensOptionValue; attributes: T@"NSString",&,N,V_currentLensOptionValue
// Property: currentLensOptionSourceType; attributes: Tq,N,V_currentLensOptionSourceType
// Property: topSnapAdRequestId; attributes: T@"NSString",&,N,V_topSnapAdRequestId
// Property: topSnapAdId; attributes: T@"NSString",&,N,V_topSnapAdId
// Property: lensReadyTracker; attributes: T@"<SCLensProcessingReadyTracking>",&,V_lensReadyTracker
// Property: lensProcessingUsageProvider; attributes: T@"<SCLensProcessingUsageProviding>",W,V_lensProcessingUsageProvider
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: baseSessionId; attributes: T@"NSString",R,N
// Property: lensSourceType; attributes: Tq,R,N
// Property: currentLens; attributes: T@"SCLens",R,N
// Property: lensSessionInfoObservable; attributes: T@"SCObservable",R,N,V_lensSessionInfoSubject
// Property: lensSwipeIdObservable; attributes: T@"SCObservable",R,N,V_lensSwipeIdSubject
// Property: contextSessionId; attributes: T@"NSString",&,N,V_contextSessionId
// Property: snapSourceObservable; attributes: T@"SCObservable",R,N,V_snapSourceSubject
// Property: trackingEventsObservable; attributes: T@"SCObservable",R,N,V_trackingEventsSubject
// Property: isLensSessionActive; attributes: TB,R,N

// -[SCLensLogger initWithBlizzardLogger:lensGrapheneLogger:lensThumbnailLogger:lensDownloadLogger:performanceAutomationLogger:lensInfoButtonVisibility:applicationLifecycleEvents:unlockableLensTrackerServices:bloopsFeature:bloopsUserOnboardingStatusProvider:lensContentCacheProvider:lensCarouselStudySettings:audioSession:sponsoredLensScheduleService:lensFetchTypeProvider:performerProvider:lensPlusTierService:nglStudySettings:lensPlusServices:]
// Type encoding: @168@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160
// Implementation: 0x10074c0f8

// -[SCLensLogger setupWithFpsTracker:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061f7b40

// -[SCLensLogger setupWithClearEffectObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061f7bb0

// -[SCLensLogger fpsTracker]
// Type encoding: @16@0:8
// Implementation: 0x1061f7d14

// -[SCLensLogger _observeApplicationLifecycleEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x10074cadc

// -[SCLensLogger _didChangeUserSessionInteracted:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061f7d84

// -[SCLensLogger lensSessionId]
// Type encoding: @16@0:8
// Implementation: 0x100c7884c

// -[SCLensLogger baseSessionId]
// Type encoding: @16@0:8
// Implementation: 0x1061f7d8c

// -[SCLensLogger arBarTabSessionId]
// Type encoding: @16@0:8
// Implementation: 0x1061f7dd0

// -[SCLensLogger _arBarTabSessionIdForSessionInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x1061f7e20

// -[SCLensLogger arBarTabCategoryId]
// Type encoding: @16@0:8
// Implementation: 0x1061f7eb8

// -[SCLensLogger _arBarTabCategoryIdForSessionInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x1061f7f08

// -[SCLensLogger lensSwipeId]
// Type encoding: @16@0:8
// Implementation: 0x1061f7fa0

// -[SCLensLogger currentLens]
// Type encoding: @16@0:8
// Implementation: 0x1061f7fc8

// -[SCLensLogger lensSource]
// Type encoding: q16@0:8
// Implementation: 0x1061f8028

// -[SCLensLogger lensSourceType]
// Type encoding: q16@0:8
// Implementation: 0x1061f8098

// -[SCLensLogger _lensSourceTypeForSessionInfo:]
// Type encoding: q24@0:8@16
// Implementation: 0x1061f80f8

// -[SCLensLogger unlockableLensTracker]
// Type encoding: @16@0:8
// Implementation: 0x1061f81ac

// -[SCLensLogger setSnapSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x10074c6c4

// -[SCLensLogger lensSelectionOverride]
// Type encoding: @16@0:8
// Implementation: 0x1061f8220

// -[SCLensLogger _overrideLensSelectionWithSelection:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061f825c

// -[SCLensLogger _notifyLensSessionInfoChangedForSessionState:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061f829c

// -[SCLensLogger _notifyLensSessionInfoChanged]
// Type encoding: v16@0:8
// Implementation: 0x1061f8328

// -[SCLensLogger _lensSessionInfoWithState:carouselSessionInfo:]
// Type encoding: @32@0:8Q16@24
// Implementation: 0x1061f8438

// -[SCLensLogger _lensSessionDidStartWithSessionId:sourceType:entranceType:sessionState:]
// Type encoding: v48@0:8@16q24Q32@40
// Implementation: 0x1061f8590

// -[SCLensLogger isLensSessionActive]
// Type encoding: B16@0:8
// Implementation: 0x1061f86b0

// -[SCLensLogger isLensSessionPaused]
// Type encoding: B16@0:8
// Implementation: 0x1061f86c0

// -[SCLensLogger _isLensSessionStopped]
// Type encoding: B16@0:8
// Implementation: 0x1061f86d0

// -[SCLensLogger _lensSessionDidResume:sessionState:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1061f86e0

// -[SCLensLogger _lensSessionDidPause:sessionState:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1061f8780

// -[SCLensLogger _lensSessionDidStop:isPrevStatePaused:sessionState:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x1061f87dc

// -[SCLensLogger _updateThumbnailLoggerWithLensSource:entranceType:]
// Type encoding: v32@0:8q16Q24
// Implementation: 0x1061f8994

// -[SCLensLogger lensSpinning:atIndex:selectionType:originalLensIndex:count:]
// Type encoding: v56@0:8@16Q24Q32Q40Q48
// Implementation: 0x1061f89f4

// -[SCLensLogger _lensSpinning:atIndex:selectionType:originalLensIndex:count:]
// Type encoding: v56@0:8@16Q24Q32Q40Q48
// Implementation: 0x1061f8a88

// -[SCLensLogger lensPresented:atIndex:selectionType:originalLensIndex:count:afterRecording:launchData:]
// Type encoding: v68@0:8@16Q24Q32Q40Q48B56@60
// Implementation: 0x1061f8e04

// -[SCLensLogger _lensPresented:atIndex:selectionType:originalLensIndex:count:afterRecording:launchData:]
// Type encoding: v68@0:8@16Q24Q32Q40Q48B56@60
// Implementation: 0x1061f8f50

// -[SCLensLogger arKitSessionStarted]
// Type encoding: v16@0:8
// Implementation: 0x1061f9478

// -[SCLensLogger arKitSessionReceivedFirstFrame]
// Type encoding: v16@0:8
// Implementation: 0x1061f9524

// -[SCLensLogger closeAttachmentView]
// Type encoding: v16@0:8
// Implementation: 0x1061f95d0

// -[SCLensLogger openAttachmentView]
// Type encoding: v16@0:8
// Implementation: 0x1061f95e0

// -[SCLensLogger openAttachmentViewWithLensCarouselActivated]
// Type encoding: v16@0:8
// Implementation: 0x1061f95e8

// -[SCLensLogger _fillLensSwipeEvent:lensSourceType:lens:lensSwipeOptionCount:indexPos:snapSource:lensSelection:notificationId:]
// Type encoding: @80@0:8@16q24@32q40q48q56@64@72
// Implementation: 0x1061f961c

// -[SCLensLogger _getLensAttachmentTypeFromAttachmentString:]
// Type encoding: q24@0:8@16
// Implementation: 0x1061f9dfc

// -[SCLensLogger activeStateCameraSourceValue]
// Type encoding: @16@0:8
// Implementation: 0x1061f9eb8

// -[SCLensLogger _overrideLensSourceIfNeededForLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061f9f1c

// -[SCLensLogger _isARBarMiniCameraActive]
// Type encoding: B16@0:8
// Implementation: 0x1061f9fc8

// -[SCLensLogger _arBarLensSourceOverride]
// Type encoding: q16@0:8
// Implementation: 0x1061fa03c

// -[SCLensLogger tabSessionLoggingEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x100c7eeec

// -[SCLensLogger trackNavigationToCameraFromPage:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061fa0bc

// -[SCLensLogger trackNavigationToCameraFromBackground]
// Type encoding: v16@0:8
// Implementation: 0x1061fa100

// -[SCLensLogger trackNavigationToCameraFromSnapCaptureWithSnapSent:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061fa144

// -[SCLensLogger _fulfillLensSwipeInfoWitAfterRecording:]
// Type encoding: @20@0:8B16
// Implementation: 0x1061fa188

// -[SCLensLogger _didExitLens:afterRecording:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x1061fa25c

// -[SCLensLogger _didExitLens:lensTimeInfo:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1061fa4b8

// -[SCLensLogger logLensSwipeEvent:afterRecording:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x1061fa96c

// -[SCLensLogger _logSwipeEvent:interaction:lensId:swipeInfo:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1061faed8

// -[SCLensLogger _processSwipeEvent:interaction:swipeInfo:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1061fafa4

// -[SCLensLogger _updateLensPlusParameters:lens:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1061fb05c

// -[SCLensLogger _addDelayedSwipeEvent:interaction:lensId:swipeInfo:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1061fb240

// -[SCLensLogger observeFpsTracker:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061fb418

// -[SCLensLogger _handleEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061fb5ac

// -[SCLensLogger _reportDelayedSwipes]
// Type encoding: v16@0:8
// Implementation: 0x1061fb850

// -[SCLensLogger _logDelayedSwipe:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061fb964

// -[SCLensLogger updateSwipeFunnel:forFunnelId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1061fba4c

// -[SCLensLogger hasSwipeFunnelForFunnelId:]
// Type encoding: B24@0:8@16
// Implementation: 0x1061fbb18

// -[SCLensLogger _setCurrentSwipeFunnelForEvent:forLensId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1061fbba8

// -[SCLensLogger _resetSwipeFunnel]
// Type encoding: v16@0:8
// Implementation: 0x1061fbd28

// -[SCLensLogger _updateSwipeIdAndNotifyWithLensId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061fbd5c

// -[SCLensLogger _lensInteractionWithSwipeInfo:lensSourceType:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1061fbdf0

// -[SCLensLogger _noFillForLens:carouselIndex:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1061fc3b4

// -[SCLensLogger _sponsoredScheduleNamespaceDataForLens:]
// Type encoding: @24@0:8@16
// Implementation: 0x1061fc488

// -[SCLensLogger resetPresentedLensAfterRecording:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061fc608

// -[SCLensLogger resetCurrentViewingLensIfPossibleAfterRecording:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061fc640

// -[SCLensLogger recordingStarted]
// Type encoding: v16@0:8
// Implementation: 0x1061fc6b0

// -[SCLensLogger recordingStopped]
// Type encoding: v16@0:8
// Implementation: 0x1061fc748

// -[SCLensLogger cameraToggledWithAction:recording:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x1061fc794

// -[SCLensLogger _logCameraFlipEvent:isRecording:action:sourceType:]
// Type encoding: v44@0:8q16B24q28q36
// Implementation: 0x1061fc878

// -[SCLensLogger triggerFired:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061fcb7c

// -[SCLensLogger faceCountChanged:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1061fcca0

// -[SCLensLogger lensOptionPresentedAtIndex:lensOptionId:lensOptionValue:lensOptionCount:lensOptionSourceType:]
// Type encoding: v56@0:8q16@24@32Q40q48
// Implementation: 0x1061fcdc0

// -[SCLensLogger lensOptionDisplayedAtIndex:mediaType:allowedMediaTypes:]
// Type encoding: v40@0:8Q16Q24Q32
// Implementation: 0x1061fd158

// -[SCLensLogger lensOptionSessionStopped]
// Type encoding: v16@0:8
// Implementation: 0x1061fd1c0

// -[SCLensLogger _logMediaPickerSession]
// Type encoding: v16@0:8
// Implementation: 0x1061fd1fc

// -[SCLensLogger trackLensInteraction:appliedLensId:beforeSnap:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1061fd380

// -[SCLensLogger trackLensInteractionForUnlockableLensTracker:appliedLensId:beforeSnap:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1061fd510

// -[SCLensLogger _currentCameraType]
// Type encoding: q16@0:8
// Implementation: 0x1061fd5d4

// -[SCLensLogger logCustomLensInteractions:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061fd5ec

// -[SCLensLogger logCustomLensEventsForEffectId:sessionId:snapSource:interactions:]
// Type encoding: v48@0:8@16@24q32@40
// Implementation: 0x1061fd690

// -[SCLensLogger _customLensEventsForEffectId:interactionName:interactionValue:snapSource:]
// Type encoding: @48@0:8@16@24@32q40
// Implementation: 0x1061fd87c

// -[SCLensLogger logCreatorLensEventsForEffectId:interactions:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1061fd9a4

// -[SCLensLogger lensMetricsEventEmitted:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061fdb24

// -[SCLensLogger setEffectComponent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061fdccc

// -[SCLensLogger setProcessingPerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061fdcd8

// -[SCLensLogger _logPerformanceAutomationEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061fdd08

// -[SCLensLogger logTextureSavedEvent]
// Type encoding: v16@0:8
// Implementation: 0x1061fdd0c

// -[SCLensLogger setCTLensSnapSessionId:forLensId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1061fdd14

// -[SCLensLogger snapSessionIdForLensId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1061fddb4

// -[SCLensLogger _applicationWillResignActive]
// Type encoding: v16@0:8
// Implementation: 0x1061fde2c

// -[SCLensLogger _applicationDidBecomeActive]
// Type encoding: v16@0:8
// Implementation: 0x100c787c4

// -[SCLensLogger _getLaterDate:compareDate:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1061fde98

// -[SCLensLogger _getEarlierDate:compareDate:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1061fdf00

// -[SCLensLogger _isVideoCallLensSource:]
// Type encoding: B24@0:8q16
// Implementation: 0x1061fdf68

// -[SCLensLogger _normalizedSessionId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1061fdf7c

// -[SCLensLogger setNotificationId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061fdff4

// -[SCLensLogger getNotificationIdForLensSessionId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1061fe05c

// -[SCLensLogger didUpdateLensCarouselSessionStateProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c7ef1c

// -[SCLensLogger _didUpdateLensCarouselSessionStateProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c7f910

// -[SCLensLogger _subscribeToLensSessionFlowStateObservableForProvider:lifecycle:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100c7fa34

// -[SCLensLogger _processLensSessionStateUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061fe1a8

// -[SCLensLogger _updateSessionInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061fe5d4

// -[SCLensLogger _shouldIncludeRecordingTimeForLens:]
// Type encoding: B24@0:8@16
// Implementation: 0x1061fe614

// -[SCLensLogger gamePlayInfo]
// Type encoding: @16@0:8
// Implementation: 0x1061fe698

// -[SCLensLogger setGamePlayInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c7f9f4

// -[SCLensLogger currentSessionInfo]
// Type encoding: @16@0:8
// Implementation: 0x100c78890

// -[SCLensLogger frontCameraActive]
// Type encoding: B16@0:8
// Implementation: 0x1061fe6d4

// -[SCLensLogger setFrontCameraActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x100c3d7b0

// -[SCLensLogger snapSource]
// Type encoding: q16@0:8
// Implementation: 0x1061fe6dc

// -[SCLensLogger mediaType]
// Type encoding: q16@0:8
// Implementation: 0x1061fe6e4

// -[SCLensLogger setMediaType:]
// Type encoding: v24@0:8q16
// Implementation: 0x1061fe6ec

// -[SCLensLogger productMediaType]
// Type encoding: q16@0:8
// Implementation: 0x1061fe6f4

// -[SCLensLogger setProductMediaType:]
// Type encoding: v24@0:8q16
// Implementation: 0x1061fe6fc

// -[SCLensLogger isRedirectToStore]
// Type encoding: B16@0:8
// Implementation: 0x1061fe704

// -[SCLensLogger setIsRedirectToStore:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061fe70c

// -[SCLensLogger isRedirectToWebview]
// Type encoding: B16@0:8
// Implementation: 0x1061fe714

// -[SCLensLogger setIsRedirectToWebview:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061fe71c

// -[SCLensLogger isMultiURL]
// Type encoding: B16@0:8
// Implementation: 0x1061fe724

// -[SCLensLogger setIsMultiURL:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061fe72c

// -[SCLensLogger lensThumbnailLogger]
// Type encoding: @16@0:8
// Implementation: 0x1061fe734

// -[SCLensLogger topSnapAdId]
// Type encoding: @16@0:8
// Implementation: 0x1061fe73c

// -[SCLensLogger setTopSnapAdId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061fe744

// -[SCLensLogger topSnapAdRequestId]
// Type encoding: @16@0:8
// Implementation: 0x1061fe774

// -[SCLensLogger setTopSnapAdRequestId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061fe77c

// -[SCLensLogger lensSessionInfoObservable]
// Type encoding: @16@0:8
// Implementation: 0x1007dbb6c

// -[SCLensLogger snapSourceObservable]
// Type encoding: @16@0:8
// Implementation: 0x100c7f37c

// -[SCLensLogger trackingEventsObservable]
// Type encoding: @16@0:8
// Implementation: 0x100c7f718

// -[SCLensLogger lensSwipesObservable]
// Type encoding: @16@0:8
// Implementation: 0x1061fe7ac

// -[SCLensLogger lensSwipeIdObservable]
// Type encoding: @16@0:8
// Implementation: 0x1061fe7b4

// -[SCLensLogger setLensSwipeId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061fe7bc

// -[SCLensLogger lensReadyTracker]
// Type encoding: @16@0:8
// Implementation: 0x1061fe7ec

// -[SCLensLogger setLensReadyTracker:]
// Type encoding: v24@0:8@16
// Implementation: 0x10074cce4

// -[SCLensLogger lensProcessingUsageProvider]
// Type encoding: @16@0:8
// Implementation: 0x1061fe7f8

// -[SCLensLogger setLensProcessingUsageProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061fe810

// -[SCLensLogger currentLensOptionId]
// Type encoding: @16@0:8
// Implementation: 0x1061fe81c

// -[SCLensLogger setCurrentLensOptionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061fe824

// -[SCLensLogger currentLensOptionValue]
// Type encoding: @16@0:8
// Implementation: 0x1061fe854

// -[SCLensLogger setCurrentLensOptionValue:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061fe85c

// -[SCLensLogger currentLensOptionSourceType]
// Type encoding: q16@0:8
// Implementation: 0x1061fe88c

// -[SCLensLogger setCurrentLensOptionSourceType:]
// Type encoding: v24@0:8q16
// Implementation: 0x1061fe894

// -[SCLensLogger contextSessionId]
// Type encoding: @16@0:8
// Implementation: 0x1061fe89c

// -[SCLensLogger setContextSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061fe8a4

// -[SCLensLogger setLensSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061fe8d4

// -[SCLensLogger startViewingTime]
// Type encoding: @16@0:8
// Implementation: 0x1061fe8dc

// -[SCLensLogger setStartViewingTime:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061fe8e4

// -[SCLensLogger startViewingCpuTime]
// Type encoding: d16@0:8
// Implementation: 0x1061fe914

// -[SCLensLogger setStartViewingCpuTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x1061fe91c

// -[SCLensLogger currentInactiveTime]
// Type encoding: d16@0:8
// Implementation: 0x1061fe924

// -[SCLensLogger setCurrentInactiveTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x1061fe92c

// -[SCLensLogger totalInactiveTime]
// Type encoding: d16@0:8
// Implementation: 0x1061fe934

// -[SCLensLogger setTotalInactiveTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x1061fe93c

// -[SCLensLogger cameraStartViewingTime]
// Type encoding: d16@0:8
// Implementation: 0x1061fe944

// -[SCLensLogger setCameraStartViewingTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x1061fe94c

// -[SCLensLogger startRecordingTime]
// Type encoding: @16@0:8
// Implementation: 0x1061fe954

// -[SCLensLogger setStartRecordingTime:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061fe95c

// -[SCLensLogger endRecordingTime]
// Type encoding: @16@0:8
// Implementation: 0x1061fe98c

// -[SCLensLogger setEndRecordingTime:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061fe994

// -[SCLensLogger spinStartTime]
// Type encoding: d16@0:8
// Implementation: 0x1061fe9c4

// -[SCLensLogger setSpinStartTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x1061fe9cc

// -[SCLensLogger currentViewingLens]
// Type encoding: @16@0:8
// Implementation: 0x1061fe9d4

// -[SCLensLogger setCurrentViewingLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061fe9e0

// -[SCLensLogger currentApplyContext]
// Type encoding: @16@0:8
// Implementation: 0x1061fe9e8

// -[SCLensLogger setCurrentApplyContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061fe9f4

// -[SCLensLogger prevViewingLens]
// Type encoding: @16@0:8
// Implementation: 0x1061fe9fc

// -[SCLensLogger setPrevViewingLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061fea04

// -[SCLensLogger currentSpinningLens]
// Type encoding: @16@0:8
// Implementation: 0x1061fea34

// -[SCLensLogger setCurrentSpinningLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061fea40

// -[SCLensLogger withAttachmentOpen]
// Type encoding: B16@0:8
// Implementation: 0x1061fea48

// -[SCLensLogger setWithAttachmentOpen:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061fea50

// -[SCLensLogger lensCount]
// Type encoding: Q16@0:8
// Implementation: 0x1061fea58

// -[SCLensLogger setLensCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1061fea60

// -[SCLensLogger currentLensIndex]
// Type encoding: q16@0:8
// Implementation: 0x1061fea68

// -[SCLensLogger setCurrentLensIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x1061fea70

// -[SCLensLogger startViewingTimeLensOption]
// Type encoding: d16@0:8
// Implementation: 0x1061fea78

// -[SCLensLogger setStartViewingTimeLensOption:]
// Type encoding: v24@0:8d16
// Implementation: 0x1061fea80

// -[SCLensLogger lensOptionCount]
// Type encoding: Q16@0:8
// Implementation: 0x1061fea88

// -[SCLensLogger setLensOptionCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1061fea90

// -[SCLensLogger currentLensOptionIndex]
// Type encoding: q16@0:8
// Implementation: 0x1061fea98

// -[SCLensLogger setCurrentLensOptionIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x10074c6bc

// -[SCLensLogger lensOptionSwipeCount]
// Type encoding: q16@0:8
// Implementation: 0x1061feaa0

// -[SCLensLogger setLensOptionSwipeCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x1061feaa8

// -[SCLensLogger triggerFiredForCurrentLens]
// Type encoding: @16@0:8
// Implementation: 0x1061feab0

// -[SCLensLogger setTriggerFiredForCurrentLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x10074c68c

// -[SCLensLogger frontCameraMaxFacesCount]
// Type encoding: Q16@0:8
// Implementation: 0x1061feab8

// -[SCLensLogger setFrontCameraMaxFacesCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1061feac0

// -[SCLensLogger backCameraMaxFacesCount]
// Type encoding: Q16@0:8
// Implementation: 0x1061feac8

// -[SCLensLogger setBackCameraMaxFacesCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1061fead0

// -[SCLensLogger frontCameraSnapFacesCount]
// Type encoding: Q16@0:8
// Implementation: 0x1061fead8

// -[SCLensLogger setFrontCameraSnapFacesCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1061feae0

// -[SCLensLogger backCameraSnapFacesCount]
// Type encoding: Q16@0:8
// Implementation: 0x1061feae8

// -[SCLensLogger setBackCameraSnapFacesCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1061feaf0

// -[SCLensLogger firstFaceRenderTimestampSec]
// Type encoding: d16@0:8
// Implementation: 0x1061feaf8

// -[SCLensLogger setFirstFaceRenderTimestampSec:]
// Type encoding: v24@0:8d16
// Implementation: 0x1061feb00

// -[SCLensLogger firstTriggerTimestampSec]
// Type encoding: d16@0:8
// Implementation: 0x1061feb08

// -[SCLensLogger setFirstTriggerTimestampSec:]
// Type encoding: v24@0:8d16
// Implementation: 0x1061feb10

// -[SCLensLogger swipeFunnel]
// Type encoding: @16@0:8
// Implementation: 0x1061feb18

// -[SCLensLogger setSwipeFunnel:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061feb24

// -[SCLensLogger swipeFunnelId]
// Type encoding: @16@0:8
// Implementation: 0x1061feb2c

// -[SCLensLogger setSwipeFunnelId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061feb38

// -[SCLensLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1061feb40

@end
