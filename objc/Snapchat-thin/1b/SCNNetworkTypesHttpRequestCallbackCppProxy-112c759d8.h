// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNNetworkTypesHttpRequestCallbackCppProxy
// Superclass: NSObject
// Address: 0x112c759d8

@interface SCNNetworkTypesHttpRequestCallbackCppProxy

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNNetworkTypesHttpRequestCallbackCppProxy initWithCpp:]
// Type encoding: @24@0:8r^v16
// Implementation: 0x10b497b34

// -[SCNNetworkTypesHttpRequestCallbackCppProxy onRequestStarted:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b497b84

// -[SCNNetworkTypesHttpRequestCallbackCppProxy onResponseStarted:info:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10b497c30

// -[SCNNetworkTypesHttpRequestCallbackCppProxy onReadCompleted:buffer:wireBytesReadSinceLast:wireBytesReadTotal:decompressedBytesTotal:bytesInBuffer:]
// Type encoding: v64@0:8q16@24q32q40q48q56
// Implementation: 0x10b497cc0

// -[SCNNetworkTypesHttpRequestCallbackCppProxy onWriteCompleted:totalBytesWritten:totalBytesExpectedToWrite:]
// Type encoding: v40@0:8q16q24q32
// Implementation: 0x10b497d98

// -[SCNNetworkTypesHttpRequestCallbackCppProxy onSucceeded:info:buffer:willRetry:]
// Type encoding: v44@0:8q16@24@32B40
// Implementation: 0x10b497e00

// -[SCNNetworkTypesHttpRequestCallbackCppProxy onFailed:info:error:willRetry:]
// Type encoding: v44@0:8q16@24@32B40
// Implementation: 0x10b497ed8

// -[SCNNetworkTypesHttpRequestCallbackCppProxy onCanceled:info:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10b497fc4

// -[SCNNetworkTypesHttpRequestCallbackCppProxy .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b4980c4

// -[SCNNetworkTypesHttpRequestCallbackCppProxy .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10b498118

@end
