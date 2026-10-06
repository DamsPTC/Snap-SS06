// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureLensExplorerSwipeUpImpl
// Superclass: SCFeature
// Address: 0x112ad1a78

@interface SCFeatureLensExplorerSwipeUpImpl

// Property: tooltipStrict; attributes: TQ,N,V_tooltipStrict
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: gestureRecognizersDelegate; attributes: T@"<UIGestureRecognizerDelegate>",W,N,V_gestureRecognizersDelegate
// Property: cameraTooltipArbitrator; attributes: T@"<SCFeatureCameraUIArbitrator>",W,N,V_cameraTooltipArbitrator

// -[SCFeatureLensExplorerSwipeUpImpl initWithLensFeedFeature:swipeViewParentDelegate:lensCarouselManager:lensCollectionsCarousel:lensesTooltipManager:lensPreferences:lensUserProvider:featureSettingsService:tooltipEnabled:alwaysOnCarouselEnabled:allowSwipeUpOnOriginalLens:disableOnLensCollectionCarousel:lensesCameraCapturerStateUpdatesProvider:cameraModeActivationController:]
// Type encoding: @112@0:8@16@24@32@40@48@56@64@72B80B84B88B92@96@104
// Implementation: 0x10084e468

// -[SCFeatureLensExplorerSwipeUpImpl isPanUpGestureRecognizer:]
// Type encoding: B24@0:8@16
// Implementation: 0x1061d0d50

// -[SCFeatureLensExplorerSwipeUpImpl addBeRequiredToFailByGestureRecognizer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10084ec9c

// -[SCFeatureLensExplorerSwipeUpImpl setCameraUIVisible:animated:arbitrator:]
// Type encoding: v32@0:8B16B20@24
// Implementation: 0x1061d0d68

// -[SCFeatureLensExplorerSwipeUpImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10084ec88

// -[SCFeatureLensExplorerSwipeUpImpl activate]
// Type encoding: v16@0:8
// Implementation: 0x1061d0e08

// -[SCFeatureLensExplorerSwipeUpImpl _toggleTooltipStrictBit:enabled:]
// Type encoding: v28@0:8Q16B24
// Implementation: 0x1061d1164

// -[SCFeatureLensExplorerSwipeUpImpl setTooltipStrict:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1061d11a0

// -[SCFeatureLensExplorerSwipeUpImpl _activateIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1061d12f4

// -[SCFeatureLensExplorerSwipeUpImpl _createToolTipManager]
// Type encoding: @16@0:8
// Implementation: 0x1061d1488

// -[SCFeatureLensExplorerSwipeUpImpl panGestureRecognizer]
// Type encoding: @16@0:8
// Implementation: 0x10084ecec

// -[SCFeatureLensExplorerSwipeUpImpl _pan:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061d1578

// -[SCFeatureLensExplorerSwipeUpImpl gestureRecognizerShouldBegin:]
// Type encoding: B24@0:8@16
// Implementation: 0x1061d1778

// -[SCFeatureLensExplorerSwipeUpImpl gestureRecognizer:shouldReceiveTouch:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1061d1878

// -[SCFeatureLensExplorerSwipeUpImpl gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1061d192c

// -[SCFeatureLensExplorerSwipeUpImpl gestureRecognizer:shouldRequireFailureOfGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1061d1934

// -[SCFeatureLensExplorerSwipeUpImpl gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1061d19e8

// -[SCFeatureLensExplorerSwipeUpImpl _setupCameraModeActivationInfoObserver]
// Type encoding: v16@0:8
// Implementation: 0x10084ea44

// -[SCFeatureLensExplorerSwipeUpImpl _didStartRecording]
// Type encoding: v16@0:8
// Implementation: 0x1061d1bb8

// -[SCFeatureLensExplorerSwipeUpImpl _didEndRecording]
// Type encoding: v16@0:8
// Implementation: 0x1061d1c44

// -[SCFeatureLensExplorerSwipeUpImpl _swipeUpPresentationEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1061d1cfc

// -[SCFeatureLensExplorerSwipeUpImpl gestureRecognizersDelegate]
// Type encoding: @16@0:8
// Implementation: 0x1061d1d7c

// -[SCFeatureLensExplorerSwipeUpImpl setGestureRecognizersDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10084ec74

// -[SCFeatureLensExplorerSwipeUpImpl cameraTooltipArbitrator]
// Type encoding: @16@0:8
// Implementation: 0x1061d1d9c

// -[SCFeatureLensExplorerSwipeUpImpl setCameraTooltipArbitrator:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c66b18

// -[SCFeatureLensExplorerSwipeUpImpl tooltipStrict]
// Type encoding: Q16@0:8
// Implementation: 0x1061d1dbc

// -[SCFeatureLensExplorerSwipeUpImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1061d1dcc

@end
