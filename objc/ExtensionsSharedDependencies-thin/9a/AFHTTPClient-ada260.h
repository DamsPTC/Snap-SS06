// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: AFHTTPClient
// Superclass: NSObject
// Address: 0xada260

@interface AFHTTPClient

// Property: baseURL; attributes: T@"NSURL",&,N,V_baseURL
// Property: defaultHeaders; attributes: T@"NSMutableDictionary",&,N,V_defaultHeaders
// Property: stringEncoding; attributes: TQ,N,V_stringEncoding
// Property: parameterEncoding; attributes: Ti,N,V_parameterEncoding
// Property: operationQueue; attributes: T@"NSOperationQueue",R,N,V_operationQueue

// -[AFHTTPClient init]
// Type encoding: @16@0:8
// Implementation: 0x58d7fc

// -[AFHTTPClient initWithBaseURL:]
// Type encoding: @24@0:8@16
// Implementation: 0x58d89c

// -[AFHTTPClient setDefaultHeader:value:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x58ddc4

// -[AFHTTPClient requestWithMethod:path:parameters:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x58de34

// -[AFHTTPClient multipartFormRequestWithMethod:path:parameters:constructingBodyWithBlock:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x58e130

// -[AFHTTPClient baseURL]
// Type encoding: @16@0:8
// Implementation: 0x58e458

// -[AFHTTPClient setBaseURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x58e460

// -[AFHTTPClient stringEncoding]
// Type encoding: Q16@0:8
// Implementation: 0x58e490

// -[AFHTTPClient setStringEncoding:]
// Type encoding: v24@0:8Q16
// Implementation: 0x58e498

// -[AFHTTPClient parameterEncoding]
// Type encoding: i16@0:8
// Implementation: 0x58e4a0

// -[AFHTTPClient setParameterEncoding:]
// Type encoding: v20@0:8i16
// Implementation: 0x58e4a8

// -[AFHTTPClient defaultHeaders]
// Type encoding: @16@0:8
// Implementation: 0x58e4b0

// -[AFHTTPClient setDefaultHeaders:]
// Type encoding: v24@0:8@16
// Implementation: 0x58e4b8

// -[AFHTTPClient operationQueue]
// Type encoding: @16@0:8
// Implementation: 0x58e4e8

// -[AFHTTPClient .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x58e4f0

@end
