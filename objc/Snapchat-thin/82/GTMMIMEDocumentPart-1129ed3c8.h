// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: GTMMIMEDocumentPart
// Superclass: NSObject
// Address: 0x1129ed3c8

@interface GTMMIMEDocumentPart

// Property: headers; attributes: T@"NSDictionary",R,N,V_headers
// Property: headerData; attributes: T@"NSData",R,N,V_headerData
// Property: body; attributes: T@"NSData",R,N,V_bodyData
// Property: length; attributes: TQ,R,D,N

// -[GTMMIMEDocumentPart initWithHeaders:body:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104a61a84

// -[GTMMIMEDocumentPart containsBytes:length:]
// Type encoding: B32@0:8r*16Q24
// Implementation: 0x104a61b28

// -[GTMMIMEDocumentPart headerData]
// Type encoding: @16@0:8
// Implementation: 0x104a61ca8

// -[GTMMIMEDocumentPart body]
// Type encoding: @16@0:8
// Implementation: 0x104a61cf8

// -[GTMMIMEDocumentPart length]
// Type encoding: Q16@0:8
// Implementation: 0x104a61d00

// -[GTMMIMEDocumentPart description]
// Type encoding: @16@0:8
// Implementation: 0x104a61d34

// -[GTMMIMEDocumentPart isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x104a61d9c

// -[GTMMIMEDocumentPart hash]
// Type encoding: Q16@0:8
// Implementation: 0x104a61e60

// -[GTMMIMEDocumentPart headers]
// Type encoding: @16@0:8
// Implementation: 0x104a61e94

// -[GTMMIMEDocumentPart .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104a61e9c

// +[GTMMIMEDocumentPart partWithHeaders:body:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104a61a18

@end
