// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewFeatureRotationImpl
// Superclass: NSObject
// Address: 0x112a9e3f8

@interface SCPreviewFeatureRotationImpl

// Property: caption; attributes: T@"SCLazy",&,N,V_caption
// Property: viewportController; attributes: T@"SCLazy",&,N,V_viewportController
// Property: snapCrop; attributes: T@"SCLazy",&,N,V_snapCrop
// Property: delegate; attributes: T@"<SCPreviewFeatureRotationDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPreviewFeatureRotationImpl initWithManipulatorFormat:mediaSize:caption:viewportController:snapCrop:motionManager:]
// Type encoding: @72@0:8Q16{CGSize=dd}24@40@48@56@64
// Implementation: 0x105d9ab10

// -[SCPreviewFeatureRotationImpl responderChainPriority]
// Type encoding: q16@0:8
// Implementation: 0x105d9ae2c

// -[SCPreviewFeatureRotationImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d9ae34

// -[SCPreviewFeatureRotationImpl fullMediaContentBoundsForContainerBounds:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x105d9ae74

// -[SCPreviewFeatureRotationImpl updateMotionUpdatesListeningStateWithCurrentTouchTarget:stickerControllerIsCutting:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105d9aed4

// -[SCPreviewFeatureRotationImpl resetRotation]
// Type encoding: v16@0:8
// Implementation: 0x105d9b2d4

// -[SCPreviewFeatureRotationImpl resetVisibleSubviewsRotation]
// Type encoding: v16@0:8
// Implementation: 0x105d9b2e4

// -[SCPreviewFeatureRotationImpl motionManagerDidUpdateRotation:translation:]
// Type encoding: v40@0:8d16{CGVector=dd}24
// Implementation: 0x105d9b340

// -[SCPreviewFeatureRotationImpl _updateRotationalViewsRotation:translation:]
// Type encoding: v40@0:8d16{CGVector=dd}24
// Implementation: 0x105d9b3b8

// -[SCPreviewFeatureRotationImpl _fullMediaContentSizeForContainerBounds:]
// Type encoding: {CGSize=dd}48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x105d9b678

// -[SCPreviewFeatureRotationImpl _contentScaleForRotation:]
// Type encoding: d24@0:8d16
// Implementation: 0x105d9b774

// -[SCPreviewFeatureRotationImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x105d9b900

// -[SCPreviewFeatureRotationImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d9b918

// -[SCPreviewFeatureRotationImpl caption]
// Type encoding: @16@0:8
// Implementation: 0x105d9b924

// -[SCPreviewFeatureRotationImpl setCaption:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d9b92c

// -[SCPreviewFeatureRotationImpl viewportController]
// Type encoding: @16@0:8
// Implementation: 0x105d9b95c

// -[SCPreviewFeatureRotationImpl setViewportController:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d9b964

// -[SCPreviewFeatureRotationImpl snapCrop]
// Type encoding: @16@0:8
// Implementation: 0x105d9b994

// -[SCPreviewFeatureRotationImpl setSnapCrop:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d9b99c

// -[SCPreviewFeatureRotationImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105d9b9cc

@end
