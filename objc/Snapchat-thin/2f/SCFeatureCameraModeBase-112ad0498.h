// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureCameraModeBase
// Superclass: SCFeature
// Address: 0x112ad0498

@interface SCFeatureCameraModeBase

// Property: cameraHardwareResource; attributes: T@"<SCCameraHardwareResource>",R,N
// Property: cameraTooltipsService; attributes: T@"<SCLegacyCameraTooltipsService>",R,N
// Property: willActivateObservable; attributes: T@"SCObservable",R,N,V_willActivateSubject
// Property: willDeactivateObservable; attributes: T@"SCObservable",R,N,V_willDeactivateSubject
// Property: isInDirectorMode; attributes: TB,R,N,V_isInDirectorMode
// Property: isActivatedFromLensCarousel; attributes: TB,R,N,V_isActivatedFromLensCarousel
// Property: isDeactivatedFromCameraModeBase; attributes: TB,N,V_isDeactivatedFromCameraModeBase
// Property: shouldRestoreMode; attributes: TB,N
// Property: cameraToolbar; attributes: T@"<SCFeatureCameraToolbar>",W,N,V_cameraToolbar
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: cameraModeLensObservable; attributes: T@"SCObservable",R,N,V_cameraModeLensObservable
// Property: isCameraModeEnabled; attributes: TB,R,N,V_isCameraModeEnabled
// Property: isCameraModeRestorationPending; attributes: TB,R,N

// -[SCFeatureCameraModeBase initWithCameraModeConfig:cameraHardwareResource:lensMode:featureUpdateEventSubject:cameraViewType:mainCameraScan:cameraUIServices:contentDeliveryServices:cameraTooltipsService:viewControllerLifecycleEvents:mainCameraViewControllerLifecycleEvents:applicationLifecycleEvents:directorModePresenting:]
// Type encoding: @120@0:8@16@24@32@40q48@56@64@72@80@88@96@104@112
// Implementation: 0x1008aef14

// -[SCFeatureCameraModeBase scanStateObservable]
// Type encoding: @16@0:8
// Implementation: 0x1061a7e7c

// -[SCFeatureCameraModeBase lensMode]
// Type encoding: @16@0:8
// Implementation: 0x1061a7ecc

// -[SCFeatureCameraModeBase didDisableLensMode]
// Type encoding: v16@0:8
// Implementation: 0x1061a7f14

// -[SCFeatureCameraModeBase didEnableLensMode]
// Type encoding: v16@0:8
// Implementation: 0x1061a7f88

// -[SCFeatureCameraModeBase didFailToEnableLensModeWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061a8030

// -[SCFeatureCameraModeBase cameraHardwareResource]
// Type encoding: @16@0:8
// Implementation: 0x1008b12c8

// -[SCFeatureCameraModeBase cameraTooltipsService]
// Type encoding: @16@0:8
// Implementation: 0x1061a80a4

// -[SCFeatureCameraModeBase toolbarItem]
// Type encoding: @16@0:8
// Implementation: 0x1061a80ec

// -[SCFeatureCameraModeBase hideCameraMode:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061a80f4

// -[SCFeatureCameraModeBase cameraModeType]
// Type encoding: i16@0:8
// Implementation: 0x1061a8184

// -[SCFeatureCameraModeBase activate]
// Type encoding: v16@0:8
// Implementation: 0x1061a818c

// -[SCFeatureCameraModeBase _prepareLensModeIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x1061a825c

// -[SCFeatureCameraModeBase setShouldRestoreMode:]
// Type encoding: v20@0:8B16
// Implementation: 0x1008aff90

// -[SCFeatureCameraModeBase shouldRestoreMode]
// Type encoding: B16@0:8
// Implementation: 0x1008b00e0

// -[SCFeatureCameraModeBase isCameraModeRestorationPending]
// Type encoding: B16@0:8
// Implementation: 0x1061a8454

// -[SCFeatureCameraModeBase dismissCameraModePendingRestoration]
// Type encoding: v16@0:8
// Implementation: 0x1061a8464

// -[SCFeatureCameraModeBase enable]
// Type encoding: v16@0:8
// Implementation: 0x1061a8480

// -[SCFeatureCameraModeBase _enable]
// Type encoding: v16@0:8
// Implementation: 0x1061a8484

// -[SCFeatureCameraModeBase disable]
// Type encoding: v16@0:8
// Implementation: 0x1061a8508

// -[SCFeatureCameraModeBase autoEnable]
// Type encoding: v16@0:8
// Implementation: 0x1061a858c

// -[SCFeatureCameraModeBase autoDisable]
// Type encoding: v16@0:8
// Implementation: 0x1061a8684

// -[SCFeatureCameraModeBase onCameraModeLensInCarouselActivated]
// Type encoding: v16@0:8
// Implementation: 0x1061a86d8

// -[SCFeatureCameraModeBase onCameraModeReady]
// Type encoding: v16@0:8
// Implementation: 0x1061a8790

// -[SCFeatureCameraModeBase onCameraModePreparationStarted]
// Type encoding: v16@0:8
// Implementation: 0x1061a8794

// -[SCFeatureCameraModeBase onCameraModePreparationFailed:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061a8798

// -[SCFeatureCameraModeBase onMultiCamSessionToggled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061a879c

// -[SCFeatureCameraModeBase onCaptureDevicePositionDidChange]
// Type encoding: v16@0:8
// Implementation: 0x1061a87a0

// -[SCFeatureCameraModeBase onScanSessionBegin]
// Type encoding: v16@0:8
// Implementation: 0x1061a87a4

// -[SCFeatureCameraModeBase onScanSessionEnd]
// Type encoding: v16@0:8
// Implementation: 0x1061a881c

// -[SCFeatureCameraModeBase onViewWillAppear]
// Type encoding: v16@0:8
// Implementation: 0x1008af678

// -[SCFeatureCameraModeBase onViewDidAppear]
// Type encoding: v16@0:8
// Implementation: 0x1008ca2bc

// -[SCFeatureCameraModeBase onViewWillDisappear]
// Type encoding: v16@0:8
// Implementation: 0x1061a8820

// -[SCFeatureCameraModeBase onViewDidDisappear]
// Type encoding: v16@0:8
// Implementation: 0x1061a8824

// -[SCFeatureCameraModeBase onMainCameraViewDidFullyDisappear]
// Type encoding: v16@0:8
// Implementation: 0x1061a8828

// -[SCFeatureCameraModeBase onAppDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x1061a882c

// -[SCFeatureCameraModeBase onAppWillEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x1061a8830

// -[SCFeatureCameraModeBase configureWithCameraToolbar:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008b07e8

// -[SCFeatureCameraModeBase _configureToolbarItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008b08ac

// -[SCFeatureCameraModeBase modeEnabledStateChangedObservable]
// Type encoding: @16@0:8
// Implementation: 0x1061a88c0

// -[SCFeatureCameraModeBase disableMode]
// Type encoding: v16@0:8
// Implementation: 0x1061a88f0

// -[SCFeatureCameraModeBase incompatibleModes]
// Type encoding: @16@0:8
// Implementation: 0x1061a88f4

// -[SCFeatureCameraModeBase modeType]
// Type encoding: i16@0:8
// Implementation: 0x1061a8900

// -[SCFeatureCameraModeBase isHidden]
// Type encoding: B16@0:8
// Implementation: 0x1061a8904

// -[SCFeatureCameraModeBase onTap:]
// Type encoding: v20@0:8i16
// Implementation: 0x1061a8914

// -[SCFeatureCameraModeBase secondaryOnTap:]
// Type encoding: v20@0:8i16
// Implementation: 0x1061a896c

// -[SCFeatureCameraModeBase state]
// Type encoding: i16@0:8
// Implementation: 0x1061a8970

// -[SCFeatureCameraModeBase secondaryButtonState]
// Type encoding: i16@0:8
// Implementation: 0x1061a89a0

// -[SCFeatureCameraModeBase toolbarButtonPositionDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061a89a8

// -[SCFeatureCameraModeBase cameraModeConfig]
// Type encoding: @16@0:8
// Implementation: 0x1061a89ac

// -[SCFeatureCameraModeBase _setCameraModeUIEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061a89bc

// -[SCFeatureCameraModeBase _observeScanSessionActivatedEvents]
// Type encoding: v16@0:8
// Implementation: 0x1061a8af8

// -[SCFeatureCameraModeBase _observeCaptureState]
// Type encoding: v16@0:8
// Implementation: 0x1061a8c34

// -[SCFeatureCameraModeBase _observeViewControllerLifecycleEvents:mainCameraViewControllerLifecycleEvents:applicationLifecycleEvents:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1008af228

// -[SCFeatureCameraModeBase refreshDirectorModeUI]
// Type encoding: v16@0:8
// Implementation: 0x1061a91e8

// -[SCFeatureCameraModeBase _saveModeIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x1061a9228

// -[SCFeatureCameraModeBase _isLensRestoreAllowed]
// Type encoding: B16@0:8
// Implementation: 0x1061a9244

// -[SCFeatureCameraModeBase newBadgeFirstShownDate]
// Type encoding: q16@0:8
// Implementation: 0x1061a92a4

// -[SCFeatureCameraModeBase onNewBadgeFirstShown]
// Type encoding: v16@0:8
// Implementation: 0x1061a92ac

// -[SCFeatureCameraModeBase _shouldShowNewBadge]
// Type encoding: B16@0:8
// Implementation: 0x1061a92b0

// -[SCFeatureCameraModeBase _updateNewBadgeStatus]
// Type encoding: v16@0:8
// Implementation: 0x1061a9330

// -[SCFeatureCameraModeBase onboardingDialogTitle]
// Type encoding: @16@0:8
// Implementation: 0x1061a946c

// -[SCFeatureCameraModeBase onboardingDialogDescription]
// Type encoding: @16@0:8
// Implementation: 0x1061a9474

// -[SCFeatureCameraModeBase onOnboardingDialogShown]
// Type encoding: v16@0:8
// Implementation: 0x1061a947c

// -[SCFeatureCameraModeBase hasSeenOnboardingDialog]
// Type encoding: B16@0:8
// Implementation: 0x1061a9480

// -[SCFeatureCameraModeBase clearNewBadgeAndOnboardingDialogStatus]
// Type encoding: v16@0:8
// Implementation: 0x1061a9488

// -[SCFeatureCameraModeBase _showOnboardingDialogIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1061a948c

// -[SCFeatureCameraModeBase cameraModeOnboardingDialogPresenter:presentDialog:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1061a966c

// -[SCFeatureCameraModeBase isCameraModeEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1061a9720

// -[SCFeatureCameraModeBase cameraToolbar]
// Type encoding: @16@0:8
// Implementation: 0x1008b07c8

// -[SCFeatureCameraModeBase setCameraToolbar:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061a9730

// -[SCFeatureCameraModeBase cameraModeLensObservable]
// Type encoding: @16@0:8
// Implementation: 0x1061a9744

// -[SCFeatureCameraModeBase willActivateObservable]
// Type encoding: @16@0:8
// Implementation: 0x1061a9754

// -[SCFeatureCameraModeBase willDeactivateObservable]
// Type encoding: @16@0:8
// Implementation: 0x1061a9764

// -[SCFeatureCameraModeBase isActivatedFromLensCarousel]
// Type encoding: B16@0:8
// Implementation: 0x1061a9774

// -[SCFeatureCameraModeBase isInDirectorMode]
// Type encoding: B16@0:8
// Implementation: 0x1061a9784

// -[SCFeatureCameraModeBase isDeactivatedFromCameraModeBase]
// Type encoding: B16@0:8
// Implementation: 0x1061a9794

// -[SCFeatureCameraModeBase setIsDeactivatedFromCameraModeBase:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061a97a4

// -[SCFeatureCameraModeBase .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1061a97b4

@end
