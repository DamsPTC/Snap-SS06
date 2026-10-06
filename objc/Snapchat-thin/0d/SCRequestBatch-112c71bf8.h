// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRequestBatch
// Superclass: NSObject
// Address: 0x112c71bf8

@interface SCRequestBatch


// -[SCRequestBatch initWithRequestManager:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b26b440

// -[SCRequestBatch addRequest:successQueue:failureQueue:successBlock:failureBlock:]
// Type encoding: v56@0:8@16@24@32@?40@?48
// Implementation: 0x10b26b528

// -[SCRequestBatch addRequest:completionQueue:completionBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10b26b6c0

// -[SCRequestBatch submitBatchWithCompletionQueue:batchRequestsCompletion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b26b800

// -[SCRequestBatch .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b26beac

@end
