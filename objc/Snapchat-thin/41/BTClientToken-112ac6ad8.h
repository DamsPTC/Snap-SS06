// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: BTClientToken
// Superclass: NSObject
// Address: 0x112ac6ad8

@interface BTClientToken

// Property: authorizationFingerprint; attributes: T@"NSString",C,N,V_authorizationFingerprint
// Property: configURL; attributes: T@"NSURL",&,N,V_configURL
// Property: originalValue; attributes: T@"NSString",C,N,V_originalValue
// Property: json; attributes: T@"BTJSON",&,N,V_json

// -[BTClientToken init]
// Type encoding: @16@0:8
// Implementation: 0x1060ef2f0

// -[BTClientToken initWithClientToken:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x1060ef308

// -[BTClientToken validateClientToken:]
// Type encoding: B24@0:8^@16
// Implementation: 0x1060ef45c

// -[BTClientToken copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x1060ef64c

// -[BTClientToken parseJSONString:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x1060ef6b0

// -[BTClientToken encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060ef714

// -[BTClientToken initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x1060ef770

// -[BTClientToken decodeClientToken:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x1060ef7cc

// -[BTClientToken description]
// Type encoding: @16@0:8
// Implementation: 0x1060efbd4

// -[BTClientToken isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x1060efc60

// -[BTClientToken json]
// Type encoding: @16@0:8
// Implementation: 0x1060efd64

// -[BTClientToken setJson:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060efd6c

// -[BTClientToken authorizationFingerprint]
// Type encoding: @16@0:8
// Implementation: 0x1060efd9c

// -[BTClientToken setAuthorizationFingerprint:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060efda4

// -[BTClientToken configURL]
// Type encoding: @16@0:8
// Implementation: 0x1060efdac

// -[BTClientToken setConfigURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060efdb4

// -[BTClientToken originalValue]
// Type encoding: @16@0:8
// Implementation: 0x1060efde4

// -[BTClientToken setOriginalValue:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060efdec

// -[BTClientToken .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1060efdf4

@end
