// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensContentManagerFetcher
// Superclass: NSObject
// Address: 0x112c6cd38

@interface SCLensContentManagerFetcher


// -[SCLensContentManagerFetcher initWithContentDelivery:lensDataConfig:lensContentResultsCache:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x100ba27c8

// -[SCLensContentManagerFetcher isContentInCacheForKey:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b0c0270

// -[SCLensContentManagerFetcher fetchContentForConfig:onProgress:completion:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x10b0c02dc

// -[SCLensContentManagerFetcher fetchCachedContentForKey:shouldCacheContentResult:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x10b0c04c8

// -[SCLensContentManagerFetcher boostRequestForContentKey:settings:requestContext:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10b0c05d0

// -[SCLensContentManagerFetcher removeLensContentFromCacheWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b0c06d4

// -[SCLensContentManagerFetcher _handleQueryContentStatusCallbackForConfig:contentStatus:onProgress:completion:]
// Type encoding: v48@0:8@16q24@?32@?40
// Implementation: 0x10b0c0730

// -[SCLensContentManagerFetcher _downloadContentForConfig:networkRequest:onProgress:completion:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x10b0c0988

// -[SCLensContentManagerFetcher _retrieveCachedContentAsyncForConfig:payloadSize:completion:]
// Type encoding: v40@0:8@16q24@?32
// Implementation: 0x10b0c0dc4

// -[SCLensContentManagerFetcher _retrieveCachedContentSyncForConfig:payloadSize:fromCache:completion:]
// Type encoding: v44@0:8@16q24B32@?36
// Implementation: 0x10b0c1038

// -[SCLensContentManagerFetcher _callbackWithContentResult:fromCache:payloadSize:error:config:completion:]
// Type encoding: v60@0:8@16B24Q28@36@44@?52
// Implementation: 0x10b0c11a0

// -[SCLensContentManagerFetcher _contentResulToUseFromResult:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b0c12b8

// -[SCLensContentManagerFetcher _addToContentResultMapForContentResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0c130c

// -[SCLensContentManagerFetcher _clearCachedContentResults]
// Type encoding: v16@0:8
// Implementation: 0x10b0c1314

// -[SCLensContentManagerFetcher _incrementDefaultFetchPolicyRequestCountForContentKey:fetchPolicy:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10b0c131c

// -[SCLensContentManagerFetcher _decrementDefaultFetchPolicyRequestCountForContentKey:fetchPolicy:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10b0c1444

// -[SCLensContentManagerFetcher _shouldBoostRequestForKey:settings:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10b0c15a4

// -[SCLensContentManagerFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0c1694

@end
