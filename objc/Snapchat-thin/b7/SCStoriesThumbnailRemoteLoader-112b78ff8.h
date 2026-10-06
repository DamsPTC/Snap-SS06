// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesThumbnailRemoteLoader
// Superclass: NSObject
// Address: 0x112b78ff8

@interface SCStoriesThumbnailRemoteLoader

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoriesThumbnailRemoteLoader initWithStoriesThumbnailCoordinator:]
// Type encoding: @24@0:8@16
// Implementation: 0x107cca2b8

// -[SCStoriesThumbnailRemoteLoader downloadItem:callbackQueue:completionBlock:retryCount:]
// Type encoding: v48@0:8@16@24@?32Q40
// Implementation: 0x107cca3bc

// -[SCStoriesThumbnailRemoteLoader _downloadWithThumbnailInfo:callbackQueue:completionBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107cca52c

// -[SCStoriesThumbnailRemoteLoader _registerHandlerForCacheKey:handler:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107cca7ec

// -[SCStoriesThumbnailRemoteLoader _invokeHandlerIfPossibleForCacheKey:handler:thumbnail:isFromCache:]
// Type encoding: v44@0:8@16@24@32B40
// Implementation: 0x107cca8a8

// -[SCStoriesThumbnailRemoteLoader didUpdateThumbnailStateChangeRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ccaa7c

// -[SCStoriesThumbnailRemoteLoader _handleThumbnailLoadedUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ccab98

// -[SCStoriesThumbnailRemoteLoader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107ccadec

@end
