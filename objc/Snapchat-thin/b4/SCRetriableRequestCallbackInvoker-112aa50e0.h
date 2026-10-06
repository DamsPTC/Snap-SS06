// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRetriableRequestCallbackInvoker
// Superclass: NSObject
// Address: 0x112aa50e0

@interface SCRetriableRequestCallbackInvoker

// Property: response; attributes: T@"NSHTTPURLResponse",R,N,V_response
// Property: data; attributes: T@,R,N,V_data
// Property: error; attributes: T@"NSError",R,N,V_error

// -[SCRetriableRequestCallbackInvoker setResponse:data:error:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105e7a504

// -[SCRetriableRequestCallbackInvoker invokeSuccess]
// Type encoding: v16@0:8
// Implementation: 0x105e7a59c

// -[SCRetriableRequestCallbackInvoker invokeFailure]
// Type encoding: v16@0:8
// Implementation: 0x105e7a5a0

// -[SCRetriableRequestCallbackInvoker response]
// Type encoding: @16@0:8
// Implementation: 0x105e7a5a4

// -[SCRetriableRequestCallbackInvoker data]
// Type encoding: @16@0:8
// Implementation: 0x105e7a5ac

// -[SCRetriableRequestCallbackInvoker error]
// Type encoding: @16@0:8
// Implementation: 0x105e7a5b4

// -[SCRetriableRequestCallbackInvoker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105e7a5bc

@end
