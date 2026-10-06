// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNotifExtUserSession
// Superclass: NSObject
// Address: 0xacfdb0

@interface SCNotifExtUserSession

// Property: userId; attributes: T@"NSString",R,C,N,V_userId
// Property: username; attributes: T@"NSString",R,C,N,V_username
// Property: authToken; attributes: T@"NSString",R,C,N
// Property: snapTokenProvider; attributes: T@"<SCSnapTokenProvider>",R,N,V_snapTokenProvider

// -[SCNotifExtUserSession initWithUserId:username:blizzardLogger:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x4143fc

// -[SCNotifExtUserSession initWithUserId:username:authTokenProvider:snapTokenProvider:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x414550

// -[SCNotifExtUserSession authToken]
// Type encoding: @16@0:8
// Implementation: 0x414694

// -[SCNotifExtUserSession userId]
// Type encoding: @16@0:8
// Implementation: 0x4148d8

// -[SCNotifExtUserSession username]
// Type encoding: @16@0:8
// Implementation: 0x4148e0

// -[SCNotifExtUserSession snapTokenProvider]
// Type encoding: @16@0:8
// Implementation: 0x4148e8

// -[SCNotifExtUserSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x4148f0

// +[SCNotifExtUserSession createPrimedSnapTokenManagerWithUserId:username:authToken:blizzardLogger:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x41469c

@end
