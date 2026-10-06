// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: ConnectedAccountLinkResult
// Superclass: NSObject
// Address: 0x1128d58c8

@interface ConnectedAccountLinkResult

// Property: status; attributes: Tq,N,R,Vstatus
// Property: data; attributes: T@"ConnectedAccountData",N,R,Vdata
// Property: errorMessage; attributes: T@"NSString",N,R

// -[ConnectedAccountLinkResult status]
// Type encoding: q16@0:8
// Implementation: 0x1033a8f78

// -[ConnectedAccountLinkResult data]
// Type encoding: @16@0:8
// Implementation: 0x1033a8f88

// -[ConnectedAccountLinkResult errorMessage]
// Type encoding: @16@0:8
// Implementation: 0x1033a8f98

// -[ConnectedAccountLinkResult initWithStatus:data:errorMessage:]
// Type encoding: @40@0:8q16@24@32
// Implementation: 0x1033a90fc

// -[ConnectedAccountLinkResult init]
// Type encoding: @16@0:8
// Implementation: 0x1033a93a0

// -[ConnectedAccountLinkResult .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1033a9400

// +[ConnectedAccountLinkResult success:]
// Type encoding: @24@0:8@16
// Implementation: 0x1033a9218

// +[ConnectedAccountLinkResult failedWithErrorMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x1033a9314

@end
