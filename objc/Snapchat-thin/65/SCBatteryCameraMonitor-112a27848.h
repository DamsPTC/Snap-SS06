// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBatteryCameraMonitor
// Superclass: NSObject
// Address: 0x112a27848

@interface SCBatteryCameraMonitor

// Property: isCameraOn; attributes: TB,R,N,V_isCameraOn

// -[SCBatteryCameraMonitor init]
// Type encoding: @16@0:8
// Implementation: 0x10011c89c

// -[SCBatteryCameraMonitor _initWithQueuePerformer:]
// Type encoding: @24@0:8@16
// Implementation: 0x10011c8fc

// -[SCBatteryCameraMonitor _initCameraLoggingDict]
// Type encoding: v16@0:8
// Implementation: 0x10011c994

// -[SCBatteryCameraMonitor setCameraStatusChangeListener:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10011cb4c

// -[SCBatteryCameraMonitor didCameraStartRunningAtTime:cameraPosition:]
// Type encoding: v32@0:8d16q24
// Implementation: 0x1052d88b0

// -[SCBatteryCameraMonitor didCameraStopRunningAtTime:cameraPosition:]
// Type encoding: v32@0:8d16q24
// Implementation: 0x1052d8b28

// -[SCBatteryCameraMonitor didCameraStartBeingVisibleAtTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x100a10d48

// -[SCBatteryCameraMonitor didCameraStopBeingVisibleAtTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x1052d8e28

// -[SCBatteryCameraMonitor _performCameraStartBeingVisiableAtTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x100a189f4

// -[SCBatteryCameraMonitor _performCameraStopBeingVisibleAtTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x1052d8f14

// -[SCBatteryCameraMonitor resetCameraUsageRecordWhenAppOpen]
// Type encoding: v16@0:8
// Implementation: 0x10011ca14

// -[SCBatteryCameraMonitor _resetCameraUsageRecordWhenAppOpenWithTimestamp:]
// Type encoding: v24@0:8d16
// Implementation: 0x10011dad4

// -[SCBatteryCameraMonitor updateCameraMetricsWhenEnterBackgroundAtTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x1052d8fb8

// -[SCBatteryCameraMonitor appSessionCameraUsageSinceAppOpen]
// Type encoding: @16@0:8
// Implementation: 0x1052d9294

// -[SCBatteryCameraMonitor _appSessionCameraUsageSinceAppOpenUntilTimestamp:]
// Type encoding: @24@0:8d16
// Implementation: 0x1052d92b8

// -[SCBatteryCameraMonitor isCameraOn]
// Type encoding: B16@0:8
// Implementation: 0x1052d944c

// -[SCBatteryCameraMonitor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1052d9454

@end
