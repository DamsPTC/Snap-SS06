// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRegistrationVerificationLogger
// Superclass: NSObject
// Address: 0x112a2c898

@interface SCRegistrationVerificationLogger


// -[SCRegistrationVerificationLogger initWithUserVerificationEventLogger:]
// Type encoding: @24@0:8@16
// Implementation: 0x10535dca8

// -[SCRegistrationVerificationLogger logChallengeReceived:]
// Type encoding: v24@0:8q16
// Implementation: 0x10535dd1c

// -[SCRegistrationVerificationLogger logChallengeAttemptedWithChallengeType:loggingData:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10535dd68

// -[SCRegistrationVerificationLogger logChallengeResultedWithChallengeType:challengeStatusCode:loggingData:]
// Type encoding: v40@0:8q16q24@32
// Implementation: 0x10535de60

// -[SCRegistrationVerificationLogger _getEmailDomain:]
// Type encoding: @24@0:8@16
// Implementation: 0x10535e084

// -[SCRegistrationVerificationLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10535e168

@end
