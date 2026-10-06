// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMainQueuePerformerImpl
// Superclass: NSObject
// Address: 0x112cea878

@interface SCMainQueuePerformerImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMainQueuePerformerImpl init]
// Type encoding: @16@0:8
// Implementation: 0x100078f14

// -[SCMainQueuePerformerImpl initWithCaller:]
// Type encoding: @24@0:8r*16
// Implementation: 0x1000c10f0

// -[SCMainQueuePerformerImpl perform:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10011d8c8

// -[SCMainQueuePerformerImpl performWithQoS:block:]
// Type encoding: v28@0:8I16@?20
// Implementation: 0x10b884dac

// -[SCMainQueuePerformerImpl performWithEnforcedInheritedQoS:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b884e10

// -[SCMainQueuePerformerImpl performWithEnforcedBlockQoS:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b884ebc

// -[SCMainQueuePerformerImpl performImmediatelyIfCurrentPerformer:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10007dcc0

// -[SCMainQueuePerformerImpl perform:after:]
// Type encoding: v32@0:8@?16d24
// Implementation: 0x100c68d00

// -[SCMainQueuePerformerImpl performAndWait:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b884f1c

// -[SCMainQueuePerformerImpl isCurrentPerformer]
// Type encoding: B16@0:8
// Implementation: 0x10007dd2c

// -[SCMainQueuePerformerImpl queue]
// Type encoding: @16@0:8
// Implementation: 0x10087ddd4

// -[SCMainQueuePerformerImpl assertQueue]
// Type encoding: v16@0:8
// Implementation: 0x100c3bbb0

// -[SCMainQueuePerformerImpl assertNotQueue]
// Type encoding: v16@0:8
// Implementation: 0x10b884f70

// -[SCMainQueuePerformerImpl performWithBarrier:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b884f74

// -[SCMainQueuePerformerImpl performOnGroupNotification_DEPRECATED:block:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b884fac

// -[SCMainQueuePerformerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1008b7c18

@end
