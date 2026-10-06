// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesImuDataFrame
// Superclass: NSObject
// Address: 0x112b80668

@interface SCSpectaclesImuDataFrame

// Property: acceleration; attributes: T{?=ddd},N,V_acceleration
// Property: rotationRate; attributes: T{?=ddd},N,V_rotationRate
// Property: timestamp; attributes: Tq,N,V_timestamp

// -[SCSpectaclesImuDataFrame initWithVLKFrame:timestamp:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x107db30c0

// -[SCSpectaclesImuDataFrame initWithMLBFrame:transformOffset:timestampOffset:]
// Type encoding: @128@0:8@16{?=[3]}24q120
// Implementation: 0x107db31c4

// -[SCSpectaclesImuDataFrame initWithImuFrame:timestampOffset:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x107db33bc

// -[SCSpectaclesImuDataFrame encodedVLKFrame]
// Type encoding: @16@0:8
// Implementation: 0x107db3458

// -[SCSpectaclesImuDataFrame encodedMLBFrameWithTransformOffset:timestampOffset:]
// Type encoding: @120@0:8{?=[3]}16q112
// Implementation: 0x107db3514

// -[SCSpectaclesImuDataFrame acceleration]
// Type encoding: {?=ddd}16@0:8
// Implementation: 0x107db370c

// -[SCSpectaclesImuDataFrame setAcceleration:]
// Type encoding: v40@0:8{?=ddd}16
// Implementation: 0x107db3718

// -[SCSpectaclesImuDataFrame rotationRate]
// Type encoding: {?=ddd}16@0:8
// Implementation: 0x107db3724

// -[SCSpectaclesImuDataFrame setRotationRate:]
// Type encoding: v40@0:8{?=ddd}16
// Implementation: 0x107db3730

// -[SCSpectaclesImuDataFrame timestamp]
// Type encoding: q16@0:8
// Implementation: 0x107db373c

// -[SCSpectaclesImuDataFrame setTimestamp:]
// Type encoding: v24@0:8q16
// Implementation: 0x107db3744

@end
