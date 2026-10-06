// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKGraphRequestQueue
// Superclass: NSObject
// Address: 0x1129e68d8

@interface FBSDKGraphRequestQueue

// Property: requestsQueue; attributes: T@"NSMutableArray",&,N,V_requestsQueue
// Property: graphRequestConnectionFactory; attributes: T@"<FBSDKGraphRequestConnectionFactory>",&,N,V_graphRequestConnectionFactory
// Property: logger; attributes: T@"FBSDKLogger",&,N,V_logger

// -[FBSDKGraphRequestQueue init]
// Type encoding: @16@0:8
// Implementation: 0x10496a0d0

// -[FBSDKGraphRequestQueue configureWithGraphRequestConnectionFactory:]
// Type encoding: v24@0:8@16
// Implementation: 0x10496a1bc

// -[FBSDKGraphRequestQueue enqueueRequest:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10496a1c0

// -[FBSDKGraphRequestQueue enqueueRequests:]
// Type encoding: v24@0:8@16
// Implementation: 0x10496a244

// -[FBSDKGraphRequestQueue enqueueRequestMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x10496a338

// -[FBSDKGraphRequestQueue flush]
// Type encoding: v16@0:8
// Implementation: 0x10496a3fc

// -[FBSDKGraphRequestQueue logEnqueueRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x10496a644

// -[FBSDKGraphRequestQueue logFlushingRequests:]
// Type encoding: v24@0:8@16
// Implementation: 0x10496a84c

// -[FBSDKGraphRequestQueue requestsQueue]
// Type encoding: @16@0:8
// Implementation: 0x10496aba8

// -[FBSDKGraphRequestQueue setRequestsQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x10496abb0

// -[FBSDKGraphRequestQueue graphRequestConnectionFactory]
// Type encoding: @16@0:8
// Implementation: 0x10496abbc

// -[FBSDKGraphRequestQueue setGraphRequestConnectionFactory:]
// Type encoding: v24@0:8@16
// Implementation: 0x10496abc4

// -[FBSDKGraphRequestQueue logger]
// Type encoding: @16@0:8
// Implementation: 0x10496abd0

// -[FBSDKGraphRequestQueue setLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x10496abd8

// -[FBSDKGraphRequestQueue .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10496abe4

// +[FBSDKGraphRequestQueue sharedInstance]
// Type encoding: @16@0:8
// Implementation: 0x10496a160

@end
