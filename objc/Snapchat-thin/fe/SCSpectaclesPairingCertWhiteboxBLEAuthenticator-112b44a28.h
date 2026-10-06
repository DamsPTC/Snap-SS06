// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesPairingCertWhiteboxBLEAuthenticator
// Superclass: NSObject
// Address: 0x112b44a28

@interface SCSpectaclesPairingCertWhiteboxBLEAuthenticator

// Property: params; attributes: TQ,N,V_params
// Property: delegate; attributes: T@"<SCSpectaclesPairingBLEAuthenticatorDelegate>",W,N,V_delegate
// Property: callbackPerformer; attributes: T@"<SCPerforming>",&,N,V_callbackPerformer
// Property: ecdh; attributes: T@"SCSpectaclesECDH",&,N,V_ecdh
// Property: authenticator; attributes: T@"SCSpectaclesWhiteboxAuthenticator",&,N,V_authenticator
// Property: transcript; attributes: T@"SCSpectaclesPairingTranscriptV4",&,N,V_transcript
// Property: encryptionKey; attributes: T@"NSData",&,N,V_encryptionKey
// Property: peerVerificationRequest; attributes: T@"SCSpectaclesRequestMessage",&,N,V_peerVerificationRequest
// Property: nonceExchangeRequest; attributes: T@"SCSpectaclesRequestMessage",&,N,V_nonceExchangeRequest
// Property: triedProdKey; attributes: TB,N,V_triedProdKey
// Property: triedDevKey; attributes: TB,N,V_triedDevKey
// Property: overrideSharedSecret; attributes: T@"NSData",&,N,V_overrideSharedSecret
// Property: disableDevCert; attributes: TB,N,V_disableDevCert
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator initWithParams:delegate:callbackPerformer:]
// Type encoding: @40@0:8Q16@24@32
// Implementation: 0x106ee6fd8

// -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator startConnecting]
// Type encoding: v16@0:8
// Implementation: 0x106ee7098

// -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator _tryPeerVerification]
// Type encoding: v16@0:8
// Implementation: 0x106ee7354

// -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator handleResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ee75bc

// -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator _verifyAuthenticity]
// Type encoding: B16@0:8
// Implementation: 0x106ee7ab4

// -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator overrideSharedSecret]
// Type encoding: @16@0:8
// Implementation: 0x106ee7c30

// -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator setOverrideSharedSecret:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ee7c38

// -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator disableDevCert]
// Type encoding: B16@0:8
// Implementation: 0x106ee7c68

// -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator setDisableDevCert:]
// Type encoding: v20@0:8B16
// Implementation: 0x106ee7c70

// -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator params]
// Type encoding: Q16@0:8
// Implementation: 0x106ee7c78

// -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator setParams:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106ee7c80

// -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator delegate]
// Type encoding: @16@0:8
// Implementation: 0x106ee7c88

// -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ee7ca0

// -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator callbackPerformer]
// Type encoding: @16@0:8
// Implementation: 0x106ee7cac

// -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator setCallbackPerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ee7cb4

// -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator ecdh]
// Type encoding: @16@0:8
// Implementation: 0x106ee7ce4

// -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator setEcdh:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ee7cec

// -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator authenticator]
// Type encoding: @16@0:8
// Implementation: 0x106ee7d1c

// -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator setAuthenticator:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ee7d24

// -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator transcript]
// Type encoding: @16@0:8
// Implementation: 0x106ee7d54

// -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator setTranscript:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ee7d5c

// -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator encryptionKey]
// Type encoding: @16@0:8
// Implementation: 0x106ee7d8c

// -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator setEncryptionKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ee7d94

// -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator peerVerificationRequest]
// Type encoding: @16@0:8
// Implementation: 0x106ee7dc4

// -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator setPeerVerificationRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ee7dcc

// -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator nonceExchangeRequest]
// Type encoding: @16@0:8
// Implementation: 0x106ee7dfc

// -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator setNonceExchangeRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ee7e04

// -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator triedProdKey]
// Type encoding: B16@0:8
// Implementation: 0x106ee7e34

// -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator setTriedProdKey:]
// Type encoding: v20@0:8B16
// Implementation: 0x106ee7e3c

// -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator triedDevKey]
// Type encoding: B16@0:8
// Implementation: 0x106ee7e44

// -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator setTriedDevKey:]
// Type encoding: v20@0:8B16
// Implementation: 0x106ee7e4c

// -[SCSpectaclesPairingCertWhiteboxBLEAuthenticator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106ee7e54

@end
