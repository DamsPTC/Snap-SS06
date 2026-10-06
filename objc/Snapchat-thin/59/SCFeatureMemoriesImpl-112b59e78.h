// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureMemoriesImpl
// Superclass: SCFeature
// Address: 0x112b59e78

@interface SCFeatureMemoriesImpl

// Property: scrollLocks; attributes: T@"NSMutableSet",&,N,V_scrollLocks
// Property: memoriesSideButtonRef; attributes: T@"SCFeatureReference",&,N,V_memoriesSideButtonRef
// Property: galleryViewController; attributes: T@"UIViewController<SCGalleryViewControlling>",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: cameraViewType; attributes: Tq,N,V_cameraViewType
// Property: delegate; attributes: T@"<SCFeatureMemoriesDelegate>",W,N
// Property: ignoreScrollLocksOnDismissal; attributes: TB,N,GshouldIgnoreScrollLocksOnDismissal,V_ignoreScrollLocksOnDismissal

// -[SCFeatureMemoriesImpl initWithMemoriesSideButtonFeatureRef:cameraConfig:featureSettingsService:galleryLogger:grapheneRegistry:swipeViewParentDelegate:galleryTransitionCoordinator:navigationLogger:mainCameraScreenUIContainers:legacyMemoriesNavigationService:selfieSettings:memoriesExperimentService:]
// Type encoding: @112@0:8@16@24@32@40@48@56@64@72@80@88@96@104
// Implementation: 0x100856980

// -[SCFeatureMemoriesImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10085bd34

// -[SCFeatureMemoriesImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x10701b994

// -[SCFeatureMemoriesImpl initMemoriesIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x10085bd5c

// -[SCFeatureMemoriesImpl isTransitioning]
// Type encoding: B16@0:8
// Implementation: 0x10701b9b4

// -[SCFeatureMemoriesImpl isPresenting]
// Type encoding: B16@0:8
// Implementation: 0x100c6f67c

// -[SCFeatureMemoriesImpl percentPresented]
// Type encoding: d16@0:8
// Implementation: 0x1008cb834

// -[SCFeatureMemoriesImpl percentVisible]
// Type encoding: d16@0:8
// Implementation: 0x10701b9fc

// -[SCFeatureMemoriesImpl _setTransitioningToMemories]
// Type encoding: v16@0:8
// Implementation: 0x10701ba4c

// -[SCFeatureMemoriesImpl lockAllScrollWithKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x10701baac

// -[SCFeatureMemoriesImpl unlockAllScrollWithKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x10701bb08

// -[SCFeatureMemoriesImpl removeAllScrollLocks]
// Type encoding: v16@0:8
// Implementation: 0x10701bb64

// -[SCFeatureMemoriesImpl dismiss:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x10701bb74

// -[SCFeatureMemoriesImpl galleryViewController]
// Type encoding: @16@0:8
// Implementation: 0x10701bbdc

// -[SCFeatureMemoriesImpl scrollToGalleryFromCameraAnimated:openSource:notificationId:notificationName:completion:]
// Type encoding: v52@0:8B16q20@28@36@?44
// Implementation: 0x10701bc2c

// -[SCFeatureMemoriesImpl scrollToSnapFeedFromCameraAnimated:openSource:completion:]
// Type encoding: v36@0:8B16q20@?28
// Implementation: 0x10701bd8c

// -[SCFeatureMemoriesImpl scrollToCameraAnimated:reason:completion:]
// Type encoding: v36@0:8B16@20@?28
// Implementation: 0x10701be48

// -[SCFeatureMemoriesImpl scrollGalleryToSpectaclesTab]
// Type encoding: v16@0:8
// Implementation: 0x10701beb0

// -[SCFeatureMemoriesImpl scrollGalleryToFeaturedTab]
// Type encoding: v16@0:8
// Implementation: 0x10701beec

// -[SCFeatureMemoriesImpl scrollGalleryToScreenshotsTab]
// Type encoding: v16@0:8
// Implementation: 0x10701bf28

// -[SCFeatureMemoriesImpl openQuickCut]
// Type encoding: v16@0:8
// Implementation: 0x10701bf64

// -[SCFeatureMemoriesImpl scrollGalleryToDreamsTabWithSnapIds:generationIds:notificationId:notificationType:dreamsPackId:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x10701bfa0

// -[SCFeatureMemoriesImpl handleDeeplinkWithDestinationInfo:notificationId:notificationName:openSource:]
// Type encoding: v48@0:8@16@24@32q40
// Implementation: 0x10701c068

// -[SCFeatureMemoriesImpl timelineModeDidBecomeActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x10701c284

// -[SCFeatureMemoriesImpl timelineModeDidChangeDuration:contentImportEnabled:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x10701c40c

// -[SCFeatureMemoriesImpl galleryViewVisible]
// Type encoding: B16@0:8
// Implementation: 0x1008b4d70

// -[SCFeatureMemoriesImpl isSnapTabVisible]
// Type encoding: B16@0:8
// Implementation: 0x10701c48c

// -[SCFeatureMemoriesImpl isDisplayingFeaturedBadge]
// Type encoding: B16@0:8
// Implementation: 0x10701c500

// -[SCFeatureMemoriesImpl activate]
// Type encoding: v16@0:8
// Implementation: 0x10701c568

// -[SCFeatureMemoriesImpl _didTap:]
// Type encoding: v24@0:8@16
// Implementation: 0x10701c56c

// -[SCFeatureMemoriesImpl lockScrollWithKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x10701c75c

// -[SCFeatureMemoriesImpl unlockScrollWithKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008eb9b4

// -[SCFeatureMemoriesImpl shouldLockScrollForLensId:]
// Type encoding: B24@0:8@16
// Implementation: 0x10701c76c

// -[SCFeatureMemoriesImpl scrollToCameraFromGalleryAnimated:completion:withTapButton:]
// Type encoding: v32@0:8B16@?20B28
// Implementation: 0x10701c80c

// -[SCFeatureMemoriesImpl transitionCoordinator:shouldBeginTransitionType:gestureRecognizer:interactive:viewController:]
// Type encoding: B52@0:8@16Q24@32B40@44
// Implementation: 0x10701c834

// -[SCFeatureMemoriesImpl transitionCoordinator:willBeginWithTransitionType:viewController:]
// Type encoding: v40@0:8@16Q24@32
// Implementation: 0x10701ca10

// -[SCFeatureMemoriesImpl _isCameraPresented]
// Type encoding: B16@0:8
// Implementation: 0x10701cca8

// -[SCFeatureMemoriesImpl transitionCoordinator:didBeginWithTransitionType:viewController:]
// Type encoding: v40@0:8@16Q24@32
// Implementation: 0x10701ce20

// -[SCFeatureMemoriesImpl transitionCoordinator:didFinishWithTransitionType:success:interactive:viewController:]
// Type encoding: v48@0:8@16Q24B32B36@40
// Implementation: 0x10701ce30

// -[SCFeatureMemoriesImpl transitionCoordinator:willFailWithTransitionType:viewController:]
// Type encoding: v40@0:8@16Q24@32
// Implementation: 0x10701cf68

// -[SCFeatureMemoriesImpl transitionCoordinator:transitionType:shouldAllowGesture:toRecognizeSimultaneouslyWith:]
// Type encoding: B48@0:8@16Q24@32@40
// Implementation: 0x10701cfb0

// -[SCFeatureMemoriesImpl cameraViewType]
// Type encoding: q16@0:8
// Implementation: 0x10701d350

// -[SCFeatureMemoriesImpl setCameraViewType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10701d360

// -[SCFeatureMemoriesImpl shouldIgnoreScrollLocksOnDismissal]
// Type encoding: B16@0:8
// Implementation: 0x10701d370

// -[SCFeatureMemoriesImpl setIgnoreScrollLocksOnDismissal:]
// Type encoding: v20@0:8B16
// Implementation: 0x10701d380

// -[SCFeatureMemoriesImpl scrollLocks]
// Type encoding: @16@0:8
// Implementation: 0x10701d390

// -[SCFeatureMemoriesImpl setScrollLocks:]
// Type encoding: v24@0:8@16
// Implementation: 0x10701d3a0

// -[SCFeatureMemoriesImpl memoriesSideButtonRef]
// Type encoding: @16@0:8
// Implementation: 0x10701d3e0

// -[SCFeatureMemoriesImpl setMemoriesSideButtonRef:]
// Type encoding: v24@0:8@16
// Implementation: 0x10701d3f0

// -[SCFeatureMemoriesImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10701d430

@end
