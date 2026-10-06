// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDurableJobRequestSuccessErrorInvoker
// Superclass: SCRetriableRequestCallbackInvoker
// Address: 0x112aa51a8

@interface SCDurableJobRequestSuccessErrorInvoker

// Property: successBlock; attributes: T@?,R,C,N,V_successBlock
// Property: failureBlock; attributes: T@?,R,C,N,V_failureBlock
// Property: state; attributes: TI,N,V_state

// -[SCDurableJobRequestSuccessErrorInvoker initWithSuccessBlock:failureBlock:]
// Type encoding: @32@0:8@?16@?24
// Implementation: 0x105e7ab44

// -[SCDurableJobRequestSuccessErrorInvoker invokeSuccess]
// Type encoding: v16@0:8
// Implementation: 0x105e7abf0

// -[SCDurableJobRequestSuccessErrorInvoker invokeFailure]
// Type encoding: v16@0:8
// Implementation: 0x105e7ac70

// -[SCDurableJobRequestSuccessErrorInvoker successBlock]
// Type encoding: @?16@0:8
// Implementation: 0x105e7acf0

// -[SCDurableJobRequestSuccessErrorInvoker failureBlock]
// Type encoding: @?16@0:8
// Implementation: 0x105e7acf8

// -[SCDurableJobRequestSuccessErrorInvoker state]
// Type encoding: I16@0:8
// Implementation: 0x105e7ad00

// -[SCDurableJobRequestSuccessErrorInvoker setState:]
// Type encoding: v20@0:8I16
// Implementation: 0x105e7ad08

// -[SCDurableJobRequestSuccessErrorInvoker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105e7ad10

@end
