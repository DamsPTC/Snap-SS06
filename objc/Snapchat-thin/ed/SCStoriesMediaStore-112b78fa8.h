// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesMediaStore
// Superclass: NSObject
// Address: 0x112b78fa8

@interface SCStoriesMediaStore


// -[SCStoriesMediaStore initWithCache:diskStore:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10044b518

// -[SCStoriesMediaStore queryMediaForKey:dataDecodingBlock:completionQueue:completion:]
// Type encoding: v48@0:8@16@?24@32@?40
// Implementation: 0x107cc9240

// -[SCStoriesMediaStore setMediaForKey:media:expiration:persistToDisk:completionQueue:completion:]
// Type encoding: v60@0:8@16@24@32B40@44@?52
// Implementation: 0x107cc9414

// -[SCStoriesMediaStore deleteMediaForKeys:fromDiskOnly:completionQueue:completion:]
// Type encoding: v44@0:8@16B24@28@?36
// Implementation: 0x107cc968c

// -[SCStoriesMediaStore deleteAllMediaWithCompletionQueue:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107cc9824

// -[SCStoriesMediaStore deleteAllMediaFromCacheWithCompletionQueue:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107cc996c

// -[SCStoriesMediaStore cacheContainsKey:]
// Type encoding: B24@0:8@16
// Implementation: 0x107cc9a2c

// -[SCStoriesMediaStore _fetchMediaForKey:dataDecodingBlock:completion:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x107cc9a34

// -[SCStoriesMediaStore _handleFetchFromMediaCacheForKey:media:dataDecodingBlock:completion:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x107cc9ce4

// -[SCStoriesMediaStore _handleFetchMediaFromDiskForKey:media:dataDecodingBlock:completion:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x107cc9fa0

// -[SCStoriesMediaStore _setMediaWithKey:media:expiration:persistToDisk:completion:]
// Type encoding: v52@0:8@16@24@32B40@?44
// Implementation: 0x107cca134

// -[SCStoriesMediaStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107cca288

@end
