// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCResourceLoaderCMWriteStream
// Superclass: NSObject
// Address: 0x112b6e7d8

@interface SCResourceLoaderCMWriteStream

// Property: byteRangeFulfilled; attributes: T{_NSRange=QQ},R,N,V_byteRangeFulfilled
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCResourceLoaderCMWriteStream initWithLoadingRequest:firstChunk:mediaId:contentLength:maxFetchBytes:enablePartialResponseFromFirstChunk:avoidBytesCopying:queue:completion:]
// Type encoding: @80@0:8@16@24@32Q40Q48B56B60@64@?72
// Implementation: 0x107aa7cac

// -[SCResourceLoaderCMWriteStream initStreamForContentResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x107aa7ec4

// -[SCResourceLoaderCMWriteStream putBytesSlice:]
// Type encoding: v24@0:8@16
// Implementation: 0x107aa8040

// -[SCResourceLoaderCMWriteStream setError:message:networkCode:]
// Type encoding: v40@0:8q16@24@32
// Implementation: 0x107aa8234

// -[SCResourceLoaderCMWriteStream onComplete]
// Type encoding: v16@0:8
// Implementation: 0x107aa8390

// -[SCResourceLoaderCMWriteStream cancelForContentResult:playerCanceled:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107aa8394

// -[SCResourceLoaderCMWriteStream _handleError:message:networkCode:]
// Type encoding: v40@0:8q16@24@32
// Implementation: 0x107aa8420

// -[SCResourceLoaderCMWriteStream _putBytesHelper:range:callTimeUs:]
// Type encoding: v48@0:8@16{_NSRange=QQ}24q40
// Implementation: 0x107aa859c

// -[SCResourceLoaderCMWriteStream _subrangeOfData:range:]
// Type encoding: @40@0:8@16{_NSRange=QQ}24
// Implementation: 0x107aa8780

// -[SCResourceLoaderCMWriteStream _isWriteStreamInProgress]
// Type encoding: B16@0:8
// Implementation: 0x107aa884c

// -[SCResourceLoaderCMWriteStream _emitPhaseSpansWithOutcome:]
// Type encoding: v24@0:8@16
// Implementation: 0x107aa885c

// -[SCResourceLoaderCMWriteStream _finishRequestAndCallback]
// Type encoding: v16@0:8
// Implementation: 0x107aa899c

// -[SCResourceLoaderCMWriteStream byteRangeFulfilled]
// Type encoding: {_NSRange=QQ}16@0:8
// Implementation: 0x107aa8a00

// -[SCResourceLoaderCMWriteStream .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107aa8a0c

@end
