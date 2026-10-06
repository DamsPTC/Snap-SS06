// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCameraDeviceSettingsResolver
// Superclass: NSObject
// Address: 0x112b09888

@interface SCCameraDeviceSettingsResolver

// Property: activeSettingsProviderDict; attributes: T@"NSDictionary",&,N,V_activeSettingsProviderDict
// Property: cameraIsAlive; attributes: TB,V_cameraIsAlive

// -[SCCameraDeviceSettingsResolver initWithCameraHardwareRequestHandler:cameraHardwareResource:captureDeviceManager:conflictResolveMethod:optimizedDefaultSettingsMap:defaultSettingsMap:featureNameBase:]
// Type encoding: @72@0:8@16@24@32Q40@48@56@64
// Implementation: 0x1005d7d9c

// -[SCCameraDeviceSettingsResolver initWithCameraHardwareRequestHandler:cameraHardwareResource:captureDeviceManager:conflictResolveMethod:optimizedDefaultSettingsMap:defaultSettingsMap:featureNameBase:validateSettings:]
// Type encoding: @76@0:8@16@24@32Q40@48@56@64B72
// Implementation: 0x1005d7dc8

// -[SCCameraDeviceSettingsResolver registerWithDeviceSettingsMap:delegate:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1069ab894

// -[SCCameraDeviceSettingsResolver unregister:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069aba98

// -[SCCameraDeviceSettingsResolver getActiveDeviceSettingsMapAsynchronously:]
// Type encoding: v24@0:8@?16
// Implementation: 0x100c24dcc

// -[SCCameraDeviceSettingsResolver _requestDeviceFormatUpdateWithToken:deviceSettingsMapOfToken:isRegister:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1069abbac

// -[SCCameraDeviceSettingsResolver _getDeviceSettingsMapFromActiveSettingsProviderDict:]
// Type encoding: @24@0:8@16
// Implementation: 0x100c258b4

// -[SCCameraDeviceSettingsResolver _sortDeviceSettingsMapByDevicePositionsFromActiveSettingsProviderDict:]
// Type encoding: @24@0:8@16
// Implementation: 0x1069ac4f0

// -[SCCameraDeviceSettingsResolver _resolveConstraintConflictsInActiveSettingsProviderDict:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069ac770

// -[SCCameraDeviceSettingsResolver _generateFeatureNamesFromActiveSettingsProviderDict:]
// Type encoding: @24@0:8@16
// Implementation: 0x100c25b44

// -[SCCameraDeviceSettingsResolver _requestDeviceCaptureFormats:errorHandler:requestingFeatures:useFrameRateOnlyFastPath:]
// Type encoding: @44@0:8@16@?24@32B40
// Implementation: 0x1069ac8e0

// -[SCCameraDeviceSettingsResolver _isProviderSettingsMapValid:]
// Type encoding: B24@0:8@16
// Implementation: 0x1069acba8

// -[SCCameraDeviceSettingsResolver activeSettingsProviderDict]
// Type encoding: @16@0:8
// Implementation: 0x1069ad208

// -[SCCameraDeviceSettingsResolver setActiveSettingsProviderDict:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069ad210

// -[SCCameraDeviceSettingsResolver cameraIsAlive]
// Type encoding: B16@0:8
// Implementation: 0x1069ad240

// -[SCCameraDeviceSettingsResolver setCameraIsAlive:]
// Type encoding: v20@0:8B16
// Implementation: 0x100c80ba4

// -[SCCameraDeviceSettingsResolver .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1069ad24c

// +[SCCameraDeviceSettingsResolver _isSoftOnlyFrameRateContribution:]
// Type encoding: B24@0:8@16
// Implementation: 0x1069ac2dc

// +[SCCameraDeviceSettingsResolver _isValidDefaultMap:cameraHardwareResource:captureDeviceManager:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x1069accf0

// +[SCCameraDeviceSettingsResolver _isValidDefaultMap:]
// Type encoding: B24@0:8@16
// Implementation: 0x1069ad088

@end
