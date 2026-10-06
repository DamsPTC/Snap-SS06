// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUnauthenticatedPasswordService
// Superclass: NSObject
// Address: 0x112b19238

@interface SCUnauthenticatedPasswordService


// -[SCUnauthenticatedPasswordService initWithRequestManager:]
// Type encoding: @24@0:8@16
// Implementation: 0x106b621f8

// -[SCUnauthenticatedPasswordService changePassword:preAuthToken:usernameOrEmail:successBlock:failureBlock:]
// Type encoding: v56@0:8@16@24@32@?40@?48
// Implementation: 0x106b6226c

// -[SCUnauthenticatedPasswordService _changePassword:preAuthToken:usernameOrEmail:successBlock:failureBlock:]
// Type encoding: v56@0:8@16@24@32@?40@?48
// Implementation: 0x106b624ec

// -[SCUnauthenticatedPasswordService getPasswordStrength:quickCheck:preAuthToken:usernameOrEmail:successBlock:failureBlock:]
// Type encoding: v60@0:8@16B24@28@36@?44@?52
// Implementation: 0x106b6264c

// -[SCUnauthenticatedPasswordService _getpasswordStrengthWithEndpoint:parameters:successBlock:failureBlock:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x106b6278c

// -[SCUnauthenticatedPasswordService _submitPostRequestWithEndpoint:parameters:successBlock:failureBlock:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x106b6292c

// -[SCUnauthenticatedPasswordService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106b62b70

// +[SCUnauthenticatedPasswordService sharedInstance]
// Type encoding: @16@0:8
// Implementation: 0x106b62140

@end
