// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLogout
// Superclass: NSObject
// Address: 0x112d2c7c8

@interface SCLogout

// Property: forced; attributes: TB,R,N,GisForced
// Property: authSessionId; attributes: T@"NSString",&,N,GgetAuthSessionId,V_authSessionId
// Property: useOneTapLoginLogout; attributes: TB,R,N,GshouldUseOneTapLoginLogout
// Property: logoutSource; attributes: Tq,R,N,V_logoutSource

// -[SCLogout initWithLogoutSource:optInToOneTapLogin:authSessionId:]
// Type encoding: @36@0:8q16B24@28
// Implementation: 0x10bc86798

// -[SCLogout initWithLogoutSource:]
// Type encoding: @24@0:8q16
// Implementation: 0x10bc86824

// -[SCLogout initWithLogoutSource:optInToOneTapLogin:]
// Type encoding: @28@0:8q16B24
// Implementation: 0x10bc8682c

// -[SCLogout isForced]
// Type encoding: B16@0:8
// Implementation: 0x10bc86834

// -[SCLogout getAuthSessionId]
// Type encoding: @16@0:8
// Implementation: 0x10bc86850

// -[SCLogout shouldUseOneTapLoginLogout]
// Type encoding: B16@0:8
// Implementation: 0x10bc86878

// -[SCLogout setAuthSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10bc86880

// -[SCLogout logoutSource]
// Type encoding: q16@0:8
// Implementation: 0x10bc868b0

// -[SCLogout .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10bc868b8

@end
