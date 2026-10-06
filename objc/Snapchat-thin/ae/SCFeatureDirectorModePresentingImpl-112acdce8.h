// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureDirectorModePresentingImpl
// Superclass: SCFeature
// Address: 0x112acdce8

@interface SCFeatureDirectorModePresentingImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: activated; attributes: TB,R,N,GisActivated,V_activated
// Property: delegate; attributes: T@"<SCFeatureDirectorModePresentingDelegate>",W,N,V_delegate
// Property: presetMediaConfiguration; attributes: T@"<SCTimelineConfiguration>",&,N,V_presetMediaConfiguration
// Property: addSnapEnabled; attributes: TB,R,N,GisAddSnapEnabled
// Property: shouldActivateDirectorModeForAddSnap; attributes: TB,R,N
// Property: snapSessionContext; attributes: T@"SESnapSessionContext",?,&,N,V_snapSessionContext

// -[SCFeatureDirectorModePresentingImpl initWithDirectorModeLaunchServices:directorModeScopeServices:cameraConfiguration:cameraUserBlizzardLogger:multiSnapFeature:lensCarouselManager:userSession:mainCameraViewControllerLifecycleEvents:cameraSnapCreationLogger:cameraUserActionLogger:contentDeliveryServices:cameraTooltipsService:cameraHardwareServicesAPI:cameraSnapModelServices:snapDocManagerServices:snapDocThumbnailServices:directorModeActivator:afterCaptureActionTracker:tinsel:appStartExperimentReader:cameraDeviceSettingsResolver:cameraModeActivationController:]
// Type encoding: @192@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184
// Implementation: 0x10615ec90

// -[SCFeatureDirectorModePresentingImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10615f2dc

// -[SCFeatureDirectorModePresentingImpl presetMediaConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x10615f310

// -[SCFeatureDirectorModePresentingImpl shouldActivateDirectorModeForAddSnap]
// Type encoding: B16@0:8
// Implementation: 0x10615f3d8

// -[SCFeatureDirectorModePresentingImpl isAddSnapEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10615f418

// -[SCFeatureDirectorModePresentingImpl activateDirectorModeForAddSnapIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x10615f460

// -[SCFeatureDirectorModePresentingImpl activateDirectorModeForDeeplinkWithQueryParameters:]
// Type encoding: v24@0:8@16
// Implementation: 0x10615f738

// -[SCFeatureDirectorModePresentingImpl setMusicSelection:]
// Type encoding: v24@0:8@16
// Implementation: 0x10615f850

// -[SCFeatureDirectorModePresentingImpl reset]
// Type encoding: v16@0:8
// Implementation: 0x10615f8c0

// -[SCFeatureDirectorModePresentingImpl saveDraftMediaConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x10615f910

// -[SCFeatureDirectorModePresentingImpl configureWithCameraToolbar:]
// Type encoding: v24@0:8@16
// Implementation: 0x10615f964

// -[SCFeatureDirectorModePresentingImpl directorModeScopeDidComplete]
// Type encoding: v16@0:8
// Implementation: 0x10615fa28

// -[SCFeatureDirectorModePresentingImpl draftMediaConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x10615facc

// -[SCFeatureDirectorModePresentingImpl recoverableData]
// Type encoding: @16@0:8
// Implementation: 0x10615fafc

// -[SCFeatureDirectorModePresentingImpl isDraftEditing]
// Type encoding: B16@0:8
// Implementation: 0x10615fb2c

// -[SCFeatureDirectorModePresentingImpl featureDirectorMode:didHandleDraft:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10615fb34

// -[SCFeatureDirectorModePresentingImpl featureDirectorMode:didUpdateDraft:withSelectedSegment:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10615fb38

// -[SCFeatureDirectorModePresentingImpl featureDirectorMode:didDeleteDraft:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10615fb3c

// -[SCFeatureDirectorModePresentingImpl cameraViewInitialFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x10615fb40

// -[SCFeatureDirectorModePresentingImpl recoverWithSnapSessionContext:contentLossReason:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10615fbb0

// -[SCFeatureDirectorModePresentingImpl cancelInFlightRecovery]
// Type encoding: v16@0:8
// Implementation: 0x1061601b8

// -[SCFeatureDirectorModePresentingImpl tooltipDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061601cc

// -[SCFeatureDirectorModePresentingImpl didCancelFromPreview:]
// Type encoding: v24@0:8@16
// Implementation: 0x10616024c

// -[SCFeatureDirectorModePresentingImpl didSendSnapsAndPostToStory:storyTypes:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x1061602c0

// -[SCFeatureDirectorModePresentingImpl didCancelFromPreview:withCompletion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106160374

// -[SCFeatureDirectorModePresentingImpl didComeFromCameraWithoutSendingSnap]
// Type encoding: v16@0:8
// Implementation: 0x106160418

// -[SCFeatureDirectorModePresentingImpl didSendDiscoverSharedMessageWithParameters:]
// Type encoding: v24@0:8@16
// Implementation: 0x106160484

// -[SCFeatureDirectorModePresentingImpl didSendChatMessage]
// Type encoding: v16@0:8
// Implementation: 0x106160510

// -[SCFeatureDirectorModePresentingImpl didSendToGallery]
// Type encoding: v16@0:8
// Implementation: 0x10616057c

// -[SCFeatureDirectorModePresentingImpl didSaveSnapWithParameters:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061605e8

// -[SCFeatureDirectorModePresentingImpl didPostStoryWithStoryTypes:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061606a0

// -[SCFeatureDirectorModePresentingImpl didPostNewlyCreatedGroupStoriesWithMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x106160758

// -[SCFeatureDirectorModePresentingImpl didPresentSendTo]
// Type encoding: v16@0:8
// Implementation: 0x1061607e4

// -[SCFeatureDirectorModePresentingImpl didDismissSendTo]
// Type encoding: v16@0:8
// Implementation: 0x106160850

// -[SCFeatureDirectorModePresentingImpl willDismissSendToWithSelectedItems:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061608bc

// -[SCFeatureDirectorModePresentingImpl _setupGrowthEntryPoint]
// Type encoding: v16@0:8
// Implementation: 0x106160948

// -[SCFeatureDirectorModePresentingImpl _createPillView]
// Type encoding: v16@0:8
// Implementation: 0x106160b3c

// -[SCFeatureDirectorModePresentingImpl _setPillButtonImageURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x106160f94

// -[SCFeatureDirectorModePresentingImpl _registerObserversForLensCarousel]
// Type encoding: v16@0:8
// Implementation: 0x1061612c0

// -[SCFeatureDirectorModePresentingImpl _didChangeLensCarouselActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x106161474

// -[SCFeatureDirectorModePresentingImpl _didTapPillButton]
// Type encoding: v16@0:8
// Implementation: 0x106161494

// -[SCFeatureDirectorModePresentingImpl _logActivateFromDeeplinkWithQueryParameters:]
// Type encoding: v24@0:8@16
// Implementation: 0x10616149c

// -[SCFeatureDirectorModePresentingImpl _createToolbarItem]
// Type encoding: @16@0:8
// Implementation: 0x106161710

// -[SCFeatureDirectorModePresentingImpl _setupCameraModeActivationInfoObserver]
// Type encoding: v16@0:8
// Implementation: 0x1061619e4

// -[SCFeatureDirectorModePresentingImpl _setToolbarItemVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x106161bc4

// -[SCFeatureDirectorModePresentingImpl _showNewBadgeIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106161bfc

// -[SCFeatureDirectorModePresentingImpl _dismissNewBadge]
// Type encoding: v16@0:8
// Implementation: 0x106161d58

// -[SCFeatureDirectorModePresentingImpl _shouldShowNewBadge]
// Type encoding: B16@0:8
// Implementation: 0x106161da4

// -[SCFeatureDirectorModePresentingImpl _setDirectorModeActivated:]
// Type encoding: v20@0:8B16
// Implementation: 0x106161ee4

// -[SCFeatureDirectorModePresentingImpl _setDirectorModeActivated:isRelaunchedFromActiveSession:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x106161eec

// -[SCFeatureDirectorModePresentingImpl _relaunchActiveSession]
// Type encoding: v16@0:8
// Implementation: 0x106161fa4

// -[SCFeatureDirectorModePresentingImpl _launchDirectorMode]
// Type encoding: v16@0:8
// Implementation: 0x106161fc8

// -[SCFeatureDirectorModePresentingImpl _warmupCameraForDirectorModePresentation:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061622cc

// -[SCFeatureDirectorModePresentingImpl _transitionDelegate]
// Type encoding: @16@0:8
// Implementation: 0x1061623c8

// -[SCFeatureDirectorModePresentingImpl _rescaledThumbnailFutureWithImage:scale:]
// Type encoding: @32@0:8@16d24
// Implementation: 0x106162410

// -[SCFeatureDirectorModePresentingImpl _setupMainCameraVCEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x106162628

// -[SCFeatureDirectorModePresentingImpl _showActiveSessionTooltipIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1061628c8

// -[SCFeatureDirectorModePresentingImpl _showActiveBadgeView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106162984

// -[SCFeatureDirectorModePresentingImpl _hasActiveSessionDraft]
// Type encoding: B16@0:8
// Implementation: 0x106162b50

// -[SCFeatureDirectorModePresentingImpl _hideActiveBadgeView]
// Type encoding: v16@0:8
// Implementation: 0x106162b94

// -[SCFeatureDirectorModePresentingImpl _showTooltipWithText:duration:toolbarButtonView:]
// Type encoding: v40@0:8@16d24@32
// Implementation: 0x106162bc8

// -[SCFeatureDirectorModePresentingImpl _dismissTooltip]
// Type encoding: v16@0:8
// Implementation: 0x106162e04

// -[SCFeatureDirectorModePresentingImpl _didChangeDirectorMode:]
// Type encoding: v24@0:8@16
// Implementation: 0x106162e38

// -[SCFeatureDirectorModePresentingImpl isActivated]
// Type encoding: B16@0:8
// Implementation: 0x106162e7c

// -[SCFeatureDirectorModePresentingImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x106162e8c

// -[SCFeatureDirectorModePresentingImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106162eac

// -[SCFeatureDirectorModePresentingImpl setPresetMediaConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x106162ec0

// -[SCFeatureDirectorModePresentingImpl snapSessionContext]
// Type encoding: @16@0:8
// Implementation: 0x106162f00

// -[SCFeatureDirectorModePresentingImpl setSnapSessionContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x106162f10

// -[SCFeatureDirectorModePresentingImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106162f50

@end
