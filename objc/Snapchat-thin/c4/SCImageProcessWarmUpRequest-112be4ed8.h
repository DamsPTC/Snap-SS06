// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImageProcessWarmUpRequest
// Superclass: NSObject
// Address: 0x112be4ed8

@interface SCImageProcessWarmUpRequest

// Property: GPURequired; attributes: TB,R,N
// Property: taskId; attributes: T@"NSString",R,C,N
// Property: context; attributes: T@"NSString",R,C,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCImageProcessWarmUpRequest initWithCommands:outputSize:]
// Type encoding: @40@0:8@16{CGSize=dd}24
// Implementation: 0x10908622c

// -[SCImageProcessWarmUpRequest context]
// Type encoding: @16@0:8
// Implementation: 0x1090862b4

// -[SCImageProcessWarmUpRequest taskId]
// Type encoding: @16@0:8
// Implementation: 0x1090862bc

// -[SCImageProcessWarmUpRequest GPURequired]
// Type encoding: B16@0:8
// Implementation: 0x1090862c4

// -[SCImageProcessWarmUpRequest runProgramsWithContext:GPUAvailable:error:]
// Type encoding: B36@0:8@16B24^@28
// Implementation: 0x1090862e4

// -[SCImageProcessWarmUpRequest cancel]
// Type encoding: v16@0:8
// Implementation: 0x109086440

// -[SCImageProcessWarmUpRequest .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109086444

@end
