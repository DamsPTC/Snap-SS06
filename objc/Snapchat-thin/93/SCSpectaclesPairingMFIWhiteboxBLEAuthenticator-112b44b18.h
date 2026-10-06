// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesPairingMFIWhiteboxBLEAuthenticator
// Superclass: NSObject
// Address: 0x112b44b18

@interface SCSpectaclesPairingMFIWhiteboxBLEAuthenticator

// Property: delegate; attributes: T@"<SCSpectaclesPairingBLEAuthenticatorDelegate>",W,N,V_delegate
// Property: ecdh; attributes: T@"SCSpectaclesECDH",&,N,V_ecdh
// Property: authenticator; attributes: T@"SCSpectaclesWhiteboxAuthenticator",&,N,V_authenticator
// Property: appNonce; attributes: T@"NSData",&,N,V_appNonce
// Property: peerNonce; attributes: T@"NSData",&,N,V_peerNonce
// Property: sharedSecret; attributes: T@"NSData",&,N,V_sharedSecret
// Property: peerVerificationRequest; attributes: T@"SCSpectaclesRequestMessage",&,N,V_peerVerificationRequest
// Property: triedProdKey; attributes: TB,N,V_triedProdKey
// Property: triedDevKey; attributes: TB,N,V_triedDevKey
// Property: disableEncryption; attributes: TB,N,V_disableEncryption
// Property: disableProdAuthentication; attributes: TB,N,V_disableProdAuthentication
// Property: protocol; attributes: TQ,N,V_protocol
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator initWithDelegate:]
// Type encoding: @24@0:8@16
// Implementation: 0x106ee8fec

// -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator startConnecting]
// Type encoding: v16@0:8
// Implementation: 0x106ee9058

// -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator _tryPeerVerification]
// Type encoding: v16@0:8
// Implementation: 0x106ee9200

// -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator handleResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ee94d8

// -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator disableEncryption]
// Type encoding: B16@0:8
// Implementation: 0x106ee9830

// -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator setDisableEncryption:]
// Type encoding: v20@0:8B16
// Implementation: 0x106ee9838

// -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator disableProdAuthentication]
// Type encoding: B16@0:8
// Implementation: 0x106ee9840

// -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator setDisableProdAuthentication:]
// Type encoding: v20@0:8B16
// Implementation: 0x106ee9848

// -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator protocol]
// Type encoding: Q16@0:8
// Implementation: 0x106ee9850

// -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator setProtocol:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106ee9858

// -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator delegate]
// Type encoding: @16@0:8
// Implementation: 0x106ee9860

// -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ee9878

// -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator ecdh]
// Type encoding: @16@0:8
// Implementation: 0x106ee9884

// -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator setEcdh:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ee988c

// -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator authenticator]
// Type encoding: @16@0:8
// Implementation: 0x106ee98bc

// -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator setAuthenticator:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ee98c4

// -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator appNonce]
// Type encoding: @16@0:8
// Implementation: 0x106ee98f4

// -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator setAppNonce:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ee98fc

// -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator peerNonce]
// Type encoding: @16@0:8
// Implementation: 0x106ee992c

// -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator setPeerNonce:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ee9934

// -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator sharedSecret]
// Type encoding: @16@0:8
// Implementation: 0x106ee9964

// -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator setSharedSecret:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ee996c

// -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator peerVerificationRequest]
// Type encoding: @16@0:8
// Implementation: 0x106ee999c

// -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator setPeerVerificationRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ee99a4

// -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator triedProdKey]
// Type encoding: B16@0:8
// Implementation: 0x106ee99d4

// -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator setTriedProdKey:]
// Type encoding: v20@0:8B16
// Implementation: 0x106ee99dc

// -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator triedDevKey]
// Type encoding: B16@0:8
// Implementation: 0x106ee99e4

// -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator setTriedDevKey:]
// Type encoding: v20@0:8B16
// Implementation: 0x106ee99ec

// -[SCSpectaclesPairingMFIWhiteboxBLEAuthenticator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106ee99f4

@end
