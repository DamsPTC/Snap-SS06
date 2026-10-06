// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesMfiAuthenticator
// Superclass: NSObject
// Address: 0x112925a78

@interface SCSpectaclesMfiAuthenticator

// Property: authenticator; attributes: T^{EyewearAuthenticator=[1280C]I[20C]},N,V_authenticator

// -[SCSpectaclesMfiAuthenticator init]
// Type encoding: @16@0:8
// Implementation: 0x103aef68c

// -[SCSpectaclesMfiAuthenticator dealloc]
// Type encoding: v16@0:8
// Implementation: 0x103aef710

// -[SCSpectaclesMfiAuthenticator setMfiCert:]
// Type encoding: B24@0:8@16
// Implementation: 0x103aef788

// -[SCSpectaclesMfiAuthenticator verifyScCert:publicKey:magicVersion:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x103aef810

// -[SCSpectaclesMfiAuthenticator generateMFIChallenge]
// Type encoding: @16@0:8
// Implementation: 0x103aef938

// -[SCSpectaclesMfiAuthenticator verifyMfiResponse:]
// Type encoding: B24@0:8@16
// Implementation: 0x103aef9bc

// -[SCSpectaclesMfiAuthenticator authenticator]
// Type encoding: ^{EyewearAuthenticator=[1280C]I[20C]}16@0:8
// Implementation: 0x103aefa44

// -[SCSpectaclesMfiAuthenticator setAuthenticator:]
// Type encoding: v24@0:8^{EyewearAuthenticator=[1280C]I[20C]}16
// Implementation: 0x103aefa4c

@end
