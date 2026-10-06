// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFrameRateLogger
// Superclass: NSObject
// Address: 0x112be7d68

@interface SCFrameRateLogger

// Property: firstFrameTime; attributes: Td,R,N,V_firstFrameTime
// Property: lastFrameTime; attributes: Td,R,N,V_lastFrameTime

// -[SCFrameRateLogger initWithTargetFrameRate:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1000adb20

// -[SCFrameRateLogger processFrameTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x100c7b004

// -[SCFrameRateLogger toDict]
// Type encoding: @16@0:8
// Implementation: 0x109129550

// -[SCFrameRateLogger reset]
// Type encoding: v16@0:8
// Implementation: 0x109129830

// -[SCFrameRateLogger logEventAndReetWithEventName:]
// Type encoding: v24@0:8@16
// Implementation: 0x109129880

// -[SCFrameRateLogger frameRate]
// Type encoding: d16@0:8
// Implementation: 0x109129884

// -[SCFrameRateLogger totalFrameDropCount]
// Type encoding: q16@0:8
// Implementation: 0x1091298a8

// -[SCFrameRateLogger maxFrameDropCount]
// Type encoding: q16@0:8
// Implementation: 0x1091298bc

// -[SCFrameRateLogger largeFrameDropCount]
// Type encoding: q16@0:8
// Implementation: 0x1091298d0

// -[SCFrameRateLogger _formattedStringForFloat:]
// Type encoding: @24@0:8d16
// Implementation: 0x1091298d8

// -[SCFrameRateLogger firstFrameTime]
// Type encoding: d16@0:8
// Implementation: 0x109129908

// -[SCFrameRateLogger lastFrameTime]
// Type encoding: d16@0:8
// Implementation: 0x109129910

@end
