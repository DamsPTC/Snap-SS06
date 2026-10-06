// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: LCVImuFrameDataRaw
// Superclass: NSObject
// Address: 0x112bf7b28

@interface LCVImuFrameDataRaw

// Property: timestamp; attributes: Td,N,V_timestamp
// Property: rotationRate; attributes: T@"LCVRotationRateData",&,N,V_rotationRate
// Property: acceleration; attributes: T@"LCVAccelerationData",&,N,V_acceleration

// -[LCVImuFrameDataRaw init]
// Type encoding: @16@0:8
// Implementation: 0x109229600

// -[LCVImuFrameDataRaw timestamp]
// Type encoding: d16@0:8
// Implementation: 0x1092296e4

// -[LCVImuFrameDataRaw setTimestamp:]
// Type encoding: v24@0:8d16
// Implementation: 0x1092296ec

// -[LCVImuFrameDataRaw rotationRate]
// Type encoding: @16@0:8
// Implementation: 0x1092296f4

// -[LCVImuFrameDataRaw setRotationRate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1092296fc

// -[LCVImuFrameDataRaw acceleration]
// Type encoding: @16@0:8
// Implementation: 0x10922972c

// -[LCVImuFrameDataRaw setAcceleration:]
// Type encoding: v24@0:8@16
// Implementation: 0x109229734

// -[LCVImuFrameDataRaw .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109229764

@end
