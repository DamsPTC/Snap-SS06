// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCShakeUploadThrottleController
// Superclass: NSObject
// Address: 0x112b65818

@interface SCShakeUploadThrottleController


// -[SCShakeUploadThrottleController getCurrentRetryCountForId:]
// Type encoding: q24@0:8@16
// Implementation: 0x107969fd8

// -[SCShakeUploadThrottleController computBackoffMillisecondsForId:]
// Type encoding: q24@0:8@16
// Implementation: 0x10796a028

// -[SCShakeUploadThrottleController incrementRetryForId:isInfiniteRetry:]
// Type encoding: B28@0:8@16B24
// Implementation: 0x10796a0e8

// -[SCShakeUploadThrottleController setServerBackoffForId:serverBackoffMilliseconds:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10796a164

// -[SCShakeUploadThrottleController init]
// Type encoding: @16@0:8
// Implementation: 0x10796a1d4

// -[SCShakeUploadThrottleController _computeBackoff:]
// Type encoding: q24@0:8q16
// Implementation: 0x10796a268

// -[SCShakeUploadThrottleController _plusOneToNumberInDictionary:forKey:initVal:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x10796a280

// -[SCShakeUploadThrottleController _reachedMaxRetryForId:]
// Type encoding: B24@0:8@16
// Implementation: 0x10796a33c

// -[SCShakeUploadThrottleController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10796a3ec

// +[SCShakeUploadThrottleController sharedInstance]
// Type encoding: @16@0:8
// Implementation: 0x107969f48

// +[SCShakeUploadThrottleController deleteInstance]
// Type encoding: v16@0:8
// Implementation: 0x107969fc8

@end
