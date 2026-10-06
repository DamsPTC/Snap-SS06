// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImageProcessLensCommandMetadata
// Superclass: NSObject
// Address: 0x112c622e8

@interface SCImageProcessLensCommandMetadata

// Property: capturerSamples; attributes: T@"NSArray",R,C,N,V_capturerSamples
// Property: spectaclesMetadata; attributes: T@"SCImageProcessLensCommandSpectaclesMetadata",R,N,V_spectaclesMetadata
// Property: recordingDeviceMotionData; attributes: T@"NSArray",R,C,N,V_recordingDeviceMotionData
// Property: recordingRawAccelerometerData; attributes: T@"NSArray",R,C,N,V_recordingRawAccelerometerData
// Property: recordingRawGyroData; attributes: T@"NSArray",R,C,N,V_recordingRawGyroData
// Property: launchConfigData; attributes: T@"NSData",R,C,N,V_launchConfigData
// Property: lensPersistentStoreData; attributes: T@"NSData",R,N,V_lensPersistentStoreData
// Property: lensId; attributes: T@"NSString",R,N,V_lensId

// -[SCImageProcessLensCommandMetadata initWithCapturerSamples:recordingDeviceMotionData:recordingRawAccelerometerData:recordingRawGyroData:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10b05a370

// -[SCImageProcessLensCommandMetadata initWithSpectaclesMetadata:launchConfigData:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b05a46c

// -[SCImageProcessLensCommandMetadata initWithCapturerSamples:recordingDeviceMotionData:recordingRawAccelerometerData:recordingRawGyroData:launchConfigData:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x10b05a524

// -[SCImageProcessLensCommandMetadata initWithLensPersistentStoreData:lensId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b05a648

// -[SCImageProcessLensCommandMetadata copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b05a6f0

// -[SCImageProcessLensCommandMetadata capturerSamples]
// Type encoding: @16@0:8
// Implementation: 0x10b05a714

// -[SCImageProcessLensCommandMetadata spectaclesMetadata]
// Type encoding: @16@0:8
// Implementation: 0x10b05a71c

// -[SCImageProcessLensCommandMetadata recordingDeviceMotionData]
// Type encoding: @16@0:8
// Implementation: 0x10b05a724

// -[SCImageProcessLensCommandMetadata recordingRawAccelerometerData]
// Type encoding: @16@0:8
// Implementation: 0x10b05a72c

// -[SCImageProcessLensCommandMetadata recordingRawGyroData]
// Type encoding: @16@0:8
// Implementation: 0x10b05a734

// -[SCImageProcessLensCommandMetadata launchConfigData]
// Type encoding: @16@0:8
// Implementation: 0x10b05a73c

// -[SCImageProcessLensCommandMetadata lensPersistentStoreData]
// Type encoding: @16@0:8
// Implementation: 0x10b05a744

// -[SCImageProcessLensCommandMetadata lensId]
// Type encoding: @16@0:8
// Implementation: 0x10b05a74c

// -[SCImageProcessLensCommandMetadata .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b05a754

@end
