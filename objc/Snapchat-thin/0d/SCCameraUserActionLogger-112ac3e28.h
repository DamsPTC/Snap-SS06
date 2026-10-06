// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCameraUserActionLogger
// Superclass: NSObject
// Address: 0x112ac3e28

@interface SCCameraUserActionLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCameraUserActionLogger initWithBlizzardLogger:cameraHardwareResources:captureDeviceManager:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106085dac

// -[SCCameraUserActionLogger cameraUserActionDidStartWithItem:]
// Type encoding: v24@0:8q16
// Implementation: 0x106085f2c

// -[SCCameraUserActionLogger cameraUserActionDidStartWithItem:isActivatingMode:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x106085f34

// -[SCCameraUserActionLogger cameraUserActionDidStart:touchLocation:]
// Type encoding: v40@0:8@16{CGPoint=dd}24
// Implementation: 0x106086004

// -[SCCameraUserActionLogger cameraUserActionDidStart:touchLocation:isActivatingMode:]
// Type encoding: v44@0:8@16{CGPoint=dd}24B40
// Implementation: 0x10608600c

// -[SCCameraUserActionLogger cameraUserActionDidEnd:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060860f8

// -[SCCameraUserActionLogger cameraUserActionDidEndWithItem:action:cameraStateTransitions:]
// Type encoding: v40@0:8q16q24@32
// Implementation: 0x106086154

// -[SCCameraUserActionLogger cameraUserActionDidEndWithItem:action:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x1060864bc

// -[SCCameraUserActionLogger cameraUserActionDidNotComplete:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060864c4

// -[SCCameraUserActionLogger _cameraStateTransitionsJSONStringForTransitions:isActivatingMode:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x106086584

// -[SCCameraUserActionLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106086664

@end
