// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureMultiCamModeImpl
// Superclass: SCFeatureCameraModeBase
// Address: 0x112ac4878

@interface SCFeatureMultiCamModeImpl

// Property: currentLayout; attributes: Ti,N,V_currentLayout
// Property: isCameraModeLoading; attributes: TB,R,N,V_isCameraModeLoading
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: layoutObservable; attributes: T@"SCObservable",R,N,V_layoutBehaviorSubject
// Property: loggingParameters; attributes: T@"SCMultiCamModeLoggingParameters",R,N
// Property: contextInfo; attributes: T@"SCMultiCamModeContextInfo",R,N
// Property: cameraModeLensObservable; attributes: T@"SCObservable",R,N
// Property: isCameraModeEnabled; attributes: TB,R,N
// Property: isCameraModeRestorationPending; attributes: TB,R,N

// -[SCFeatureMultiCamModeImpl initWithValdiRuntimeProvider:cameraHardwareServicesAPI:captureDeviceManager:cameraHardwareResource:lensMode:cameraUIServices:contentDeliveryServices:cameraTooltipsService:multiCamModeConfig:verticalToolbarConfig:featureUpdateEventSubject:cameraViewType:toggleCameraRef:mainCameraScan:cameraUserBlizzardLogger:viewControllerLifecycleEvents:mainCameraViewControllerLifecycleEvents:applicationLifecycleEvents:zoom:directorModePresenting:cameraFeaturePerformanceFeatureScopedLoggerFactory:ringFlashMode:userPreferences:lensStackingConfiguration:cameraDeviceSettingsConfiguration:deviceSettingsResolver:cameraUsageTier:cameraZoomFactorsConfiguration:batchCaptureConfig:lensCarouselApplicator:cameraModeActivationController:]
// Type encoding: @264@0:8@16@24@32@40@48@56@64@72@80@88@96q104@112@120@128@136@144@152@160@168@176@184@192@200@208@216Q224@232@240@248@256
// Implementation: 0x1060a01c0

// -[SCFeatureMultiCamModeImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1060a0720

// -[SCFeatureMultiCamModeImpl startObservingManagedVideoDataSourceOutputEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060a077c

// -[SCFeatureMultiCamModeImpl stopObservingManagedVideoDataSourceOutputEvent]
// Type encoding: v16@0:8
// Implementation: 0x1060a09ac

// -[SCFeatureMultiCamModeImpl _didDeliverSecondarySampleBufferToLensCore]
// Type encoding: v16@0:8
// Implementation: 0x1060a09e0

// -[SCFeatureMultiCamModeImpl _didOutputSecondarySampleBuffer]
// Type encoding: v16@0:8
// Implementation: 0x1060a0aac

// -[SCFeatureMultiCamModeImpl cameraModeLensId]
// Type encoding: @16@0:8
// Implementation: 0x1060a0ac4

// -[SCFeatureMultiCamModeImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060a0b14

// -[SCFeatureMultiCamModeImpl beginObservingVideoCaptureEvents:imageCaptureEvents:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1060a0b54

// -[SCFeatureMultiCamModeImpl secondaryButtonState]
// Type encoding: i16@0:8
// Implementation: 0x1060a0d70

// -[SCFeatureMultiCamModeImpl toolbarButtonPositionDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060a0d94

// -[SCFeatureMultiCamModeImpl isCameraModeActivated]
// Type encoding: B16@0:8
// Implementation: 0x1060a0da4

// -[SCFeatureMultiCamModeImpl shouldBlockTouchAtPoint:]
// Type encoding: B32@0:8{CGPoint=dd}16
// Implementation: 0x1060a0da8

// -[SCFeatureMultiCamModeImpl onTap:]
// Type encoding: v20@0:8i16
// Implementation: 0x1060a0db8

// -[SCFeatureMultiCamModeImpl secondaryOnTap:]
// Type encoding: v20@0:8i16
// Implementation: 0x1060a0e4c

// -[SCFeatureMultiCamModeImpl incompatibleModes]
// Type encoding: @16@0:8
// Implementation: 0x1060a0e84

// -[SCFeatureMultiCamModeImpl targetZoomDevice]
// Type encoding: q16@0:8
// Implementation: 0x1060a0e90

// -[SCFeatureMultiCamModeImpl didTapNonDMDualStreamCamPrimaryButton]
// Type encoding: v16@0:8
// Implementation: 0x1060a0f28

// -[SCFeatureMultiCamModeImpl didChangeSelectionOfNonDMDualStreamCamPrimaryButton:]
// Type encoding: v20@0:8B16
// Implementation: 0x1060a0f38

// -[SCFeatureMultiCamModeImpl didSelectDualStreamCamLayoutFromWidgetMenu:]
// Type encoding: v20@0:8i16
// Implementation: 0x1060a0f44

// -[SCFeatureMultiCamModeImpl _setupCameraModeActivationInfoObserver]
// Type encoding: v16@0:8
// Implementation: 0x1060a0f98

// -[SCFeatureMultiCamModeImpl _setToolbarItemVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x1060a11d4

// -[SCFeatureMultiCamModeImpl _didSelectLayout:]
// Type encoding: v20@0:8i16
// Implementation: 0x1060a1268

// -[SCFeatureMultiCamModeImpl configureWithCameraToolbar:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060a12bc

// -[SCFeatureMultiCamModeImpl _createUIIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060a1320

// -[SCFeatureMultiCamModeImpl cameraModeType]
// Type encoding: i16@0:8
// Implementation: 0x1060a1458

// -[SCFeatureMultiCamModeImpl onboardingDialogTitle]
// Type encoding: @16@0:8
// Implementation: 0x1060a1460

// -[SCFeatureMultiCamModeImpl onboardingDialogDescription]
// Type encoding: @16@0:8
// Implementation: 0x1060a1464

// -[SCFeatureMultiCamModeImpl hasSeenOnboardingDialog]
// Type encoding: B16@0:8
// Implementation: 0x1060a1468

// -[SCFeatureMultiCamModeImpl newBadgeFirstShownDate]
// Type encoding: q16@0:8
// Implementation: 0x1060a14a4

// -[SCFeatureMultiCamModeImpl enable]
// Type encoding: v16@0:8
// Implementation: 0x1060a14e0

// -[SCFeatureMultiCamModeImpl disable]
// Type encoding: v16@0:8
// Implementation: 0x1060a177c

// -[SCFeatureMultiCamModeImpl autoEnable]
// Type encoding: v16@0:8
// Implementation: 0x1060a1830

// -[SCFeatureMultiCamModeImpl autoEnableWithLayout:]
// Type encoding: v20@0:8i16
// Implementation: 0x1060a1888

// -[SCFeatureMultiCamModeImpl autoEnableFromDeepLinkWithQueryParameters:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060a18a4

// -[SCFeatureMultiCamModeImpl onCameraModeLensInCarouselActivated]
// Type encoding: v16@0:8
// Implementation: 0x1060a1958

// -[SCFeatureMultiCamModeImpl onCameraModeReady]
// Type encoding: v16@0:8
// Implementation: 0x1060a19b8

// -[SCFeatureMultiCamModeImpl onMultiCamSessionToggled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1060a1a08

// -[SCFeatureMultiCamModeImpl onCaptureDevicePositionDidChange]
// Type encoding: v16@0:8
// Implementation: 0x1060a1a30

// -[SCFeatureMultiCamModeImpl onOnboardingDialogShown]
// Type encoding: v16@0:8
// Implementation: 0x1060a1a6c

// -[SCFeatureMultiCamModeImpl onNewBadgeFirstShown]
// Type encoding: v16@0:8
// Implementation: 0x1060a1aa0

// -[SCFeatureMultiCamModeImpl clearNewBadgeAndOnboardingDialogStatus]
// Type encoding: v16@0:8
// Implementation: 0x1060a1afc

// -[SCFeatureMultiCamModeImpl didRegisterProviderToken:noFormatFoundError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1060a1b84

// -[SCFeatureMultiCamModeImpl didUnregisterProviderToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060a1ce8

// -[SCFeatureMultiCamModeImpl featureNameForToken:]
// Type encoding: @24@0:8@16
// Implementation: 0x1060a1d00

// -[SCFeatureMultiCamModeImpl didFailToEnableLensModeWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060a1d0c

// -[SCFeatureMultiCamModeImpl enabled]
// Type encoding: B16@0:8
// Implementation: 0x1060a1da4

// -[SCFeatureMultiCamModeImpl loggingParameters]
// Type encoding: @16@0:8
// Implementation: 0x1060a1da8

// -[SCFeatureMultiCamModeImpl contextInfo]
// Type encoding: @16@0:8
// Implementation: 0x1060a1dfc

// -[SCFeatureMultiCamModeImpl toolbarItem]
// Type encoding: @16@0:8
// Implementation: 0x1060a1e50

// -[SCFeatureMultiCamModeImpl _setCurrentLayout:animated:]
// Type encoding: v24@0:8i16B20
// Implementation: 0x1060a1e60

// -[SCFeatureMultiCamModeImpl defaultLayout]
// Type encoding: i16@0:8
// Implementation: 0x1060a201c

// -[SCFeatureMultiCamModeImpl setCameraModeParameters:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060a20dc

// -[SCFeatureMultiCamModeImpl onViewWillDisappear]
// Type encoding: v16@0:8
// Implementation: 0x1060a2168

// -[SCFeatureMultiCamModeImpl setIsCameraModeLoading:]
// Type encoding: v20@0:8B16
// Implementation: 0x1060a21b4

// -[SCFeatureMultiCamModeImpl areAllDependenciesLoaded]
// Type encoding: B16@0:8
// Implementation: 0x1060a232c

// -[SCFeatureMultiCamModeImpl featureName]
// Type encoding: q16@0:8
// Implementation: 0x1060a2348

// -[SCFeatureMultiCamModeImpl pendingDependencies]
// Type encoding: @16@0:8
// Implementation: 0x1060a2350

// -[SCFeatureMultiCamModeImpl loadTimeout]
// Type encoding: q16@0:8
// Implementation: 0x1060a23ec

// -[SCFeatureMultiCamModeImpl startObservingCanTapEvent]
// Type encoding: v16@0:8
// Implementation: 0x1060a23f4

// -[SCFeatureMultiCamModeImpl startObservingDualCameraLensState:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060a2560

// -[SCFeatureMultiCamModeImpl dualCameraLensActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x1060a2774

// -[SCFeatureMultiCamModeImpl usageMetrics]
// Type encoding: @16@0:8
// Implementation: 0x1060a285c

// -[SCFeatureMultiCamModeImpl resetMetrics]
// Type encoding: v16@0:8
// Implementation: 0x1060a286c

// -[SCFeatureMultiCamModeImpl _updateDeviceFormatsWithShouldEnableMultiCam:]
// Type encoding: v20@0:8B16
// Implementation: 0x1060a287c

// -[SCFeatureMultiCamModeImpl _storeSelectedLayoutForPersistance:]
// Type encoding: v20@0:8i16
// Implementation: 0x1060a2974

// -[SCFeatureMultiCamModeImpl _startMultiCameraSession]
// Type encoding: v16@0:8
// Implementation: 0x1060a29f8

// -[SCFeatureMultiCamModeImpl layoutObservable]
// Type encoding: @16@0:8
// Implementation: 0x1060a2a00

// -[SCFeatureMultiCamModeImpl currentLayout]
// Type encoding: i16@0:8
// Implementation: 0x1060a2a10

// -[SCFeatureMultiCamModeImpl setCurrentLayout:]
// Type encoding: v20@0:8i16
// Implementation: 0x1060a2a20

// -[SCFeatureMultiCamModeImpl isCameraModeLoading]
// Type encoding: B16@0:8
// Implementation: 0x1060a2a30

// -[SCFeatureMultiCamModeImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1060a2a40

@end
