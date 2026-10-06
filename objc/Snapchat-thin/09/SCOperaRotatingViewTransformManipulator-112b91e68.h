// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaRotatingViewTransformManipulator
// Superclass: NSObject
// Address: 0x112b91e68

@interface SCOperaRotatingViewTransformManipulator

// Property: minRollDegree; attributes: Td,R,N,V_minRollDegree
// Property: maxRollDegree; attributes: Td,R,N,V_maxRollDegree
// Property: lastRotation; attributes: Td,R,N,V_lastRotation
// Property: lastScale; attributes: Td,R,N,V_lastScale
// Property: bounds; attributes: T{CGRect={CGPoint=dd}{CGSize=dd}},R,N,V_bounds
// Property: viewportSize; attributes: T{CGSize=dd},R,N,V_viewportSize
// Property: lastMediaScaleFactor; attributes: Td,R,N,V_lastMediaScaleFactor
// Property: manipulatorFormat; attributes: TQ,R,N,V_manipulatorFormat

// -[SCOperaRotatingViewTransformManipulator initWithView:containerView:layerView:bounds:]
// Type encoding: @72@0:8@16@24@32{CGRect={CGPoint=dd}{CGSize=dd}}40
// Implementation: 0x107ffad64

// -[SCOperaRotatingViewTransformManipulator configureWithFormat:config:]
// Type encoding: v40@0:8Q16{SCTransformManipulatorConfig=dd}24
// Implementation: 0x107ffb20c

// -[SCOperaRotatingViewTransformManipulator resetTargetViewTransform]
// Type encoding: v16@0:8
// Implementation: 0x107ffb2d4

// -[SCOperaRotatingViewTransformManipulator resetTrackingParams]
// Type encoding: v16@0:8
// Implementation: 0x107ffb320

// -[SCOperaRotatingViewTransformManipulator updateTargetViewWithRotation:animatedIfPossible:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x107ffb328

// -[SCOperaRotatingViewTransformManipulator forceUpdateTargetViewWithRotation:animatedIfPossible:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x107ffb360

// -[SCOperaRotatingViewTransformManipulator updateTargetViewWithTranslation:]
// Type encoding: v32@0:8{CGVector=dd}16
// Implementation: 0x107ffb45c

// -[SCOperaRotatingViewTransformManipulator updateTargetViewWithPinchScale:]
// Type encoding: v24@0:8d16
// Implementation: 0x107ffb54c

// -[SCOperaRotatingViewTransformManipulator _updateAffineTransformForDynamicScalingViewingWithRotation:]
// Type encoding: v24@0:8d16
// Implementation: 0x107ffb5f0

// -[SCOperaRotatingViewTransformManipulator _resetLayerMask]
// Type encoding: v16@0:8
// Implementation: 0x107ffb6d0

// -[SCOperaRotatingViewTransformManipulator _applyCircularFormatWithMediaScaleFactor:]
// Type encoding: v24@0:8d16
// Implementation: 0x107ffb780

// -[SCOperaRotatingViewTransformManipulator _updateMaxAndMinRollDegree]
// Type encoding: v16@0:8
// Implementation: 0x107ffb964

// -[SCOperaRotatingViewTransformManipulator _getScaledLength:mediaScaleFactor:]
// Type encoding: d32@0:8d16d24
// Implementation: 0x107ffb9c8

// -[SCOperaRotatingViewTransformManipulator _updateAffineTransformForTraditionalViewingFromRotation:toRotation:animated:]
// Type encoding: v36@0:8d16d24B32
// Implementation: 0x107ffb9d0

// -[SCOperaRotatingViewTransformManipulator _updateCornerRadiusForScale:]
// Type encoding: v24@0:8d16
// Implementation: 0x107ffbc20

// -[SCOperaRotatingViewTransformManipulator _configureTargetViewIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x107ffbce8

// -[SCOperaRotatingViewTransformManipulator minRollDegree]
// Type encoding: d16@0:8
// Implementation: 0x107ffbd34

// -[SCOperaRotatingViewTransformManipulator maxRollDegree]
// Type encoding: d16@0:8
// Implementation: 0x107ffbd3c

// -[SCOperaRotatingViewTransformManipulator lastRotation]
// Type encoding: d16@0:8
// Implementation: 0x107ffbd44

// -[SCOperaRotatingViewTransformManipulator lastScale]
// Type encoding: d16@0:8
// Implementation: 0x107ffbd4c

// -[SCOperaRotatingViewTransformManipulator bounds]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x107ffbd54

// -[SCOperaRotatingViewTransformManipulator viewportSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x107ffbd60

// -[SCOperaRotatingViewTransformManipulator lastMediaScaleFactor]
// Type encoding: d16@0:8
// Implementation: 0x107ffbd68

// -[SCOperaRotatingViewTransformManipulator manipulatorFormat]
// Type encoding: Q16@0:8
// Implementation: 0x107ffbd70

// -[SCOperaRotatingViewTransformManipulator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107ffbd78

@end
