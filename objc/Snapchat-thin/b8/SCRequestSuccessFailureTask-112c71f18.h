// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRequestSuccessFailureTask
// Superclass: SCRequestTask
// Address: 0x112c71f18

@interface SCRequestSuccessFailureTask


// -[SCRequestSuccessFailureTask initWithRequest:authenticator:traceFile:networkInterceptors:grapheneRegistry:successQueue:failureQueue:successBlock:failureBlock:]
// Type encoding: @88@0:8@16@24^{SCNetworkTraceFileStruct=}32@40@48@56@64@?72@?80
// Implementation: 0x1005a086c

// -[SCRequestSuccessFailureTask dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1008a5108

// -[SCRequestSuccessFailureTask updateTaskWithTask:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b26e308

// -[SCRequestSuccessFailureTask completeTask]
// Type encoding: @?16@0:8
// Implementation: 0x1008a2394

// -[SCRequestSuccessFailureTask _addSuccessQueue:successBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1005a8440

// -[SCRequestSuccessFailureTask _addFailureQueue:failureBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1005a8514

// -[SCRequestSuccessFailureTask .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1008a5b14

@end
