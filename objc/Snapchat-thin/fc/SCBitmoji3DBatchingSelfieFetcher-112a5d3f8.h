// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBitmoji3DBatchingSelfieFetcher
// Superclass: NSObject
// Address: 0x112a5d3f8

@interface SCBitmoji3DBatchingSelfieFetcher


// -[SCBitmoji3DBatchingSelfieFetcher initWithBatchedSceneFetcher:flatlandContentFetcher:avatarId:selfieIds:feature:batchSize:renderStyleProvider:]
// Type encoding: @68@0:8@16@24@32@40i48Q52@60
// Implementation: 0x105711e28

// -[SCBitmoji3DBatchingSelfieFetcher fetchSelfie:]
// Type encoding: @24@0:8@16
// Implementation: 0x105711ff4

// -[SCBitmoji3DBatchingSelfieFetcher waitForWriteOperations]
// Type encoding: v16@0:8
// Implementation: 0x1057121d0

// -[SCBitmoji3DBatchingSelfieFetcher _initBatchesWithSelfiesIds:batchSize:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1057121e4

// -[SCBitmoji3DBatchingSelfieFetcher _getOrCreateRequestForSelfieId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10571233c

// -[SCBitmoji3DBatchingSelfieFetcher _onBatchRequestError:]
// Type encoding: v24@0:8@16
// Implementation: 0x105712f9c

// -[SCBitmoji3DBatchingSelfieFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1057130a8

@end
