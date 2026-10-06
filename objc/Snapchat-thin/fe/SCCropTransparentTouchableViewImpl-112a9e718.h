// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCropTransparentTouchableViewImpl
// Superclass: UIView
// Address: 0x112a9e718

@interface SCCropTransparentTouchableViewImpl

// Property: rotationTransform; attributes: T{CGAffineTransform=dddddd},N,V_rotationTransform
// Property: scaleTransform; attributes: T{CGAffineTransform=dddddd},N,V_scaleTransform
// Property: delegate; attributes: T@"<SCCropOverlayViewListener>",W,N,Vdelegate
// Property: minimalScale; attributes: Td,N,VminimalScale
// Property: maximalScale; attributes: Td,N,VmaximalScale
// Property: isAutoAdjusting; attributes: TB,N,VisAutoAdjusting
// Property: isPanGestureEnabled; attributes: TB,N,VisPanGestureEnabled
// Property: useTouchCenterAsPivot; attributes: TB,N,GisUseTouchCenterAsPivot,VuseTouchCenterAsPivot
// Property: scale; attributes: Td,N,V_scale
// Property: rotation; attributes: Td,N,V_rotation
// Property: translation; attributes: T{CGPoint=dd},N
// Property: deleted; attributes: TB,N,Vdeleted
// Property: maxScale; attributes: Td,R,N,VmaxScale
// Property: minScale; attributes: Td,R,N,VminScale
// Property: bounds; attributes: T{CGRect={CGPoint=dd}{CGSize=dd}},N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCropTransparentTouchableViewImpl initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x105da7f48

// -[SCCropTransparentTouchableViewImpl setRotation:]
// Type encoding: v24@0:8d16
// Implementation: 0x105da7fcc

// -[SCCropTransparentTouchableViewImpl setScale:]
// Type encoding: v24@0:8d16
// Implementation: 0x105da8068

// -[SCCropTransparentTouchableViewImpl translation]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x105da80e4

// -[SCCropTransparentTouchableViewImpl setTranslation:]
// Type encoding: v32@0:8{CGPoint=dd}16
// Implementation: 0x105da80e8

// -[SCCropTransparentTouchableViewImpl _recomputeTransform]
// Type encoding: v16@0:8
// Implementation: 0x105da815c

// -[SCCropTransparentTouchableViewImpl pan:]
// Type encoding: v24@0:8@16
// Implementation: 0x105da8200

// -[SCCropTransparentTouchableViewImpl rotation:]
// Type encoding: v24@0:8@16
// Implementation: 0x105da82fc

// -[SCCropTransparentTouchableViewImpl pinch:]
// Type encoding: v24@0:8@16
// Implementation: 0x105da842c

// -[SCCropTransparentTouchableViewImpl alignableTouchControlView]
// Type encoding: @16@0:8
// Implementation: 0x105da857c

// -[SCCropTransparentTouchableViewImpl alignableContentRect]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x105da8580

// -[SCCropTransparentTouchableViewImpl shouldProcessGesture:]
// Type encoding: B24@0:8@16
// Implementation: 0x105da8584

// -[SCCropTransparentTouchableViewImpl updateAnchorState:withGestureRecognizer:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105da858c

// -[SCCropTransparentTouchableViewImpl deletableView]
// Type encoding: @16@0:8
// Implementation: 0x105da8590

// -[SCCropTransparentTouchableViewImpl isPanGestureEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105da8598

// -[SCCropTransparentTouchableViewImpl setIsPanGestureEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x105da85a8

// -[SCCropTransparentTouchableViewImpl scale]
// Type encoding: d16@0:8
// Implementation: 0x105da85b8

// -[SCCropTransparentTouchableViewImpl rotation]
// Type encoding: d16@0:8
// Implementation: 0x105da85c8

// -[SCCropTransparentTouchableViewImpl maximalScale]
// Type encoding: d16@0:8
// Implementation: 0x105da85d8

// -[SCCropTransparentTouchableViewImpl setMaximalScale:]
// Type encoding: v24@0:8d16
// Implementation: 0x105da85e8

// -[SCCropTransparentTouchableViewImpl minimalScale]
// Type encoding: d16@0:8
// Implementation: 0x105da85f8

// -[SCCropTransparentTouchableViewImpl setMinimalScale:]
// Type encoding: v24@0:8d16
// Implementation: 0x105da8608

// -[SCCropTransparentTouchableViewImpl isUseTouchCenterAsPivot]
// Type encoding: B16@0:8
// Implementation: 0x105da8618

// -[SCCropTransparentTouchableViewImpl setUseTouchCenterAsPivot:]
// Type encoding: v20@0:8B16
// Implementation: 0x105da8628

// -[SCCropTransparentTouchableViewImpl maxScale]
// Type encoding: d16@0:8
// Implementation: 0x105da8638

// -[SCCropTransparentTouchableViewImpl minScale]
// Type encoding: d16@0:8
// Implementation: 0x105da8648

// -[SCCropTransparentTouchableViewImpl deleted]
// Type encoding: B16@0:8
// Implementation: 0x105da8658

// -[SCCropTransparentTouchableViewImpl setDeleted:]
// Type encoding: v20@0:8B16
// Implementation: 0x105da8668

// -[SCCropTransparentTouchableViewImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x105da8678

// -[SCCropTransparentTouchableViewImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105da8698

// -[SCCropTransparentTouchableViewImpl isAutoAdjusting]
// Type encoding: B16@0:8
// Implementation: 0x105da86ac

// -[SCCropTransparentTouchableViewImpl setIsAutoAdjusting:]
// Type encoding: v20@0:8B16
// Implementation: 0x105da86bc

// -[SCCropTransparentTouchableViewImpl rotationTransform]
// Type encoding: {CGAffineTransform=dddddd}16@0:8
// Implementation: 0x105da86cc

// -[SCCropTransparentTouchableViewImpl setRotationTransform:]
// Type encoding: v64@0:8{CGAffineTransform=dddddd}16
// Implementation: 0x105da86ec

// -[SCCropTransparentTouchableViewImpl scaleTransform]
// Type encoding: {CGAffineTransform=dddddd}16@0:8
// Implementation: 0x105da870c

// -[SCCropTransparentTouchableViewImpl setScaleTransform:]
// Type encoding: v64@0:8{CGAffineTransform=dddddd}16
// Implementation: 0x105da872c

// -[SCCropTransparentTouchableViewImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105da874c

@end
