// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDeviceMotionServicesImpl
// Superclass: NSObject
// Address: 0x112a2b8a8

@interface SCDeviceMotionServicesImpl

// Property: deviceOrientation; attributes: Tq,R,N
// Property: imageOrientation; attributes: Tq,R,N
// Property: acceleration; attributes: T{?=ddd},R,N
// Property: accelerometerUpdateInterval; attributes: Td,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDeviceMotionServicesImpl init]
// Type encoding: @16@0:8
// Implementation: 0x1008ba480

// -[SCDeviceMotionServicesImpl deviceOrientation]
// Type encoding: q16@0:8
// Implementation: 0x105346f08

// -[SCDeviceMotionServicesImpl imageOrientation]
// Type encoding: q16@0:8
// Implementation: 0x105346f10

// -[SCDeviceMotionServicesImpl acceleration]
// Type encoding: {?=ddd}16@0:8
// Implementation: 0x105346f18

// -[SCDeviceMotionServicesImpl accelerometerUpdateInterval]
// Type encoding: d16@0:8
// Implementation: 0x105346f20

// -[SCDeviceMotionServicesImpl currentDeviceMotion]
// Type encoding: @16@0:8
// Implementation: 0x105346f28

// -[SCDeviceMotionServicesImpl currentGyroData]
// Type encoding: @16@0:8
// Implementation: 0x105346f30

// -[SCDeviceMotionServicesImpl currentAccelerometerData]
// Type encoding: @16@0:8
// Implementation: 0x105346f38

// -[SCDeviceMotionServicesImpl startDeviceAccelerometerUpdates]
// Type encoding: @16@0:8
// Implementation: 0x1008ba6bc

// -[SCDeviceMotionServicesImpl stopDeviceAccelerometerUpdatesWithToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x105346f40

// -[SCDeviceMotionServicesImpl configureDeviceAccelerometerUpdatesInterval:]
// Type encoding: v24@0:8d16
// Implementation: 0x105346f48

// -[SCDeviceMotionServicesImpl isDeviceOrientationPossible:]
// Type encoding: B24@0:8q16
// Implementation: 0x105346f50

// -[SCDeviceMotionServicesImpl startDeviceMotionUpdatesWithFrequency:]
// Type encoding: @24@0:8d16
// Implementation: 0x105346f58

// -[SCDeviceMotionServicesImpl stopDeviceMotionUpdatesWithToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x105346f60

// -[SCDeviceMotionServicesImpl startDeviceAccelerometerAndGyroUpdatesWithFrequency:]
// Type encoding: @24@0:8d16
// Implementation: 0x105346f68

// -[SCDeviceMotionServicesImpl stopDeviceAccelerometerAndGyroUpdatesWithToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x105346f70

// -[SCDeviceMotionServicesImpl isDeviceInMotion]
// Type encoding: B16@0:8
// Implementation: 0x105346f78

// -[SCDeviceMotionServicesImpl normalizedMotionValue]
// Type encoding: d16@0:8
// Implementation: 0x105346f80

// -[SCDeviceMotionServicesImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105346f88

@end
