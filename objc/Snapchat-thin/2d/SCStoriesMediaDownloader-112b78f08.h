// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesMediaDownloader
// Superclass: NSObject
// Address: 0x112b78f08

@interface SCStoriesMediaDownloader


// -[SCStoriesMediaDownloader initWithPerformer:requestManager:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10044c840

// -[SCStoriesMediaDownloader submitRequestForKey:request:callback:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107cc7360

// -[SCStoriesMediaDownloader registerCallbackForKey:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107cc74a4

// -[SCStoriesMediaDownloader hasPendingRequestForKey:]
// Type encoding: B24@0:8@16
// Implementation: 0x107cc7534

// -[SCStoriesMediaDownloader cancelRequestsForKeys:]
// Type encoding: v24@0:8@16
// Implementation: 0x107cc756c

// -[SCStoriesMediaDownloader cancelAllRequests]
// Type encoding: v16@0:8
// Implementation: 0x107cc76d0

// -[SCStoriesMediaDownloader _successCallback:]
// Type encoding: @?24@0:8@16
// Implementation: 0x107cc7710

// -[SCStoriesMediaDownloader _failureCallback:]
// Type encoding: @?24@0:8@16
// Implementation: 0x107cc78bc

// -[SCStoriesMediaDownloader _invokeCallbacksForKey:cause:encryptedMedia:serverExpirationTime:]
// Type encoding: v48@0:8@16q24@32d40
// Implementation: 0x107cc79d8

// -[SCStoriesMediaDownloader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107cc7b78

@end
