// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUserSessionContext
// Superclass: NSObject
// Address: 0xad5350

@interface SCUserSessionContext

// Property: isResumed; attributes: TB,R,N
// Property: isFromLogIn; attributes: TB,R,N
// Property: isFromRegistration; attributes: TB,R,N

// -[SCUserSessionContext initWithUnderlyingEnum:didLaunchWithDataUnavailable:loginInfo:registrationInfo:bootstrapData:]
// Type encoding: @52@0:8Q16B24@28@36@44
// Implementation: 0x445630

// -[SCUserSessionContext isResumed]
// Type encoding: B16@0:8
// Implementation: 0x445714

// -[SCUserSessionContext matchResumed:]
// Type encoding: v24@0:8@?16
// Implementation: 0x445724

// -[SCUserSessionContext isFromLogIn]
// Type encoding: B16@0:8
// Implementation: 0x44576c

// -[SCUserSessionContext matchFromLogIn:]
// Type encoding: v24@0:8@?16
// Implementation: 0x44577c

// -[SCUserSessionContext isFromRegistration]
// Type encoding: B16@0:8
// Implementation: 0x4457c8

// -[SCUserSessionContext matchFromRegistration:]
// Type encoding: v24@0:8@?16
// Implementation: 0x4457d8

// -[SCUserSessionContext matchResumed:fromLogIn:fromRegistration:]
// Type encoding: v40@0:8@?16@?24@?32
// Implementation: 0x445820

// -[SCUserSessionContext isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x4458cc

// -[SCUserSessionContext isEqualToContext:]
// Type encoding: B24@0:8@16
// Implementation: 0x445958

// -[SCUserSessionContext hash]
// Type encoding: Q16@0:8
// Implementation: 0x445a0c

// -[SCUserSessionContext .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x445a68

// +[SCUserSessionContext resumedWithDidLaunchWithDataUnavailable:]
// Type encoding: @20@0:8B16
// Implementation: 0x445510

// +[SCUserSessionContext fromRegistrationWithJanusBootstrapData:registrationInfo:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x445548

// +[SCUserSessionContext fromLogInWithJanusBootstrapData:loginInfo:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x4455bc

@end
