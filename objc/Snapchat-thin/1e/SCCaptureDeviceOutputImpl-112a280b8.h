// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCaptureDeviceOutputImpl
// Superclass: NSObject
// Address: 0x112a280b8

@interface SCCaptureDeviceOutputImpl

// Property: photoOutput; attributes: T@"AVCapturePhotoOutput",&,N,V_photoOutput
// Property: videoOutput; attributes: T@"AVCaptureVideoDataOutput",&,N,V_videoOutput
// Property: metadataOutput; attributes: T@"AVCaptureMetadataOutput",&,N,V_metadataOutput
// Property: devicePosition; attributes: Tq,N,V_devicePosition
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCaptureDeviceOutputImpl initWithDevicePosition:systemConfiguration:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x1002b2fe0

// -[SCCaptureDeviceOutputImpl initWithSystemConfiguration:]
// Type encoding: @24@0:8@16
// Implementation: 0x1002b2fd4

// -[SCCaptureDeviceOutputImpl _configurePhotoQualityForIOS15:]
// Type encoding: v24@0:8@16
// Implementation: 0x1002b4728

// -[SCCaptureDeviceOutputImpl _configurePhotoQualityForIOS13:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052f4650

// -[SCCaptureDeviceOutputImpl photoOutput]
// Type encoding: @16@0:8
// Implementation: 0x1002b53f8

// -[SCCaptureDeviceOutputImpl setPhotoOutput:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052f4778

// -[SCCaptureDeviceOutputImpl videoOutput]
// Type encoding: @16@0:8
// Implementation: 0x1002b574c

// -[SCCaptureDeviceOutputImpl setVideoOutput:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052f47a8

// -[SCCaptureDeviceOutputImpl metadataOutput]
// Type encoding: @16@0:8
// Implementation: 0x1052f47d8

// -[SCCaptureDeviceOutputImpl setMetadataOutput:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052f47e0

// -[SCCaptureDeviceOutputImpl devicePosition]
// Type encoding: q16@0:8
// Implementation: 0x10034e7a4

// -[SCCaptureDeviceOutputImpl setDevicePosition:]
// Type encoding: v24@0:8q16
// Implementation: 0x10034bf4c

// -[SCCaptureDeviceOutputImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1052f4810

// +[SCCaptureDeviceOutputImpl _integerToAVCapturePhotoQualityPrioritization:]
// Type encoding: q24@0:8q16
// Implementation: 0x1052f4760

@end
