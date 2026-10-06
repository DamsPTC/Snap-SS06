// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNMessagingStatelessSessionParameters
// Superclass: NSObject
// Address: 0x112c81558

@interface SCNMessagingStatelessSessionParameters

// Property: userId; attributes: T@"SCNMessagingUUID",&,N,V_userId
// Property: deviceEncryptionKey; attributes: T@"SCNMessagingDeviceEncryptionKeyLite",&,N,V_deviceEncryptionKey
// Property: userAgentPrefix; attributes: T@"NSString",C,N,V_userAgentPrefix
// Property: debug; attributes: TB,N,V_debug
// Property: tweaks; attributes: T@"SCNMessagingTweaks",&,N,V_tweaks

// -[SCNMessagingStatelessSessionParameters initWithUserId:deviceEncryptionKey:userAgentPrefix:debug:tweaks:]
// Type encoding: @52@0:8@16@24@32B40@44
// Implementation: 0x10b641608

// -[SCNMessagingStatelessSessionParameters initWithUserId:userAgentPrefix:debug:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x10b641754

// -[SCNMessagingStatelessSessionParameters userId]
// Type encoding: @16@0:8
// Implementation: 0x10b641768

// -[SCNMessagingStatelessSessionParameters setUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b641770

// -[SCNMessagingStatelessSessionParameters deviceEncryptionKey]
// Type encoding: @16@0:8
// Implementation: 0x10b641790

// -[SCNMessagingStatelessSessionParameters setDeviceEncryptionKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b641798

// -[SCNMessagingStatelessSessionParameters userAgentPrefix]
// Type encoding: @16@0:8
// Implementation: 0x10b6417b8

// -[SCNMessagingStatelessSessionParameters setUserAgentPrefix:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6417c0

// -[SCNMessagingStatelessSessionParameters debug]
// Type encoding: B16@0:8
// Implementation: 0x10b6417c8

// -[SCNMessagingStatelessSessionParameters setDebug:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b6417d0

// -[SCNMessagingStatelessSessionParameters tweaks]
// Type encoding: @16@0:8
// Implementation: 0x10b6417d8

// -[SCNMessagingStatelessSessionParameters setTweaks:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6417e0

// -[SCNMessagingStatelessSessionParameters .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b641800

@end
