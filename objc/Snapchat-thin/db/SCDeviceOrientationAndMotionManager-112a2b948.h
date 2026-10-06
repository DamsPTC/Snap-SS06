// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDeviceOrientationAndMotionManager
// Superclass: NSObject
// Address: 0x112a2b948

@interface SCDeviceOrientationAndMotionManager

// Property: imageOrientation; attributes: Tq,N,V_imageOrientation
// Property: deviceOrientation; attributes: Tq,R,N,V_deviceOrientation
// Property: acceleration; attributes: T{?=ddd},R,N,V_acceleration
// Property: accelerometerUpdateInterval; attributes: Td,N

// -[SCDeviceOrientationAndMotionManager initWithMotionManager:]
// Type encoding: @24@0:8@16
// Implementation: 0x1008ba4ec

// -[SCDeviceOrientationAndMotionManager _angleWithX:y:z:accelerationMatch:]
// Type encoding: d48@0:8d16d24d32[4d]40
// Implementation: 0x1008c08cc

// -[SCDeviceOrientationAndMotionManager _updateOrientationWithAcceleration:]
// Type encoding: v40@0:8{?=ddd}16
// Implementation: 0x1008c03b0

// -[SCDeviceOrientationAndMotionManager _startAccelerometerUpdates]
// Type encoding: v16@0:8
// Implementation: 0x1008be9b8

// -[SCDeviceOrientationAndMotionManager _startDeviceMotionUpdates]
// Type encoding: v16@0:8
// Implementation: 0x105346f94

// -[SCDeviceOrientationAndMotionManager startMonitoring]
// Type encoding: @16@0:8
// Implementation: 0x1008ba6c4

// -[SCDeviceOrientationAndMotionManager stopMonitoring:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053470d8

// -[SCDeviceOrientationAndMotionManager accelerometerUpdateInterval]
// Type encoding: d16@0:8
// Implementation: 0x105347208

// -[SCDeviceOrientationAndMotionManager setAccelerometerUpdateInterval:]
// Type encoding: v24@0:8d16
// Implementation: 0x105347210

// -[SCDeviceOrientationAndMotionManager isDeviceOrientationPossible:]
// Type encoding: B24@0:8q16
// Implementation: 0x105347304

// -[SCDeviceOrientationAndMotionManager isDeviceInMotion]
// Type encoding: B16@0:8
// Implementation: 0x1053473e8

// -[SCDeviceOrientationAndMotionManager normalizedMotionValue]
// Type encoding: d16@0:8
// Implementation: 0x105347454

// -[SCDeviceOrientationAndMotionManager _detectDeviceInMotionWithAcceleration:]
// Type encoding: v40@0:8{?=ddd}16
// Implementation: 0x1008c04f8

// -[SCDeviceOrientationAndMotionManager startDeviceMotionUpdatesWithFrequency:]
// Type encoding: @24@0:8d16
// Implementation: 0x105347600

// -[SCDeviceOrientationAndMotionManager stopDeviceMotionUpdates:]
// Type encoding: v24@0:8@16
// Implementation: 0x105347758

// -[SCDeviceOrientationAndMotionManager getDeviceMotion]
// Type encoding: @16@0:8
// Implementation: 0x105347884

// -[SCDeviceOrientationAndMotionManager startRawMotionUpdatesWithFrequency:]
// Type encoding: @24@0:8d16
// Implementation: 0x10534788c

// -[SCDeviceOrientationAndMotionManager stopRawMotionUpdates:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053479fc

// -[SCDeviceOrientationAndMotionManager getGyroData]
// Type encoding: @16@0:8
// Implementation: 0x105347b68

// -[SCDeviceOrientationAndMotionManager getAccelerometerData]
// Type encoding: @16@0:8
// Implementation: 0x105347b70

// -[SCDeviceOrientationAndMotionManager deviceOrientation]
// Type encoding: q16@0:8
// Implementation: 0x105347b78

// -[SCDeviceOrientationAndMotionManager imageOrientation]
// Type encoding: q16@0:8
// Implementation: 0x105347b80

// -[SCDeviceOrientationAndMotionManager setImageOrientation:]
// Type encoding: v24@0:8q16
// Implementation: 0x1008c0920

// -[SCDeviceOrientationAndMotionManager acceleration]
// Type encoding: {?=ddd}16@0:8
// Implementation: 0x105347b88

// -[SCDeviceOrientationAndMotionManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105347b94

@end
