// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImageProcessContextCleanupRequest
// Superclass: NSObject
// Address: 0x112be4cd0

@interface SCImageProcessContextCleanupRequest

// Property: GPURequired; attributes: TB,R,N
// Property: taskId; attributes: T@"NSString",R,C,N
// Property: context; attributes: T@"NSString",R,C,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCImageProcessContextCleanupRequest context]
// Type encoding: @16@0:8
// Implementation: 0x109084e5c

// -[SCImageProcessContextCleanupRequest taskId]
// Type encoding: @16@0:8
// Implementation: 0x109084e64

// -[SCImageProcessContextCleanupRequest GPURequired]
// Type encoding: B16@0:8
// Implementation: 0x109084e6c

// -[SCImageProcessContextCleanupRequest runProgramsWithContext:GPUAvailable:error:]
// Type encoding: B36@0:8@16B24^@28
// Implementation: 0x109084e74

// -[SCImageProcessContextCleanupRequest cancel]
// Type encoding: v16@0:8
// Implementation: 0x109084e90

@end
