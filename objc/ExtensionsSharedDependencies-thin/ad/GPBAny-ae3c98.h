// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: GPBAny
// Superclass: GPBMessage
// Address: 0xae3c98

@interface GPBAny

// Property: typeURL; attributes: T@"NSString",C,D,N
// Property: value; attributes: T@"NSData",C,D,N

// -[GPBAny initWithMessage:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x76edb4

// -[GPBAny initWithMessage:typeURLPrefix:error:]
// Type encoding: @40@0:8@16@24^@32
// Implementation: 0x76edc4

// -[GPBAny packWithMessage:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x76ee24

// -[GPBAny packWithMessage:typeURLPrefix:error:]
// Type encoding: B40@0:8@16@24^@32
// Implementation: 0x76ee34

// -[GPBAny unpackMessageClass:error:]
// Type encoding: @32@0:8#16^@24
// Implementation: 0x76ef34

// -[GPBAny unpackMessageClass:extensionRegistry:error:]
// Type encoding: @40@0:8#16@24^@32
// Implementation: 0x76ef40

// +[GPBAny anyWithMessage:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x76ed64

// +[GPBAny anyWithMessage:typeURLPrefix:error:]
// Type encoding: @40@0:8@16@24^@32
// Implementation: 0x76ed74

// +[GPBAny descriptor]
// Type encoding: @16@0:8
// Implementation: 0x7396f4

@end
