// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImageProcessUnloadCommandsRequest
// Superclass: NSObject
// Address: 0x112be4e38

@interface SCImageProcessUnloadCommandsRequest

// Property: GPURequired; attributes: TB,R,N
// Property: taskId; attributes: T@"NSString",R,C,N
// Property: context; attributes: T@"NSString",R,C,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCImageProcessUnloadCommandsRequest initWithCommands:]
// Type encoding: @24@0:8@16
// Implementation: 0x109085ea4

// -[SCImageProcessUnloadCommandsRequest context]
// Type encoding: @16@0:8
// Implementation: 0x109085f1c

// -[SCImageProcessUnloadCommandsRequest taskId]
// Type encoding: @16@0:8
// Implementation: 0x109085f24

// -[SCImageProcessUnloadCommandsRequest GPURequired]
// Type encoding: B16@0:8
// Implementation: 0x109085f2c

// -[SCImageProcessUnloadCommandsRequest runProgramsWithContext:GPUAvailable:error:]
// Type encoding: B36@0:8@16B24^@28
// Implementation: 0x109085f34

// -[SCImageProcessUnloadCommandsRequest cancel]
// Type encoding: v16@0:8
// Implementation: 0x109086064

// -[SCImageProcessUnloadCommandsRequest .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109086068

@end
