// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureCameraUserActionLogger
// Superclass: SCFeature
// Address: 0x112acd6f8

@interface SCFeatureCameraUserActionLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFeatureCameraUserActionLogger initWithCameraUserActionLogger:]
// Type encoding: @24@0:8@16
// Implementation: 0x106146df8

// -[SCFeatureCameraUserActionLogger cameraUserActionDidStartWithItem:]
// Type encoding: v24@0:8q16
// Implementation: 0x106146e7c

// -[SCFeatureCameraUserActionLogger cameraUserActionDidStartWithItem:isActivatingMode:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x106146ec0

// -[SCFeatureCameraUserActionLogger cameraUserActionDidStart:touchLocation:]
// Type encoding: v40@0:8@16{CGPoint=dd}24
// Implementation: 0x106146f14

// -[SCFeatureCameraUserActionLogger cameraUserActionDidStart:touchLocation:isActivatingMode:]
// Type encoding: v44@0:8@16{CGPoint=dd}24B40
// Implementation: 0x106146f84

// -[SCFeatureCameraUserActionLogger cameraUserActionDidEnd:]
// Type encoding: v24@0:8@16
// Implementation: 0x106147004

// -[SCFeatureCameraUserActionLogger cameraUserActionDidEndWithItem:action:cameraStateTransitions:]
// Type encoding: v40@0:8q16q24@32
// Implementation: 0x10614705c

// -[SCFeatureCameraUserActionLogger cameraUserActionDidEndWithItem:action:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x1061470cc

// -[SCFeatureCameraUserActionLogger cameraUserActionDidNotComplete:]
// Type encoding: v24@0:8@16
// Implementation: 0x106147120

// -[SCFeatureCameraUserActionLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106147178

@end
