// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: GPBAny
// Superclass: GPBMessage
// Address: 0x112d33690

@interface GPBAny

// Property: typeURL; attributes: T@"NSString",C,D,N
// Property: value; attributes: T@"NSData",C,D,N

// -[GPBAny initWithMessage:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x10bd85bb0

// -[GPBAny initWithMessage:typeURLPrefix:error:]
// Type encoding: @40@0:8@16@24^@32
// Implementation: 0x10bd85bc0

// -[GPBAny packWithMessage:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x10bd85c20

// -[GPBAny packWithMessage:typeURLPrefix:error:]
// Type encoding: B40@0:8@16@24^@32
// Implementation: 0x10bd85c30

// -[GPBAny unpackMessageClass:error:]
// Type encoding: @32@0:8#16^@24
// Implementation: 0x10bd85d30

// -[GPBAny unpackMessageClass:extensionRegistry:error:]
// Type encoding: @40@0:8#16@24^@32
// Implementation: 0x10bd85d3c

// +[GPBAny anyWithMessage:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x10bd85b60

// +[GPBAny anyWithMessage:typeURLPrefix:error:]
// Type encoding: @40@0:8@16@24^@32
// Implementation: 0x10bd85b70

// +[GPBAny descriptor]
// Type encoding: @16@0:8
// Implementation: 0x10010dbf4

@end
