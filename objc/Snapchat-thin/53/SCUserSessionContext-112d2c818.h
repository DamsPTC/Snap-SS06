// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUserSessionContext
// Superclass: NSObject
// Address: 0x112d2c818

@interface SCUserSessionContext

// Property: isResumed; attributes: TB,R,N
// Property: isFromLogIn; attributes: TB,R,N
// Property: isFromRegistration; attributes: TB,R,N

// -[SCUserSessionContext initWithUnderlyingEnum:didLaunchWithDataUnavailable:loginInfo:registrationInfo:bootstrapData:]
// Type encoding: @52@0:8Q16B24@28@36@44
// Implementation: 0x10018dcc8

// -[SCUserSessionContext isResumed]
// Type encoding: B16@0:8
// Implementation: 0x100288f00

// -[SCUserSessionContext matchResumed:]
// Type encoding: v24@0:8@?16
// Implementation: 0x100288eb8

// -[SCUserSessionContext isFromLogIn]
// Type encoding: B16@0:8
// Implementation: 0x1002622c0

// -[SCUserSessionContext matchFromLogIn:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1009c7dc8

// -[SCUserSessionContext isFromRegistration]
// Type encoding: B16@0:8
// Implementation: 0x1002622d0

// -[SCUserSessionContext matchFromRegistration:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1008159c4

// -[SCUserSessionContext matchResumed:fromLogIn:fromRegistration:]
// Type encoding: v40@0:8@?16@?24@?32
// Implementation: 0x100262008

// -[SCUserSessionContext isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10bc869ac

// -[SCUserSessionContext isEqualToContext:]
// Type encoding: B24@0:8@16
// Implementation: 0x10bc86a38

// -[SCUserSessionContext hash]
// Type encoding: Q16@0:8
// Implementation: 0x10bc86aec

// -[SCUserSessionContext .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10bc86b48

// +[SCUserSessionContext resumedWithDidLaunchWithDataUnavailable:]
// Type encoding: @20@0:8B16
// Implementation: 0x10018dc90

// +[SCUserSessionContext fromRegistrationWithJanusBootstrapData:registrationInfo:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10bc868c4

// +[SCUserSessionContext fromLogInWithJanusBootstrapData:loginInfo:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10bc86938

@end
