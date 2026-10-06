// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMainCameraScreenRouterImpl
// Superclass: NSObject
// Address: 0x112ad4368

@interface SCMainCameraScreenRouterImpl

// Property: mainCameraUIContainer; attributes: T@"SCLazy",R,N,V_mainCameraUIContainer
// Property: operaUIContainer; attributes: T@"SCLazy",R,N,V_operaUIContainer
// Property: lensExplorerUIContainer; attributes: T@"SCLazy",R,N,V_lensExplorerUIContainer
// Property: cameraSwitcherContentUIContainer; attributes: T@"SCLazy",R,N,V_cameraSwitcherContentUIContainer
// Property: modalUIContainer; attributes: T@"SCLazy",R,N,V_modalUIContainer
// Property: hidableOverlayView; attributes: T@"SCLazy",R,N,V_hidableOverlayView
// Property: overlayViewContainer; attributes: T@"SCLazy",R,N,V_overlayViewContainer
// Property: rootGestureView; attributes: T@"SCLazy",R,N,V_rootGestureView
// Property: lensCarouselLayoutGuide; attributes: T@"SCLazy",R,N,V_lensCarouselLayoutGuide
// Property: bottomMenuViewContainer; attributes: T@"SCLazy",R,N,V_bottomMenuViewContainer
// Property: miniCarouselActionBarContainer; attributes: T@"SCLazy",R,N,V_miniCarouselActionBarContainer
// Property: lensExploreButtonContainer; attributes: T@"SCLazy",R,N,V_lensExploreButtonContainer
// Property: memoriesButtonContainer; attributes: T@"SCLazy",R,N,V_memoriesButtonContainer
// Property: alertDialogsUIContainer; attributes: T@"SCLazy",R,N,V_alertDialogsUIContainer
// Property: resetUIAfterTimeout; attributes: TB,N,GshouldResetUIAfterTimeout,V_resetUIAfterTimeout
// Property: viewControllerLifecycleObservable; attributes: T@"SCLazy",R,N,V_viewControllerLifecycleObservable

// -[SCMainCameraScreenRouterImpl initWithBaseUIContainer:cameraUIScopeViewContainer:headerItem:additionalSafeAreaInsets:usesRuntimeViewfinderGeometry:lensCarouselLayoutProvider:cameraConfigurationServices:]
// Type encoding: @92@0:8@16@24@32{UIEdgeInsets=dddd}40B72@76@84
// Implementation: 0x100841b14

// -[SCMainCameraScreenRouterImpl displayCamera]
// Type encoding: v16@0:8
// Implementation: 0x100843a90

// -[SCMainCameraScreenRouterImpl displayOpera]
// Type encoding: v16@0:8
// Implementation: 0x1062099c4

// -[SCMainCameraScreenRouterImpl operaInteractiveTransitionBegin]
// Type encoding: v16@0:8
// Implementation: 0x1062099cc

// -[SCMainCameraScreenRouterImpl operaInteractiveTransitionEnd:completed:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x106209a10

// -[SCMainCameraScreenRouterImpl showLensExplorerTray:]
// Type encoding: v20@0:8B16
// Implementation: 0x106209a6c

// -[SCMainCameraScreenRouterImpl showLensExplorerButtonContainer:]
// Type encoding: v20@0:8B16
// Implementation: 0x106209a7c

// -[SCMainCameraScreenRouterImpl showMemoriesButtonContainer:]
// Type encoding: v20@0:8B16
// Implementation: 0x106209ab8

// -[SCMainCameraScreenRouterImpl displayCameraSwitcher]
// Type encoding: v16@0:8
// Implementation: 0x106209af4

// -[SCMainCameraScreenRouterImpl Legacy_willForwardLegacyUINavigationControlling]
// Type encoding: v16@0:8
// Implementation: 0x106209afc

// -[SCMainCameraScreenRouterImpl _attachBaseContainerToView:viewfinderBottomAnchor:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100872320

// -[SCMainCameraScreenRouterImpl _configureViewContainers:parentView:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100867dac

// -[SCMainCameraScreenRouterImpl _createChildUIContainer:rootUIContainer:]
// Type encoding: @32@0:8Q16@24
// Implementation: 0x100843298

// -[SCMainCameraScreenRouterImpl _createRootUIContainer:rootViewController:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1008429fc

// -[SCMainCameraScreenRouterImpl _setupViewsWithFeatureContainerView:parentView:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100867e7c

// -[SCMainCameraScreenRouterImpl _createLensCarouselLayoutGuideWithContainerView:]
// Type encoding: @24@0:8@16
// Implementation: 0x10084227c

// -[SCMainCameraScreenRouterImpl _uiDidAttachToRootViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x100867c60

// -[SCMainCameraScreenRouterImpl _viewContainerDidPresentUIContainer:]
// Type encoding: v24@0:8Q16
// Implementation: 0x100872160

// -[SCMainCameraScreenRouterImpl _viewContainerWillDismissUIContainer:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106209b0c

// -[SCMainCameraScreenRouterImpl _topLevelUIContainers]
// Type encoding: @16@0:8
// Implementation: 0x100843c44

// -[SCMainCameraScreenRouterImpl _displayUIContainerWithContext:]
// Type encoding: v24@0:8Q16
// Implementation: 0x100843a98

// -[SCMainCameraScreenRouterImpl hidableOverlayView]
// Type encoding: @16@0:8
// Implementation: 0x106209b58

// -[SCMainCameraScreenRouterImpl lensExplorerUIContainer]
// Type encoding: @16@0:8
// Implementation: 0x106209b60

// -[SCMainCameraScreenRouterImpl mainCameraUIContainer]
// Type encoding: @16@0:8
// Implementation: 0x100843770

// -[SCMainCameraScreenRouterImpl cameraSwitcherContentUIContainer]
// Type encoding: @16@0:8
// Implementation: 0x100843640

// -[SCMainCameraScreenRouterImpl modalUIContainer]
// Type encoding: @16@0:8
// Implementation: 0x100b73538

// -[SCMainCameraScreenRouterImpl operaUIContainer]
// Type encoding: @16@0:8
// Implementation: 0x100842594

// -[SCMainCameraScreenRouterImpl overlayViewContainer]
// Type encoding: @16@0:8
// Implementation: 0x106209b68

// -[SCMainCameraScreenRouterImpl shouldResetUIAfterTimeout]
// Type encoding: B16@0:8
// Implementation: 0x106209b70

// -[SCMainCameraScreenRouterImpl setResetUIAfterTimeout:]
// Type encoding: v20@0:8B16
// Implementation: 0x106209b78

// -[SCMainCameraScreenRouterImpl rootGestureView]
// Type encoding: @16@0:8
// Implementation: 0x10085c108

// -[SCMainCameraScreenRouterImpl lensCarouselLayoutGuide]
// Type encoding: @16@0:8
// Implementation: 0x106209b80

// -[SCMainCameraScreenRouterImpl viewControllerLifecycleObservable]
// Type encoding: @16@0:8
// Implementation: 0x100843720

// -[SCMainCameraScreenRouterImpl bottomMenuViewContainer]
// Type encoding: @16@0:8
// Implementation: 0x106209b88

// -[SCMainCameraScreenRouterImpl miniCarouselActionBarContainer]
// Type encoding: @16@0:8
// Implementation: 0x106209b90

// -[SCMainCameraScreenRouterImpl lensExploreButtonContainer]
// Type encoding: @16@0:8
// Implementation: 0x100b746fc

// -[SCMainCameraScreenRouterImpl memoriesButtonContainer]
// Type encoding: @16@0:8
// Implementation: 0x106209b98

// -[SCMainCameraScreenRouterImpl alertDialogsUIContainer]
// Type encoding: @16@0:8
// Implementation: 0x106209ba0

// -[SCMainCameraScreenRouterImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106209ba8

@end
