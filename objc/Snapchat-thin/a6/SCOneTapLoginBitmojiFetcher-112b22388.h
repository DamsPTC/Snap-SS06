// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOneTapLoginBitmojiFetcher
// Superclass: NSObject
// Address: 0x112b22388

@interface SCOneTapLoginBitmojiFetcher


// -[SCOneTapLoginBitmojiFetcher initWithUserSession:avatarProvider:selfieFetcher:selfieProvider:logger:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x106bfb55c

// -[SCOneTapLoginBitmojiFetcher fetchAndPersistBitmoji:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106bfb680

// -[SCOneTapLoginBitmojiFetcher _fetchBitmojiSelfieWithRequest:contexts:feature:completionQueue:completion:]
// Type encoding: v52@0:8@16@24i32@36@?44
// Implementation: 0x106bfb9d8

// -[SCOneTapLoginBitmojiFetcher _fetchImageSucceeded:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106bfbbc4

// -[SCOneTapLoginBitmojiFetcher _fetchImageFailedWithCallback:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106bfbc54

// -[SCOneTapLoginBitmojiFetcher _isBitmojiCached:avatarId:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106bfbcb4

// -[SCOneTapLoginBitmojiFetcher _removeCachedBitmoji]
// Type encoding: v16@0:8
// Implementation: 0x106bfbdc8

// -[SCOneTapLoginBitmojiFetcher _persistBitmojiAvatar:selfieId:avatarId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106bfbe04

// -[SCOneTapLoginBitmojiFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106bfbe80

@end
