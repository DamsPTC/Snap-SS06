// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLogout
// Superclass: NSObject
// Address: 0xad5300

@interface SCLogout

// Property: forced; attributes: TB,R,N,GisForced
// Property: authSessionId; attributes: T@"NSString",&,N,GgetAuthSessionId,V_authSessionId
// Property: useOneTapLoginLogout; attributes: TB,R,N,GshouldUseOneTapLoginLogout
// Property: logoutSource; attributes: Tq,R,N,V_logoutSource

// -[SCLogout initWithLogoutSource:optInToOneTapLogin:authSessionId:]
// Type encoding: @36@0:8q16B24@28
// Implementation: 0x4453e4

// -[SCLogout initWithLogoutSource:]
// Type encoding: @24@0:8q16
// Implementation: 0x445470

// -[SCLogout initWithLogoutSource:optInToOneTapLogin:]
// Type encoding: @28@0:8q16B24
// Implementation: 0x445478

// -[SCLogout isForced]
// Type encoding: B16@0:8
// Implementation: 0x445480

// -[SCLogout getAuthSessionId]
// Type encoding: @16@0:8
// Implementation: 0x44549c

// -[SCLogout shouldUseOneTapLoginLogout]
// Type encoding: B16@0:8
// Implementation: 0x4454c4

// -[SCLogout setAuthSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x4454cc

// -[SCLogout logoutSource]
// Type encoding: q16@0:8
// Implementation: 0x4454fc

// -[SCLogout .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x445504

@end
