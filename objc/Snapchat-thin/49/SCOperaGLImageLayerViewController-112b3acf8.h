// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaGLImageLayerViewController
// Superclass: SCOperaLayerViewController
// Address: 0x112b3acf8

@interface SCOperaGLImageLayerViewController

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: pinchGestureTarget; attributes: T@"UIView",W,N,V_pinchGestureTarget

// -[SCOperaGLImageLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106e0cbec

// -[SCOperaGLImageLayerViewController loadView]
// Type encoding: v16@0:8
// Implementation: 0x106e0cd14

// -[SCOperaGLImageLayerViewController updateViewWithPreviousLayer:currentLayer:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106e0d140

// -[SCOperaGLImageLayerViewController _updateImageProcessSessionWithPreviousLayer:currentLayer:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106e0d238

// -[SCOperaGLImageLayerViewController _updateLayerLayout:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e0d6bc

// -[SCOperaGLImageLayerViewController _setupBoomboxVisibilityController]
// Type encoding: v16@0:8
// Implementation: 0x106e0d80c

// -[SCOperaGLImageLayerViewController pause]
// Type encoding: v16@0:8
// Implementation: 0x106e0d964

// -[SCOperaGLImageLayerViewController resume]
// Type encoding: v16@0:8
// Implementation: 0x106e0d968

// -[SCOperaGLImageLayerViewController viewWillFullyAppear]
// Type encoding: v16@0:8
// Implementation: 0x106e0d98c

// -[SCOperaGLImageLayerViewController viewDidFullyAppear]
// Type encoding: v16@0:8
// Implementation: 0x106e0d9b0

// -[SCOperaGLImageLayerViewController viewDidFullyDisappear]
// Type encoding: v16@0:8
// Implementation: 0x106e0da30

// -[SCOperaGLImageLayerViewController pageabilityForRelativePosition:gestureRecognizer:]
// Type encoding: q32@0:8Q16@24
// Implementation: 0x106e0da90

// -[SCOperaGLImageLayerViewController neighborViewDidFullyAppearWithCurrentViewRelativePosition:neighborsInfoProvider:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x106e0da98

// -[SCOperaGLImageLayerViewController _resetTrackingParams]
// Type encoding: v16@0:8
// Implementation: 0x106e0daac

// -[SCOperaGLImageLayerViewController _startPlaybackIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106e0dabc

// -[SCOperaGLImageLayerViewController _stopPlaybackIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106e0db20

// -[SCOperaGLImageLayerViewController didReceiveUpdateProperties:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e0db98

// -[SCOperaGLImageLayerViewController teardown]
// Type encoding: v16@0:8
// Implementation: 0x106e0dd48

// -[SCOperaGLImageLayerViewController currentViewParameters]
// Type encoding: @16@0:8
// Implementation: 0x106e0ddbc

// -[SCOperaGLImageLayerViewController updateViewWithHorizontalPageOffset:isCurrentPage:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x106e0df18

// -[SCOperaGLImageLayerViewController _resetHorizontalPageOffset]
// Type encoding: v16@0:8
// Implementation: 0x106e0e048

// -[SCOperaGLImageLayerViewController operaRotatingLayerPinchController:didFinishPinchWithScale:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x106e0e0cc

// -[SCOperaGLImageLayerViewController operaRotatingLayerPinchController:updateTransformWithScale:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x106e0e1a4

// -[SCOperaGLImageLayerViewController _setupPinchControllerIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106e0e2dc

// -[SCOperaGLImageLayerViewController setPinchGestureTarget:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e0e554

// -[SCOperaGLImageLayerViewController _glCommandsForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e0e5cc

// -[SCOperaGLImageLayerViewController _setupImageProcessSessionIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106e0e65c

// -[SCOperaGLImageLayerViewController setActionMenuEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e0e8d8

// -[SCOperaGLImageLayerViewController movingViewsForFadeTransition]
// Type encoding: @16@0:8
// Implementation: 0x106e0e988

// -[SCOperaGLImageLayerViewController fadingViewsForFadeTransition]
// Type encoding: @16@0:8
// Implementation: 0x106e0ea2c

// -[SCOperaGLImageLayerViewController mediaViewFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x106e0ea34

// -[SCOperaGLImageLayerViewController mediaHeightToWidthAspectRatio]
// Type encoding: d16@0:8
// Implementation: 0x106e0ea44

// -[SCOperaGLImageLayerViewController _contentSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x106e0eaf0

// -[SCOperaGLImageLayerViewController isOverlay]
// Type encoding: B16@0:8
// Implementation: 0x106e0eb04

// -[SCOperaGLImageLayerViewController colorFilterSessionDidRenderImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e0eb0c

// -[SCOperaGLImageLayerViewController _startListeningToMotionManagerIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106e0eda8

// -[SCOperaGLImageLayerViewController _stopListeningToMotionManagerIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106e0ef64

// -[SCOperaGLImageLayerViewController motionManagerDidUpdateRotation:translation:gravity:]
// Type encoding: v48@0:8d16{CGVector=dd}24d40
// Implementation: 0x106e0efbc

// -[SCOperaGLImageLayerViewController pinchGestureTarget]
// Type encoding: @16@0:8
// Implementation: 0x106e0f100

// -[SCOperaGLImageLayerViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106e0f120

@end
