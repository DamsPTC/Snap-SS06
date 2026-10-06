// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCWatermarkingConfig
// Superclass: NSObject
// Address: 0x112c78ea8

@interface SCWatermarkingConfig

// Property: normalizedLeftPosition; attributes: T{CGPoint=dd},R,N,V_normalizedLeftPosition
// Property: normalizeRightPosition; attributes: T{CGPoint=dd},R,N,V_normalizeRightPosition
// Property: fadeInDurationSec; attributes: Td,R,N,V_fadeInDurationSec
// Property: movementPauseDurationSec; attributes: Td,R,N,V_movementPauseDurationSec

// -[SCWatermarkingConfig initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b602714

// -[SCWatermarkingConfig initWithNormalizedLeftPosition:normalizeRightPosition:fadeInDurationSec:movementPauseDurationSec:]
// Type encoding: @64@0:8{CGPoint=dd}16{CGPoint=dd}32d48d56
// Implementation: 0x10b602804

// -[SCWatermarkingConfig copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b602878

// -[SCWatermarkingConfig encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b60289c

// -[SCWatermarkingConfig hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b602970

// -[SCWatermarkingConfig isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b602a84

// -[SCWatermarkingConfig normalizedLeftPosition]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x10b602b9c

// -[SCWatermarkingConfig normalizeRightPosition]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x10b602ba4

// -[SCWatermarkingConfig fadeInDurationSec]
// Type encoding: d16@0:8
// Implementation: 0x10b602bac

// -[SCWatermarkingConfig movementPauseDurationSec]
// Type encoding: d16@0:8
// Implementation: 0x10b602bb4

@end
