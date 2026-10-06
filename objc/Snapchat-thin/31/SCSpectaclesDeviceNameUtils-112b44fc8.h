// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesDeviceNameUtils
// Superclass: NSObject
// Address: 0x112b44fc8

@interface SCSpectaclesDeviceNameUtils


// +[SCSpectaclesDeviceNameUtils emojiForDevice:deviceNumber:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x106f18694

// +[SCSpectaclesDeviceNameUtils maxNameLengthForDevice:]
// Type encoding: Q24@0:8@16
// Implementation: 0x106f18738

// +[SCSpectaclesDeviceNameUtils isNameLongEnough:]
// Type encoding: B24@0:8@16
// Implementation: 0x106f18794

// +[SCSpectaclesDeviceNameUtils nameFromInput:emoji:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106f18820

// +[SCSpectaclesDeviceNameUtils trimmedIfNecessary:toShortName:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x106f188c4

// +[SCSpectaclesDeviceNameUtils shortDisplayName:hardwareVersion:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x106f188e0

// +[SCSpectaclesDeviceNameUtils _emojis]
// Type encoding: @16@0:8
// Implementation: 0x106f18a40

// +[SCSpectaclesDeviceNameUtils _trim:maxLength:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x106f18aac

// +[SCSpectaclesDeviceNameUtils _shortDisplayNameTemplateWithHardwareVersion:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f18bc4

@end
