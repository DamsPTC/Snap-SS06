// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKAuthenticationToken
// Superclass: NSObject
// Address: 0x1129e5d98

@interface FBSDKAuthenticationToken

// Property: jti; attributes: T@"NSString",&,N,V_jti
// Property: tokenString; attributes: T@"NSString",R,C,N,V_tokenString
// Property: nonce; attributes: T@"NSString",R,C,N,V_nonce
// Property: graphDomain; attributes: T@"NSString",R,C,N,V_graphDomain
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[FBSDKAuthenticationToken initWithTokenString:nonce:graphDomain:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10494d6d8

// -[FBSDKAuthenticationToken initWithTokenString:nonce:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10494d7a8

// -[FBSDKAuthenticationToken claims]
// Type encoding: @16@0:8
// Implementation: 0x10494d83c

// -[FBSDKAuthenticationToken initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x10494d950

// -[FBSDKAuthenticationToken encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10494da44

// -[FBSDKAuthenticationToken copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10494daec

// -[FBSDKAuthenticationToken tokenString]
// Type encoding: @16@0:8
// Implementation: 0x10494daf0

// -[FBSDKAuthenticationToken nonce]
// Type encoding: @16@0:8
// Implementation: 0x10494daf8

// -[FBSDKAuthenticationToken graphDomain]
// Type encoding: @16@0:8
// Implementation: 0x10494db00

// -[FBSDKAuthenticationToken jti]
// Type encoding: @16@0:8
// Implementation: 0x10494db08

// -[FBSDKAuthenticationToken setJti:]
// Type encoding: v24@0:8@16
// Implementation: 0x10494db10

// -[FBSDKAuthenticationToken .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10494db1c

// +[FBSDKAuthenticationToken currentAuthenticationToken]
// Type encoding: @16@0:8
// Implementation: 0x10494d7b4

// +[FBSDKAuthenticationToken setCurrentAuthenticationToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x10494d7c0

// +[FBSDKAuthenticationToken tokenCache]
// Type encoding: @16@0:8
// Implementation: 0x10494d8e0

// +[FBSDKAuthenticationToken setTokenCache:]
// Type encoding: v24@0:8@16
// Implementation: 0x10494d8ec

// +[FBSDKAuthenticationToken resetTokenCache]
// Type encoding: v16@0:8
// Implementation: 0x10494d938

// +[FBSDKAuthenticationToken supportsSecureCoding]
// Type encoding: B16@0:8
// Implementation: 0x10494d948

@end
