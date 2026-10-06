// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SPTSessionManager
// Superclass: NSObject
// Address: 0x1129ec588

@interface SPTSessionManager

// Property: isSpotifyAppInstalled; attributes: TB,N,R
// Property: session; attributes: T@"SPTSession",N,&
// Property: delegate; attributes: T@"<SPTSessionManagerDelegate>",N,W,Vdelegate
// Property: urlSession; attributes: T@"NSURLSession",N,R,VurlSession

// -[SPTSessionManager presentationAnchorForWebAuthenticationSession:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a2cfe0

// -[SPTSessionManager requestAccessTokenWith:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a2bfec

// -[SPTSessionManager handleAccessTokenResponseWithData:error:refreshToken:isRenewal:]
// Type encoding: v44@0:8@16@24@32B40
// Implementation: 0x104a2c0d0

// -[SPTSessionManager initiateClientOnlyRedirectAppStoreWith:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a2c5cc

// -[SPTSessionManager initiateClientSessionWith:useWebSessionAsFallback:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x104a2c72c

// -[SPTSessionManager initiateWebSessionWith:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a2cc28

// -[SPTSessionManager authorizationCodeFrom:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a2ced0

// -[SPTSessionManager isSpotifyAppInstalled]
// Type encoding: B16@0:8
// Implementation: 0x104a27adc

// -[SPTSessionManager initiateSessionWithScope:authorizationFlow:campaign:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x104a28328

// -[SPTSessionManager openURL:]
// Type encoding: B24@0:8@16
// Implementation: 0x104a2a4fc

// -[SPTSessionManager continueUserActivity:]
// Type encoding: B24@0:8@16
// Implementation: 0x104a2a76c

// -[SPTSessionManager renewSession]
// Type encoding: v16@0:8
// Implementation: 0x104a2b328

// -[SPTSessionManager session]
// Type encoding: @16@0:8
// Implementation: 0x104a26dec

// -[SPTSessionManager setSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a26ee4

// -[SPTSessionManager delegate]
// Type encoding: @16@0:8
// Implementation: 0x104a2727c

// -[SPTSessionManager setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a27308

// -[SPTSessionManager urlSession]
// Type encoding: @16@0:8
// Implementation: 0x104a274ac

// -[SPTSessionManager initWithConfiguration:delegate:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104a27670

// -[SPTSessionManager initWithConfiguration:delegate:urlSession:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x104a278a8

// -[SPTSessionManager dealloc]
// Type encoding: v16@0:8
// Implementation: 0x104a279b0

// -[SPTSessionManager init]
// Type encoding: @16@0:8
// Implementation: 0x104a27ab0

// -[SPTSessionManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104a279d4

@end
