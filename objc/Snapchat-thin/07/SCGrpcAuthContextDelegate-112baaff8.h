// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGrpcAuthContextDelegate
// Superclass: NSObject
// Address: 0x112baaff8

@interface SCGrpcAuthContextDelegate

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGrpcAuthContextDelegate initWithSnapTokenProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x100459420

// -[SCGrpcAuthContextDelegate initWithSnapTokenProvider:attestationProvider:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10041de6c

// -[SCGrpcAuthContextDelegate getAuthContext:callback:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100494148

// -[SCGrpcAuthContextDelegate _fetchClientAttestation:callback:accessToken:authLatency:]
// Type encoding: v48@0:8@16@24@32d40
// Implementation: 0x10060b458

// -[SCGrpcAuthContextDelegate .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10860acf8

@end
