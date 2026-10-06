// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNGORegistrationWorkflow
// Superclass: NSObject
// Address: 0x1129f5078

@interface SCNGORegistrationWorkflow

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNGORegistrationWorkflow initWithRouter:delegate:shouldShowBirthdayBeforeVerification:shouldShowBirthdayAfterVerification:]
// Type encoding: @40@0:8@16@24B32B36
// Implementation: 0x104cf5b00

// -[SCNGORegistrationWorkflow beginWorkflow]
// Type encoding: v16@0:8
// Implementation: 0x104cf5bb4

// -[SCNGORegistrationWorkflow preRegistrationVerificationFinishedWithEmail:registrationPhoneNumber:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104cf5c34

// -[SCNGORegistrationWorkflow preRegistrationVerificationExited]
// Type encoding: v16@0:8
// Implementation: 0x104cf5d6c

// -[SCNGORegistrationWorkflow preRegistrationVerificationFinishedWithBootstrapData:]
// Type encoding: v24@0:8@16
// Implementation: 0x104cf5d98

// -[SCNGORegistrationWorkflow birthdaySubmitted:optedIn1TL:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x104cf5de0

// -[SCNGORegistrationWorkflow birthdayExitedWithUserUnderageError]
// Type encoding: v16@0:8
// Implementation: 0x104cf5ee0

// -[SCNGORegistrationWorkflow birthdayScreenExited]
// Type encoding: v16@0:8
// Implementation: 0x104cf5f28

// -[SCNGORegistrationWorkflow birthdayExitSignUp]
// Type encoding: v16@0:8
// Implementation: 0x104cf5f70

// -[SCNGORegistrationWorkflow birthdaySelectedLink:]
// Type encoding: v24@0:8@16
// Implementation: 0x104cf5fb8

// -[SCNGORegistrationWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104cf6018

@end
