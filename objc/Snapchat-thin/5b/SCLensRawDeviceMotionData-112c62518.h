// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensRawDeviceMotionData
// Superclass: NSObject
// Address: 0x112c62518

@interface SCLensRawDeviceMotionData

// Property: imuData; attributes: T{shared_ptr<SCLensImuDataRaw>=^{?}^{__shared_weak_count}},R,N,V_imuData

// -[SCLensRawDeviceMotionData initWithSpectaclesDataSet:]
// Type encoding: @24@0:8@16
// Implementation: 0x107db292c

// -[SCLensRawDeviceMotionData initWithImuData:]
// Type encoding: @32@0:8{shared_ptr<SCLensImuDataRaw>=^{?}^{__shared_weak_count}}16
// Implementation: 0x10b05baa0

// -[SCLensRawDeviceMotionData imuData]
// Type encoding: {shared_ptr<SCLensImuDataRaw>=^{?}^{__shared_weak_count}}16@0:8
// Implementation: 0x10b05bb48

// -[SCLensRawDeviceMotionData .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b05bb70

// -[SCLensRawDeviceMotionData .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10b05bb78

@end
