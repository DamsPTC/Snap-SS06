// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesDeviceUpdateDeviceRequest
// Superclass: NSObject
// Address: 0x112a81f78

@interface SCSpectaclesDeviceUpdateDeviceRequest


// -[SCSpectaclesDeviceUpdateDeviceRequest initWithSerialNumber:displayName:color:pairStatus:action:firstPairedTimestamp:lastNameUpdatedTimestamp:lastPairedStatusUpdatedTimestamp:deviceNumber:firmwareVersion:hardwareVersion:]
// Type encoding: @104@0:8@16@24q32@40Q48q56q64q72q80@88@96
// Implementation: 0x1059e12f0

// -[SCSpectaclesDeviceUpdateDeviceRequest toDictionary]
// Type encoding: @16@0:8
// Implementation: 0x1059e1420

// -[SCSpectaclesDeviceUpdateDeviceRequest _actionString]
// Type encoding: @16@0:8
// Implementation: 0x1059e1538

// -[SCSpectaclesDeviceUpdateDeviceRequest .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1059e155c

// +[SCSpectaclesDeviceUpdateDeviceRequest updateDisplayNameRequest:device:timestsamp:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x1059e0bd8

// +[SCSpectaclesDeviceUpdateDeviceRequest updateDeviceInfoRequest:timestamp:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1059e0d78

// +[SCSpectaclesDeviceUpdateDeviceRequest updateFirmwareVersionRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x1059e0f68

// +[SCSpectaclesDeviceUpdateDeviceRequest forgetDeviceRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x1059e112c

@end
