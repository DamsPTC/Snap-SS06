// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNDuplexDuplexParameters
// Superclass: NSObject
// Address: 0x112c81e18

@interface SCNDuplexDuplexParameters

// Property: endpointAddress; attributes: T@"NSString",R,N,V_endpointAddress
// Property: channelType; attributes: Tq,R,N,V_channelType
// Property: userAgentPrefix; attributes: T@"NSString",R,N,V_userAgentPrefix
// Property: keepalivePingIntervalMs; attributes: Ti,R,N,V_keepalivePingIntervalMs
// Property: keepalivePingTimeoutMs; attributes: Ti,R,N,V_keepalivePingTimeoutMs
// Property: disconnectionDelayMs; attributes: Ti,R,N,V_disconnectionDelayMs
// Property: shouldPingStreamer; attributes: TB,R,N,V_shouldPingStreamer
// Property: keepAliveOption; attributes: Tq,R,N,V_keepAliveOption
// Property: reconnectOnWriteError; attributes: TB,R,N,V_reconnectOnWriteError
// Property: jitterMultiplier; attributes: T@"NSNumber",R,N,V_jitterMultiplier
// Property: tweaks; attributes: T@"SCNDuplexTweaks",R,N,V_tweaks

// -[SCNDuplexDuplexParameters initWithEndpointAddress:channelType:userAgentPrefix:keepalivePingIntervalMs:keepalivePingTimeoutMs:disconnectionDelayMs:shouldPingStreamer:keepAliveOption:reconnectOnWriteError:jitterMultiplier:tweaks:]
// Type encoding: @84@0:8@16q24@32i40i44i48B52q56B64@68@76
// Implementation: 0x10b6446d4

// -[SCNDuplexDuplexParameters endpointAddress]
// Type encoding: @16@0:8
// Implementation: 0x10b644860

// -[SCNDuplexDuplexParameters channelType]
// Type encoding: q16@0:8
// Implementation: 0x10b644868

// -[SCNDuplexDuplexParameters userAgentPrefix]
// Type encoding: @16@0:8
// Implementation: 0x10b644870

// -[SCNDuplexDuplexParameters keepalivePingIntervalMs]
// Type encoding: i16@0:8
// Implementation: 0x10b644878

// -[SCNDuplexDuplexParameters keepalivePingTimeoutMs]
// Type encoding: i16@0:8
// Implementation: 0x10b644880

// -[SCNDuplexDuplexParameters disconnectionDelayMs]
// Type encoding: i16@0:8
// Implementation: 0x10b644888

// -[SCNDuplexDuplexParameters shouldPingStreamer]
// Type encoding: B16@0:8
// Implementation: 0x10b644890

// -[SCNDuplexDuplexParameters keepAliveOption]
// Type encoding: q16@0:8
// Implementation: 0x10b644898

// -[SCNDuplexDuplexParameters reconnectOnWriteError]
// Type encoding: B16@0:8
// Implementation: 0x10b6448a0

// -[SCNDuplexDuplexParameters jitterMultiplier]
// Type encoding: @16@0:8
// Implementation: 0x10b6448a8

// -[SCNDuplexDuplexParameters tweaks]
// Type encoding: @16@0:8
// Implementation: 0x10b6448b0

// -[SCNDuplexDuplexParameters .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b6448b8

@end
