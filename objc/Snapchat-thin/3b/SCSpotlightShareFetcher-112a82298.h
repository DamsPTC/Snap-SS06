// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpotlightShareFetcher
// Superclass: NSObject
// Address: 0x112a82298

@interface SCSpotlightShareFetcher

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpotlightShareFetcher initWithMixerNetworkRequester:adConfigProvider:clientInfoProvider:contentObjectResolver:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1059e7ecc

// -[SCSpotlightShareFetcher setRetryPolicy:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059e8080

// -[SCSpotlightShareFetcher _scheduleTimer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059e80b0

// -[SCSpotlightShareFetcher _cancelTimer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059e80f0

// -[SCSpotlightShareFetcher _cancelTimerInPerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059e81fc

// -[SCSpotlightShareFetcher fetchSnapForCompositeStoryId:senderUserId:metadataCompletion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1059e823c

// -[SCSpotlightShareFetcher _fetchSnapForCompositeStoryId:senderUserId:retryTimer:metadataCompletion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1059e84d4

// -[SCSpotlightShareFetcher _isStoryNotFoundError:]
// Type encoding: B24@0:8@16
// Implementation: 0x1059e8948

// -[SCSpotlightShareFetcher _didReceiveStoryLookupResponse:compositeStoryId:retryTimer:error:metadataCompletion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x1059e89c8

// -[SCSpotlightShareFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1059e91fc

@end
