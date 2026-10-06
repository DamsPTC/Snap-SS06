// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensRemoteApiOAuthToken
// Superclass: SCDocObject
// Address: 0x1129696b8

@interface SCLensRemoteApiOAuthToken

// Property: specId; attributes: T@"NSString",N,R
// Property: accessToken; attributes: T@"NSString",N,R
// Property: tokenType; attributes: T@"NSString",N,R
// Property: expirationTimestamp; attributes: Td,N,R,VexpirationTimestamp
// Property: refreshToken; attributes: T@"NSString",N,R
// Property: scope; attributes: T@"NSString",N,R
// Property: hash; attributes: Tq,N,R

// -[SCLensRemoteApiOAuthToken specId]
// Type encoding: @16@0:8
// Implementation: 0x103f55604

// -[SCLensRemoteApiOAuthToken accessToken]
// Type encoding: @16@0:8
// Implementation: 0x103f55610

// -[SCLensRemoteApiOAuthToken tokenType]
// Type encoding: @16@0:8
// Implementation: 0x103f5561c

// -[SCLensRemoteApiOAuthToken expirationTimestamp]
// Type encoding: d16@0:8
// Implementation: 0x103f55628

// -[SCLensRemoteApiOAuthToken refreshToken]
// Type encoding: @16@0:8
// Implementation: 0x103f55638

// -[SCLensRemoteApiOAuthToken scope]
// Type encoding: @16@0:8
// Implementation: 0x103f55644

// -[SCLensRemoteApiOAuthToken initWithSpecId:accessToken:tokenType:expirationTimestamp:refreshToken:scope:]
// Type encoding: @64@0:8@16@24@32d40@48@56
// Implementation: 0x103f55794

// -[SCLensRemoteApiOAuthToken hash]
// Type encoding: q16@0:8
// Implementation: 0x103f55938

// -[SCLensRemoteApiOAuthToken isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x103f55dd0

// -[SCLensRemoteApiOAuthToken copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x103f55e50

// -[SCLensRemoteApiOAuthToken init]
// Type encoding: @16@0:8
// Implementation: 0x103f55e54

// -[SCLensRemoteApiOAuthToken .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x103f55ed0

// +[SCLensRemoteApiOAuthToken table]
// Type encoding: r*16@0:8
// Implementation: 0x105385168

// +[SCLensRemoteApiOAuthToken immutableObjectParse:bufferSize:]
// Type encoding: @32@0:8r^v16Q24
// Implementation: 0x105385174

// +[SCLensRemoteApiOAuthToken objectClassFunctionPointer]
// Type encoding: {SCDocObjectClassFunctionPointer=^?^?}16@0:8
// Implementation: 0x105385454

@end
