// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: AFHTTPClient
// Superclass: NSObject
// Address: 0x112cb21a8

@interface AFHTTPClient

// Property: baseURL; attributes: T@"NSURL",&,N,V_baseURL
// Property: defaultHeaders; attributes: T@"NSMutableDictionary",&,N,V_defaultHeaders
// Property: stringEncoding; attributes: TQ,N,V_stringEncoding
// Property: parameterEncoding; attributes: Ti,N,V_parameterEncoding
// Property: operationQueue; attributes: T@"NSOperationQueue",R,N,V_operationQueue

// -[AFHTTPClient init]
// Type encoding: @16@0:8
// Implementation: 0x10b716d18

// -[AFHTTPClient initWithBaseURL:]
// Type encoding: @24@0:8@16
// Implementation: 0x100290110

// -[AFHTTPClient setDefaultHeader:value:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100298b34

// -[AFHTTPClient requestWithMethod:path:parameters:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1005a1ce0

// -[AFHTTPClient multipartFormRequestWithMethod:path:parameters:constructingBodyWithBlock:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x10b716db8

// -[AFHTTPClient baseURL]
// Type encoding: @16@0:8
// Implementation: 0x1005a1fdc

// -[AFHTTPClient setBaseURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x10029090c

// -[AFHTTPClient stringEncoding]
// Type encoding: Q16@0:8
// Implementation: 0x10b7170e0

// -[AFHTTPClient setStringEncoding:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10029093c

// -[AFHTTPClient parameterEncoding]
// Type encoding: i16@0:8
// Implementation: 0x10b7170e8

// -[AFHTTPClient setParameterEncoding:]
// Type encoding: v20@0:8i16
// Implementation: 0x100290964

// -[AFHTTPClient defaultHeaders]
// Type encoding: @16@0:8
// Implementation: 0x100298cf4

// -[AFHTTPClient setDefaultHeaders:]
// Type encoding: v24@0:8@16
// Implementation: 0x100290a90

// -[AFHTTPClient operationQueue]
// Type encoding: @16@0:8
// Implementation: 0x10b7170f0

// -[AFHTTPClient .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b7170f8

@end
