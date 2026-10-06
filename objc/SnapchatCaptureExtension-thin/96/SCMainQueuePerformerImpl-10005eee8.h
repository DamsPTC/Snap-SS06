// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMainQueuePerformerImpl
// Superclass: NSObject
// Address: 0x10005eee8

@interface SCMainQueuePerformerImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMainQueuePerformerImpl init]
// Type encoding: @16@0:8
// Implementation: 0x10003a480

// -[SCMainQueuePerformerImpl initWithCaller:]
// Type encoding: @24@0:8r*16
// Implementation: 0x10003a4e4

// -[SCMainQueuePerformerImpl perform:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10003a554

// -[SCMainQueuePerformerImpl performWithQoS:block:]
// Type encoding: v28@0:8I16@?20
// Implementation: 0x10003a59c

// -[SCMainQueuePerformerImpl performWithEnforcedInheritedQoS:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10003a610

// -[SCMainQueuePerformerImpl performWithEnforcedBlockQoS:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10003a6d0

// -[SCMainQueuePerformerImpl performImmediatelyIfCurrentPerformer:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10003a734

// -[SCMainQueuePerformerImpl perform:after:]
// Type encoding: v32@0:8@?16d24
// Implementation: 0x10003a7b0

// -[SCMainQueuePerformerImpl performAndWait:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10003a834

// -[SCMainQueuePerformerImpl isCurrentPerformer]
// Type encoding: B16@0:8
// Implementation: 0x10003a89c

// -[SCMainQueuePerformerImpl queue]
// Type encoding: @16@0:8
// Implementation: 0x10003a8a8

// -[SCMainQueuePerformerImpl assertQueue]
// Type encoding: v16@0:8
// Implementation: 0x10003a8cc

// -[SCMainQueuePerformerImpl assertNotQueue]
// Type encoding: v16@0:8
// Implementation: 0x10003a8d0

// -[SCMainQueuePerformerImpl performWithBarrier:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10003a8d4

// -[SCMainQueuePerformerImpl performOnGroupNotification_DEPRECATED:block:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10003a920

// -[SCMainQueuePerformerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10003a988

@end
