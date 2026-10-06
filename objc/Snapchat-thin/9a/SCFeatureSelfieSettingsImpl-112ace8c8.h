// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureSelfieSettingsImpl
// Superclass: SCFeatureCameraModeBase
// Address: 0x112ace8c8

@interface SCFeatureSelfieSettingsImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: isEnabled; attributes: TB,R,N,V_isEnabled
// Property: isEditingMode; attributes: TB,R,N,V_isEditingMode
// Property: editingModeStateObservable; attributes: T@"SCObservable",&,N,V_editingModeStateObservable
// Property: selfieSettingsEventObservable; attributes: T@"SCObservable",R,N,V_selfieSettingsEventSubject
// Property: selfieSettingsApplyAutoEventObservable; attributes: T@"SCObservable",R,N,V_selfieSettingsApplyAutoEventSubject
// Property: selfieSettingsAutoApplyCancelObservable; attributes: T@"SCObservable",R,N,V_selfieSettingsAutoApplyCancelSubject
// Property: cameraModeLensObservable; attributes: T@"SCObservable",R,N
// Property: isCameraModeEnabled; attributes: TB,R,N
// Property: isCameraModeRestorationPending; attributes: TB,R,N
// Property: cameraBottomUIArbitrator; attributes: T@"<SCFeatureCameraUIArbitrator>",W,N,V_cameraBottomUIArbitrator

// -[SCFeatureSelfieSettingsImpl initWithSelfieSettingsConfig:cameraHardwareResource:lensMode:cameraViewType:cameraUIServices:contentDeliveryServices:cameraTooltipsService:viewControllerLifecycleEvents:mainCameraViewControllerLifecycleEvents:applicationLifecycleEvents:userPreferences:footerItem:mainCameraScan:recipientName:ringFlashMode:directorModePresenting:cameraUserActionLogger:lensCTAHandlingServices:lensCrashFuser:cameraModeActivationController:cameraFeaturePerformanceFeatureScopedLoggerFactory:usesRuntimeViewfinderGeometry:]
// Type encoding: @188@0:8@16@24@32q40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176B184
// Implementation: 0x1008aeb1c

// -[SCFeatureSelfieSettingsImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008b05a4

// -[SCFeatureSelfieSettingsImpl activate]
// Type encoding: v16@0:8
// Implementation: 0x10618d0d0

// -[SCFeatureSelfieSettingsImpl resetMetrics]
// Type encoding: v16@0:8
// Implementation: 0x10618d11c

// -[SCFeatureSelfieSettingsImpl usageMetrics]
// Type encoding: @16@0:8
// Implementation: 0x10618d148

// -[SCFeatureSelfieSettingsImpl detailedCameraModeLogInfo]
// Type encoding: @16@0:8
// Implementation: 0x10618d2ac

// -[SCFeatureSelfieSettingsImpl lensId]
// Type encoding: @16@0:8
// Implementation: 0x10618d390

// -[SCFeatureSelfieSettingsImpl handleLensURIRequestWithEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10618d3e0

// -[SCFeatureSelfieSettingsImpl handleDeepLink:]
// Type encoding: v24@0:8@16
// Implementation: 0x10618d790

// -[SCFeatureSelfieSettingsImpl isCameraModeActivated]
// Type encoding: B16@0:8
// Implementation: 0x10618d83c

// -[SCFeatureSelfieSettingsImpl cameraModeType]
// Type encoding: i16@0:8
// Implementation: 0x10618d84c

// -[SCFeatureSelfieSettingsImpl configureWithCameraToolbar:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008b05b8

// -[SCFeatureSelfieSettingsImpl enable]
// Type encoding: v16@0:8
// Implementation: 0x10618d8a4

// -[SCFeatureSelfieSettingsImpl disable]
// Type encoding: v16@0:8
// Implementation: 0x10618d9b8

// -[SCFeatureSelfieSettingsImpl autoEnable]
// Type encoding: v16@0:8
// Implementation: 0x10618da3c

// -[SCFeatureSelfieSettingsImpl autoDisable]
// Type encoding: v16@0:8
// Implementation: 0x10618db00

// -[SCFeatureSelfieSettingsImpl toolbarItem]
// Type encoding: @16@0:8
// Implementation: 0x1008b087c

// -[SCFeatureSelfieSettingsImpl featureName]
// Type encoding: q16@0:8
// Implementation: 0x10618db60

// -[SCFeatureSelfieSettingsImpl loadTimeout]
// Type encoding: q16@0:8
// Implementation: 0x10618db68

// -[SCFeatureSelfieSettingsImpl pendingDependencies]
// Type encoding: @16@0:8
// Implementation: 0x10618db70

// -[SCFeatureSelfieSettingsImpl onCameraModePreparationStarted]
// Type encoding: v16@0:8
// Implementation: 0x10618db7c

// -[SCFeatureSelfieSettingsImpl onCameraModeReady]
// Type encoding: v16@0:8
// Implementation: 0x10618db8c

// -[SCFeatureSelfieSettingsImpl onCaptureDevicePositionDidChange]
// Type encoding: v16@0:8
// Implementation: 0x10618dbd4

// -[SCFeatureSelfieSettingsImpl newBadgeFirstShownDate]
// Type encoding: q16@0:8
// Implementation: 0x10618dc34

// -[SCFeatureSelfieSettingsImpl onNewBadgeFirstShown]
// Type encoding: v16@0:8
// Implementation: 0x10618dc70

// -[SCFeatureSelfieSettingsImpl dismissCameraModePendingRestoration]
// Type encoding: v16@0:8
// Implementation: 0x10618dccc

// -[SCFeatureSelfieSettingsImpl onboardingDialogTitle]
// Type encoding: @16@0:8
// Implementation: 0x10618dcd0

// -[SCFeatureSelfieSettingsImpl onboardingDialogDescription]
// Type encoding: @16@0:8
// Implementation: 0x10618dcd4

// -[SCFeatureSelfieSettingsImpl onOnboardingDialogShown]
// Type encoding: v16@0:8
// Implementation: 0x10618dcd8

// -[SCFeatureSelfieSettingsImpl hasSeenOnboardingDialog]
// Type encoding: B16@0:8
// Implementation: 0x10618dd0c

// -[SCFeatureSelfieSettingsImpl setCameraUIVisible:animated:arbitrator:]
// Type encoding: v32@0:8B16B20@24
// Implementation: 0x10618dd48

// -[SCFeatureSelfieSettingsImpl _rememberDisplacedFooterItemConfig]
// Type encoding: v16@0:8
// Implementation: 0x10618dea8

// -[SCFeatureSelfieSettingsImpl _restoreDisplacedFooterItemConfig]
// Type encoding: v16@0:8
// Implementation: 0x10618df80

// -[SCFeatureSelfieSettingsImpl _setIsModePersisted:]
// Type encoding: v20@0:8B16
// Implementation: 0x10618e06c

// -[SCFeatureSelfieSettingsImpl _isModePersisted]
// Type encoding: B16@0:8
// Implementation: 0x1008afd68

// -[SCFeatureSelfieSettingsImpl _fuseRestoreIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1008affa0

// -[SCFeatureSelfieSettingsImpl _setIsRestoreRestricted:]
// Type encoding: v20@0:8B16
// Implementation: 0x10618e16c

// -[SCFeatureSelfieSettingsImpl _updateToolbarItemAppearanceWithCurrentCameraPosition:]
// Type encoding: v20@0:8B16
// Implementation: 0x1008b10c8

// -[SCFeatureSelfieSettingsImpl _shouldRestoreMode]
// Type encoding: B16@0:8
// Implementation: 0x1008afce4

// -[SCFeatureSelfieSettingsImpl _shouldRestoreWithCurrentCameraPosition]
// Type encoding: B16@0:8
// Implementation: 0x10618e220

// -[SCFeatureSelfieSettingsImpl _createLazyObjects]
// Type encoding: v16@0:8
// Implementation: 0x1008b0100

// -[SCFeatureSelfieSettingsImpl _createTitleLabel]
// Type encoding: @16@0:8
// Implementation: 0x10618e444

// -[SCFeatureSelfieSettingsImpl _createCancelButton]
// Type encoding: @16@0:8
// Implementation: 0x10618e708

// -[SCFeatureSelfieSettingsImpl _createSaveButton]
// Type encoding: @16@0:8
// Implementation: 0x10618ea2c

// -[SCFeatureSelfieSettingsImpl _createCancelButtonV2]
// Type encoding: @16@0:8
// Implementation: 0x10618eb4c

// -[SCFeatureSelfieSettingsImpl _createFooterItemConfig]
// Type encoding: @16@0:8
// Implementation: 0x10618ec78

// -[SCFeatureSelfieSettingsImpl _createFooterItemView]
// Type encoding: @16@0:8
// Implementation: 0x10618ecec

// -[SCFeatureSelfieSettingsImpl _createToolbarItem]
// Type encoding: v16@0:8
// Implementation: 0x1008b09bc

// -[SCFeatureSelfieSettingsImpl _handleChildItemWillTapEvent]
// Type encoding: v16@0:8
// Implementation: 0x10618f374

// -[SCFeatureSelfieSettingsImpl _handleCanShowChildItemEventWithResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x10618f380

// -[SCFeatureSelfieSettingsImpl _handleDidChangeSelectedEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10618f3d4

// -[SCFeatureSelfieSettingsImpl _handleToolbarItemWillTapEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10618f45c

// -[SCFeatureSelfieSettingsImpl _didTapCancelButton]
// Type encoding: v16@0:8
// Implementation: 0x10618f50c

// -[SCFeatureSelfieSettingsImpl _didTapSaveButton]
// Type encoding: v16@0:8
// Implementation: 0x10618f558

// -[SCFeatureSelfieSettingsImpl _setModeActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x10618f5a4

// -[SCFeatureSelfieSettingsImpl _setEditingModeActive:withSaveSettings:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x10618f5cc

// -[SCFeatureSelfieSettingsImpl _setEditingModeInterfaceElementsHidden:animated:duration:]
// Type encoding: v32@0:8B16B20d24
// Implementation: 0x10618f9cc

// -[SCFeatureSelfieSettingsImpl _updateLensWithShowUI:saveSettings:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106190394

// -[SCFeatureSelfieSettingsImpl _applyAutoEffect]
// Type encoding: v16@0:8
// Implementation: 0x10619046c

// -[SCFeatureSelfieSettingsImpl triggerAutoApply]
// Type encoding: v16@0:8
// Implementation: 0x106190484

// -[SCFeatureSelfieSettingsImpl cancelAutoApply]
// Type encoding: v16@0:8
// Implementation: 0x106190488

// -[SCFeatureSelfieSettingsImpl _lensUITopMargin]
// Type encoding: @16@0:8
// Implementation: 0x1061904a0

// -[SCFeatureSelfieSettingsImpl _lensUIBottomMargin]
// Type encoding: @16@0:8
// Implementation: 0x106190510

// -[SCFeatureSelfieSettingsImpl _setupCameraModeActivationInfoObserver]
// Type encoding: v16@0:8
// Implementation: 0x1008b0430

// -[SCFeatureSelfieSettingsImpl _logCameraUserActionTapWithItem:isActivatingMode:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x1061906b0

// -[SCFeatureSelfieSettingsImpl didEnableLensMode]
// Type encoding: v16@0:8
// Implementation: 0x106190738

// -[SCFeatureSelfieSettingsImpl didFailToEnableLensModeWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x106190780

// -[SCFeatureSelfieSettingsImpl onCameraModePreparationFailed:]
// Type encoding: v24@0:8@16
// Implementation: 0x106190890

// -[SCFeatureSelfieSettingsImpl isEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1061908d8

// -[SCFeatureSelfieSettingsImpl isEditingMode]
// Type encoding: B16@0:8
// Implementation: 0x1008c734c

// -[SCFeatureSelfieSettingsImpl selfieSettingsEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x1061908e8

// -[SCFeatureSelfieSettingsImpl selfieSettingsApplyAutoEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x1061908f8

// -[SCFeatureSelfieSettingsImpl selfieSettingsAutoApplyCancelObservable]
// Type encoding: @16@0:8
// Implementation: 0x106190908

// -[SCFeatureSelfieSettingsImpl cameraBottomUIArbitrator]
// Type encoding: @16@0:8
// Implementation: 0x106190918

// -[SCFeatureSelfieSettingsImpl setCameraBottomUIArbitrator:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c65b24

// -[SCFeatureSelfieSettingsImpl editingModeStateObservable]
// Type encoding: @16@0:8
// Implementation: 0x100c64dc0

// -[SCFeatureSelfieSettingsImpl setEditingModeStateObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x106190938

// -[SCFeatureSelfieSettingsImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106190978

@end
