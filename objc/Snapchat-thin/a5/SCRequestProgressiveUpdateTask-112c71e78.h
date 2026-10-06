// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRequestProgressiveUpdateTask
// Superclass: SCRequestTask
// Address: 0x112c71e78

@interface SCRequestProgressiveUpdateTask

// Property: progressiveUpdateQueue; attributes: T@"NSObject<OS_dispatch_queue>",R,N,V_progressiveUpdateQueue
// Property: progressiveUpdateBlock; attributes: T@?,R,C,N,V_progressiveUpdateBlock

// -[SCRequestProgressiveUpdateTask initWithRequest:authenticator:traceFile:networkInterceptors:grapheneRegistry:progressiveUpdateQueue:progressiveUpdateBlock:]
// Type encoding: @72@0:8@16@24^{SCNetworkTraceFileStruct=}32@40@48@56@?64
// Implementation: 0x10b26dc3c

// -[SCRequestProgressiveUpdateTask updateTaskWithTask:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b26dd94

// -[SCRequestProgressiveUpdateTask progressiveUpdate]
// Type encoding: v16@0:8
// Implementation: 0x10b26de94

// -[SCRequestProgressiveUpdateTask shouldRetryRequestWithError:response:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10b26dedc

// -[SCRequestProgressiveUpdateTask completeTask]
// Type encoding: @?16@0:8
// Implementation: 0x10b26dee4

// -[SCRequestProgressiveUpdateTask progressiveUpdateQueue]
// Type encoding: @16@0:8
// Implementation: 0x10b26e160

// -[SCRequestProgressiveUpdateTask progressiveUpdateBlock]
// Type encoding: @?16@0:8
// Implementation: 0x10b26e170

// -[SCRequestProgressiveUpdateTask .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b26e180

@end
