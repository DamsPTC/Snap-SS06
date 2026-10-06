// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCameraNightModeActivationHandler
// Superclass: NSObject
// Address: 0x112acc258

@interface SCCameraNightModeActivationHandler

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCameraNightModeActivationHandler initWithCameraHardwareServicesAPI:cameraDeviceSettingsConfiguration:cameraDeviceSettingsResolver:mainCameraViewControllerLifecycleEvents:cameraUsageTier:lensNightModeConfig:]
// Type encoding: @64@0:8@16@24@32@40Q48@56
// Implementation: 0x100678428

// -[SCCameraNightModeActivationHandler isSupported]
// Type encoding: B16@0:8
// Implementation: 0x1008a7748

// -[SCCameraNightModeActivationHandler isEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1008ad47c

// -[SCCameraNightModeActivationHandler isEnhancedNightModeEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10611ca1c

// -[SCCameraNightModeActivationHandler enableNightMode:nightModeEnhancementType:completionHandler:enableErrorHandler:]
// Type encoding: v44@0:8B16q20@?28@?36
// Implementation: 0x10611ca3c

// -[SCCameraNightModeActivationHandler didRegisterProviderToken:noFormatFoundError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10611cbb8

// -[SCCameraNightModeActivationHandler didUnregisterProviderToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x10611cc10

// -[SCCameraNightModeActivationHandler featureNameForToken:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611cc40

// -[SCCameraNightModeActivationHandler _resumeNightModeService]
// Type encoding: v16@0:8
// Implementation: 0x1008d0af0

// -[SCCameraNightModeActivationHandler _pauseNightModeService]
// Type encoding: v16@0:8
// Implementation: 0x10611cc4c

// -[SCCameraNightModeActivationHandler _enableLowLightBoost:nightModeEnhancementType:completionHandler:]
// Type encoding: v36@0:8B16q20@?28
// Implementation: 0x10611cc70

// -[SCCameraNightModeActivationHandler _getProcessingModule:]
// Type encoding: @24@0:8q16
// Implementation: 0x10611cdfc

// -[SCCameraNightModeActivationHandler _createGammaCorrectionMetalRenderCommand]
// Type encoding: @16@0:8
// Implementation: 0x10611ce40

// -[SCCameraNightModeActivationHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10611cf00

@end
