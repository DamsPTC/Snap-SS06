// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCHTTPRequestCallback
// Superclass: NSObject
// Address: 0x112c71018

@interface SCHTTPRequestCallback

// Property: downloadLocation; attributes: T@"NSURL",R,C,N,V_downloadLocation
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCHTTPRequestCallback initWithRequestTask:blizzardLogger:grapheneLogger:batteryLogger:networkCallbackDelegate:networkApi:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x100678844

// -[SCHTTPRequestCallback setPopulateClientSwitchboardKeyInLogs:]
// Type encoding: v24@0:8@16
// Implementation: 0x100678d24

// -[SCHTTPRequestCallback onRequestStarted:]
// Type encoding: v24@0:8@16
// Implementation: 0x10068a8c8

// -[SCHTTPRequestCallback onResponseStarted:info:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x100890aec

// -[SCHTTPRequestCallback onReadCompleted:buffer:wireBytesReadSinceLast:wireBytesReadTotal:decompressedBytesTotal:bytesInBuffer:]
// Type encoding: v64@0:8q16@24q32q40q48q56
// Implementation: 0x100894984

// -[SCHTTPRequestCallback onWriteCompleted:totalBytesWritten:totalBytesExpectedToWrite:]
// Type encoding: v40@0:8q16q24q32
// Implementation: 0x10078adec

// -[SCHTTPRequestCallback onSucceeded:info:buffer:willRetry:]
// Type encoding: v44@0:8q16@24@32B40
// Implementation: 0x10089d51c

// -[SCHTTPRequestCallback onFailed:info:error:willRetry:]
// Type encoding: v44@0:8q16@24@32B40
// Implementation: 0x10b25b0a4

// -[SCHTTPRequestCallback onCanceled:info:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10b25b368

// -[SCHTTPRequestCallback onFinishWithParsedData:httpRequest:info:error:shouldInvokeCallback:]
// Type encoding: v52@0:8@16@24@32@40B48
// Implementation: 0x10089dfec

// -[SCHTTPRequestCallback _finishBandwidthUsageUpdateWithAllHeaderFields:]
// Type encoding: v24@0:8@16
// Implementation: 0x10089ff40

// -[SCHTTPRequestCallback setUpDownloadLocation]
// Type encoding: B16@0:8
// Implementation: 0x100678aec

// -[SCHTTPRequestCallback cleanUpDownloadFileWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x10089e8a8

// -[SCHTTPRequestCallback downloadLocation]
// Type encoding: @16@0:8
// Implementation: 0x100678d54

// -[SCHTTPRequestCallback .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1008a4b38

@end
