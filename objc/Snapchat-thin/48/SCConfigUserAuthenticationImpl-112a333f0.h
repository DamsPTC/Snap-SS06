// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCConfigUserAuthenticationImpl
// Superclass: NSObject
// Address: 0x112a333f0

@interface SCConfigUserAuthenticationImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCConfigUserAuthenticationImpl userDidAuth:]
// Type encoding: v24@0:8@16
// Implementation: 0x1009a10e8

// -[SCConfigUserAuthenticationImpl userDidRegistrationAuth:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053e3fb0

// -[SCConfigUserAuthenticationImpl userDidDeauth]
// Type encoding: v16@0:8
// Implementation: 0x1053e40b8

// -[SCConfigUserAuthenticationImpl setAsyncUserAuthEventHandlers:resumeRegistrationHandler:resumedHandler:loginHandler:postRegistrationHandler:deauthedHandler:]
// Type encoding: v64@0:8@?16@?24@?32@?40@?48@?56
// Implementation: 0x1000fb2f0

// -[SCConfigUserAuthenticationImpl isAuthed]
// Type encoding: B16@0:8
// Implementation: 0x1053e4104

// -[SCConfigUserAuthenticationImpl getAuthAsync:failureQueue:successBlock:failureBlock:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x1053e4124

// -[SCConfigUserAuthenticationImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1053e4294

@end
