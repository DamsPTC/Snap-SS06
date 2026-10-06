// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCameraHardwareRequest
// Superclass: NSObject
// Address: 0x112c20ac8

@interface SCCameraHardwareRequest


// -[SCCameraHardwareRequest internalInit]
// Type encoding: @16@0:8
// Implementation: 0x1000f3e14

// -[SCCameraHardwareRequest matchInitialize:start:stop:activateDevices:setDeviceParameters:setStabilizationMode:updateDeviceFormat:updateFrameRateOnly:updateSessionPhotoOutputIfNeeded:turnARSessionOn:turnARSessionOff:]
// Type encoding: v104@0:8@?16@?24@?32@?40@?48@?56@?64@?72@?80@?88@?96
// Implementation: 0x1000f4204

// -[SCCameraHardwareRequest .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1000f4e80

// +[SCCameraHardwareRequest initializeWithDevicePosition:isMultiCamSessionRequired:]
// Type encoding: @28@0:8q16B24
// Implementation: 0x1000f3db8

// +[SCCameraHardwareRequest activateDevicesWithDevicePosition:secondaryDevicePositions:backDeviceType:viewfinderTransition:context:]
// Type encoding: @56@0:8q16Q24q32q40@48
// Implementation: 0x10af4f9f0

// +[SCCameraHardwareRequest setDeviceParametersWithDeviceSettings:]
// Type encoding: @24@0:8@16
// Implementation: 0x10af4fa84

// +[SCCameraHardwareRequest setStabilizationModeWithDevicePosition:stabilizationMode:]
// Type encoding: @32@0:8q16q24
// Implementation: 0x10af4faf0

// +[SCCameraHardwareRequest startWithAvailabilityOptions:streamingDelegate:]
// Type encoding: @32@0:8Q16@24
// Implementation: 0x100150dfc

// +[SCCameraHardwareRequest stopWithStreamingDelegate:]
// Type encoding: @24@0:8@16
// Implementation: 0x10af4fb50

// +[SCCameraHardwareRequest turnARSessionOffWithTrackingParameters:shouldUpdateManagedCaptureSession:]
// Type encoding: @25@0:8{?={?=BBBBB}}16B21
// Implementation: 0x10af4fbbc

// +[SCCameraHardwareRequest turnARSessionOnWithTrackingParameters:shouldUpdateManagedCaptureSession:]
// Type encoding: @25@0:8{?={?=BBBBB}}16B21
// Implementation: 0x10af4fc28

// +[SCCameraHardwareRequest updateDeviceFormatWithDeviceSettingsMap:errorHandler:requestingFeatures:]
// Type encoding: @40@0:8@16@?24@32
// Implementation: 0x1001216d8

// +[SCCameraHardwareRequest updateFrameRateOnlyWithDeviceSettingsMap:errorHandler:requestingFeatures:]
// Type encoding: @40@0:8@16@?24@32
// Implementation: 0x10af4fc94

// +[SCCameraHardwareRequest updateSessionPhotoOutputIfNeededWithEnabled:shouldPauseViewfinderRender:]
// Type encoding: @24@0:8B16B20
// Implementation: 0x10af4fd64

@end
