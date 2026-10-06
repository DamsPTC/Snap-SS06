// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesFirmwareTagStore
// Superclass: NSObject
// Address: 0x112a84890

@interface SCSpectaclesFirmwareTagStore

// Property: tags; attributes: T@"NSArray",&,N,V_tags

// -[SCSpectaclesFirmwareTagStore fetchLatestFirmwareVersion]
// Type encoding: v16@0:8
// Implementation: 0x105a4aa38

// -[SCSpectaclesFirmwareTagStore hasLatestFirmwareVersion]
// Type encoding: B16@0:8
// Implementation: 0x105a4ac94

// -[SCSpectaclesFirmwareTagStore updateTagFromTweak:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a4acc8

// -[SCSpectaclesFirmwareTagStore firmwareTagForDevice:]
// Type encoding: @24@0:8@16
// Implementation: 0x105a4ad74

// -[SCSpectaclesFirmwareTagStore latestVersionForDevice:]
// Type encoding: @24@0:8@16
// Implementation: 0x105a4aed8

// -[SCSpectaclesFirmwareTagStore minimumRequiredVersionForDevice:]
// Type encoding: @24@0:8@16
// Implementation: 0x105a4af1c

// -[SCSpectaclesFirmwareTagStore deviceHasLatestFirmware:]
// Type encoding: B24@0:8@16
// Implementation: 0x105a4af60

// -[SCSpectaclesFirmwareTagStore deviceHasMinimumRequiredFirmware:]
// Type encoding: B24@0:8@16
// Implementation: 0x105a4aff4

// -[SCSpectaclesFirmwareTagStore tags]
// Type encoding: @16@0:8
// Implementation: 0x105a4b0a8

// -[SCSpectaclesFirmwareTagStore setTags:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a4b0b0

// -[SCSpectaclesFirmwareTagStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105a4b0e0

@end
