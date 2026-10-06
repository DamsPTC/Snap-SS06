// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCResumableRequestHandler
// Superclass: NSObject
// Address: 0x112c71b58

@interface SCResumableRequestHandler

// Property: whiteListedHosts; attributes: T@"NSSet",C,V_whiteListedHosts
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCResumableRequestHandler init]
// Type encoding: @16@0:8
// Implementation: 0x10059e108

// -[SCResumableRequestHandler _addObservers]
// Type encoding: v16@0:8
// Implementation: 0x10059e20c

// -[SCResumableRequestHandler _cleanUpResumeDataStore]
// Type encoding: v16@0:8
// Implementation: 0x10b268ac0

// -[SCResumableRequestHandler isResumableWithUrl:requestMethod:requestType:priority:]
// Type encoding: B48@0:8@16q24q32q40
// Implementation: 0x10059e264

// -[SCResumableRequestHandler resumeDataWithRequestKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b268b24

// -[SCResumableRequestHandler cancelRequestWithKey:resumeData:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b268cac

// -[SCResumableRequestHandler removeDataWithRequestKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b268d84

// -[SCResumableRequestHandler cache:willEvictObject:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b268e20

// -[SCResumableRequestHandler whiteListedHosts]
// Type encoding: @16@0:8
// Implementation: 0x10b268e24

// -[SCResumableRequestHandler setWhiteListedHosts:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b268e30

// -[SCResumableRequestHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b268e38

// +[SCResumableRequestHandler shared]
// Type encoding: @16@0:8
// Implementation: 0x10059e058

@end
