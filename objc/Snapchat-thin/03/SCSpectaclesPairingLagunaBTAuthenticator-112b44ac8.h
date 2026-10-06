// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesPairingLagunaBTAuthenticator
// Superclass: NSObject
// Address: 0x112b44ac8

@interface SCSpectaclesPairingLagunaBTAuthenticator

// Property: delegate; attributes: T@"<SCSpectaclesPairingLagunaBTAuthenticatorDelegate>",W,N,V_delegate
// Property: client; attributes: T@"<SCSpectaclesCommunicationClient>",&,N,V_client
// Property: currentOperation; attributes: Ti,N,V_currentOperation
// Property: authenticator; attributes: T@"SCSpectaclesMfiAuthenticator",&,N,V_authenticator
// Property: authProviders; attributes: T@"NSArray",&,N,V_authProviders
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesPairingLagunaBTAuthenticator initWithAccessory:encryptionKey:authProviders:delegate:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106ee8610

// -[SCSpectaclesPairingLagunaBTAuthenticator _sendAuthRequest:withData:]
// Type encoding: v28@0:8i16@20
// Implementation: 0x106ee87c8

// -[SCSpectaclesPairingLagunaBTAuthenticator communicationClientDidBecomeActive:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ee88ec

// -[SCSpectaclesPairingLagunaBTAuthenticator communicationClient:didError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106ee88f8

// -[SCSpectaclesPairingLagunaBTAuthenticator communicationClient:didReceiveNetworkResponse:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106ee8928

// -[SCSpectaclesPairingLagunaBTAuthenticator communicationClientDidTimeOut:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ee8e9c

// -[SCSpectaclesPairingLagunaBTAuthenticator client]
// Type encoding: @16@0:8
// Implementation: 0x106ee8ecc

// -[SCSpectaclesPairingLagunaBTAuthenticator setClient:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ee8ed4

// -[SCSpectaclesPairingLagunaBTAuthenticator delegate]
// Type encoding: @16@0:8
// Implementation: 0x106ee8f04

// -[SCSpectaclesPairingLagunaBTAuthenticator setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ee8f1c

// -[SCSpectaclesPairingLagunaBTAuthenticator currentOperation]
// Type encoding: i16@0:8
// Implementation: 0x106ee8f28

// -[SCSpectaclesPairingLagunaBTAuthenticator setCurrentOperation:]
// Type encoding: v20@0:8i16
// Implementation: 0x106ee8f30

// -[SCSpectaclesPairingLagunaBTAuthenticator authenticator]
// Type encoding: @16@0:8
// Implementation: 0x106ee8f38

// -[SCSpectaclesPairingLagunaBTAuthenticator setAuthenticator:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ee8f40

// -[SCSpectaclesPairingLagunaBTAuthenticator authProviders]
// Type encoding: @16@0:8
// Implementation: 0x106ee8f70

// -[SCSpectaclesPairingLagunaBTAuthenticator setAuthProviders:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ee8f78

// -[SCSpectaclesPairingLagunaBTAuthenticator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106ee8fa8

@end
