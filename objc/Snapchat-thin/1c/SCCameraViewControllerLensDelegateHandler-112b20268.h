// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCameraViewControllerLensDelegateHandler
// Superclass: NSObject
// Address: 0x112b20268

@interface SCCameraViewControllerLensDelegateHandler

// Property: lensesUIController; attributes: T@"<SCCameraLensesUIControlling><SCBaseLensesUIControlling>",R,N
// Property: lensCarouselManager; attributes: T@"SCLazy",W,N,V_lensCarouselManager
// Property: cameraLensesInfoProvider; attributes: T@"<SCLensesCameraLensesFeaturesInfoProviding>",R,N
// Property: previewLensesInfoProvider; attributes: T@"<SCLensesPreviewLensesFeaturesInfoProviding>",R,N
// Property: lensSessionId; attributes: T@"NSString",R,N
// Property: frontCameraActiveForLogging; attributes: TB,N
// Property: lensStateDelegate; attributes: T@"<SCCameraViewControllerLensStateDelegate>",R,W,N
// Property: lensCarouselContainerView; attributes: T@"UIView",R,N
// Property: cameraLensesCoordinator; attributes: T@"<SCLensesCameraLensesFeaturesCoordinating>",R,W,N
// Property: currentLensDataProvider; attributes: T@"<SCLensCameraScreenDataProviderProtocol>",R,N
// Property: featureContainerView; attributes: T@"<SCFeatureContainerView>",R,N

// -[SCCameraViewControllerLensDelegateHandler initWithLensLogger:lensPreferences:lensCrashLogger:lensesUIControllerProvider:effectApplicator:trackingProvider:cameraViewControllerInfoProvider:lensDataProviderUpdater:lensDataStoreUpdater:lensCarouselActivator:lensUrlBrowsingManager:legacyLensDataFetcher:lensStateWorkflowProvider:lensPersistentStoragesCleaner:uiUpdateAnnouncer:cameraLensCarouselDeactivationCoordinator:lensesFeaturesInfoProvider:lensStudioNotificationsHandler:lensCarouselManager:lensCarouselOnCameraScopeController:lensCarouselStudySettings:visibilityController:lensCarouselSettings:cameraLensesCoordinator:]
// Type encoding: @208@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200
// Implementation: 0x1007fa7a8

// -[SCCameraViewControllerLensDelegateHandler cameraLensesCoordinator]
// Type encoding: @16@0:8
// Implementation: 0x1008d5448

// -[SCCameraViewControllerLensDelegateHandler cameraLensesInfoProvider]
// Type encoding: @16@0:8
// Implementation: 0x106bd5fc8

// -[SCCameraViewControllerLensDelegateHandler previewLensesInfoProvider]
// Type encoding: @16@0:8
// Implementation: 0x1008d544c

// -[SCCameraViewControllerLensDelegateHandler lensSessionId]
// Type encoding: @16@0:8
// Implementation: 0x106bd6010

// -[SCCameraViewControllerLensDelegateHandler frontCameraActiveForLogging]
// Type encoding: B16@0:8
// Implementation: 0x106bd6058

// -[SCCameraViewControllerLensDelegateHandler setFrontCameraActiveForLogging:]
// Type encoding: v20@0:8B16
// Implementation: 0x100c3d774

// -[SCCameraViewControllerLensDelegateHandler lensStateDelegate]
// Type encoding: @16@0:8
// Implementation: 0x106bd6098

// -[SCCameraViewControllerLensDelegateHandler restartTrackingWithNormalizedPoint:]
// Type encoding: v32@0:8{CGPoint=dd}16
// Implementation: 0x106bd60e0

// -[SCCameraViewControllerLensDelegateHandler setUpLensesWithLensDataProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x1007fac64

// -[SCCameraViewControllerLensDelegateHandler currentLensDataProvider]
// Type encoding: @16@0:8
// Implementation: 0x106bd612c

// -[SCCameraViewControllerLensDelegateHandler updateLensDataProviderWithCameraType:]
// Type encoding: v24@0:8q16
// Implementation: 0x106bd6174

// -[SCCameraViewControllerLensDelegateHandler resetLensSubPickerActiveOptionIds]
// Type encoding: v16@0:8
// Implementation: 0x106bd61b0

// -[SCCameraViewControllerLensDelegateHandler updateLensDataStore]
// Type encoding: v16@0:8
// Implementation: 0x106bd61e8

// -[SCCameraViewControllerLensDelegateHandler warmupLensDataStore]
// Type encoding: v16@0:8
// Implementation: 0x100b77788

// -[SCCameraViewControllerLensDelegateHandler updateLensDataProvider:updatingStrategy:lensIdToRestore:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106bd6214

// -[SCCameraViewControllerLensDelegateHandler clearAllEffects]
// Type encoding: v16@0:8
// Implementation: 0x106bd62b8

// -[SCCameraViewControllerLensDelegateHandler pauseDataFetcherDownloads]
// Type encoding: v16@0:8
// Implementation: 0x106bd62ec

// -[SCCameraViewControllerLensDelegateHandler resumeDataFetcherDownloads]
// Type encoding: v16@0:8
// Implementation: 0x106bd6320

// -[SCCameraViewControllerLensDelegateHandler isAnyLensActivationAllowed]
// Type encoding: B16@0:8
// Implementation: 0x106bd6354

// -[SCCameraViewControllerLensDelegateHandler isAnyLensActivationAllowedV2]
// Type encoding: B16@0:8
// Implementation: 0x100c7fc5c

// -[SCCameraViewControllerLensDelegateHandler isAnyLensActivationAllowedAsync:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106bd6394

// -[SCCameraViewControllerLensDelegateHandler isCurrentLensUtility]
// Type encoding: B16@0:8
// Implementation: 0x106bd63e4

// -[SCCameraViewControllerLensDelegateHandler isCurrentLensFeedEntryPoint]
// Type encoding: B16@0:8
// Implementation: 0x106bd6424

// -[SCCameraViewControllerLensDelegateHandler isCurrentLensFavoritesPlaceholder]
// Type encoding: B16@0:8
// Implementation: 0x106bd6460

// -[SCCameraViewControllerLensDelegateHandler clearCarouselEffectAfterCapture]
// Type encoding: v16@0:8
// Implementation: 0x106bd649c

// -[SCCameraViewControllerLensDelegateHandler turnLensesOff]
// Type encoding: v16@0:8
// Implementation: 0x106bd65f0

// -[SCCameraViewControllerLensDelegateHandler turnLensesOffOnDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x106bd6634

// -[SCCameraViewControllerLensDelegateHandler showCallToActionViewForLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x106bd6698

// -[SCCameraViewControllerLensDelegateHandler dismissLensOperaPresenterWithDidBackground:]
// Type encoding: v20@0:8B16
// Implementation: 0x106bd66e8

// -[SCCameraViewControllerLensDelegateHandler defaultErrorHandlerWithSelector:]
// Type encoding: @?24@0:8:16
// Implementation: 0x106bd6724

// -[SCCameraViewControllerLensDelegateHandler logCameraToggledWithAction:recording:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x106bd6774

// -[SCCameraViewControllerLensDelegateHandler logRecordingStarted]
// Type encoding: v16@0:8
// Implementation: 0x106bd67c0

// -[SCCameraViewControllerLensDelegateHandler logRecordingStopped]
// Type encoding: v16@0:8
// Implementation: 0x106bd67f4

// -[SCCameraViewControllerLensDelegateHandler lensesUIController]
// Type encoding: @16@0:8
// Implementation: 0x106bd6828

// -[SCCameraViewControllerLensDelegateHandler lensesUIUpdateAnnouncer]
// Type encoding: @16@0:8
// Implementation: 0x106bd6888

// -[SCCameraViewControllerLensDelegateHandler areLensesActive]
// Type encoding: B16@0:8
// Implementation: 0x1008c6f78

// -[SCCameraViewControllerLensDelegateHandler pointInsideAnyLensView:pointInWindow:]
// Type encoding: B48@0:8{CGPoint=dd}16{CGPoint=dd}32
// Implementation: 0x106bd68b0

// -[SCCameraViewControllerLensDelegateHandler pointInsideAnyLensViewButton:]
// Type encoding: B32@0:8{CGPoint=dd}16
// Implementation: 0x106bd6944

// -[SCCameraViewControllerLensDelegateHandler pointInsideLensCarouselCollectionView:]
// Type encoding: B32@0:8{CGPoint=dd}16
// Implementation: 0x106bd69d4

// -[SCCameraViewControllerLensDelegateHandler lensCarouselContainerView]
// Type encoding: @16@0:8
// Implementation: 0x106bd6a4c

// -[SCCameraViewControllerLensDelegateHandler pointInsideLensInfoButton:]
// Type encoding: B32@0:8{CGPoint=dd}16
// Implementation: 0x106bd6ab0

// -[SCCameraViewControllerLensDelegateHandler isPresentingCTAView]
// Type encoding: B16@0:8
// Implementation: 0x106bd6b60

// -[SCCameraViewControllerLensDelegateHandler setLensCarouselManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x100b5eb20

// -[SCCameraViewControllerLensDelegateHandler lensesDisallowSnapRecording]
// Type encoding: B16@0:8
// Implementation: 0x106bd6ba0

// -[SCCameraViewControllerLensDelegateHandler selectedLensId]
// Type encoding: @16@0:8
// Implementation: 0x106bd6ba8

// -[SCCameraViewControllerLensDelegateHandler exitLensFullScreenModeIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106bd6d70

// -[SCCameraViewControllerLensDelegateHandler applyCurrentLensIconToCameraButton]
// Type encoding: v16@0:8
// Implementation: 0x106bd6da8

// -[SCCameraViewControllerLensDelegateHandler areLensesAllInterfaceElementsHidden]
// Type encoding: B16@0:8
// Implementation: 0x106bd6ec8

// -[SCCameraViewControllerLensDelegateHandler setLensesCollectionViewScrollEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1008c672c

// -[SCCameraViewControllerLensDelegateHandler isInIdleState]
// Type encoding: B16@0:8
// Implementation: 0x106bd6f08

// -[SCCameraViewControllerLensDelegateHandler areLensesOnboardingTooltipsCompleted]
// Type encoding: B16@0:8
// Implementation: 0x100c2a0dc

// -[SCCameraViewControllerLensDelegateHandler hasActiveLens]
// Type encoding: B16@0:8
// Implementation: 0x106bd6fb0

// -[SCCameraViewControllerLensDelegateHandler clearExpiredLensPersistentStoragesInBackground]
// Type encoding: v16@0:8
// Implementation: 0x106bd6fe4

// -[SCCameraViewControllerLensDelegateHandler featureContainerView]
// Type encoding: @16@0:8
// Implementation: 0x106bd7018

// -[SCCameraViewControllerLensDelegateHandler _currentLens]
// Type encoding: @16@0:8
// Implementation: 0x106bd7080

// -[SCCameraViewControllerLensDelegateHandler lazyLensesUIController]
// Type encoding: @16@0:8
// Implementation: 0x106bd70e4

// -[SCCameraViewControllerLensDelegateHandler lensCarouselManager]
// Type encoding: @16@0:8
// Implementation: 0x106bd7124

// -[SCCameraViewControllerLensDelegateHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106bd713c

@end
