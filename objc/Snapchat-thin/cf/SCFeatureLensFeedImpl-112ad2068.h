// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureLensFeedImpl
// Superclass: SCFeature
// Address: 0x112ad2068

@interface SCFeatureLensFeedImpl

// Property: userSession; attributes: T@"SCUserSession",R,W,N,V_userSession
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delegate; attributes: T@"<SCFeatureLensFeedDelegate>",W,N,Vdelegate
// Property: lensExplorerSwipeUpDelegate; attributes: T@"<SCFeatureLensExplorerSwipeUpDelegate>",R,W,N
// Property: cameraViewType; attributes: Tq,N,V_cameraViewType
// Property: isPresenting; attributes: TB,R,N
// Property: presentationConfiguration; attributes: T@"SCLensExplorerPresentationConfiguration",R,N
// Property: cameraBottomUIArbitrator; attributes: T@"<SCFeatureCameraUIArbitrator>",W,N,V_cameraBottomUIArbitrator

// -[SCFeatureLensFeedImpl initWithUserSession:verticalToolbar:lensCarouselManager:cameraViewType:lensExplorerNavigation:lensExplorerBadgeUsageTracking:lensPicker:applicationLifecycleEvents:pageTracker:lensThumbnailLogger:arBar:alwaysUsePickerMode:]
// Type encoding: @108@0:8@16@24@32q40@48@56@64@72@80@88@96B104
// Implementation: 0x1008d2e3c

// -[SCFeatureLensFeedImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008d388c

// -[SCFeatureLensFeedImpl activate]
// Type encoding: v16@0:8
// Implementation: 0x1061d9888

// -[SCFeatureLensFeedImpl isPresenting]
// Type encoding: B16@0:8
// Implementation: 0x1061d9a5c

// -[SCFeatureLensFeedImpl lensExplorerSwipeUpDelegate]
// Type encoding: @16@0:8
// Implementation: 0x1061d9aa4

// -[SCFeatureLensFeedImpl presentLensFeedFromViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061d9aa8

// -[SCFeatureLensFeedImpl presentLensFeedWithConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061d9b50

// -[SCFeatureLensFeedImpl presentLensFeedFromViewController:configuration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1061d9bfc

// -[SCFeatureLensFeedImpl presentationConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x1061d9d60

// -[SCFeatureLensFeedImpl setReplyParameters:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008d3890

// -[SCFeatureLensFeedImpl openLensExplorerWithConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061d9d90

// -[SCFeatureLensFeedImpl _updateFeatureState:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061d9e10

// -[SCFeatureLensFeedImpl lensExplorerRouterDidPresentLensExplorer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061d9e18

// -[SCFeatureLensFeedImpl lensExplorerRouterBeginDismissingLensExplorer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061d9e98

// -[SCFeatureLensFeedImpl lensExplorerRouterDidDismissLensExplorer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061d9f18

// -[SCFeatureLensFeedImpl lensExplorerRouterDidToggleCamera:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061d9f9c

// -[SCFeatureLensFeedImpl lensExplorerRouterReplyParameters:]
// Type encoding: @24@0:8@16
// Implementation: 0x1061da01c

// -[SCFeatureLensFeedImpl lensExplorerRouter:didPickItem:selectionTrigger:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x1061da290

// -[SCFeatureLensFeedImpl _hanldeDidPickLens:lensExplorerRouter:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1061da344

// -[SCFeatureLensFeedImpl _appDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x1061da3fc

// -[SCFeatureLensFeedImpl _isCurrentCameraTypeSupported]
// Type encoding: B16@0:8
// Implementation: 0x1061da444

// -[SCFeatureLensFeedImpl lensExplorerSwipeUpFeature:didReceivePanWithState:offset:velocity:]
// Type encoding: v48@0:8@16q24d32d40
// Implementation: 0x1061da4c0

// -[SCFeatureLensFeedImpl setCameraUIVisible:animated:arbitrator:]
// Type encoding: v32@0:8B16B20@24
// Implementation: 0x1061da6ec

// -[SCFeatureLensFeedImpl didPressLensExplorerButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061da6f0

// -[SCFeatureLensFeedImpl _createLensExplorerIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1061da77c

// -[SCFeatureLensFeedImpl _requestCameraBottomUIVisible:animated:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x1061da7dc

// -[SCFeatureLensFeedImpl _currentLensExplorerCameraSource]
// Type encoding: Q16@0:8
// Implementation: 0x1061da870

// -[SCFeatureLensFeedImpl _logWillNavigateToLensExplorer]
// Type encoding: v16@0:8
// Implementation: 0x1061da8c4

// -[SCFeatureLensFeedImpl _activateARBarIfAvailable]
// Type encoding: B16@0:8
// Implementation: 0x1061da904

// -[SCFeatureLensFeedImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x100c79df8

// -[SCFeatureLensFeedImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008d3878

// -[SCFeatureLensFeedImpl cameraViewType]
// Type encoding: q16@0:8
// Implementation: 0x1061da968

// -[SCFeatureLensFeedImpl setCameraViewType:]
// Type encoding: v24@0:8q16
// Implementation: 0x1061da978

// -[SCFeatureLensFeedImpl cameraBottomUIArbitrator]
// Type encoding: @16@0:8
// Implementation: 0x1061da988

// -[SCFeatureLensFeedImpl setCameraBottomUIArbitrator:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c5d6bc

// -[SCFeatureLensFeedImpl userSession]
// Type encoding: @16@0:8
// Implementation: 0x1061da9a8

// -[SCFeatureLensFeedImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1061da9c8

@end
