// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNMessagingMediaPrefetchResult
// Superclass: NSObject
// Address: 0x112c80478

@interface SCNMessagingMediaPrefetchResult

// Property: isSuccess; attributes: TB,N,V_isSuccess
// Property: isDownloaded; attributes: TB,N,V_isDownloaded
// Property: mediaSizeBytes; attributes: Tq,N,V_mediaSizeBytes
// Property: error; attributes: T@"SCNMessagingMediaPrefetchError",&,N,V_error
// Property: startTimestampMs; attributes: Tq,N,V_startTimestampMs
// Property: endToEndLatencyMs; attributes: Tq,N,V_endToEndLatencyMs

// -[SCNMessagingMediaPrefetchResult initWithIsSuccess:isDownloaded:mediaSizeBytes:error:startTimestampMs:endToEndLatencyMs:]
// Type encoding: @56@0:8B16B20q24@32q40q48
// Implementation: 0x10b63b1f4

// -[SCNMessagingMediaPrefetchResult initWithIsSuccess:isDownloaded:mediaSizeBytes:startTimestampMs:endToEndLatencyMs:]
// Type encoding: @48@0:8B16B20q24q32q40
// Implementation: 0x10b63b2b8

// -[SCNMessagingMediaPrefetchResult isSuccess]
// Type encoding: B16@0:8
// Implementation: 0x10b63b2c8

// -[SCNMessagingMediaPrefetchResult setIsSuccess:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b63b2d0

// -[SCNMessagingMediaPrefetchResult isDownloaded]
// Type encoding: B16@0:8
// Implementation: 0x10b63b2d8

// -[SCNMessagingMediaPrefetchResult setIsDownloaded:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b63b2e0

// -[SCNMessagingMediaPrefetchResult mediaSizeBytes]
// Type encoding: q16@0:8
// Implementation: 0x10b63b2e8

// -[SCNMessagingMediaPrefetchResult setMediaSizeBytes:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b63b2f0

// -[SCNMessagingMediaPrefetchResult error]
// Type encoding: @16@0:8
// Implementation: 0x10b63b2f8

// -[SCNMessagingMediaPrefetchResult setError:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63b300

// -[SCNMessagingMediaPrefetchResult startTimestampMs]
// Type encoding: q16@0:8
// Implementation: 0x10b63b330

// -[SCNMessagingMediaPrefetchResult setStartTimestampMs:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b63b338

// -[SCNMessagingMediaPrefetchResult endToEndLatencyMs]
// Type encoding: q16@0:8
// Implementation: 0x10b63b340

// -[SCNMessagingMediaPrefetchResult setEndToEndLatencyMs:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b63b348

// -[SCNMessagingMediaPrefetchResult .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b63b350

@end
