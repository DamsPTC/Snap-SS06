// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesWhiteboxAuthenticator
// Superclass: NSObject
// Address: 0x1129257a8

@interface SCSpectaclesWhiteboxAuthenticator

// Property: ctx; attributes: T^v,N,V_ctx
// Property: protocolVersion; attributes: Tq,N,V_protocolVersion

// -[SCSpectaclesWhiteboxAuthenticator verifyAuthenticityWithTranscript:trustedChain:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x103aec3ec

// -[SCSpectaclesWhiteboxAuthenticator initWithAppNonce:eyewearNonce:sharedSecret:protocolVersion:callback:]
// Type encoding: @56@0:8@16@24@32q40^?48
// Implementation: 0x103aebe8c

// -[SCSpectaclesWhiteboxAuthenticator dealloc]
// Type encoding: v16@0:8
// Implementation: 0x103aebff4

// -[SCSpectaclesWhiteboxAuthenticator generateVerificationRequest:tag:]
// Type encoding: B32@0:8^@16^@24
// Implementation: 0x103aec048

// -[SCSpectaclesWhiteboxAuthenticator parseVerificationResponse:tag:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x103aec17c

// -[SCSpectaclesWhiteboxAuthenticator keyVersion]
// Type encoding: q16@0:8
// Implementation: 0x103aec2d0

// -[SCSpectaclesWhiteboxAuthenticator verifyAuthenticityWithCert:]
// Type encoding: @24@0:8@16
// Implementation: 0x103aec2f8

// -[SCSpectaclesWhiteboxAuthenticator ctx]
// Type encoding: ^v16@0:8
// Implementation: 0x103aec3cc

// -[SCSpectaclesWhiteboxAuthenticator setCtx:]
// Type encoding: v24@0:8^v16
// Implementation: 0x103aec3d4

// -[SCSpectaclesWhiteboxAuthenticator protocolVersion]
// Type encoding: q16@0:8
// Implementation: 0x103aec3dc

// -[SCSpectaclesWhiteboxAuthenticator setProtocolVersion:]
// Type encoding: v24@0:8q16
// Implementation: 0x103aec3e4

@end
