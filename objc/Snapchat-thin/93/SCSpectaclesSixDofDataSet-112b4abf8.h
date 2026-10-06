// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesSixDofDataSet
// Superclass: NSObject
// Address: 0x112b4abf8

@interface SCSpectaclesSixDofDataSet

// Property: sixDofFrames; attributes: T@"NSArray",&,N,V_sixDofFrames
// Property: cameraData; attributes: T@"SCLensLabsCameraData",&,N,V_cameraData
// Property: videoFps; attributes: Tf,N,V_videoFps

// -[SCSpectaclesSixDofDataSet initWithData:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x106f64e4c

// -[SCSpectaclesSixDofDataSet _initWithCheeriosData:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x106f64f68

// -[SCSpectaclesSixDofDataSet cheeriosData]
// Type encoding: @16@0:8
// Implementation: 0x106f653c0

// -[SCSpectaclesSixDofDataSet cheeriosDataTrimmedToRange:]
// Type encoding: @64@0:8{?={?=qiIq}{?=qiIq}}16
// Implementation: 0x106f65400

// -[SCSpectaclesSixDofDataSet sixDofFrames]
// Type encoding: @16@0:8
// Implementation: 0x106f65800

// -[SCSpectaclesSixDofDataSet setSixDofFrames:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f65808

// -[SCSpectaclesSixDofDataSet cameraData]
// Type encoding: @16@0:8
// Implementation: 0x106f65838

// -[SCSpectaclesSixDofDataSet setCameraData:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f65840

// -[SCSpectaclesSixDofDataSet videoFps]
// Type encoding: f16@0:8
// Implementation: 0x106f65870

// -[SCSpectaclesSixDofDataSet setVideoFps:]
// Type encoding: v20@0:8f16
// Implementation: 0x106f65878

// -[SCSpectaclesSixDofDataSet .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106f65880

@end
