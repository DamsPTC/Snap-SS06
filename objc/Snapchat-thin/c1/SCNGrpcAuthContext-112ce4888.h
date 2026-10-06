// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNGrpcAuthContext
// Superclass: NSObject
// Address: 0x112ce4888

@interface SCNGrpcAuthContext

// Property: headers; attributes: T@"NSArray",R,N,V_headers
// Property: authTokenErrorCode; attributes: T@"NSNumber",R,N,V_authTokenErrorCode
// Property: argosTokenErrorCode; attributes: T@"NSNumber",R,N,V_argosTokenErrorCode
// Property: argosLatencyInMs; attributes: T@"NSNumber",R,N,V_argosLatencyInMs
// Property: authLatencyInMs; attributes: T@"NSNumber",R,N,V_authLatencyInMs

// -[SCNGrpcAuthContext initWithRequest:withAccessToken:isOAuthToken:authTokenErrorCode:argosTokenErrorCode:argosLatencyInMs:authLatencyInMs:attestationHeaders:]
// Type encoding: @76@0:8@16@24B32@36@44@52@60@68
// Implementation: 0x1004a13c8

// -[SCNGrpcAuthContext initWithHeaders:authTokenErrorCode:argosTokenErrorCode:argosLatencyInMs:authLatencyInMs:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1004a16dc

// -[SCNGrpcAuthContext headers]
// Type encoding: @16@0:8
// Implementation: 0x1004a1abc

// -[SCNGrpcAuthContext authTokenErrorCode]
// Type encoding: @16@0:8
// Implementation: 0x1004a2128

// -[SCNGrpcAuthContext argosTokenErrorCode]
// Type encoding: @16@0:8
// Implementation: 0x1004a2150

// -[SCNGrpcAuthContext argosLatencyInMs]
// Type encoding: @16@0:8
// Implementation: 0x1004a2158

// -[SCNGrpcAuthContext authLatencyInMs]
// Type encoding: @16@0:8
// Implementation: 0x1004a2180

// -[SCNGrpcAuthContext .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1004a5154

@end
