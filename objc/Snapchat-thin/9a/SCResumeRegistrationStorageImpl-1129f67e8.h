// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCResumeRegistrationStorageImpl
// Superclass: NSObject
// Address: 0x1129f67e8

@interface SCResumeRegistrationStorageImpl

// Property: resumeUserVerificationData; attributes: T@"SCResumeUserVerificationData",&,N
// Property: resumeRegistrationData; attributes: T@"SCResumeRegistrationData",&,N,V_resumeRegistrationData
// Property: context; attributes: T@"SCResumeRegistrationContext",R,N,V_context
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCResumeRegistrationStorageImpl initWithUnauthenticatedStorageServices:timeProvider:resumeRegistrationExpireTimeout:logger:]
// Type encoding: @48@0:8@16@24d32@40
// Implementation: 0x104d20f04

// -[SCResumeRegistrationStorageImpl _migrateUnverifiedBootstrapDataToResumeUserVerificationDataIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x104d20fe8

// -[SCResumeRegistrationStorageImpl resumeUserVerificationData]
// Type encoding: @16@0:8
// Implementation: 0x104d21110

// -[SCResumeRegistrationStorageImpl setResumeUserVerificationData:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d21178

// -[SCResumeRegistrationStorageImpl resumeRegistrationData]
// Type encoding: @16@0:8
// Implementation: 0x104d211e8

// -[SCResumeRegistrationStorageImpl setResumeRegistrationData:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d21310

// -[SCResumeRegistrationStorageImpl context]
// Type encoding: @16@0:8
// Implementation: 0x104d2141c

// -[SCResumeRegistrationStorageImpl _isAccountCreationDataExpired]
// Type encoding: B16@0:8
// Implementation: 0x104d2152c

// -[SCResumeRegistrationStorageImpl _sanitized:]
// Type encoding: @24@0:8@16
// Implementation: 0x104d21628

// -[SCResumeRegistrationStorageImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104d216c4

@end
