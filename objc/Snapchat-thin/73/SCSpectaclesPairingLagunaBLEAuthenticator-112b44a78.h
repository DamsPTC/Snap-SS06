// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesPairingLagunaBLEAuthenticator
// Superclass: NSObject
// Address: 0x112b44a78

@interface SCSpectaclesPairingLagunaBLEAuthenticator

// Property: delegate; attributes: T@"<SCSpectaclesPairingBLEAuthenticatorDelegate>",W,N,V_delegate
// Property: ecdh; attributes: T@"SCSpectaclesECDH",&,N,V_ecdh
// Property: numericComparison; attributes: T@"SCSpectaclesNumericComparison",&,N,V_numericComparison
// Property: sharedSecret; attributes: T@"NSData",&,N,V_sharedSecret
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesPairingLagunaBLEAuthenticator initWithVerificationCode:delegate:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106ee7ed4

// -[SCSpectaclesPairingLagunaBLEAuthenticator startConnecting]
// Type encoding: v16@0:8
// Implementation: 0x106ee7fac

// -[SCSpectaclesPairingLagunaBLEAuthenticator handleEncryptionResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ee80a8

// -[SCSpectaclesPairingLagunaBLEAuthenticator delegate]
// Type encoding: @16@0:8
// Implementation: 0x106ee8500

// -[SCSpectaclesPairingLagunaBLEAuthenticator setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ee8518

// -[SCSpectaclesPairingLagunaBLEAuthenticator ecdh]
// Type encoding: @16@0:8
// Implementation: 0x106ee8524

// -[SCSpectaclesPairingLagunaBLEAuthenticator setEcdh:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ee852c

// -[SCSpectaclesPairingLagunaBLEAuthenticator numericComparison]
// Type encoding: @16@0:8
// Implementation: 0x106ee855c

// -[SCSpectaclesPairingLagunaBLEAuthenticator setNumericComparison:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ee8564

// -[SCSpectaclesPairingLagunaBLEAuthenticator sharedSecret]
// Type encoding: @16@0:8
// Implementation: 0x106ee8594

// -[SCSpectaclesPairingLagunaBLEAuthenticator setSharedSecret:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ee859c

// -[SCSpectaclesPairingLagunaBLEAuthenticator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106ee85cc

@end
