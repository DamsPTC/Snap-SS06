// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUserEmailMutatorImpl
// Superclass: NSObject
// Address: 0x112a34908

@interface SCUserEmailMutatorImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUserEmailMutatorImpl initWithEmailInfoUpdatesPublisher:emailInfoProvider:emailService:settingsEventLogger:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1053f9268

// -[SCUserEmailMutatorImpl updateEmail:emailMutatorType:onComplete:]
// Type encoding: v40@0:8@16Q24@?32
// Implementation: 0x1053f9364

// -[SCUserEmailMutatorImpl receivedEmailVerificationPush]
// Type encoding: v16@0:8
// Implementation: 0x1053f95f4

// -[SCUserEmailMutatorImpl requestEmailVerificationWithType:onComplete:]
// Type encoding: v32@0:8Q16@?24
// Implementation: 0x1053f96d4

// -[SCUserEmailMutatorImpl _updateEmailSuccess:onComplete:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1053f96dc

// -[SCUserEmailMutatorImpl _requestEmailVerificationSuccess:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1053f9850

// -[SCUserEmailMutatorImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1053f997c

@end
