// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: LSAUriResponse
// Superclass: NSObject
// Address: 0x112bfa0a8

@interface LSAUriResponse

// Property: uri; attributes: T@"NSURL",R,N,V_uri
// Property: responseCode; attributes: Tq,R,N,V_responseCode
// Property: metadata; attributes: T@"NSDictionary",R,N,V_metadata
// Property: responseDescription; attributes: T@"NSString",R,N,V_responseDescription
// Property: data; attributes: T@"NSData",R,N,V_data
// Property: contentType; attributes: T@"NSString",R,N,V_contentType

// -[LSAUriResponse initWithUri:code:description:data:]
// Type encoding: @48@0:8@16q24@32@40
// Implementation: 0x10adce9c4

// -[LSAUriResponse initWithUri:code:metadata:description:data:]
// Type encoding: @56@0:8@16q24@32@40@48
// Implementation: 0x10adcea70

// -[LSAUriResponse initWithUri:code:metadata:description:data:contentType:]
// Type encoding: @64@0:8@16q24@32@40@48@56
// Implementation: 0x10adcea78

// -[LSAUriResponse uri]
// Type encoding: @16@0:8
// Implementation: 0x10adcebac

// -[LSAUriResponse responseCode]
// Type encoding: q16@0:8
// Implementation: 0x10adcebb4

// -[LSAUriResponse metadata]
// Type encoding: @16@0:8
// Implementation: 0x10adcebbc

// -[LSAUriResponse responseDescription]
// Type encoding: @16@0:8
// Implementation: 0x10adcebc4

// -[LSAUriResponse data]
// Type encoding: @16@0:8
// Implementation: 0x10adcebcc

// -[LSAUriResponse contentType]
// Type encoding: @16@0:8
// Implementation: 0x10adcebd4

// -[LSAUriResponse .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10adcebdc

@end
